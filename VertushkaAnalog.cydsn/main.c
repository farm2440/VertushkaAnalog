/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

#define RPM_MAX 60.0f
#define RPM_MIN 6.0f
#define ADC_MAX 1400
#define ADC_MIN 40
#define RPM_CHANGE_STEP 2.0f

float k,p;
/* 
коефициентите k и p за преобразуване на показания от АЦП към оботроти
    RPM = k * ADC + p
    k=(RPM_MAX-RPM_MIN)/(ADC_MAX-ADC_MIN)
    p=RPM_MIN-k * ADC_MIN
*/

#define CLOCK 1000000 //Честота на Clock в херци
#define PPR 10000 // Настройка на контролера на стъпковия мотор - импулси на оборот

uint32 pCoef = (CLOCK/PPR)*60;  //PeriodPWM= pCoef/RPM
uint16 pwm_period;

#define MAX_HEALTH 5


uint32 health = 0;
uint16 targetRPM = 0;
uint16 currentRPM = 0;
uint16 prevRPM = 0;
uint8 blink=0;

CY_ISR_PROTO(TimedIsr);
CY_ISR(TimedIsr) //Това прекъсване се вика 10 пъти в секунда.
{    
    //Ако няма връзка с управлението мотора спира
    if(health!=0) health--;
    else   targetRPM=0;
    
    if(targetRPM==0) EnablePWM_Write(0);
    else EnablePWM_Write(1);

    //При намаляне на оборотите новата стойност се отработва веднага
    if(targetRPM < currentRPM)
    currentRPM=targetRPM;
    //При увеличаване на оборотите новата стойност се постига плавно за да няма ударно ускорение
    if(targetRPM > currentRPM)
    {
        if((targetRPM-currentRPM)<RPM_CHANGE_STEP) 
            currentRPM=targetRPM;
        else
            currentRPM += RPM_CHANGE_STEP;
    }
    
    if(currentRPM!=prevRPM)
    {
        pwm_period = (uint16) (pCoef/((uint32)currentRPM));
        PWM_WritePeriod(pwm_period);
        PWM_WriteCompare(pwm_period/2);
        prevRPM=currentRPM;
    }
    
    if(currentRPM==0) 
    {//GREEN LED when no rotation
        LED_G_Write(0);
    }else
    {
        if(blink==0) 
        {
            LED_G_Write(0);
            blink=1;
        }
        else
        {
            LED_G_Write(1);
            blink=0;
        }
    }
}



int main()
{
    ADC_Start();
    ADC_StartConvert();
    PWM_Start();
    EnablePWM_Write(0);
    LED_G_Write(1);
    LED_R_Write(1);
    PWM_WritePeriod(0);
    uint16 adc = 0;

    //Блокира въртенето ако потенциометъра е в позиция различна от 0 и мига червен
    do
    {
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        adc = ADC_GetResult16(0);
        LED_G_Write(1);
        LED_R_Write(0);
        CyDelay(100);
        LED_R_Write(1);
        CyDelay(100);
    }while(adc>(ADC_MIN-1));
    EnablePWM_Write(1);
    LED_R_Write(1);
    
    //Изчисляват се коефициентите k и p за преобразуване на показания от АЦП към оботроти
    k =(RPM_MAX-RPM_MIN)/((float)ADC_MAX-(float)ADC_MIN);
    p = RPM_MIN-k * (float)ADC_MIN;
    
    isr_Timed_StartEx(TimedIsr);
    CyGlobalIntEnable; /* Enable global interrupts. */

    LED_G_Write(0);
    LED_R_Write(1);

    for(;;)
    {
        /* Прочитане на ADC и задаване на обороти*/
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        adc = ADC_GetResult16(0);
        
        if(adc<ADC_MIN) targetRPM = 0;
        else 
            if(adc>ADC_MAX) targetRPM = RPM_MAX;
            else targetRPM = adc*k + p;
        health = MAX_HEALTH;
    }
}

/* [] END OF FILE */

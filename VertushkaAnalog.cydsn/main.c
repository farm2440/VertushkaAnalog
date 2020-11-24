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

#define MAX_RPM 1400
#define MIN_RPM 40
#define MAX_HEALTH 5
#define RPM_CHANGE_STEP 20

uint32 health = 0;
uint16 targetRPM = 0;
uint16 currentRPM = 0;
uint16 prevRPM = 0;
uint8 blink=0;

CY_ISR_PROTO(TimedIsr);
CY_ISR(TimedIsr)
{
    //Ако няма връзка с управлението мотора спира
    if(health!=0) health--;
    else   targetRPM=0;
    
    if(targetRPM==0) EnablePWM_Write(0);
    else EnablePWM_Write(1);

    if(targetRPM < currentRPM)
    currentRPM=targetRPM;

    if(targetRPM > currentRPM)
    {
        if((targetRPM-currentRPM)<RPM_CHANGE_STEP) 
            currentRPM=targetRPM;
        else
            currentRPM += RPM_CHANGE_STEP;
    }
    
    if(currentRPM!=prevRPM)
    {
        PWM_WritePeriod(1600-currentRPM);
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
        
    // Max RPM = 255, Limit 120 rpm
    // Motor 800 pulses per rotation, 204000 pulses per minute, 
    // 3400 pulses per sec for 255 rpm
    // PWM Period = 7500/RPM    
   
    
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
    }while(adc>35);
    EnablePWM_Write(1);
    LED_R_Write(1);
    
    isr_Timed_StartEx(TimedIsr);
    CyGlobalIntEnable; /* Enable global interrupts. */

    LED_G_Write(0);
    LED_R_Write(1);

    for(;;)
    {
        /* Прочитане на ADC */
        ADC_IsEndConversion(ADC_WAIT_FOR_RESULT);
        adc = ADC_GetResult16(0);
        
        if(adc!=0)
        {
            if(adc<MIN_RPM) targetRPM = 0;
            else 
                if(adc>MAX_RPM) targetRPM = MAX_RPM;
                else targetRPM = adc;
            health = MAX_HEALTH;
        }
  
    }
}

/* [] END OF FILE */

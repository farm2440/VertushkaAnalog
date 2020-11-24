/*******************************************************************************
* File Name: PinRPM.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PinRPM.h"

static PinRPM_BACKUP_STRUCT  PinRPM_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: PinRPM_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function must be called for SIO and USBIO
*  pins. It is not essential if using GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet PinRPM_SUT.c usage_PinRPM_Sleep_Wakeup
*******************************************************************************/
void PinRPM_Sleep(void)
{
    #if defined(PinRPM__PC)
        PinRPM_backup.pcState = PinRPM_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            PinRPM_backup.usbState = PinRPM_CR1_REG;
            PinRPM_USB_POWER_REG |= PinRPM_USBIO_ENTER_SLEEP;
            PinRPM_CR1_REG &= PinRPM_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinRPM__SIO)
        PinRPM_backup.sioState = PinRPM_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        PinRPM_SIO_REG &= (uint32)(~PinRPM_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: PinRPM_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep().
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to PinRPM_Sleep() for an example usage.
*******************************************************************************/
void PinRPM_Wakeup(void)
{
    #if defined(PinRPM__PC)
        PinRPM_PC = PinRPM_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            PinRPM_USB_POWER_REG &= PinRPM_USBIO_EXIT_SLEEP_PH1;
            PinRPM_CR1_REG = PinRPM_backup.usbState;
            PinRPM_USB_POWER_REG &= PinRPM_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(PinRPM__SIO)
        PinRPM_SIO_REG = PinRPM_backup.sioState;
    #endif
}


/* [] END OF FILE */

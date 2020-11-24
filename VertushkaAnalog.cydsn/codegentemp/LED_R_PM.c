/*******************************************************************************
* File Name: LED_R_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "LED_R.h"

/* Check for removal by optimization */
#if !defined(LED_R_Sync_ctrl_reg__REMOVED)

static LED_R_BACKUP_STRUCT  LED_R_backup = {0u};

    
/*******************************************************************************
* Function Name: LED_R_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void LED_R_SaveConfig(void) 
{
    LED_R_backup.controlState = LED_R_Control;
}


/*******************************************************************************
* Function Name: LED_R_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void LED_R_RestoreConfig(void) 
{
     LED_R_Control = LED_R_backup.controlState;
}


/*******************************************************************************
* Function Name: LED_R_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void LED_R_Sleep(void) 
{
    LED_R_SaveConfig();
}


/*******************************************************************************
* Function Name: LED_R_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void LED_R_Wakeup(void)  
{
    LED_R_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */

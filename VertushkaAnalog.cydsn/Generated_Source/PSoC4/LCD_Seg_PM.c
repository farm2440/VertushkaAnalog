/*******************************************************************************
* File Name: LCD_Seg_PM.c
* Version 1.30
*
* Description:
*  This file provides the API source code for Power Management of the Segment
*  LCD component.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2013-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "LCD_Seg.h"


/*******************************************************************************
* Function Name: LCD_Seg_SaveConfig
********************************************************************************
*
* Summary:
*  Saves user data. This API is called by LCD_Seg_Sleep() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_Seg_SaveConfig(void)
{
    /* Nothing to save for current version of the component */
}


/*******************************************************************************
* Function Name: LCD_Seg_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores user data. This API is called by LCD_Seg_Wakeup() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_Seg_RestoreConfig(void)
{
    /* Nothing to restore for current version of the component */
}


/*******************************************************************************
* Function Name: LCD_Seg_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component to enter Sleep mode.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_Seg_Sleep(void)
{
    LCD_Seg_SaveConfig();
}


/*******************************************************************************
* Function Name: LCD_Seg_Wakeup
********************************************************************************
*
* Summary:
*  Restores component after exiting Sleep mode.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_Seg_Wakeup(void)
{
    LCD_Seg_RestoreConfig();
}


/* [] END OF FILE */

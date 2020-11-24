/*******************************************************************************
* File Name: EnablePWM.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_EnablePWM_H) /* CY_CONTROL_REG_EnablePWM_H */
#define CY_CONTROL_REG_EnablePWM_H

#include "cytypes.h"

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} EnablePWM_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    EnablePWM_Write(uint8 control) ;
uint8   EnablePWM_Read(void) ;

void EnablePWM_SaveConfig(void) ;
void EnablePWM_RestoreConfig(void) ;
void EnablePWM_Sleep(void) ; 
void EnablePWM_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define EnablePWM_Control        (* (reg8 *) EnablePWM_Sync_ctrl_reg__CONTROL_REG )
#define EnablePWM_Control_PTR    (  (reg8 *) EnablePWM_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_EnablePWM_H */


/* [] END OF FILE */

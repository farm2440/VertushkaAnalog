/*******************************************************************************
* File Name: CLK_20Hz.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_CLK_20Hz_H)
#define CY_CLOCK_CLK_20Hz_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void CLK_20Hz_StartEx(uint32 alignClkDiv);
#define CLK_20Hz_Start() \
    CLK_20Hz_StartEx(CLK_20Hz__PA_DIV_ID)

#else

void CLK_20Hz_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void CLK_20Hz_Stop(void);

void CLK_20Hz_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 CLK_20Hz_GetDividerRegister(void);
uint8  CLK_20Hz_GetFractionalDividerRegister(void);

#define CLK_20Hz_Enable()                         CLK_20Hz_Start()
#define CLK_20Hz_Disable()                        CLK_20Hz_Stop()
#define CLK_20Hz_SetDividerRegister(clkDivider, reset)  \
    CLK_20Hz_SetFractionalDividerRegister((clkDivider), 0u)
#define CLK_20Hz_SetDivider(clkDivider)           CLK_20Hz_SetDividerRegister((clkDivider), 1u)
#define CLK_20Hz_SetDividerValue(clkDivider)      CLK_20Hz_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define CLK_20Hz_DIV_ID     CLK_20Hz__DIV_ID

#define CLK_20Hz_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define CLK_20Hz_CTRL_REG   (*(reg32 *)CLK_20Hz__CTRL_REGISTER)
#define CLK_20Hz_DIV_REG    (*(reg32 *)CLK_20Hz__DIV_REGISTER)

#define CLK_20Hz_CMD_DIV_SHIFT          (0u)
#define CLK_20Hz_CMD_PA_DIV_SHIFT       (8u)
#define CLK_20Hz_CMD_DISABLE_SHIFT      (30u)
#define CLK_20Hz_CMD_ENABLE_SHIFT       (31u)

#define CLK_20Hz_CMD_DISABLE_MASK       ((uint32)((uint32)1u << CLK_20Hz_CMD_DISABLE_SHIFT))
#define CLK_20Hz_CMD_ENABLE_MASK        ((uint32)((uint32)1u << CLK_20Hz_CMD_ENABLE_SHIFT))

#define CLK_20Hz_DIV_FRAC_MASK  (0x000000F8u)
#define CLK_20Hz_DIV_FRAC_SHIFT (3u)
#define CLK_20Hz_DIV_INT_MASK   (0xFFFFFF00u)
#define CLK_20Hz_DIV_INT_SHIFT  (8u)

#else 

#define CLK_20Hz_DIV_REG        (*(reg32 *)CLK_20Hz__REGISTER)
#define CLK_20Hz_ENABLE_REG     CLK_20Hz_DIV_REG
#define CLK_20Hz_DIV_FRAC_MASK  CLK_20Hz__FRAC_MASK
#define CLK_20Hz_DIV_FRAC_SHIFT (16u)
#define CLK_20Hz_DIV_INT_MASK   CLK_20Hz__DIVIDER_MASK
#define CLK_20Hz_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_CLK_20Hz_H) */

/* [] END OF FILE */

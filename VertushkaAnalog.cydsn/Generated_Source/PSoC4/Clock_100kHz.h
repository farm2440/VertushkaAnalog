/*******************************************************************************
* File Name: Clock_100kHz.h
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

#if !defined(CY_CLOCK_Clock_100kHz_H)
#define CY_CLOCK_Clock_100kHz_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void Clock_100kHz_StartEx(uint32 alignClkDiv);
#define Clock_100kHz_Start() \
    Clock_100kHz_StartEx(Clock_100kHz__PA_DIV_ID)

#else

void Clock_100kHz_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void Clock_100kHz_Stop(void);

void Clock_100kHz_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Clock_100kHz_GetDividerRegister(void);
uint8  Clock_100kHz_GetFractionalDividerRegister(void);

#define Clock_100kHz_Enable()                         Clock_100kHz_Start()
#define Clock_100kHz_Disable()                        Clock_100kHz_Stop()
#define Clock_100kHz_SetDividerRegister(clkDivider, reset)  \
    Clock_100kHz_SetFractionalDividerRegister((clkDivider), 0u)
#define Clock_100kHz_SetDivider(clkDivider)           Clock_100kHz_SetDividerRegister((clkDivider), 1u)
#define Clock_100kHz_SetDividerValue(clkDivider)      Clock_100kHz_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define Clock_100kHz_DIV_ID     Clock_100kHz__DIV_ID

#define Clock_100kHz_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define Clock_100kHz_CTRL_REG   (*(reg32 *)Clock_100kHz__CTRL_REGISTER)
#define Clock_100kHz_DIV_REG    (*(reg32 *)Clock_100kHz__DIV_REGISTER)

#define Clock_100kHz_CMD_DIV_SHIFT          (0u)
#define Clock_100kHz_CMD_PA_DIV_SHIFT       (8u)
#define Clock_100kHz_CMD_DISABLE_SHIFT      (30u)
#define Clock_100kHz_CMD_ENABLE_SHIFT       (31u)

#define Clock_100kHz_CMD_DISABLE_MASK       ((uint32)((uint32)1u << Clock_100kHz_CMD_DISABLE_SHIFT))
#define Clock_100kHz_CMD_ENABLE_MASK        ((uint32)((uint32)1u << Clock_100kHz_CMD_ENABLE_SHIFT))

#define Clock_100kHz_DIV_FRAC_MASK  (0x000000F8u)
#define Clock_100kHz_DIV_FRAC_SHIFT (3u)
#define Clock_100kHz_DIV_INT_MASK   (0xFFFFFF00u)
#define Clock_100kHz_DIV_INT_SHIFT  (8u)

#else 

#define Clock_100kHz_DIV_REG        (*(reg32 *)Clock_100kHz__REGISTER)
#define Clock_100kHz_ENABLE_REG     Clock_100kHz_DIV_REG
#define Clock_100kHz_DIV_FRAC_MASK  Clock_100kHz__FRAC_MASK
#define Clock_100kHz_DIV_FRAC_SHIFT (16u)
#define Clock_100kHz_DIV_INT_MASK   Clock_100kHz__DIVIDER_MASK
#define Clock_100kHz_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_Clock_100kHz_H) */

/* [] END OF FILE */

/*******************************************************************************
* File Name: PinRPM.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PinRPM_ALIASES_H) /* Pins PinRPM_ALIASES_H */
#define CY_PINS_PinRPM_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PinRPM_0			(PinRPM__0__PC)
#define PinRPM_0_PS		(PinRPM__0__PS)
#define PinRPM_0_PC		(PinRPM__0__PC)
#define PinRPM_0_DR		(PinRPM__0__DR)
#define PinRPM_0_SHIFT	(PinRPM__0__SHIFT)
#define PinRPM_0_INTR	((uint16)((uint16)0x0003u << (PinRPM__0__SHIFT*2u)))

#define PinRPM_INTR_ALL	 ((uint16)(PinRPM_0_INTR))


#endif /* End Pins PinRPM_ALIASES_H */


/* [] END OF FILE */

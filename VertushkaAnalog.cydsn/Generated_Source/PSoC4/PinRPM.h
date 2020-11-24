/*******************************************************************************
* File Name: PinRPM.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PinRPM_H) /* Pins PinRPM_H */
#define CY_PINS_PinRPM_H

#include "cytypes.h"
#include "cyfitter.h"
#include "PinRPM_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} PinRPM_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   PinRPM_Read(void);
void    PinRPM_Write(uint8 value);
uint8   PinRPM_ReadDataReg(void);
#if defined(PinRPM__PC) || (CY_PSOC4_4200L) 
    void    PinRPM_SetDriveMode(uint8 mode);
#endif
void    PinRPM_SetInterruptMode(uint16 position, uint16 mode);
uint8   PinRPM_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void PinRPM_Sleep(void); 
void PinRPM_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(PinRPM__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define PinRPM_DRIVE_MODE_BITS        (3)
    #define PinRPM_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - PinRPM_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the PinRPM_SetDriveMode() function.
         *  @{
         */
        #define PinRPM_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define PinRPM_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define PinRPM_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define PinRPM_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define PinRPM_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define PinRPM_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define PinRPM_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define PinRPM_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define PinRPM_MASK               PinRPM__MASK
#define PinRPM_SHIFT              PinRPM__SHIFT
#define PinRPM_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PinRPM_SetInterruptMode() function.
     *  @{
     */
        #define PinRPM_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define PinRPM_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define PinRPM_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define PinRPM_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(PinRPM__SIO)
    #define PinRPM_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(PinRPM__PC) && (CY_PSOC4_4200L)
    #define PinRPM_USBIO_ENABLE               ((uint32)0x80000000u)
    #define PinRPM_USBIO_DISABLE              ((uint32)(~PinRPM_USBIO_ENABLE))
    #define PinRPM_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define PinRPM_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define PinRPM_USBIO_ENTER_SLEEP          ((uint32)((1u << PinRPM_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << PinRPM_USBIO_SUSPEND_DEL_SHIFT)))
    #define PinRPM_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << PinRPM_USBIO_SUSPEND_SHIFT)))
    #define PinRPM_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << PinRPM_USBIO_SUSPEND_DEL_SHIFT)))
    #define PinRPM_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(PinRPM__PC)
    /* Port Configuration */
    #define PinRPM_PC                 (* (reg32 *) PinRPM__PC)
#endif
/* Pin State */
#define PinRPM_PS                     (* (reg32 *) PinRPM__PS)
/* Data Register */
#define PinRPM_DR                     (* (reg32 *) PinRPM__DR)
/* Input Buffer Disable Override */
#define PinRPM_INP_DIS                (* (reg32 *) PinRPM__PC2)

/* Interrupt configuration Registers */
#define PinRPM_INTCFG                 (* (reg32 *) PinRPM__INTCFG)
#define PinRPM_INTSTAT                (* (reg32 *) PinRPM__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define PinRPM_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(PinRPM__SIO)
    #define PinRPM_SIO_REG            (* (reg32 *) PinRPM__SIO)
#endif /* (PinRPM__SIO_CFG) */

/* USBIO registers */
#if !defined(PinRPM__PC) && (CY_PSOC4_4200L)
    #define PinRPM_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define PinRPM_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define PinRPM_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define PinRPM_DRIVE_MODE_SHIFT       (0x00u)
#define PinRPM_DRIVE_MODE_MASK        (0x07u << PinRPM_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins PinRPM_H */


/* [] END OF FILE */

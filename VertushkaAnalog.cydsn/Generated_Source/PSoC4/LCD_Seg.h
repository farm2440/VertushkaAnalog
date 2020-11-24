/*******************************************************************************
* File Name: LCD_Seg.h
* Version 1.30
*
* Description:
*  This file provides constants and parameter values for the Segment LCD
*  component.
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

#if !defined(CY_SegLCD_P4_LCD_Seg_H)
#define CY_SegLCD_P4_LCD_Seg_H

#include "cyfitter.h"
#include "cytypes.h"
#include "CyLib.h"


/***************************************
*   Conditional Compilation Parameters
****************************************/

#define LCD_Seg_SUBFR_DIV                (0x0020u)
#define LCD_Seg_DEAD_DIV                 (0x0000u)
#define LCD_Seg_LCD_MODE                 (0u)
#define LCD_Seg_WAVEFORM_TYPE            (0u)
#define LCD_Seg_DRIVING_MODE             (1u)
#define LCD_Seg_BIAS                     (0u)
#define LCD_Seg_COM_NUM                  (4u)
#define LCD_Seg_CONTRAST                 (100u)

#define LCD_Seg_BUFFER_LENGTH            (0x05u)


/***************************************
*        Function Prototypes
***************************************/

void    LCD_Seg_Init(void);
void    LCD_Seg_Enable(void);
void    LCD_Seg_Start(void);
void    LCD_Seg_Stop(void);
void    LCD_Seg_SetSpeedMode(uint32 mode);
void    LCD_Seg_SetOperationMode(uint32 mode);
void    LCD_Seg_SetBiasType(uint32 bias);
void    LCD_Seg_SetWaveformType(uint32 type);
uint32  LCD_Seg_SetContrast(uint32 contrast);
void    LCD_Seg_WriteInvertState(uint32 invertState);
uint32  LCD_Seg_ReadInvertState(void);
void    LCD_Seg_ClearDisplay(void);
uint32  LCD_Seg_WritePixel(uint32 pixelNumber, uint32 pixelState);
uint32  LCD_Seg_ReadPixel(uint32 pixelNumber);
void    LCD_Seg_Sleep(void);
void    LCD_Seg_Wakeup(void);
void    LCD_Seg_SaveConfig(void);
void    LCD_Seg_RestoreConfig(void);

void    LCD_Seg_Write7SegDigit_0(uint32 digit, uint32 position);
void    LCD_Seg_Write7SegNumber_0(uint32 value, uint32 position, uint32 mode);

#define LCD_Seg_7SEG

/* Calculates pixel location in the frame buffer. */
#define LCD_Seg_FIND_PIXEL(port, pin, row)    (((uint32)((uint32)(row) << LCD_Seg_ROW_SHIFT)) | \
                                   ((uint32)((uint32)(port) << LCD_Seg_BYTE_SHIFT)) | ((uint32)(pin)))

/* Internal macros that extract pixel information from a pixel number */
#define LCD_Seg_EXTRACT_ROW(pixel)       ((uint32)(((pixel) & LCD_Seg_ROW_MASK) >> \
                                                                      LCD_Seg_ROW_SHIFT))
#define LCD_Seg_EXTRACT_PORT(pixel)      ((uint32)(((pixel) & LCD_Seg_BYTE_MASK) >> \
                                                                      LCD_Seg_BYTE_SHIFT))
#define LCD_Seg_EXTRACT_PIN(pixel)       ((uint32)((pixel) & LCD_Seg_BIT_MASK))


/***************************************
*           Global Variables
***************************************/

extern uint32 LCD_Seg_initVar;


/***************************************
*           API Constants
***************************************/

#define LCD_Seg_NOT_CON                  (0xFFFFu)

#define LCD_Seg_MAX_CONTRAST             (100u)
#define LCD_Seg_MIN_CONTRAST             (10u)
#define LCD_Seg_CONTRAST_DIVIDERS_NUMBER (10u)

#define LCD_Seg_ROW_SHIFT                (0x10u)
#define LCD_Seg_ROW_MASK                 ((uint32)((uint32)0xFFu << LCD_Seg_ROW_SHIFT))
#define LCD_Seg_BYTE_SHIFT               (0x08u)
#define LCD_Seg_BYTE_MASK                ((uint32)((uint32)0xFFu << LCD_Seg_BYTE_SHIFT))
#define LCD_Seg_BIT_SHIFT                (0x00u)
#define LCD_Seg_BIT_MASK                 ((uint32)((uint32)0xFFu << LCD_Seg_BIT_SHIFT))

#define LCD_Seg_ENABLE_MASK              ((uint32)0x03u)
#define LCD_Seg_SPEED_LS                 (0x00u)
#define LCD_Seg_SPEED_HS                 (0x01u)
#define LCD_Seg_MODE_PWM                 (0x00u)
#define LCD_Seg_MODE_DIG_COR             (0x01u)
#define LCD_Seg_BIAS_1_2                 (0x00u)
#define LCD_Seg_BIAS_1_3                 (0x01u)
#define LCD_Seg_BIAS_1_4                 (0x02u)
#define LCD_Seg_BIAS_1_5                 (0x03u)
#define LCD_Seg_TYPE_A                   (0x00u)
#define LCD_Seg_TYPE_B                   (0x01u)

#define LCD_Seg_STATE_NORMAL             (0x00u)
#define LCD_Seg_STATE_INVERTED           (0x01u)

/* Number of pixels for different kind of LCDs */
#define LCD_Seg_7SEG_PIX_NUM             (0x07u)
#define LCD_Seg_14SEG_PIX_NUM            (0x0Eu)
#define LCD_Seg_16SEG_PIX_NUM            (0x10u)
#define LCD_Seg_DM_CHAR_HEIGHT           (0x08u)
#define LCD_Seg_DM_CHAR_WIDTH            (0x05u)

/* API parameter pixel state constants */
#define LCD_Seg_PIXEL_STATE_OFF          ((uint32)0x00u)
#define LCD_Seg_PIXEL_STATE_ON           ((uint32)0x01u)
#define LCD_Seg_PIXEL_STATE_INVERT       ((uint32)0x02u)
#define LCD_Seg_PIXEL_UNKNOWN_STATE      ((uint32)0xFFu)

/* 0 - No leading zeros, 1 - leading zeros */
#define LCD_Seg_NO_LEADING_ZEROES        (0x00u)
#define LCD_Seg_LEADING_ZEROES           (0x01u)

#define LCD_Seg_DEAD_DIVS                (0x00u)
#define LCD_Seg_SUBFR_DIVS               (0x01u)

#define LCD_Seg_MAX_BUFF_ROWS            (0x04u)

#define LCD_Seg_PINS_PER_PORT            (0x08u)

/* Defines index of "blank" digit in the look-up table for 7 segment helper */
#define LCD_Seg_7SEG_BLANK_DIG       (0x10u)

#define LCD_Seg_DIGIT_NUM_0          (2u)

#define LCD_Seg_COM0_PORT            (LCD_Seg_bSeg_LCD__COMMON_0 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM0_PIN             (LCD_Seg_bSeg_LCD__COMMON_0 % LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM1_PORT            (LCD_Seg_bSeg_LCD__COMMON_1 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM1_PIN             (LCD_Seg_bSeg_LCD__COMMON_1 % LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM2_PORT            (LCD_Seg_bSeg_LCD__COMMON_2 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM2_PIN             (LCD_Seg_bSeg_LCD__COMMON_2 % LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM3_PORT            (LCD_Seg_bSeg_LCD__COMMON_3 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_COM3_PIN             (LCD_Seg_bSeg_LCD__COMMON_3 % LCD_Seg_PINS_PER_PORT)

#define LCD_Seg_Com0                 LCD_Seg_FIND_PIXEL(LCD_Seg_COM0_PORT,  LCD_Seg_COM0_PIN,  0u)
#define LCD_Seg_Com1                 LCD_Seg_FIND_PIXEL(LCD_Seg_COM1_PORT,  LCD_Seg_COM1_PIN,  1u)
#define LCD_Seg_Com2                 LCD_Seg_FIND_PIXEL(LCD_Seg_COM2_PORT,  LCD_Seg_COM2_PIN,  2u)
#define LCD_Seg_Com3                 LCD_Seg_FIND_PIXEL(LCD_Seg_COM3_PORT,  LCD_Seg_COM3_PIN,  3u)

#define LCD_Seg_SEG0_PORT            (LCD_Seg_bSeg_LCD__SEGMENT_0 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_SEG0_PIN             (LCD_Seg_bSeg_LCD__SEGMENT_0 % LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_SEG1_PORT            (LCD_Seg_bSeg_LCD__SEGMENT_1 / LCD_Seg_PINS_PER_PORT)
#define LCD_Seg_SEG1_PIN             (LCD_Seg_bSeg_LCD__SEGMENT_1 % LCD_Seg_PINS_PER_PORT)


#define LCD_Seg_PIX0                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG0_PORT,  LCD_Seg_SEG0_PIN,  0u)
#define LCD_Seg_PIX1                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG0_PORT,  LCD_Seg_SEG0_PIN,  1u)
#define LCD_Seg_PIX2                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG0_PORT,  LCD_Seg_SEG0_PIN,  2u)
#define LCD_Seg_PIX3                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG0_PORT,  LCD_Seg_SEG0_PIN,  3u)
#define LCD_Seg_PIX4                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG1_PORT,  LCD_Seg_SEG1_PIN,  0u)
#define LCD_Seg_PIX5                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG1_PORT,  LCD_Seg_SEG1_PIN,  1u)
#define LCD_Seg_PIX6                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG1_PORT,  LCD_Seg_SEG1_PIN,  2u)
#define LCD_Seg_PIX7                 LCD_Seg_FIND_PIXEL(LCD_Seg_SEG1_PORT,  LCD_Seg_SEG1_PIN,  3u)


/***************************************
*    Enumerated Types and Parameters
***************************************/


/***************************************
*    Initial Parameter Constants
***************************************/


/***************************************
*             Registers
***************************************/

/* LCD's fixed block registers */
#define LCD_Seg_DIVIDER_REG              (*(reg32*) CYREG_LCD_DIVIDER)
#define LCD_Seg_DIVIDER_PTR              ((reg32*) CYREG_LCD_DIVIDER)
#define LCD_Seg_CONTROL_REG              (*(reg32*) CYREG_LCD_CONTROL)
#define LCD_Seg_CONTROL_PTR              ((reg32*) CYREG_LCD_CONTROL)
#define LCD_Seg_DATA0_REG                (*(reg32*) CYREG_LCD_DATA00)
#define LCD_Seg_DATA0_PTR                ((reg32*) CYREG_LCD_DATA00)
#define LCD_Seg_DATA1_REG                (*(reg32*) CYREG_LCD_DATA01)
#define LCD_Seg_DATA1_PTR                ((reg32*) CYREG_LCD_DATA01)
#define LCD_Seg_DATA2_REG                (*(reg32*) CYREG_LCD_DATA02)
#define LCD_Seg_DATA2_PTR                ((reg32*) CYREG_LCD_DATA02)
#define LCD_Seg_DATA3_REG                (*(reg32*) CYREG_LCD_DATA03)
#define LCD_Seg_DATA3_PTR                ((reg32*) CYREG_LCD_DATA03)
#define LCD_Seg_DATA4_REG                (*(reg32*) CYREG_LCD_DATA04)
#define LCD_Seg_DATA4_PTR                ((reg32*) CYREG_LCD_DATA04)


/***************************************
*       Register Constants
***************************************/

/* Offset between LCD Pin Data Registers for different Commons (0x0100) divided by number of byte in one Register (4) */
#define LCD_Seg_DATA_REGS_OFFSET         (64u)

/* Divider Register bits */
#define LCD_Seg_SUBFR_DIV_MASK_SHIFT     (0x00u)
#define LCD_Seg_DEAD_DIV_MASK_SHIFT      (0x10u)

#define LCD_Seg_SUBFR_DIV_MASK           ((uint32)((uint32)0xFFFFu << LCD_Seg_SUBFR_DIV_MASK_SHIFT))
#define LCD_Seg_DEAD_DIV_MASK            ((uint32)((uint32)0xFFFFu << LCD_Seg_DEAD_DIV_MASK_SHIFT))
#define LCD_Seg_DIVIDER_MASK             (LCD_Seg_DEAD_DIV_MASK | LCD_Seg_SUBFR_DIV_MASK)

#define LCD_Seg_SUBFR_DIVIDER            ((uint32)((uint32)LCD_Seg_SUBFR_DIV << \
                                                                    LCD_Seg_SUBFR_DIV_MASK_SHIFT))
#define LCD_Seg_DEAD_DIVIDER             ((uint32)((uint32)LCD_Seg_DEAD_DIV << \
                                                                    LCD_Seg_DEAD_DIV_MASK_SHIFT))
#define LCD_Seg_INIT_DIVIDERS            (LCD_Seg_SUBFR_DIVIDER | LCD_Seg_DEAD_DIVIDER)

/* Control Register bits */
#define LCD_Seg_LS_EN_SHIFT              (0x00u)
#define LCD_Seg_HS_EN_SHIFT              (0x01u)
#define LCD_Seg_MODE_SHIFT               (0x02u)
#define LCD_Seg_TYPE_SHIFT               (0x03u)
#define LCD_Seg_OP_MODE_SHIFT            (0x04u)
#define LCD_Seg_BIAS_MASK_SHIFT          (0x05u)
#define LCD_Seg_COM_NUM_MASK_SHIFT       (0x08u)
#define LCD_Seg_LS_EN_STAT_SHIFT         (0x1Fu)

#define LCD_Seg_LS_EN                    ((uint32)((uint32)0x01u << LCD_Seg_LS_EN_SHIFT))
#define LCD_Seg_HS_EN                    ((uint32)((uint32)0x01u << LCD_Seg_HS_EN_SHIFT))
#define LCD_Seg_MODE                     ((uint32)((uint32)0x01u << LCD_Seg_MODE_SHIFT))
#define LCD_Seg_TYPE                     ((uint32)((uint32)0x01u << LCD_Seg_TYPE_SHIFT))
#define LCD_Seg_OP_MODE                  ((uint32)((uint32)0x01u << LCD_Seg_OP_MODE_SHIFT))
#define LCD_Seg_BIAS_MASK                ((uint32)((uint32)0x03u << LCD_Seg_BIAS_MASK_SHIFT))
#define LCD_Seg_COM_NUM_MASK             ((uint32)((uint32)0x0Fu << LCD_Seg_COM_NUM_MASK_SHIFT))
#define LCD_Seg_LS_EN_STAT               ((uint32)((uint32)0x01u << LCD_Seg_LS_EN_STAT_SHIFT))
#define LCD_Seg_CONFIG_MASK              ((uint32)(~(LCD_Seg_MODE | LCD_Seg_TYPE | \
                                                   LCD_Seg_OP_MODE | LCD_Seg_BIAS_MASK | \
                                                   LCD_Seg_COM_NUM_MASK)))

#define LCD_Seg_LCD_SPEED_MODE           ((uint32)((uint32)LCD_Seg_LCD_MODE << \
                                                                    LCD_Seg_MODE_SHIFT))
#define LCD_Seg_WAVEFORMS_TYPE           ((uint32)((uint32)LCD_Seg_WAVEFORM_TYPE << \
                                                                    LCD_Seg_TYPE_SHIFT))
#define LCD_Seg_DRIVING_OP_MODE          ((uint32)((uint32)LCD_Seg_DRIVING_MODE << \
                                                                    LCD_Seg_OP_MODE_SHIFT))
#define LCD_Seg_PWM_BIAS                 ((uint32)((uint32)LCD_Seg_BIAS << \
                                                                    LCD_Seg_BIAS_MASK_SHIFT))
#define LCD_Seg_COM_NUMBER               ((uint32)((uint32)(LCD_Seg_COM_NUM - 2u) << \
                                                                     LCD_Seg_COM_NUM_MASK_SHIFT))
#define LCD_Seg_INIT_CONTROL             (LCD_Seg_LCD_SPEED_MODE | LCD_Seg_WAVEFORMS_TYPE | \
                                                   LCD_Seg_DRIVING_OP_MODE | LCD_Seg_PWM_BIAS | \
                                                   LCD_Seg_COM_NUMBER)

#endif /* End CY_SegLCD_P4_LCD_Seg_H */


/* [] END OF FILE */

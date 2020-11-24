#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* ADC_cy_psoc4_sar */
#define ADC_cy_psoc4_sar__SAR_ANA_TRIM CYREG_SAR_ANA_TRIM
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG00 CYREG_SAR_CHAN_CONFIG00
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG01 CYREG_SAR_CHAN_CONFIG01
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG02 CYREG_SAR_CHAN_CONFIG02
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG03 CYREG_SAR_CHAN_CONFIG03
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG04 CYREG_SAR_CHAN_CONFIG04
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG05 CYREG_SAR_CHAN_CONFIG05
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG06 CYREG_SAR_CHAN_CONFIG06
#define ADC_cy_psoc4_sar__SAR_CHAN_CONFIG07 CYREG_SAR_CHAN_CONFIG07
#define ADC_cy_psoc4_sar__SAR_CHAN_EN CYREG_SAR_CHAN_EN
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT_VALID CYREG_SAR_CHAN_RESULT_VALID
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT00 CYREG_SAR_CHAN_RESULT00
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT01 CYREG_SAR_CHAN_RESULT01
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT02 CYREG_SAR_CHAN_RESULT02
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT03 CYREG_SAR_CHAN_RESULT03
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT04 CYREG_SAR_CHAN_RESULT04
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT05 CYREG_SAR_CHAN_RESULT05
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT06 CYREG_SAR_CHAN_RESULT06
#define ADC_cy_psoc4_sar__SAR_CHAN_RESULT07 CYREG_SAR_CHAN_RESULT07
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK_VALID CYREG_SAR_CHAN_WORK_VALID
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK00 CYREG_SAR_CHAN_WORK00
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK01 CYREG_SAR_CHAN_WORK01
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK02 CYREG_SAR_CHAN_WORK02
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK03 CYREG_SAR_CHAN_WORK03
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK04 CYREG_SAR_CHAN_WORK04
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK05 CYREG_SAR_CHAN_WORK05
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK06 CYREG_SAR_CHAN_WORK06
#define ADC_cy_psoc4_sar__SAR_CHAN_WORK07 CYREG_SAR_CHAN_WORK07
#define ADC_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_cy_psoc4_sar__SAR_DFT_CTRL CYREG_SAR_DFT_CTRL
#define ADC_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_cy_psoc4_sar__SAR_MUX_SWITCH_HW_CTRL CYREG_SAR_MUX_SWITCH_HW_CTRL
#define ADC_cy_psoc4_sar__SAR_MUX_SWITCH0 CYREG_SAR_MUX_SWITCH0
#define ADC_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_cy_psoc4_sar__SAR_PUMP_CTRL CYREG_SAR_PUMP_CTRL
#define ADC_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR CYREG_SAR_RANGE_INTR
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR CYREG_SAR_SATURATE_INTR
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_START_CTRL CYREG_SAR_START_CTRL
#define ADC_cy_psoc4_sar__SAR_STATUS CYREG_SAR_STATUS
#define ADC_cy_psoc4_sar__SAR_WOUNDING CYREG_SAR_WOUNDING

/* ADC_intClock */
#define ADC_intClock__DIVIDER_MASK 0x0000FFFFu
#define ADC_intClock__ENABLE CYREG_CLK_DIVIDER_A00
#define ADC_intClock__ENABLE_MASK 0x80000000u
#define ADC_intClock__MASK 0x80000000u
#define ADC_intClock__REGISTER CYREG_CLK_DIVIDER_A00

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_IRQ__INTC_MASK 0x4000u
#define ADC_IRQ__INTC_NUMBER 14u
#define ADC_IRQ__INTC_PRIOR_MASK 0xC00000u
#define ADC_IRQ__INTC_PRIOR_NUM 3u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* PWM_PWMUDB */
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__7__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__7__POS 7
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG CYREG_UDB_W8_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG CYREG_UDB_W8_CTL_02
#define PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define PWM_PWMUDB_genblk1_ctrlreg__MASK 0x80u
#define PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG CYREG_UDB_W8_MSK_02
#define PWM_PWMUDB_genblk8_stsreg__0__MASK 0x01u
#define PWM_PWMUDB_genblk8_stsreg__0__POS 0
#define PWM_PWMUDB_genblk8_stsreg__2__MASK 0x04u
#define PWM_PWMUDB_genblk8_stsreg__2__POS 2
#define PWM_PWMUDB_genblk8_stsreg__3__MASK 0x08u
#define PWM_PWMUDB_genblk8_stsreg__3__POS 3
#define PWM_PWMUDB_genblk8_stsreg__MASK 0x0Du
#define PWM_PWMUDB_genblk8_stsreg__MASK_REG CYREG_UDB_W8_MSK_03
#define PWM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_03
#define PWM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_03
#define PWM_PWMUDB_genblk8_stsreg__STATUS_REG CYREG_UDB_W8_ST_03
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__A0_A1_REG CYREG_UDB_CAT16_A_02
#define PWM_PWMUDB_sP16_pwmdp_u0__A0_REG CYREG_UDB_W8_A0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__A1_REG CYREG_UDB_W8_A1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__D0_D1_REG CYREG_UDB_CAT16_D_02
#define PWM_PWMUDB_sP16_pwmdp_u0__D0_REG CYREG_UDB_W8_D0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__D1_REG CYREG_UDB_W8_D1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define PWM_PWMUDB_sP16_pwmdp_u0__F0_F1_REG CYREG_UDB_CAT16_F_02
#define PWM_PWMUDB_sP16_pwmdp_u0__F0_REG CYREG_UDB_W8_F0_02
#define PWM_PWMUDB_sP16_pwmdp_u0__F1_REG CYREG_UDB_W8_F1_02
#define PWM_PWMUDB_sP16_pwmdp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_PWMUDB_sP16_pwmdp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define PWM_PWMUDB_sP16_pwmdp_u1__A0_A1_REG CYREG_UDB_CAT16_A_03
#define PWM_PWMUDB_sP16_pwmdp_u1__A0_REG CYREG_UDB_W8_A0_03
#define PWM_PWMUDB_sP16_pwmdp_u1__A1_REG CYREG_UDB_W8_A1_03
#define PWM_PWMUDB_sP16_pwmdp_u1__D0_D1_REG CYREG_UDB_CAT16_D_03
#define PWM_PWMUDB_sP16_pwmdp_u1__D0_REG CYREG_UDB_W8_D0_03
#define PWM_PWMUDB_sP16_pwmdp_u1__D1_REG CYREG_UDB_W8_D1_03
#define PWM_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define PWM_PWMUDB_sP16_pwmdp_u1__F0_F1_REG CYREG_UDB_CAT16_F_03
#define PWM_PWMUDB_sP16_pwmdp_u1__F0_REG CYREG_UDB_W8_F0_03
#define PWM_PWMUDB_sP16_pwmdp_u1__F1_REG CYREG_UDB_W8_F1_03
#define PWM_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define PWM_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03

/* Clock */
#define Clock__DIVIDER_MASK 0x0000FFFFu
#define Clock__ENABLE CYREG_CLK_DIVIDER_B00
#define Clock__ENABLE_MASK 0x80000000u
#define Clock__MASK 0x80000000u
#define Clock__REGISTER CYREG_CLK_DIVIDER_B00

/* LED_G */
#define LED_G_Sync_ctrl_reg__0__MASK 0x01u
#define LED_G_Sync_ctrl_reg__0__POS 0
#define LED_G_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_01
#define LED_G_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_01
#define LED_G_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_01
#define LED_G_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_01
#define LED_G_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_01
#define LED_G_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_01
#define LED_G_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_01
#define LED_G_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_01
#define LED_G_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_01
#define LED_G_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_01
#define LED_G_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_01
#define LED_G_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_01
#define LED_G_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_01
#define LED_G_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_01
#define LED_G_Sync_ctrl_reg__MASK 0x01u
#define LED_G_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_01
#define LED_G_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_01
#define LED_G_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_01

/* LED_R */
#define LED_R_Sync_ctrl_reg__0__MASK 0x01u
#define LED_R_Sync_ctrl_reg__0__POS 0
#define LED_R_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define LED_R_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_00
#define LED_R_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_00
#define LED_R_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_00
#define LED_R_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_00
#define LED_R_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_00
#define LED_R_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_00
#define LED_R_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_00
#define LED_R_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_00
#define LED_R_Sync_ctrl_reg__32BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define LED_R_Sync_ctrl_reg__32BIT_CONTROL_REG CYREG_UDB_W32_CTL_00
#define LED_R_Sync_ctrl_reg__32BIT_COUNT_REG CYREG_UDB_W32_CTL_00
#define LED_R_Sync_ctrl_reg__32BIT_PERIOD_REG CYREG_UDB_W32_MSK_00
#define LED_R_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define LED_R_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_00
#define LED_R_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define LED_R_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_00
#define LED_R_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_00
#define LED_R_Sync_ctrl_reg__MASK 0x01u
#define LED_R_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define LED_R_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_00
#define LED_R_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_00

/* Pulse */
#define Pulse__0__DM__MASK 0x38u
#define Pulse__0__DM__SHIFT 3u
#define Pulse__0__DR CYREG_PRT3_DR
#define Pulse__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pulse__0__HSIOM_MASK 0x000000F0u
#define Pulse__0__HSIOM_SHIFT 4u
#define Pulse__0__INTCFG CYREG_PRT3_INTCFG
#define Pulse__0__INTSTAT CYREG_PRT3_INTSTAT
#define Pulse__0__MASK 0x02u
#define Pulse__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Pulse__0__OUT_SEL_SHIFT 2u
#define Pulse__0__OUT_SEL_VAL 2u
#define Pulse__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pulse__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pulse__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pulse__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pulse__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pulse__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pulse__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pulse__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pulse__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pulse__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pulse__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pulse__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pulse__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pulse__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pulse__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pulse__0__PC CYREG_PRT3_PC
#define Pulse__0__PC2 CYREG_PRT3_PC2
#define Pulse__0__PORT 3u
#define Pulse__0__PS CYREG_PRT3_PS
#define Pulse__0__SHIFT 1u
#define Pulse__DR CYREG_PRT3_DR
#define Pulse__INTCFG CYREG_PRT3_INTCFG
#define Pulse__INTSTAT CYREG_PRT3_INTSTAT
#define Pulse__MASK 0x02u
#define Pulse__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pulse__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pulse__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pulse__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pulse__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pulse__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pulse__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pulse__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pulse__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pulse__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pulse__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pulse__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pulse__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pulse__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pulse__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pulse__PC CYREG_PRT3_PC
#define Pulse__PC2 CYREG_PRT3_PC2
#define Pulse__PORT 3u
#define Pulse__PS CYREG_PRT3_PS
#define Pulse__SHIFT 1u

/* PinRPM */
#define PinRPM__0__DM__MASK 0xE00u
#define PinRPM__0__DM__SHIFT 9u
#define PinRPM__0__DR CYREG_PRT0_DR
#define PinRPM__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define PinRPM__0__HSIOM_MASK 0x0000F000u
#define PinRPM__0__HSIOM_SHIFT 12u
#define PinRPM__0__INTCFG CYREG_PRT0_INTCFG
#define PinRPM__0__INTSTAT CYREG_PRT0_INTSTAT
#define PinRPM__0__MASK 0x08u
#define PinRPM__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define PinRPM__0__OUT_SEL_SHIFT 6u
#define PinRPM__0__OUT_SEL_VAL 1u
#define PinRPM__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define PinRPM__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define PinRPM__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define PinRPM__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define PinRPM__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define PinRPM__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define PinRPM__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define PinRPM__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define PinRPM__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define PinRPM__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define PinRPM__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define PinRPM__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define PinRPM__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define PinRPM__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define PinRPM__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define PinRPM__0__PC CYREG_PRT0_PC
#define PinRPM__0__PC2 CYREG_PRT0_PC2
#define PinRPM__0__PORT 0u
#define PinRPM__0__PS CYREG_PRT0_PS
#define PinRPM__0__SHIFT 3u
#define PinRPM__DR CYREG_PRT0_DR
#define PinRPM__INTCFG CYREG_PRT0_INTCFG
#define PinRPM__INTSTAT CYREG_PRT0_INTSTAT
#define PinRPM__MASK 0x08u
#define PinRPM__PA__CFG0 CYREG_UDB_PA0_CFG0
#define PinRPM__PA__CFG1 CYREG_UDB_PA0_CFG1
#define PinRPM__PA__CFG10 CYREG_UDB_PA0_CFG10
#define PinRPM__PA__CFG11 CYREG_UDB_PA0_CFG11
#define PinRPM__PA__CFG12 CYREG_UDB_PA0_CFG12
#define PinRPM__PA__CFG13 CYREG_UDB_PA0_CFG13
#define PinRPM__PA__CFG14 CYREG_UDB_PA0_CFG14
#define PinRPM__PA__CFG2 CYREG_UDB_PA0_CFG2
#define PinRPM__PA__CFG3 CYREG_UDB_PA0_CFG3
#define PinRPM__PA__CFG4 CYREG_UDB_PA0_CFG4
#define PinRPM__PA__CFG5 CYREG_UDB_PA0_CFG5
#define PinRPM__PA__CFG6 CYREG_UDB_PA0_CFG6
#define PinRPM__PA__CFG7 CYREG_UDB_PA0_CFG7
#define PinRPM__PA__CFG8 CYREG_UDB_PA0_CFG8
#define PinRPM__PA__CFG9 CYREG_UDB_PA0_CFG9
#define PinRPM__PC CYREG_PRT0_PC
#define PinRPM__PC2 CYREG_PRT0_PC2
#define PinRPM__PORT 0u
#define PinRPM__PS CYREG_PRT0_PS
#define PinRPM__SHIFT 3u

/* CLK_20Hz */
#define CLK_20Hz__DIVIDER_MASK 0x0000FFFFu
#define CLK_20Hz__ENABLE CYREG_CLK_DIVIDER_B01
#define CLK_20Hz__ENABLE_MASK 0x80000000u
#define CLK_20Hz__MASK 0x80000000u
#define CLK_20Hz__REGISTER CYREG_CLK_DIVIDER_B01

/* EnablePWM */
#define EnablePWM_Sync_ctrl_reg__0__MASK 0x01u
#define EnablePWM_Sync_ctrl_reg__0__POS 0
#define EnablePWM_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define EnablePWM_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_03
#define EnablePWM_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define EnablePWM_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_03
#define EnablePWM_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define EnablePWM_Sync_ctrl_reg__MASK 0x01u
#define EnablePWM_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define EnablePWM_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define EnablePWM_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_03

/* Pin_LED_G */
#define Pin_LED_G__0__DM__MASK 0x38u
#define Pin_LED_G__0__DM__SHIFT 3u
#define Pin_LED_G__0__DR CYREG_PRT1_DR
#define Pin_LED_G__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Pin_LED_G__0__HSIOM_MASK 0x000000F0u
#define Pin_LED_G__0__HSIOM_SHIFT 4u
#define Pin_LED_G__0__INTCFG CYREG_PRT1_INTCFG
#define Pin_LED_G__0__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_LED_G__0__MASK 0x02u
#define Pin_LED_G__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Pin_LED_G__0__OUT_SEL_SHIFT 2u
#define Pin_LED_G__0__OUT_SEL_VAL 2u
#define Pin_LED_G__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_LED_G__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_LED_G__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_LED_G__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_LED_G__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_LED_G__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_LED_G__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_LED_G__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_LED_G__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_LED_G__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_LED_G__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_LED_G__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_LED_G__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_LED_G__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_LED_G__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_LED_G__0__PC CYREG_PRT1_PC
#define Pin_LED_G__0__PC2 CYREG_PRT1_PC2
#define Pin_LED_G__0__PORT 1u
#define Pin_LED_G__0__PS CYREG_PRT1_PS
#define Pin_LED_G__0__SHIFT 1u
#define Pin_LED_G__DR CYREG_PRT1_DR
#define Pin_LED_G__INTCFG CYREG_PRT1_INTCFG
#define Pin_LED_G__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_LED_G__MASK 0x02u
#define Pin_LED_G__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_LED_G__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_LED_G__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_LED_G__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_LED_G__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_LED_G__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_LED_G__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_LED_G__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_LED_G__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_LED_G__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_LED_G__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_LED_G__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_LED_G__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_LED_G__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_LED_G__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_LED_G__PC CYREG_PRT1_PC
#define Pin_LED_G__PC2 CYREG_PRT1_PC2
#define Pin_LED_G__PORT 1u
#define Pin_LED_G__PS CYREG_PRT1_PS
#define Pin_LED_G__SHIFT 1u

/* Pin_LED_R */
#define Pin_LED_R__0__DM__MASK 0x07u
#define Pin_LED_R__0__DM__SHIFT 0u
#define Pin_LED_R__0__DR CYREG_PRT1_DR
#define Pin_LED_R__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define Pin_LED_R__0__HSIOM_MASK 0x0000000Fu
#define Pin_LED_R__0__HSIOM_SHIFT 0u
#define Pin_LED_R__0__INTCFG CYREG_PRT1_INTCFG
#define Pin_LED_R__0__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_LED_R__0__MASK 0x01u
#define Pin_LED_R__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define Pin_LED_R__0__OUT_SEL_SHIFT 0u
#define Pin_LED_R__0__OUT_SEL_VAL 1u
#define Pin_LED_R__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_LED_R__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_LED_R__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_LED_R__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_LED_R__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_LED_R__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_LED_R__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_LED_R__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_LED_R__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_LED_R__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_LED_R__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_LED_R__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_LED_R__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_LED_R__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_LED_R__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_LED_R__0__PC CYREG_PRT1_PC
#define Pin_LED_R__0__PC2 CYREG_PRT1_PC2
#define Pin_LED_R__0__PORT 1u
#define Pin_LED_R__0__PS CYREG_PRT1_PS
#define Pin_LED_R__0__SHIFT 0u
#define Pin_LED_R__DR CYREG_PRT1_DR
#define Pin_LED_R__INTCFG CYREG_PRT1_INTCFG
#define Pin_LED_R__INTSTAT CYREG_PRT1_INTSTAT
#define Pin_LED_R__MASK 0x01u
#define Pin_LED_R__PA__CFG0 CYREG_UDB_PA1_CFG0
#define Pin_LED_R__PA__CFG1 CYREG_UDB_PA1_CFG1
#define Pin_LED_R__PA__CFG10 CYREG_UDB_PA1_CFG10
#define Pin_LED_R__PA__CFG11 CYREG_UDB_PA1_CFG11
#define Pin_LED_R__PA__CFG12 CYREG_UDB_PA1_CFG12
#define Pin_LED_R__PA__CFG13 CYREG_UDB_PA1_CFG13
#define Pin_LED_R__PA__CFG14 CYREG_UDB_PA1_CFG14
#define Pin_LED_R__PA__CFG2 CYREG_UDB_PA1_CFG2
#define Pin_LED_R__PA__CFG3 CYREG_UDB_PA1_CFG3
#define Pin_LED_R__PA__CFG4 CYREG_UDB_PA1_CFG4
#define Pin_LED_R__PA__CFG5 CYREG_UDB_PA1_CFG5
#define Pin_LED_R__PA__CFG6 CYREG_UDB_PA1_CFG6
#define Pin_LED_R__PA__CFG7 CYREG_UDB_PA1_CFG7
#define Pin_LED_R__PA__CFG8 CYREG_UDB_PA1_CFG8
#define Pin_LED_R__PA__CFG9 CYREG_UDB_PA1_CFG9
#define Pin_LED_R__PC CYREG_PRT1_PC
#define Pin_LED_R__PC2 CYREG_PRT1_PC2
#define Pin_LED_R__PORT 1u
#define Pin_LED_R__PS CYREG_PRT1_PS
#define Pin_LED_R__SHIFT 0u

/* isr_Timed */
#define isr_Timed__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_Timed__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_Timed__INTC_MASK 0x01u
#define isr_Timed__INTC_NUMBER 0u
#define isr_Timed__INTC_PRIOR_MASK 0xC0u
#define isr_Timed__INTC_PRIOR_NUM 3u
#define isr_Timed__INTC_PRIOR_REG CYREG_CM0_IPR0
#define isr_Timed__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_Timed__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Miscellaneous */
#define CY_PROJECT_NAME "VertushkaAnalog"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04A61193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDD 3.3
#define CYDEV_VDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */

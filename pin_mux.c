/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v14.0
processor: MIMX8UD7xxx10
package_id: MIMX8UD7DVP10
mcu_data: ksdk2_0
processor_version: 14.0.0
pin_labels:
- {pin_num: AH1, pin_signal: PTA5, label: 'Touchscreen reset IO '}
- {pin_num: AF1, pin_signal: PTA6, label: MIPI-DSI Enable IO}
- {pin_num: AJ4, pin_signal: PTA19, label: Touchscreen interrupt IO}
- {pin_num: AE24, pin_signal: PTC23, label: MIPI-CSI2 Power Enable IO}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitLpuartPins();
    BOARD_InitI2cPins();
    BOARD_InitPmicI2cPins();
    BOARD_InitI2sPins();
    BOARD_InitTpmPins();
    BOARD_InitTouchIntPins();
    BOARD_InitPmicModePins();
    BOARD_InitPsRamPins();
    BOARD_InitSpiFlashPins();
    BOARD_InitPdmPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitLpuartPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AH2, peripheral: LPUART1, signal: lpuart_tx, pin_signal: PTA10, PS: UP, PE: ENABLED}
  - {pin_num: AH3, peripheral: LPUART1, signal: lpuart_rx, pin_signal: PTA11, PS: UP, PE: ENABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitLpuartPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitLpuartPins(void) {                          /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA10_LPUART1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA10_LPUART1_TX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA11_LPUART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA11_LPUART1_RX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitI2cPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AH6, peripheral: LPI2C0, signal: lpi2c_scl, pin_signal: PTA16, ODE: OPEN_DRAIN}
  - {pin_num: AD8, peripheral: LPI2C0, signal: lpi2c_sda, pin_signal: PTA17, ODE: OPEN_DRAIN}
  - {pin_num: AE6, peripheral: LPI2C1, signal: lpi2c_scl, pin_signal: PTA12, ODE: OPEN_DRAIN}
  - {pin_num: AJ2, peripheral: LPI2C1, signal: lpi2c_sda, pin_signal: PTA13, ODE: OPEN_DRAIN}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitI2cPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitI2cPins(void) {                             /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA12_LPI2C1_SCL, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA12_LPI2C1_SCL,
                        IOMUXC_PCR_ODE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA13_LPI2C1_SDA, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA13_LPI2C1_SDA,
                        IOMUXC_PCR_ODE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA16_LPI2C0_SCL, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA16_LPI2C0_SCL,
                        IOMUXC_PCR_ODE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA17_LPI2C0_SDA, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA17_LPI2C0_SDA,
                        IOMUXC_PCR_ODE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPmicI2cPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AJ14, peripheral: POWERSYS, signal: pmic_scl, pin_signal: PTB11, ODE: OPEN_DRAIN}
  - {pin_num: AH14, peripheral: POWERSYS, signal: pmic_sda, pin_signal: PTB10, ODE: OPEN_DRAIN}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPmicI2cPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPmicI2cPins(void) {                         /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTB10_PMIC0_SDA, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB10_PMIC0_SDA,
                        IOMUXC_PCR_ODE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB11_PMIC0_SCL, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB11_PMIC0_SCL,
                        IOMUXC_PCR_ODE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitI2sPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AB6, peripheral: I2S0, signal: 'i2s_rxd, 0', pin_signal: PTA2}
  - {pin_num: AD4, peripheral: I2S0, signal: i2s_mclk, pin_signal: PTA4, DSE: HIDRIVE, OBE: ENABLED}
  - {pin_num: AB5, peripheral: I2S0, signal: i2s_rx_bclk, pin_signal: PTA0, DSE: HIDRIVE}
  - {pin_num: AD5, peripheral: I2S0, signal: i2s_rx_fs, pin_signal: PTA1, DSE: HIDRIVE}
  - {pin_num: AF2, peripheral: I2S0, signal: 'i2s_txd, 0', pin_signal: PTA7, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitI2sPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitI2sPins(void) {                             /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA0_I2S0_RX_BCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA0_I2S0_RX_BCLK,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA1_I2S0_RX_FS, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA1_I2S0_RX_FS,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA2_I2S0_RXD0, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA4_I2S0_MCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA4_I2S0_MCLK,
                        IOMUXC_PCR_OBE_MASK |
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA7_I2S0_TXD0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA7_I2S0_TXD0,
                        IOMUXC_PCR_DSE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitTpmPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AF16, peripheral: TPM3, signal: 'tpm_ch, 5', pin_signal: PTB13, PS: DOWN, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitTpmPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitTpmPins(void) {                             /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTB13_TPM3_CH5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB13_TPM3_CH5,
                        IOMUXC_PCR_DSE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitTouchIntPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AH1, peripheral: GPIOA, signal: 'pta, 5', pin_signal: PTA5, PS: UP, PE: ENABLED}
  - {pin_num: AF1, peripheral: GPIOA, signal: 'pta, 6', pin_signal: PTA6, PS: UP, PE: ENABLED}
  - {pin_num: AJ4, peripheral: GPIOA, signal: 'pta, 19', pin_signal: PTA19, PS: UP, PE: ENABLED}
  - {pin_num: AF12, peripheral: GPIOB, signal: 'ptb, 5', pin_signal: PTB5, PS: UP, PE: ENABLED}
  - {pin_num: AE24, peripheral: GPIOC, signal: 'ptc, 23', pin_signal: PTC23, PS: UP, PE: ENABLED, SRE: STANDARD}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitTouchIntPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitTouchIntPins(void) {                        /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA19_PTA19, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA19_PTA19,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA5_PTA5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA5_PTA5,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA6_PTA6, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA6_PTA6,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB5_PTB5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB5_PTB5,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC23_PTC23, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC23_PTC23,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPmicModePins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AJ12, peripheral: POWERSYS, signal: 'pmic_mode, 0', pin_signal: PTB9, PS: UP, PE: ENABLED}
  - {pin_num: AF14, peripheral: POWERSYS, signal: 'pmic_mode, 1', pin_signal: PTB8, PS: UP, PE: ENABLED}
  - {pin_num: AF13, peripheral: POWERSYS, signal: 'pmic_mode, 2', pin_signal: PTB7, PS: UP, PE: ENABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPmicModePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPmicModePins(void) {                        /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTB7_PMIC0_MODE2, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB7_PMIC0_MODE2,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB8_PMIC0_MODE1, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB8_PMIC0_MODE1,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB9_PMIC0_MODE0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB9_PMIC0_MODE0,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPsRamPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AH23, peripheral: FLEXSPI1, signal: flexspi_a_ss0_b, pin_signal: PTC17, PS: UP, PE: ENABLED, SRE: STANDARD, DSE: HIDRIVE}
  - {pin_num: AF22, peripheral: FLEXSPI1, signal: flexspi_a_sclk, pin_signal: PTC18, PS: UP, PE: ENABLED, ODE: PUSH_PULL, DSE: HIDRIVE}
  - {pin_num: AF21, peripheral: FLEXSPI1, signal: flexspi_a_dqs, pin_signal: PTC12, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AH20, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 7', pin_signal: PTC13, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AE21, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 6', pin_signal: PTC14, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AJ22, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 5', pin_signal: PTC15, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AD21, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 4', pin_signal: PTC16, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AJ24, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 3', pin_signal: PTC19, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AE22, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 2', pin_signal: PTC20, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AH24, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 1', pin_signal: PTC21, PS: UP, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AD22, peripheral: FLEXSPI1, signal: 'flexspi_a_data, 0', pin_signal: PTC22, PS: UP, PE: ENABLED, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPsRamPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPsRamPins(void) {                           /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTC12_FLEXSPI1_A_DQS, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC12_FLEXSPI1_A_DQS,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC13_FLEXSPI1_A_DATA7, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC13_FLEXSPI1_A_DATA7,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC14_FLEXSPI1_A_DATA6, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC14_FLEXSPI1_A_DATA6,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC15_FLEXSPI1_A_DATA5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC15_FLEXSPI1_A_DATA5,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC16_FLEXSPI1_A_DATA4, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC16_FLEXSPI1_A_DATA4,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC17_FLEXSPI1_A_SS0_B, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC17_FLEXSPI1_A_SS0_B,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC18_FLEXSPI1_A_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC18_FLEXSPI1_A_SCLK,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC19_FLEXSPI1_A_DATA3, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC19_FLEXSPI1_A_DATA3,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC20_FLEXSPI1_A_DATA2, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC20_FLEXSPI1_A_DATA2,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC21_FLEXSPI1_A_DATA1, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC21_FLEXSPI1_A_DATA1,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC22_FLEXSPI1_A_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC22_FLEXSPI1_A_DATA0,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitSpiFlashPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AF18, peripheral: FLEXSPI0, signal: flexspi_a_dqs, pin_signal: PTC0, PS: DOWN, PE: ENABLED, DSE: HIDRIVE}
  - {pin_num: AJ16, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 7', pin_signal: PTC1, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AH22, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 0', pin_signal: PTC10, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AE17, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 6', pin_signal: PTC2, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AJ18, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 5', pin_signal: PTC3, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AF17, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 4', pin_signal: PTC4, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AH18, peripheral: FLEXSPI0, signal: flexspi_a_ss0_b, pin_signal: PTC5, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AE18, peripheral: FLEXSPI0, signal: flexspi_a_sclk, pin_signal: PTC6, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AH19, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 3', pin_signal: PTC7, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AD18, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 2', pin_signal: PTC8, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
  - {pin_num: AJ20, peripheral: FLEXSPI0, signal: 'flexspi_a_data, 1', pin_signal: PTC9, PS: DOWN, PE: DISABLED, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitSpiFlashPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitSpiFlashPins(void) {                        /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTC0_FLEXSPI0_A_DQS, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC0_FLEXSPI0_A_DQS,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_PE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC1_FLEXSPI0_A_DATA7, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC1_FLEXSPI0_A_DATA7,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC10_FLEXSPI0_A_DATA0, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC10_FLEXSPI0_A_DATA0,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC2_FLEXSPI0_A_DATA6, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC2_FLEXSPI0_A_DATA6,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC3_FLEXSPI0_A_DATA5, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC3_FLEXSPI0_A_DATA5,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC4_FLEXSPI0_A_DATA4, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC4_FLEXSPI0_A_DATA4,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC5_FLEXSPI0_A_SS0_B, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC5_FLEXSPI0_A_SS0_B,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC6_FLEXSPI0_A_SCLK, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC6_FLEXSPI0_A_SCLK,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC7_FLEXSPI0_A_DATA3, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC7_FLEXSPI0_A_DATA3,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC8_FLEXSPI0_A_DATA2, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC8_FLEXSPI0_A_DATA2,
                        IOMUXC_PCR_DSE_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTC9_FLEXSPI0_A_DATA1, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTC9_FLEXSPI0_A_DATA1,
                        IOMUXC_PCR_DSE_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPdmPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: AD12, peripheral: MICFIL0, signal: 'micfil_clk, 01', pin_signal: PTB0}
  - {pin_num: AH11, peripheral: MICFIL0, signal: 'micfil_data, 01', pin_signal: PTB1, PS: UP, PE: ENABLED}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPdmPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPdmPins(void) {                             /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTB0_MICFIL0_CLK01, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTB1_MICFIL0_DATA01, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB1_MICFIL0_DATA01,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/

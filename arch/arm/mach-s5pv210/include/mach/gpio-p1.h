/* linux/arch/arm/mach-s5pv210/include/mach/gpio-p1.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 * http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/
#ifndef __GPIO_P1_H_
#define __GPIO_P1_H_

#define GPIO_LEVEL_LOW          0
#define GPIO_LEVEL_HIGH         1
#define GPIO_LEVEL_NONE         2
#define GPIO_INPUT              0
#define GPIO_OUTPUT             1

//GPA0
//-------------------------------------------------------------
#define GPIO_BT_UART_RXD        S5PV210_GPA0(0)
#define GPIO_BT_UART_RXD_AF     2
#define GPIO_BT_RXD             S5PV210_GPA0(0)
#define GPIO_BT_RXD_AF          2
#define GPIO_BT_UART_TXD        S5PV210_GPA0(1)
#define GPIO_BT_UART_TXD_AF     2
#define GPIO_BT_TXD             S5PV210_GPA0(1)
#define GPIO_BT_TXD_AF          2
#define GPIO_BT_UART_CTS        S5PV210_GPA0(2)
#define GPIO_BT_UART_CTS_AF     2
#define GPIO_BT_CTS             S5PV210_GPA0(2)
#define GPIO_BT_CTS_AF          2
#define GPIO_BT_UART_RTS        S5PV210_GPA0(3)
#define GPIO_BT_UART_RTS_AF     2
#define GPIO_BT_RTS             S5PV210_GPA0(3)
#define GPIO_BT_RTS_AF          2
#define GPIO_GPS_UART_RXD       S5PV210_GPA0(4)
#define GPIO_GPS_UART_RXD_AF    2
#define GPIO_GPS_RXD            S5PV210_GPA0(4)
#define GPIO_GPS_RXD_AF         2
#define GPIO_GPS_UART_TXD       S5PV210_GPA0(5)
#define GPIO_GPS_UART_TXD_AF    2
#define GPIO_GPS_TXD            S5PV210_GPA0(5)
#define GPIO_GPS_TXD_AF         2
#define GPIO_GPS_UART_CTS       S5PV210_GPA0(6)
#define GPIO_GPS_UART_CTS_AF    2
#define GPIO_GPS_CTS            S5PV210_GPA0(6)
#define GPIO_GPS_CTS_AF         2
#define GPIO_GPS_UART_RTS       S5PV210_GPA0(7)
#define GPIO_GPS_UART_RTS_AF    2
#define GPIO_GPS_RTS            S5PV210_GPA0(7)
#define GPIO_GPS_RTS_AF         2

//GPA1
//-------------------------------------------------------------
#define GPIO_AP_RXD             S5PV210_GPA1(0)
#define GPIO_AP_RXD_AF          2
#define GPIO_AP_TXD             S5PV210_GPA1(1)
#define GPIO_AP_TXD_AF          2
#define GPIO_AP_FLM_RXD         S5PV210_GPA1(2)
#define GPIO_AP_FLM_RXD_AF      2
#define GPIO_FLM_RXD            S5PV210_GPA1(2)
#define GPIO_FLM_RXD_AF         2
#define GPIO_AP_FLM_TXD         S5PV210_GPA1(3)
#define GPIO_AP_FLM_TXD_AF      2
#define GPIO_FLM_TXD            S5PV210_GPA1(3)
#define GPIO_FLM_TXD_AF         2

//GPB**
//-------------------------------------------------------------
#define GPIO_CAM_VGA_nSTBY      S5PV210_GPB(0)
#define GPIO_MSENSE_nRST        S5PV210_GPB(1)
#define GPIO_CAM_VGA_nRST       S5PV210_GPB(2)
#define GPIO_BT_nRST            S5PV210_GPB(3)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_HWREV_MODE3        S5PV210_GPB(4)
#define GPIO_HWREV_MODE2        S5PV210_GPB(5)
#define GPIO_HWREV_MODE1        S5PV210_GPB(6)
#define GPIO_HWREV_MODE0        S5PV210_GPB(7)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_BOOT_MODE          S5PV210_GPB(4)
//#define GPIO_WLAN_BT_EN       S5PV210_GPB(5)
#define GPIO_GPB6               S5PV210_GPB(6)
#define GPIO_GPB7               S5PV210_GPB(7)

#endif

#define GPIO_TOUCH_RST          S5PV210_GPB(6)
#define GPIO_TOUCH_ST_AF        1


//GPC0
//-------------------------------------------------------------
#define GPIO_REC_PCM_CLK        S5PV210_GPC0(0)
#define GPIO_REC_PCM_CLK_AF     3
#define GPIO_GPC01              S5PV210_GPC0(1)
#define GPIO_REC_PCM_SYNC       S5PV210_GPC0(2)
#define GPIO_REC_PCM_SYNC_AF    3
#define GPIO_REC_PCM_IN         S5PV210_GPC0(3)
#define GPIO_REC_PCM_IN_AF      3
#define GPIO_REC_PCM_OUT        S5PV210_GPC0(4)
#define GPIO_REC_PCM_OUT_AF     3

//GPC1**
//-------------------------------------------------------------
#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_I2S_SCLK_18V       S5PV210_GPC1(0)
#define GPIO_I2S_MCLK_18V       S5PV210_GPC1(1)
#define GPIO_I2S_LRCLK_18V      S5PV210_GPC1(2)
#define GPIO_I2S_DATA_18V       S5PV210_GPC1(3)
#define GPIO_GPC14              S5PV210_GPC1(4)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define BLOW_PCM_CLK			S5PV210_GPC1(0)
#define GPIO_GPC11			    S5PV210_GPC1(1)
#define GPIO_GPC12		    	S5PV210_GPC1(2)
#define GPIO_GPC13		    	S5PV210_GPC1(3)
#define GPIO_GPC14		    	S5PV210_GPC1(4)
// CMC623
#define GPIO_CMC_SLEEP			S5PV210_GPC1(0)
#define GPIO_CMC_SLEEP_AF		2
#define GPIO_CMC_EN				S5PV210_GPC1(1)
#define GPIO_CMC_EN_AF			2
#define GPIO_CMC_RST			S5PV210_GPC1(2)
#define GPIO_CMC_RST_AF			2
#define GPIO_CMC_SHDN			S5PV210_GPC1(3)
#define GPIO_CMC_SHDN_AF		2
#define GPIO_CMC_BYPASS			S5PV210_GPC1(4)
#define GPIO_CMC_BYPASS_AF		2

#endif

//GPD0**
//-------------------------------------------------------------
#define GPIO_GPD00              S5PV210_GPD0(0)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ATV_RSTn_REV07     S5PV210_GPD0(1)
#define GPIO_HWREV_MODE4        S5PV210_GPD0(2)

#endif

#define GPIO_VIBTONE_PWM        S5PV210_GPD0(1)
#define GPIO_VIBTONE_PWM1       S5PV210_GPD0(2)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ATV_RSTn_REV10     S5PV210_GPD0(3)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_GPD03			S5PV210_GPD0(3)

#endif

//GPD1
//-------------------------------------------------------------
#define GPIO_CAM_SDA_29V        S5PV210_GPD1(0)
#define GPIO_CAM_SDA_29V_AF     2
#define GPIO_CAM_SCL_29V        S5PV210_GPD1(1)
#define GPIO_CAM_SCL_29V_AF     2
#define GYRO_SDA_28V            S5PV210_GPD1(2)
#define GYRO_SCL_28V            S5PV210_GPD1(3)
#define GPIO_TSP_SDA_28V        S5PV210_GPD1(4)
#define GPIO_TSP_SDA_28V_AF     2
#define GPIO_TSP_SCL_28V        S5PV210_GPD1(5)
#define GPIO_TSP_SCL_28V_AF     2

//GPE0
//-------------------------------------------------------------
#define GPIO_CAM_PCLK           S5PV210_GPE0(0)
#define GPIO_CAM_PCLK_AF        2
#define GPIO_CAM_VSYNC          S5PV210_GPE0(1)
#define GPIO_CAM_VSYNC_AF       2
#define GPIO_CAM_HSYNC          S5PV210_GPE0(2)
#define GPIO_CAM_HSYNC_AF       2
#define GPIO_CAM_D0             S5PV210_GPE0(3)
#define GPIO_CAM_D0_AF          2
#define GPIO_CAM_D1             S5PV210_GPE0(4)
#define GPIO_CAM_D1_AF          2
#define GPIO_CAM_D2             S5PV210_GPE0(5)
#define GPIO_CAM_D2_AF          2
#define GPIO_CAM_D3             S5PV210_GPE0(6)
#define GPIO_CAM_D3_AF          2
#define GPIO_CAM_D4             S5PV210_GPE0(7)
#define GPIO_CAM_D4_AF          2

//GPE1
//-------------------------------------------------------------
#define GPIO_CAM_D5             S5PV210_GPE1(0)
#define GPIO_CAM_D5_AF          2
#define GPIO_CAM_D6             S5PV210_GPE1(1)
#define GPIO_CAM_D6_AF          2
#define GPIO_CAM_D7             S5PV210_GPE1(2)
#define GPIO_CAM_D7_AF          2
#define GPIO_CAM_MCLK           S5PV210_GPE1(3)
#define GPIO_CAM_MCLK_AF        2
#define GPIO_GPE14              S5PV210_GPE1(4)

//GPF0
//-------------------------------------------------------------
#define GPIO_DISPLAY_HSYNC      S5PV210_GPF0(0)
#define GPIO_DISPLAY_HSYNC_AF   S3C_GPIO_SFN(2)
#define GPIO_DISPLAY_VSYNC      S5PV210_GPF0(1)
#define GPIO_DISPLAY_VSYNC_AF   S3C_GPIO_SFN(2)
#define GPIO_DISPLAY_DE         S5PV210_GPF0(2)
#define GPIO_DISPLAY_DE_AF      S3C_GPIO_SFN(2)
#define GPIO_DISPLAY_PCLK       S5PV210_GPF0(3)
#define GPIO_DISPLAY_PCLK_AF    S3C_GPIO_SFN(2)
#define GPIO_LCD_D0             S5PV210_GPF0(4)
#define GPIO_LCD_D0_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D1             S5PV210_GPF0(5)
#define GPIO_LCD_D1_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D2             S5PV210_GPF0(6)
#define GPIO_LCD_D2_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D3             S5PV210_GPF0(7)
#define GPIO_LCD_D3_AF          S3C_GPIO_SFN(2)

//GPF1
//-------------------------------------------------------------
#define GPIO_LCD_D4             S5PV210_GPF1(0)
#define GPIO_LCD_D4_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D5             S5PV210_GPF1(1)
#define GPIO_LCD_D5_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D6             S5PV210_GPF1(2)
#define GPIO_LCD_D6_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D7             S5PV210_GPF1(3)
#define GPIO_LCD_D7_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D8             S5PV210_GPF1(4)
#define GPIO_LCD_D8_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D9             S5PV210_GPF1(5)
#define GPIO_LCD_D9_AF          S3C_GPIO_SFN(2)
#define GPIO_LCD_D10            S5PV210_GPF1(6)
#define GPIO_LCD_D10_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D11            S5PV210_GPF1(7)
#define GPIO_LCD_D11_AF         S3C_GPIO_SFN(2)

//GPF2
//-------------------------------------------------------------
#define GPIO_LCD_D12            S5PV210_GPF2(0)
#define GPIO_LCD_D12_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D13            S5PV210_GPF2(1)
#define GPIO_LCD_D13_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D14            S5PV210_GPF2(2)
#define GPIO_LCD_D14_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D15            S5PV210_GPF2(3)
#define GPIO_LCD_D15_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D16            S5PV210_GPF2(4)
#define GPIO_LCD_D16_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D17            S5PV210_GPF2(5)
#define GPIO_LCD_D17_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D18            S5PV210_GPF2(6)
#define GPIO_LCD_D18_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D19            S5PV210_GPF2(7)
#define GPIO_LCD_D19_AF         S3C_GPIO_SFN(2)

//GPF3
//-------------------------------------------------------------
#define GPIO_LCD_D20            S5PV210_GPF3(0)
#define GPIO_LCD_D20_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D21            S5PV210_GPF3(1)
#define GPIO_LCD_D21_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D22            S5PV210_GPF3(2)
#define GPIO_LCD_D22_AF         S3C_GPIO_SFN(2)
#define GPIO_LCD_D23            S5PV210_GPF3(3)
#define GPIO_LCD_D23_AF         S3C_GPIO_SFN(2)
#define GPIO_CODEC_LDO_EN       S5PV210_GPF3(4)
#define GPIO_GPF35              S5PV210_GPF3(5)

//GPG0**
//-------------------------------------------------------------
#define GPIO_NAND_CLK           S5PV210_GPG0(0)
#define GPIO_NAND_CLK_AF        2
#define GPIO_NAND_CMD           S5PV210_GPG0(1)
#define GPIO_NAND_CMD_AF        2

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_TOUCH_INT          S5PV210_GPG0(2)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_ALS_SCL_28V		S5PV210_GPG0(2)

#endif

#define GPIO_NAND_D0            S5PV210_GPG0(3)
#define GPIO_NAND_D0_AF         2
#define GPIO_NAND_D1            S5PV210_GPG0(4)
#define GPIO_NAND_D1_AF         2
#define GPIO_NAND_D2            S5PV210_GPG0(5)
#define GPIO_NAND_D2_AF         2
#define GPIO_NAND_D3            S5PV210_GPG0(6)
#define GPIO_NAND_D3_AF         2

//GPG1**
//-------------------------------------------------------------
#define GPIO_GPS_nRST           S5PV210_GPG1(0)
#define GPIO_GPS_PWR_EN         S5PV210_GPG1(1)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ISDBT_RSTn         S5PV210_GPG1(2)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_WLAN_RST			S5PV210_GPG1(2)

#endif

#define GPIO_NAND_D4            S5PV210_GPG1(3)
#define GPIO_NAND_D4_AF         3
#define GPIO_NAND_D5            S5PV210_GPG1(4)
#define GPIO_NAND_D5_AF         3
#define GPIO_NAND_D6            S5PV210_GPG1(5)
#define GPIO_NAND_D6_AF         3
#define GPIO_NAND_D7            S5PV210_GPG1(6)
#define GPIO_NAND_D7_AF         3

//GPG2
//-------------------------------------------------------------
#define GPIO_T_FLASH_CLK        S5PV210_GPG2(0)
#define GPIO_T_FLASH_CLK_AF     2
#define GPIO_T_FLASH_CMD        S5PV210_GPG2(1)
#define GPIO_T_FLASH_CMD_AF     2
#define GPIO_ALS_nRST           S5PV210_GPG2(2)
#define GPIO_T_FLASH_D0         S5PV210_GPG2(3)
#define GPIO_T_FLASH_D0_AF      2
#define GPIO_T_FLASH_D1         S5PV210_GPG2(4)
#define GPIO_T_FLASH_D1_AF      2
#define GPIO_T_FLASH_D2         S5PV210_GPG2(5)
#define GPIO_T_FLASH_D2_AF      2
#define GPIO_T_FLASH_D3         S5PV210_GPG2(6)
#define GPIO_T_FLASH_D3_AF      2

//GPG3
//-------------------------------------------------------------
#define GPIO_WLAN_SDIO_CLK      S5PV210_GPG3(0)
#define GPIO_WLAN_SDIO_CLK_AF   2
#define GPIO_WLAN_SDIO_CMD      S5PV210_GPG3(1)
#define GPIO_WLAN_SDIO_CMD_AF   2
#define GPIO_WLAN_nRST          S5PV210_GPG3(2)
#define GPIO_WLAN_nRST_AF       1
#define GPIO_WLAN_SDIO_D0       S5PV210_GPG3(3)
#define GPIO_WLAN_SDIO_D0_AF    2
#define GPIO_WLAN_SDIO_D1       S5PV210_GPG3(4)
#define GPIO_WLAN_SDIO_D1_AF    2
#define GPIO_WLAN_SDIO_D2       S5PV210_GPG3(5)
#define GPIO_WLAN_SDIO_D2_AF    2
#define GPIO_WLAN_SDIO_D3       S5PV210_GPG3(6)
#define GPIO_WLAN_SDIO_D3_AF    2

//GPH0
//-------------------------------------------------------------
#define GPIO_AP_PS_HOLD         S5PV210_GPH0(0)
#define GPIO_AP_PS_HOLD_AF      1
#define GPIO_ACC_INT            S5PV210_GPH0(1)
#define GPIO_BUCK_1_EN_A        S5PV210_GPH0(2)
#define GPIO_BUCK_1_EN_B        S5PV210_GPH0(3)
#define GPIO_ACCESSORY_INT      S5PV210_GPH0(5)
#define GPIO_ACCESSORY_INT_AF   0xF
#define GPIO_BUCK_2_EN          S5PV210_GPH0(4)
#define GPIO_GPH06              S5PV210_GPH0(6) // Rev0.4
#define GPIO_AP_PMIC_IRQ        S5PV210_GPH0(7)
#define GPIO_AP_PMIC_IRQ_AF     0xFF

//GPH1
//-------------------------------------------------------------
#define GPIO_GPH10              S5PV210_GPH1(0)
#define GPIO_DET_35             S5PV210_GPH1(0)
#define GPIO_DET_35_AF          0xF
#define GPIO_TA_nCHG            S5PV210_GPH1(1)
#define GPIO_GPH12              S5PV210_GPH1(2)
#define GPIO_MHL_INT            S5PV210_GPH1(2)
#define GPIO_nINT_ONEDRAM_AP    S5PV210_GPH1(3)
#define GPIO_nINT_ONEDRAM_AP_AF 0xF
#define GPIO_GPH14              S5PV210_GPH1(4)
#define GPIO_EAR_SEND_END       S5PV210_GPH1(4)
#define GPIO_EAR_SEND_END_AF    0xF
#define NFC_IRQ                 S5PV210_GPH1(4)
#define GPIO_GPH15              S5PV210_GPH1(5)
#define GPIO_HDMI_HPD           S5PV210_GPH1(5)
#define NFC_EN                  S5PV210_GPH1(5)
#define GPIO_HDMI_HPD_AF        4
#define GPIO_GPH16              S5PV210_GPH1(6)
#define GPIO_FUEL_ARLT          S5PV210_GPH1(6)
#define NFC_FIRM                S5PV210_GPH1(6)
#define GPIO_PHONE_ACTIVE       S5PV210_GPH1(7)
#define GPIO_PHONE_ACTIVE_AF    2

//GPH2**
//-------------------------------------------------------------
#define GPIO_KBC0               S5PV210_GPH2(0)
#define GPIO_KBC0_AF            3
#define GPIO_GPH20              S5PV210_GPH2(0)
#define GPIO_REMOTE_SENSE_IRQ   S5PV210_GPH2(0)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_TOUCH_EN           S5PV210_GPH2(1)
#define GPIO_TOUCH_EN_AF        1

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_KBC1			    S5PV210_GPH2(1)
#define GPIO_KBC1_AF			3

#endif

#define GPIO_GPH21              S5PV210_GPH2(1) // Rev0.5
#define GPIO_TOUCH_EN_REV06     S5PV210_GPH2(1)
#define GPIO_TOUCH_EN_REV06_AF  1
#define GPIO_KBC2               S5PV210_GPH2(2)
#define GPIO_KBC2_AF            3
#define GPIO_GPH22              S5PV210_GPH2(2)
#define GPIO_GYRO_INT           S5PV210_GPH2(2)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_35_INT_TEST        S5PV210_GPH2(3) // Rev1.1 (Only latin HW05)

#endif

#define GPIO_TOUCH_KEY_INT      S5PV210_GPH2(3)
#define GPIO_GPH23              S5PV210_GPH2(3)
#define GPIO_WLAN_HOST_WAKE     S5PV210_GPH2(4)
#define GPIO_WLAN_HOST_WAKE_AF  0xF
#define GPIO_BT_HOST_WAKE       S5PV210_GPH2(5)
#define GPIO_BT_HOST_WAKE_AF    0xF
#define GPIO_nPOWER             S5PV210_GPH2(6)
#define GPIO_N_POWER            S5PV210_GPH2(6)
#define GPIO_N_POWER_AF         2
#define GPIO_JACK_nINT          S5PV210_GPH2(7)
#define GPIO_JACK_INT_N         S5PV210_GPH2(7)
#define GPIO_JACK_INT_N_AF      0xFF

//GPH3
//-------------------------------------------------------------
#define GPIO_TA_CURRENT_SEL_AP  S5PV210_GPH3(0)
#define GPIO_KBR1               S5PV210_GPH3(1)
#define GPIO_KBR1_AF            3
#define GPIO_MSENSE_IRQ         S5PV210_GPH3(2)
#define GPIO_GPH33              S5PV210_GPH3(3) // NC
#define GPIO_SIM_nDETECT        S5PV210_GPH3(3)
#define GPIO_T_FLASH_DETECT     S5PV210_GPH3(4)
#define GPIO_T_FLASH_DETECT_AF  0xF
/* EAR_SEN_END_OPEN */
#define GPIO_OK_KEY             S5PV210_GPH3(5)
#define GPIO_GPH35              S5PV210_GPH3(5) // Rev0.5
#define GPIO_DOCK_INT           S5PV210_GPH3(5)
#define GPIO_DOCK_INT_AF        0xF
#define GPIO_GPH36              S5PV210_GPH3(6) // Rev0.4
#define GPIO_CP_RST             S5PV210_GPH3(7)

//GPI
//-------------------------------------------------------------
#define GPIO_CODEC_I2S_CLK      S5PV210_GPI(0)
#define GPIO_CODEC_I2S_CLK_AF   2
#define GPIO_GPI1               S5PV210_GPI(1)
#define GPIO_CODEC_I2S_WS       S5PV210_GPI(2)
#define GPIO_CODEC_I2S_WS_AF    2
#define GPIO_CODEC_I3S_DI       S5PV210_GPI(3)
#define GPIO_CODEC_I3S_DI_AF    2
#define GPIO_CODEC_I3S_DO       S5PV210_GPI(4)
#define GPIO_CODEC_I3S_DO_AF    2
#define GPIO_GPI5               S5PV210_GPI(5)
#define GPIO_GPI6               S5PV210_GPI(6)

//GPJ0**
//-------------------------------------------------------------
#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ISDBT_SCL          S5PV210_GPJ0(0)
#define GPIO_ISDBT_SDA          S5PV210_GPJ0(1)
#define GPIO_ISDBT_CLK          S5PV210_GPJ0(2)
#define GPIO_ISDBT_SYNC         S5PV210_GPJ0(3)
#define GPIO_ISDBT_VALID        S5PV210_GPJ0(4)
#define GPIO_ISDBT_DATA         S5PV210_GPJ0(5)
#define GPIO_ISDBT_ERR          S5PV210_GPJ0(6)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_WLAN_BT_EN         S5PV210_GPJ0(0)
#define GPIO_HWREV_MODE3		S5PV210_GPJ0(1)
#define GPIO_HWREV_MODE0		S5PV210_GPJ0(2)
#define GPIO_HWREV_MODE1		S5PV210_GPJ0(3)
#define GPIO_HWREV_MODE2		S5PV210_GPJ0(4)
#define GPIO_TOUCH_INT			S5PV210_GPJ0(5)
#define	GPIO_TOUCH_INT_AF		0xFF
#define GPIO_HWREV_MODE4		S5PV210_GPJ0(6)

#endif

#define GPIO_HWREV_MODE5        S5PV210_GPJ0(7)

//GPJ1**
//-------------------------------------------------------------
#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_WLAN_BT_EN         S5PV210_GPJ1(0)

#elif defined(CONFIG_SAMSUNG_P1C)

#define GPIO_PHONE_ON           S5PV210_GPJ1(0)

#endif

#define GPIO_VIBTONE_EN1        S5PV210_GPJ1(1)
#define GPIO_MASSMEMORY_EN      S5PV210_GPJ1(1) // Rev0.6
#define GPIO_CAM_MEGA_EN        S5PV210_GPJ1(2)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ISDBT_PWR_EN       S5PV210_GPJ1(3)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_TOUCH_EN			S5PV210_GPJ1(3)
#define	GPIO_TOUCH_EN_AF		1

#endif

#define GPIO_PS_ON              S5PV210_GPJ1(4)
#define GPIO_CAM_MEGA_nRST      S5PV210_GPJ1(5)

//GPJ2**
//-------------------------------------------------------------
#define GPIO_CHARGER_SDA_2_8V   S5PV210_GPJ2(0)
#define GPIO_CHARGER_SCL_2_8V   S5PV210_GPJ2(1)
#define GPIO_OLED_DET           S5PV210_GPJ2(2)
#define GPIO_HDMI_EN1           S5PV210_GPJ2(2)
#define GPIO_USB_SW_SCL         S5PV210_GPJ2(3)
#define GPIO_EAR_SEL            S5PV210_GPJ2(3)
#define GPIO_FM_INT             S5PV210_GPJ2(4)
#define GPIO_BT_WAKE            S5PV210_GPJ2(4)
#define GPIO_WLAN_WAKE          S5PV210_GPJ2(5)
#define GPIO_WLAN_WAKE_AF       1

#if defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_FM_RST			    S5PV210_GPJ2(5)

#endif

#define GPIO_LCD_LDO_EN         S5PV210_GPJ2(6)
#define GPIO_USB_SW_SDA         S5PV210_GPJ2(7)

//GPJ3**
//-------------------------------------------------------------
#define GPIO_AP_SDA_2_8V        S5PV210_GPJ3(0)
#define GPIO_AP_SCL_2_8V        S5PV210_GPJ3(1)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_ATV_RSTn           S5PV210_GPJ3(2)
#define GPIO_ISDBT_PWR_EN_REV10 S5PV210_GPJ3(2)

#elif defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define _3_GPIO_TOUCH_EN		S5PV210_GPJ3(2)
#define _3_GPIO_TOUCH_EN_AF		1

#endif

#define GPIO_FUEL_AP_SCL        S5PV210_GPJ3(3)
#define GPIO_EAR_ADC_SEL_AF     1
#define _3_GPIO_TOUCH_CE        S5PV210_GPJ3(3)
#define GPIO_FUEL_AP_SDA        S5PV210_GPJ3(4)
#define GPIO_TA_EN              S5PV210_GPJ3(5)
#define GPIO_AP_SDA_28V         S5PV210_GPJ3(6)
#define AP_I2C_SDA_28V          S5PV210_GPJ3(6)
#define GPIO_AP_SCL_28V         S5PV210_GPJ3(7)
#define AP_I2C_SCL_28V          S5PV210_GPJ3(7)

//GPJ4
//-------------------------------------------------------------
#define GPIO_AP_PMIC_SDA        S5PV210_GPJ4(0)
#define PMIC_I2C_SDA            S5PV210_GPJ4(0)
#define GPIO_MASSMEMORY_EN2_REV06 S5PV210_GPJ4(1) // Rev0.6
#define _3_GPIO_TOUCH_INT       S5PV210_GPJ4(1)
#define _3_GPIO_TOUCH_INT_AF    S3C_GPIO_SFN(0xf)
#define GPIO_MICBIAS_EN         S5PV210_GPJ4(2)
#define GPIO_AP_PMIC_SCL        S5PV210_GPJ4(3)
#define PMIC_I2C_SCL            S5PV210_GPJ4(3)

//MP01**
//-------------------------------------------------------------
// CMC623
#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_CMC_SHDN           S5PV210_MP01(0)
#define GPIO_CMC_SHDN_AF        2
#define GPIO_CMC_SLEEP          S5PV210_MP01(1)
#define GPIO_CMC_SLEEP_AF       2

#endif

#define GPIO_MP010              S5PV210_MP01(0)
#define GPIO_DISPLAY_CS         S5PV210_MP01(1)
#define GPIO_RESET_REQ_N        S5PV210_MP01(2)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_CMC_RST            S5PV210_MP01(3)
#define GPIO_CMC_RST_AF         2

#endif

#define GPIO_OLED_ID            S5PV210_MP01(3)
#define GPIO_AP_NANDCS          S5PV210_MP01(4)
#define GPIO_AP_NANDCS_AF       5
#define GPIO_DIC_ID             S5PV210_MP01(5)

#if defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_EAR_MICBIAS_EN     S5PV210_MP01(5)

#endif

#define GPIO_MP016              S5PV210_MP01(6)
#define GPIO_MP017              S5PV210_MP01(7)

//MP02
//-------------------------------------------------------------
#define GPIO_MP020              S5PV210_MP02(0)
#define GPIO_MP021              S5PV210_MP02(1)
#define GPIO_VCC_19V_PDA        S5PV210_MP02(2)
#define GPIO_MP023              S5PV210_MP02(3)

//MP03
//-------------------------------------------------------------
#define GPIO_MP030              S5PV210_MP03(0)
#define GPIO_MP031              S5PV210_MP03(1)
#define GPIO_MP032              S5PV210_MP03(2)
#define GPIO_PDA_ACTIVE         S5PV210_MP03(3)
#define GPIO_VCC_18V_PDA        S5PV210_MP03(4)
#define GPIO_CP_nRST            S5PV210_MP03(5)
#define GPIO_MP036              S5PV210_MP03(6)
#define GPIO_PCM_SEL            S5PV210_MP03(7)

//MP04**
//-------------------------------------------------------------
#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_GPS_CLK_EN         S5PV210_MP04(0)

#endif

#define GPIO_USB_SEL            S5PV210_MP04(0)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_TV_CLK_EN          S5PV210_MP04(1)

#endif

#define GPIO_DISPLAY_CLK        S5PV210_MP04(1)
#define GPIO_MP042              S5PV210_MP04(2)
#define GPIO_DISPLAY_SI         S5PV210_MP04(3)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_CMC_EN             S5PV210_MP04(4)
#define GPIO_CMC_EN_AF          1

#endif

#define GPIO_MP044              S5PV210_MP04(4)
#define NFC_SCL_18V             S5PV210_MP04(4)
#define GPIO_CMC_SDA_18V        S5PV210_MP04(5) // Rev0.9
#define GPIO_LVDS_RST           S5PV210_MP04(5)
#define NFC_SDA_18V             S5PV210_MP04(5)

#if defined(CONFIG_SAMSUNG_P1) || defined(CONFIG_SAMSUNG_P1C)

#define GPIO_GPS_CLK_EN			S5PV210_MP04(6)

#endif

#define GPIO_CMC_SCL_18V        S5PV210_MP04(6) // Rev1.2
#define GPIO_MHL_RST            S5PV210_MP04(7)

//MP05**
//-------------------------------------------------------------
#define FUEL_SCL_18V            S5PV210_MP05(0)
#define FUEL_SDA_18V            S5PV210_MP05(1)
#define GPIO_EAR_MICBIAS0_EN    S5PV210_MP05(1)
#define GPIO_AP_SCL_18V         S5PV210_MP05(2)
#define GPIO_AP_SDA_18V         S5PV210_MP05(3)
#define GPIO_MP054              S5PV210_MP05(4)
#define GPIO_LVDS_SHDN          S5PV210_MP05(4)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_EAR_MICBIAS_EN     S5PV210_MP05(5)

#endif

#define GPIO_MLCD_RST           S5PV210_MP05(5)

#if defined(CONFIG_SAMSUNG_P1L) || defined(CONFIG_SAMSUNG_P1N)

#define GPIO_CMC_BYPASS         S5PV210_MP05(6)
#define GPIO_CMC_BYPASS_AF      2

#endif

#define GPIO_MP056              S5PV210_MP05(6)
#define GPIO_UART_SEL           S5PV210_MP05(7)
#define AP_I2C_SDA              S5PV210_MP05(3)
#define AP_I2C_SCL              S5PV210_MP05(2)

#define GPIO_KBC_DATA           (GPIO_KBC2 + 0x04)
#define GPIO_KBR_DATA           (GPIO_KBR1 + 0x04)

#endif
/* end of __GPIO_P1_H_ */


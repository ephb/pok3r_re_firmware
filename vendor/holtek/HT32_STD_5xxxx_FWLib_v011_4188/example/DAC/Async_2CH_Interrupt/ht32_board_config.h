/*********************************************************************************************************//**
 * @file    DAC/Async_2CH_Interrupt/ht32_board_config.h
 * @version $Rev:: 4003         $
 * @date    $Date:: 2019-07-05 #$
 * @brief   The header file of board configuration.
 *************************************************************************************************************
 * @attention
 *
 * Firmware Disclaimer Information
 *
 * 1. The customer hereby acknowledges and agrees that the program technical documentation, including the
 *    code, which is supplied by Holtek Semiconductor Inc., (hereinafter referred to as "HOLTEK") is the
 *    proprietary and confidential intellectual property of HOLTEK, and is protected by copyright law and
 *    other intellectual property laws.
 *
 * 2. The customer hereby acknowledges and agrees that the program technical documentation, including the
 *    code, is confidential information belonging to HOLTEK, and must not be disclosed to any third parties
 *    other than HOLTEK and the customer.
 *
 * 3. The program technical documentation, including the code, is provided "as is" and for customer reference
 *    only. After delivery by HOLTEK, the customer shall use the program technical documentation, including
 *    the code, at their own risk. HOLTEK disclaims any expressed, implied or statutory warranties, including
 *    the warranties of merchantability, satisfactory quality and fitness for a particular purpose.
 *
 * <h2><center>Copyright (C) Holtek Semiconductor Inc. All rights reserved</center></h2>
 ************************************************************************************************************/
/* Define to prevent recursive inclusion -------------------------------------------------------------------*/
#ifndef __HT32_BOARD_CONFIG_H
#define __HT32_BOARD_CONFIG_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Settings ------------------------------------------------------------------------------------------------*/
#if (LIBCFG_DAC)
#else
  #error "This example code does not apply to the chip you selected."
#endif

#if defined(USE_HT32F57352_SK)
  #define HTCFG_DAC0_AFIO_PORT         (GPIO_PC)
  #define HTCFG_DAC0_AFIO_PIN          (AFIO_PIN_3)

  #define HTCFG_DAC1_AFIO_PORT         (GPIO_PB)
  #define HTCFG_DAC1_AFIO_PIN          (AFIO_PIN_8)
#endif

#if defined(USE_HT32F52367_SK)
  #define HTCFG_DAC0_AFIO_PORT         (GPIO_PC)
  #define HTCFG_DAC0_AFIO_PIN          (AFIO_PIN_3)

  #define HTCFG_DAC1_AFIO_PORT         (GPIO_PB)
  #define HTCFG_DAC1_AFIO_PIN          (AFIO_PIN_8)
#endif

#ifdef __cplusplus
}
#endif

#endif

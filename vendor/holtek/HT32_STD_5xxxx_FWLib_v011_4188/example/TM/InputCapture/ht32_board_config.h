/*********************************************************************************************************//**
 * @file    TM/InputCapture/ht32_board_config.h
 * @version $Rev:: 4000         $
 * @date    $Date:: 2019-07-05#$
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
#if defined(USE_HT32F52230_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   10000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PB)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F52241_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   10000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F52253_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   10000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_14)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM2)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM2)
#endif

#if defined(USE_HT32F52341_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   12000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F52352_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_5)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   12000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PB)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F0008_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM1)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM1)
#endif

#if defined(USE_HT32F50230_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   5000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_8)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM1)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_3)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM1)
#endif

#if defined(USE_HT32F50241_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   5000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_8)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM1)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_3)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM1)
#endif

#if defined(USE_HT32F52354_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F0006_DVB)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_5)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   12000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_SCTM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_SCTM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.SCTM0)
#endif

#if defined(USE_HT32F57341_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_11)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PB)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_1)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM0)
#endif

#if defined(USE_HT32F57352_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PC)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_11)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PB)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM0)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_1)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM0)
#endif

#if defined(USE_HT32F50343_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_3)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM1)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_3)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM1)
#endif

#if defined(USE_HT32F52367_SK)
  #define HTCFG_INPUT_CAPTURE_GPTM_GPIO_ID                (GPIO_PA)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_PIN               (AFIO_PIN_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_CHANNEL                (TM_CH_1)
  #define HTCFG_INPUT_CAPTURE_GPTM_IRQn                   (GPTM0_IRQn)
  #define HTCFG_INPUT_CAPTURE_GPTM                        (HT_GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_AFIO_MODE              (AFIO_FUN_MCTM_GPTM)
  #define HTCFG_INPUT_CAPTURE_GPTM_CLK(CK)                (CK.Bit.GPTM0)
  #define HTCFG_INPUT_CAPTURE_GPTM_CCR                    (TM_INT_CH1CC)
  #define HTCFG_INPUT_CAPTURE_PRESCALER                   15000

  #define HTCFG_OUTPUT_PWM_BY_SCTM_GPIO_ID                (GPIO_PD)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_AFIO_PIN               (AFIO_PIN_4)
  #define HTCFG_OUTPUT_PWM_BY_SCTM                        (HT_PWM1)
  #define HTCFG_OUTPUT_PWM_BY_AFIO_MODE                   (AFIO_FUN_PWM)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CHANNEL                (TM_CH_0)
  #define HTCFG_OUTPUT_PWM_BY_SCTM_CLK(CK)                (CK.Bit.PWM1)
#endif

#ifdef __cplusplus
}
#endif

#endif
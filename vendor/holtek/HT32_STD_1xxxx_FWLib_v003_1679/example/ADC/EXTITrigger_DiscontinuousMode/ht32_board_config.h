/*********************************************************************************************************//**
 * @file    ADC/EXTITrigger_DiscontinuousMode/ht32_board_config.h
 * @version $Rev:: 427          $
 * @date    $Date:: 2017-07-04 #$
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
#if defined(USE_HT32F1653_54)
  #define HTCFG_VR_GPIO_ID                  (GPIO_PC)
  #define HTCFG_VR_AFIO_PIN                 (AFIO_PIN_9)
  #define HTCFG_VR_ADC_CH                   (ADC_CH_8)

  #define HTCFG_OTHER0_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER0_AFIO_PIN             (AFIO_PIN_0)
  #define HTCFG_OTHER0_ADC_CH               (ADC_CH_0)

  #define HTCFG_OTHER1_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER1_AFIO_PIN             (AFIO_PIN_1)
  #define HTCFG_OTHER1_ADC_CH               (ADC_CH_1)

  #define HTCFG_EXTI_CK(ck)                 ck.Bit.PD
  #define HTCFG_EXTI_GPIO_PORT              (HT_GPIOD)
  #define HTCFG_EXTI_GPIO_PIN               (GPIO_PIN_1)
  #define HTCFG_EXTI_AFIO                   (AFIO_EXTI_CH_1)
  #define HTCFG_EXTI_ESS                    (AFIO_ESS_PD)
  #define HTCFG_EXTI_CH                     (EXTI_CHANNEL_1)
  #define HTCFG_DEBOUNCE_COUNT              (72)
  #define HTCFG_ADC_TRIG_EXTI               (ADC_TRIG_EXTI_1)
  #define HTCFG_ADC_PRESCALER               (CKCU_ADCPRE_DIV6)
#endif

#if defined(USE_HT32F1655_56)
  #define HTCFG_VR_GPIO_ID                  (GPIO_PC)
  #define HTCFG_VR_AFIO_PIN                 (AFIO_PIN_11)
  #define HTCFG_VR_ADC_CH                   (ADC_CH_15)

  #define HTCFG_OTHER0_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER0_AFIO_PIN             (AFIO_PIN_0)
  #define HTCFG_OTHER0_ADC_CH               (ADC_CH_0)

  #define HTCFG_OTHER1_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER1_AFIO_PIN             (AFIO_PIN_1)
  #define HTCFG_OTHER1_ADC_CH               (ADC_CH_1)

  #define HTCFG_EXTI_CK(ck)                 ck.Bit.PE
  #define HTCFG_EXTI_GPIO_PORT              (HT_GPIOE)
  #define HTCFG_EXTI_GPIO_PIN               (GPIO_PIN_1)
  #define HTCFG_EXTI_AFIO                   (AFIO_EXTI_CH_1)
  #define HTCFG_EXTI_ESS                    (AFIO_ESS_PE)
  #define HTCFG_EXTI_CH                     (EXTI_CHANNEL_1)
  #define HTCFG_DEBOUNCE_COUNT              (72)
  #define HTCFG_ADC_TRIG_EXTI               (ADC_TRIG_EXTI_1)
  #define HTCFG_ADC_PRESCALER               (CKCU_ADCPRE_DIV6)
#endif

#if defined(USE_HT32F12345)
  #define HTCFG_VR_GPIO_ID                  (GPIO_PA)
  #define HTCFG_VR_AFIO_PIN                 (AFIO_PIN_6)
  #define HTCFG_VR_ADC_CH                   (ADC_CH_6)

  #define HTCFG_OTHER0_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER0_AFIO_PIN             (AFIO_PIN_0)
  #define HTCFG_OTHER0_ADC_CH               (ADC_CH_0)

  #define HTCFG_OTHER1_GPIO_ID              (GPIO_PA)
  #define HTCFG_OTHER1_AFIO_PIN             (AFIO_PIN_1)
  #define HTCFG_OTHER1_ADC_CH               (ADC_CH_1)

  #define HTCFG_EXTI_CK(ck)                 ck.Bit.PC
  #define HTCFG_EXTI_GPIO_PORT              (HT_GPIOC)
  #define HTCFG_EXTI_GPIO_PIN               (GPIO_PIN_4)
  #define HTCFG_EXTI_AFIO                   (AFIO_EXTI_CH_4)
  #define HTCFG_EXTI_ESS                    (AFIO_ESS_PC)
  #define HTCFG_EXTI_CH                     (EXTI_CHANNEL_4)
  #define HTCFG_DEBOUNCE_COUNT              (96)

  #define HTCFG_ADC_TRIG_EXTI               (ADC_TRIG_EXTI_4)
  #define HTCFG_ADC_PRESCALER               (CKCU_ADCPRE_DIV8)
#endif

#if defined(USE_HT32F12365_66)
  #define HTCFG_VR_GPIO_ID                 (GPIO_PE)
  #define HTCFG_VR_AFIO_PIN                (AFIO_PIN_12)
  #define HTCFG_VR_ADC_CH                  (ADC_CH_12)

  #define HTCFG_OTHER0_GPIO_ID             (GPIO_PA)
  #define HTCFG_OTHER0_AFIO_PIN            (AFIO_PIN_0)
  #define HTCFG_OTHER0_ADC_CH              (ADC_CH_0)

  #define HTCFG_OTHER1_GPIO_ID             (GPIO_PA)
  #define HTCFG_OTHER1_AFIO_PIN            (AFIO_PIN_1)
  #define HTCFG_OTHER1_ADC_CH              (ADC_CH_1)

  #define HTCFG_EXTI_CK(ck)                 ck.Bit.PD
  #define HTCFG_EXTI_GPIO_PORT              (HT_GPIOD)
  #define HTCFG_EXTI_GPIO_PIN               (GPIO_PIN_13)
  #define HTCFG_EXTI_AFIO                   (AFIO_EXTI_CH_13)
  #define HTCFG_EXTI_ESS                    (AFIO_ESS_PD)
  #define HTCFG_EXTI_CH                     (EXTI_CHANNEL_13)
  #define HTCFG_DEBOUNCE_COUNT              (96)

  #define HTCFG_ADC_TRIG_EXTI               (ADC_TRIG_EXTI_13)
  #define HTCFG_ADC_PRESCALER               (CKCU_ADCPRE_DIV8)
#endif

#ifdef __cplusplus
}
#endif

#endif

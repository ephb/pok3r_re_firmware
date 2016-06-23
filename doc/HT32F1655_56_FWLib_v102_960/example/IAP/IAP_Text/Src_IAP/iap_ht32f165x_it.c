/*********************************************************************************************************//**
 * @file    IAP/IAP_Text/Src_IAP/iap_ht32f165x_it.c
 * @version $Rev:: 929          $
 * @date    $Date:: 2015-09-16 #$
 * @brief   This file provides all interrupt service routine.
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
 * <h2><center>Copyright (C) 2014 Holtek Semiconductor Inc. All rights reserved</center></h2>
 ************************************************************************************************************/

/* Includes ------------------------------------------------------------------------------------------------*/
#include "ht32.h"
#include "iap_buffer.h"

/** @addtogroup HT32_Series_Peripheral_Examples HT32 Peripheral Examples
  * @{
  */

/** @addtogroup IAP_Examples IAP
  * @{
  */

/** @addtogroup Text_mode Text mode
  * @{
  */

/** @addtogroup Text_mode_IAP IAP
  * @{
  */


/* Global functions ----------------------------------------------------------------------------------------*/
/*********************************************************************************************************//**
 * @brief   This function handles UxART interrupt.
 * @retval  None
 ************************************************************************************************************/
void UxART_IRQHandler(void)
{
  u32 i;
  u32 j;

  /*--------------------------------------------------------------------------------------------------------*/
  /* Move data from USART FIFO to buffer when Rx timeout                                                    */
  /*--------------------------------------------------------------------------------------------------------*/
  if (((RETARGET_USART_PORT->IIR) & USART_IID_CTI) == USART_IID_CTI)
  {
    while ((RETARGET_USART_PORT->LSR & USART_LSR_RFDR))
    {
      #if 0
      if (IS_BUFFER_FULL())
      {
        /*--------------------------------------------------------------------------------------------------*/
        /* Should not reach here! It means the buffer for USART is full.                                    */
        /*--------------------------------------------------------------------------------------------------*/
        while (1);
      }
      #endif
      j = BufferIndex.Write;
      u8Buffer[j] = (RETARGET_USART_PORT->RBR & (u32)0x000000FF);
      BufferIndex.Write = (j + 1) % BUFFER_SIZE;
    }
  }

  /*--------------------------------------------------------------------------------------------------------*/
  /* Move data from USART FIFO to buffer when Rx FIFO level reached                                         */
  /*--------------------------------------------------------------------------------------------------------*/
  if (((RETARGET_USART_PORT->IIR) & USART_IID_RDA) == USART_IID_RDA)
  {
    for (i = 8; i != 0; i--)
    {
      #if 0
      if (IS_BUFFER_FULL())
      {
        /*--------------------------------------------------------------------------------------------------*/
        /* Should not reach here! It means the buffer for USART is full.                                    */
        /*--------------------------------------------------------------------------------------------------*/
        while (1);
      }
      #endif
      j = BufferIndex.Write;
      u8Buffer[j] = (RETARGET_USART_PORT->RBR & (u32)0x000000FF);
      BufferIndex.Write = (j + 1) % BUFFER_SIZE;
    }
  }
}


/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */
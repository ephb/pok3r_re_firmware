/*********************************************************************************************************//**
 * @file    SPI/Master/main.c
 * @version $Rev:: 4177         $
 * @date    $Date:: 2019-08-03 #$
 * @brief   Main program.
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
// <<< Use Configuration Wizard in Context Menu >>>

/* Includes ------------------------------------------------------------------------------------------------*/
#include "ht32.h"
#include "ht32_board.h"
#include "ht32_board_config.h"

/** @addtogroup HT32_Series_Peripheral_Examples HT32 Peripheral Examples
  * @{
  */

/** @addtogroup SPI_Examples SPI
  * @{
  */

/** @addtogroup Master
  * @{
  */


/* Private function prototypes -----------------------------------------------------------------------------*/
void NVIC_Configuration(void);
void CKCU_Configuration(void);
void SPIINT_Configuration(void);
void SPI_Configuration(void);
u32 SPI_Process(HT_SPI_TypeDef * SPIx, u8 *buffer, u32 length);

/* Global variables ----------------------------------------------------------------------------------------*/
vu32 guReceivedCount = 0;
u8 guReceiveBuffer[8];

vu32 gSPIINT = FALSE;

/* Global functions ----------------------------------------------------------------------------------------*/
/*********************************************************************************************************//**
  * @brief  Main program.
  * @retval None
  ***********************************************************************************************************/
int main(void)
{
  u8 SPIData[8];
  u32 index = 0xA0;

  NVIC_Configuration();               /* NVIC configuration                                                 */
  CKCU_Configuration();               /* System Related configuration                                       */
  SPIINT_Configuration();             /* SPI INT Related configuration                                      */
  SPI_Configuration();                /* SPI Related configuration                                          */
  RETARGET_Configuration();           /* Retarget Related configuration                                     */

  while (1)
  {
    if (gSPIINT == TRUE)
    {
      gSPIINT = FALSE;

      SPIData[0] = index++;
      SPIData[1] = index++;
      SPIData[2] = index++;
      SPIData[3] = index++;
      SPIData[4] = index++;
      SPIData[5] = index++;
      SPIData[6] = index++;
      SPIData[7] = index++;

      if (SPI_Process(HTCFG_MASTER_SPI, SPIData, 8) != 8)
      {
        while (1); //Should not reached here. Means data overrun
      }
    }

    if (guReceivedCount == 8)
    {
      u32 i;
      printf("Received:");
      for (i = 0; i < 8; i++)
      {
        printf("%02x ", guReceiveBuffer[i]);
      }
      printf("\r\n");

      guReceivedCount = 0;
    }

  }
}

/*********************************************************************************************************//**
  * @brief  Configure the NVIC vector table.
  * @retval None
  ***********************************************************************************************************/
void NVIC_Configuration(void)
{
  NVIC_SetVectorTable(NVIC_VECTTABLE_FLASH, 0x0);     /* Set the Vector Table base location at 0x00000000   */
}

/*********************************************************************************************************//**
  * @brief  Configure the system clocks.
  * @retval None
  ***********************************************************************************************************/
void CKCU_Configuration(void)
{
/*
//<e0> Enable Peripheral Clock
//  <h> Communication
//    <q5> EBI
//    <q11> I2C0   <q12> I2C1
//    <q23> I2S
//    <q21> SCI0 <q22> SCI1
//    <q13> SPI0   <q14> SPI1
//    <q17> UART0  <q18> UART1
//    <q15> USART0 <q16> USART1
//    <q3>  USB
//  </h>
//  <h> IO
//    <q7> GPIO Port A <q8>  GPIO Port B <q9>  GPIO Port C <q10>  GPIO Port D
//    <q19> AFIO
//    <q20> EXTI
//  </h>
//  <h> System
//    <q32> ADC
//    <q4>  CKREF
//    <q6>  CRC
//    <q31> CMP
//    <q2>  PDMA
//    <q26> PWRCU
//  </h>
//  <h> Timer
//    <q29> BFTM0 <q30> BFTM1
//    <q33> SCTM0 <q34> SCTM1 <q35> SCTM2 <q36> SCTM3
//    <q27> GPTM0 <q28> GPTM1
//    <q24> MCTM0
//    <q26> RTC   <q25> WDT
//  </h>
//</e>
*/
#if 1
  CKCU_PeripClockConfig_TypeDef CKCUClock = {{ 0 }};
  CKCUClock.Bit.PDMA       = 0;
  CKCUClock.Bit.USBD       = 0;
  CKCUClock.Bit.CKREF      = 0;
  CKCUClock.Bit.EBI        = 0;
  CKCUClock.Bit.CRC        = 0;
  CKCUClock.Bit.PA         = 0;
  CKCUClock.Bit.PB         = 0;
  CKCUClock.Bit.PC         = 0;
  CKCUClock.Bit.PD         = 0;
  CKCUClock.Bit.I2C0       = 0;
  CKCUClock.Bit.I2C1       = 0;
  CKCUClock.Bit.SPI0       = 1;
  CKCUClock.Bit.SPI1       = 1;
  CKCUClock.Bit.USART0     = 0;
  CKCUClock.Bit.USART1     = 0;
  CKCUClock.Bit.UART0      = 0;
  CKCUClock.Bit.UART1      = 0;
  CKCUClock.Bit.AFIO       = 1;
  CKCUClock.Bit.EXTI       = 0;
  CKCUClock.Bit.SCI0       = 0;
  CKCUClock.Bit.SCI1       = 0;
  CKCUClock.Bit.I2S        = 0;
  CKCUClock.Bit.MCTM0      = 0;
  CKCUClock.Bit.WDT        = 0;
  CKCUClock.Bit.BKP        = 0;
  CKCUClock.Bit.GPTM0      = 0;
  CKCUClock.Bit.GPTM1      = 0;
  CKCUClock.Bit.BFTM0      = 0;
  CKCUClock.Bit.BFTM1      = 0;
  CKCUClock.Bit.CMP        = 0;
  CKCUClock.Bit.ADC        = 0;
  CKCUClock.Bit.SCTM0      = 0;
  CKCUClock.Bit.SCTM1      = 0;
  CKCUClock.Bit.SCTM2      = 0;
  CKCUClock.Bit.SCTM3      = 0;
  HTCFG_INT_CLK(CKCUClock) = 1;
  CKCU_PeripClockConfig(CKCUClock, ENABLE);
#endif
}

/*********************************************************************************************************//**
  * @brief  Configure the GPIO ports.
  * @retval None
  ***********************************************************************************************************/
void SPIINT_Configuration(void)
{
  AFIO_GPxConfig(HTCFG_INT_GPIO_ID, HTCFG_INT_GPIO_PIN, AFIO_FUN_GPIO);
  GPIO_DirectionConfig(GPIO_PORT[HTCFG_INT_GPIO_ID], HTCFG_INT_GPIO_PIN, GPIO_DIR_IN);
  GPIO_PullResistorConfig(GPIO_PORT[HTCFG_INT_GPIO_ID], HTCFG_INT_GPIO_PIN, GPIO_PR_UP);
  GPIO_InputConfig(GPIO_PORT[HTCFG_INT_GPIO_ID], HTCFG_INT_GPIO_PIN, ENABLE);

  {
  EXTI_InitTypeDef EXTI_InitStruct = {0};
  CKCU_PeripClockConfig_TypeDef CKCUClock = {{ 0 }};
  CKCUClock.Bit.EXTI       = 1;
  CKCU_PeripClockConfig(CKCUClock, ENABLE);

  EXTI_InitStruct.EXTI_Channel = EXTI_CHANNEL_0;
  EXTI_InitStruct.EXTI_Debounce = EXTI_DEBOUNCE_DISABLE;
  EXTI_InitStruct.EXTI_DebounceCnt = 0;
  EXTI_InitStruct.EXTI_IntType = EXTI_NEGATIVE_EDGE;
  EXTI_Init(&EXTI_InitStruct);
  AFIO_EXTISourceConfig(AFIO_EXTI_CH_0, HTCFG_INT_AFIO_ESS);

  EXTI_IntConfig(EXTI_CHANNEL_0, ENABLE);
  NVIC_EnableIRQ(EXTI0_1_IRQn);
  }
}

/*********************************************************************************************************//**
  * @brief  Configure the SPI ports.
  * @retval None
  ***********************************************************************************************************/
void SPI_Configuration(void)
{
  SPI_InitTypeDef SPI_InitStructure;

  AFIO_GPxConfig(HTCFG_MASTER_SPI_SCK_GPIO_ID, HTCFG_MASTER_SPI_SCK_AFIO_PIN, AFIO_FUN_SPI);
  AFIO_GPxConfig(HTCFG_MASTER_SPI_SEL_GPIO_ID, HTCFG_MASTER_SPI_SEL_AFIO_PIN, AFIO_FUN_SPI);
  AFIO_GPxConfig(HTCFG_MASTER_SPI_MISO_GPIO_ID, HTCFG_MASTER_SPI_MISO_AFIO_PIN, AFIO_FUN_SPI);
  AFIO_GPxConfig(HTCFG_MASTER_SPI_MOSI_GPIO_ID, HTCFG_MASTER_SPI_MOSI_AFIO_PIN, AFIO_FUN_SPI);

  SPI_InitStructure.SPI_Mode = SPI_MASTER;
  SPI_InitStructure.SPI_FIFO = SPI_FIFO_ENABLE;
  SPI_InitStructure.SPI_DataLength = SPI_DATALENGTH_8;
  SPI_InitStructure.SPI_SELMode = SPI_SEL_HARDWARE;
  SPI_InitStructure.SPI_SELPolarity = SPI_SELPOLARITY_LOW;
  SPI_InitStructure.SPI_FirstBit = SPI_FIRSTBIT_MSB;
  SPI_InitStructure.SPI_CPOL = SPI_CPOL_LOW;
  SPI_InitStructure.SPI_CPHA = SPI_CPHA_FIRST;
  SPI_InitStructure.SPI_RxFIFOTriggerLevel = 1;
  SPI_InitStructure.SPI_TxFIFOTriggerLevel = 0;
  SPI_InitStructure.SPI_ClockPrescaler = 4;
  SPI_Init(HTCFG_MASTER_SPI, &SPI_InitStructure);

  SPI_SELOutputCmd(HTCFG_MASTER_SPI, ENABLE);

  SPI_Cmd(HTCFG_MASTER_SPI, ENABLE);
  SPI_IntConfig(HTCFG_MASTER_SPI, SPI_INT_RXBNE, ENABLE);
  NVIC_EnableIRQ(HTCFG_MASTER_SPI_IRQ);
}

/*********************************************************************************************************//**
  * @brief  Send SPI Data.
  * @param  SPIx: SPI port
  * @param  buffer: buffer for data.
  * @param  length: data length (must <= 8).
  * @retval length
  ***********************************************************************************************************/
u32 SPI_Process(HT_SPI_TypeDef * SPIx, u8 *buffer, u32 length)
{
  s32 i;
  if (length > 8)
  {
    return 0;
  }

  if (8 - SPI_GetFIFOStatus(SPIx, SPI_FIFO_TX) < length)
  {
    return 0;
  }

  for (i = length; i > 0; i--)
  {
    SPI_SendData(SPIx, *buffer++);
  }

  return length;
}

#if (HT32_LIB_DEBUG == 1)
/*********************************************************************************************************//**
  * @brief  Report both the error name of the source file and the source line number.
  * @param  filename: pointer to the source file name.
  * @param  uline: error line source number.
  * @retval None
  ***********************************************************************************************************/
void assert_error(u8* filename, u32 uline)
{
  /*
     This function is called by IP library that the invalid parameters has been passed to the library API.
     Debug message can be added here.
     Example: printf("Parameter Error: file %s on line %d\r\n", filename, uline);
  */

  while (1)
  {
  }
}
#endif


/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

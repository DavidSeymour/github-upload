/***************************************************************************//**
 * @file
 * @brief Provide BSP (board support package) configuration parameters.
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#ifndef SILICON_LABS_BSPCONFIG_H
#define SILICON_LABS_BSPCONFIG_H

#define BSP_STK
#define BSP_STK_BRD2204A
#if	0		//DES 1=test alternate UART interface (PC11 and PC12)...must change retargetserialconfig.h too, 0=default VCOM UART interface

#define BSP_BCC_USART         USART0
#define BSP_BCC_CLK           cmuClock_USART0
#define BSP_BCC_TX_LOCATION   USART_ROUTELOC0_TXLOC_LOC2
#define BSP_BCC_RX_LOCATION   USART_ROUTELOC0_RXLOC_LOC2
#define BSP_BCC_TXPORT        gpioPortC
#define BSP_BCC_TXPIN         11
#define BSP_BCC_RXPORT        gpioPortC
#define BSP_BCC_RXPIN         10
//#define BSP_BCC_ENABLE_PORT   gpioPortA
//#define BSP_BCC_ENABLE_PIN    8                 /* VCOM_ENABLE */

#else

#define BSP_BCC_USART         USART1
#define BSP_BCC_CLK           cmuClock_USART1
#define BSP_BCC_TX_LOCATION   USART_ROUTELOC0_TXLOC_LOC1
#define BSP_BCC_RX_LOCATION   USART_ROUTELOC0_RXLOC_LOC1
#define BSP_BCC_TXPORT        gpioPortD
#define BSP_BCC_TXPIN         0
#define BSP_BCC_RXPORT        gpioPortD
#define BSP_BCC_RXPIN         1
#define BSP_BCC_ENABLE_PORT   gpioPortA
#define BSP_BCC_ENABLE_PIN    8                 /* VCOM_ENABLE */
#endif

#define BSP_GPIO_LEDS
#define BSP_NO_OF_LEDS        2
#define BSP_GPIO_LED0_PORT    gpioPortD
#define BSP_GPIO_LED0_PIN     2
#define BSP_GPIO_LED1_PORT    gpioPortC
#define BSP_GPIO_LED1_PIN     2
#define BSP_GPIO_LEDARRAY_INIT { { BSP_GPIO_LED0_PORT, BSP_GPIO_LED0_PIN }, { BSP_GPIO_LED1_PORT, BSP_GPIO_LED1_PIN } }

#define BSP_GPIO_BUTTONS
#define BSP_NO_OF_BUTTONS     2
#define BSP_GPIO_PB0_PORT     gpioPortD
#define BSP_GPIO_PB0_PIN      5
#define BSP_GPIO_PB1_PORT     gpioPortC
#define BSP_GPIO_PB1_PIN      9

#define BSP_GPIO_BUTTONARRAY_INIT { { BSP_GPIO_PB0_PORT, BSP_GPIO_PB0_PIN }, { BSP_GPIO_PB1_PORT, BSP_GPIO_PB1_PIN } }

#define BSP_INIT_DEFAULT      0

#define BSP_LFXO_CTUNE        32U
#define BSP_HFXO_CTUNE        120U

#if !defined(EMU_DCDCINIT_STK_DEFAULT)
/* Use emlib defaults */
#define EMU_DCDCINIT_STK_DEFAULT          EMU_DCDCINIT_DEFAULT
#endif

#if !defined(CMU_HFXOINIT_STK_DEFAULT)
#define CMU_HFXOINIT_STK_DEFAULT                   \
  {                                                \
    _CMU_HFXOSTARTUPCTRL_CTUNE_DEFAULT,            \
    BSP_HFXO_CTUNE,                                \
    _CMU_HFXOSTARTUPCTRL_IBTRIMXOCORE_DEFAULT,     \
    _CMU_HFXOSTEADYSTATECTRL_IBTRIMXOCORE_DEFAULT, \
    _CMU_HFXOTIMEOUTCTRL_PEAKDETTIMEOUT_DEFAULT,   \
    _CMU_HFXOTIMEOUTCTRL_STEADYTIMEOUT_DEFAULT,    \
    _CMU_HFXOTIMEOUTCTRL_STARTUPTIMEOUT_DEFAULT,   \
    cmuOscMode_Crystal,                            \
  }
#endif

#define BSP_BCP_VERSION 2
#include "bsp_bcp.h"

#endif /* SILICON_LABS_BSPCONFIG_H */

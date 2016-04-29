/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : hardware_init.c
**     Project     : SDK
**     Processor   : MK22FN512VDC12
**     Component   : PinSettings
**     Version     : Component 01.002, Driver 1.1, CPU db: 3.00.000
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2014-01-06, 13:21, # CodeGen: 2
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         GPIO                - void hardware_init_GPIO(uint32_t instance);
**         I2C                 - void hardware_init_I2C(uint32_t instance);
**         I2S                 - void hardware_init_I2S(uint32_t instance);
**         SPI                 - void hardware_init_SPI(uint32_t instance);
**         UART                - void hardware_init_UART(uint32_t instance);
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file hardware_init.c
** @version 1.1
** @brief
**
*/         
/*!
**  @addtogroup hardware_init_module hardware_init module documentation
**  @{
*/         

/* MODULE hardware_init. */

//#include "fsl_platform_types.h"
#include "fsl_device_registers.h"
#include "fsl_port_hal.h"
#include "fsl_gpio_common.h"
#include "pin_mux.h"


void configure_gpio_pins(uint32_t instance)
{
  switch(instance) {    
    case 1:                             /* PTB */
      /* PORTB_PCR0 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],0u,kPortMuxAsGpio);
      /* PORTB_PCR1 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],1u,kPortMuxAsGpio);
      /* PORTB_PCR6 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],6u,kPortMuxAsGpio);
      /* PORTB_PCR8 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],8u,kPortMuxAsGpio);
      break;
    case 2:                             /* PTC */
      /* PORTC_PCR6 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],6u,kPortMuxAsGpio);
      /* PORTC_PCR7 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],7u,kPortMuxAsGpio);
      /* PORTC_PCR8 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],8u,kPortMuxAsGpio);
      /* PORTC_PCR9 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],9u,kPortMuxAsGpio);
      break;
    case 3:                             /* PTD */
      /* PORTD_PCR4 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],4u,kPortMuxAsGpio);
      /* PORTD_PCR5 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],5u,kPortMuxAsGpio);
      /* PORTD_PCR6 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],6u,kPortMuxAsGpio);
      /* PORTD_PCR7 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],7u,kPortMuxAsGpio);
      break;
    default:
      break;
  }
}

void configure_i2c_pins(uint32_t instance)
{
  switch(instance) {    
    case 0:                             /* I2C0 */
      /* PORTE_PCR24 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[4],24u,kPortMuxAlt5);
      PORT_HAL_SetOpenDrainCmd(g_portBaseAddr[4],24u,true);
      /* PORTE_PCR25 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[4],25u,kPortMuxAlt5);
      PORT_HAL_SetOpenDrainCmd(g_portBaseAddr[4],25u,true);
      break;
    case 1:                             /* I2C1 */
      /* PORTC_PCR10 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],10u,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(g_portBaseAddr[2],10u,true);
      /* PORTC_PCR11 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[2],11u,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(g_portBaseAddr[2],11u,true);
      break;
    default:
      break;
  }
}

void configure_i2s_pins(uint32_t instance)
{
  /* PORTC_PCR8 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[2],8u,kPortMuxAlt4);
  /* PORTC_PCR5 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[2],5u,kPortMuxAlt4);
  /* PORTB_PCR18 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[1],18u,kPortMuxAlt4);
  /* PORTB_PCR19 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[1],19u,kPortMuxAlt4);
  /* PORTC_PCR1 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[2],1u,kPortMuxAlt6);
}

void configure_rtc_pins(uint32_t instance)
{
  /* PORTE_PCR26 */
  PORT_HAL_SetMuxMode(g_portBaseAddr[4],26u,kPortMuxAlt6);
}

void configure_spi_pins(uint32_t instance)
{
  switch(instance) {    
    case 0:                             /* SPI0 */
      /* PORTD_PCR0 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],0u,kPortMuxAlt2);
      /* PORTD_PCR3 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],3u,kPortMuxAlt2);
      /* PORTD_PCR1 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],1u,kPortMuxAlt2);
      /* PORTD_PCR2 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[3],2u,kPortMuxAlt2);
      break;
    case 1:                             /* SPI1 */
      /* PORTB_PCR10 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],10u,kPortMuxAlt2);
      /* PORTB_PCR17 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],17u,kPortMuxAlt2);
      /* PORTB_PCR11 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],11u,kPortMuxAlt2);
      /* PORTB_PCR16 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[1],16u,kPortMuxAlt2);
      break;
    default:
      break;
  }
}

void configure_spi_cs0_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(g_portBaseAddr[3],0u,kPortMuxAsGpio);
}

void configure_spi_cs1_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(g_portBaseAddr[3],4u,kPortMuxAsGpio);
}

void configure_gpio_i2c_pins(uint32_t instance)
{
  PORT_HAL_SetMuxMode(g_portBaseAddr[2],10u,kPortMuxAsGpio);
  PORT_HAL_SetMuxMode(g_portBaseAddr[2],11u,kPortMuxAsGpio);
}

void configure_uart_pins(uint32_t instance)
{
  switch(instance) {    
    case 1:                             /* UART1 */
      /* PORTE_PCR1 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[4],1u,kPortMuxAlt3);
      /* PORTE_PCR0 */
      PORT_HAL_SetMuxMode(g_portBaseAddr[4],0u,kPortMuxAlt3);
      break;
    default:
      break;
  }
}

/* Setup FTM pins to drive LEDs */
void configure_ftm_pins(uint32_t instance)
{
  switch(instance) {
    case 0:                             /* FTM0 */
    /* PORTD_PCR4 (D7 - Green) */ 
    PORT_HAL_SetMuxMode(g_portBaseAddr[3], 4u, kPortMuxAlt4);      
    break; 
    
    default:
      break;
  }
}

/* END hardware_init. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

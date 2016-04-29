/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pin_mux.c
**     Project     : TWR-K80F150M
**     Processor   : MK80FN256VDC15
**     Component   : PinSettings
**     Version     : Component 1.2.0, Driver 1.4, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc.
**     All Rights Reserved.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file pin_mux.c
** @version 1.4
** @brief
**
*/
/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/

/* MODULE pin_mux. */

#include "fsl_device_registers.h"
#include "fsl_port_hal.h"
#include "fsl_sim_hal.h"
#include "pin_mux.h"



void configure_cmp_pins(uint32_t instance)
{
  switch(instance) {
    case CMP0_IDX:                       /* HW_CMP0 */
      /* Affects PORTC_PCR6 register */
      PORT_HAL_SetMuxMode(PORTC,6UL,kPortPinDisabled);
      break;
    default:
      break;
  }
}

void configure_flexio_pins(uint32_t instance, uint32_t pinIdx)
{
  switch(instance) {
    case FLEXIO0_IDX:
      switch(pinIdx)
      {
        case 0:
          PORT_HAL_SetMuxMode(PORTB,0u,kPortMuxAlt7);
          break;
        case 1:
          PORT_HAL_SetMuxMode(PORTB,1u,kPortMuxAlt7);
          break;
        case 2:
          PORT_HAL_SetMuxMode(PORTB,2u,kPortMuxAlt7);
          break;
        case 3:
          PORT_HAL_SetMuxMode(PORTB,3u,kPortMuxAlt7);
          break;
        case 4:
          PORT_HAL_SetMuxMode(PORTB,10u,kPortMuxAlt7);
          break;
        case 5:
          PORT_HAL_SetMuxMode(PORTB,11u,kPortMuxAlt7);
          break;
        case 6:
          PORT_HAL_SetMuxMode(PORTB,18u,kPortMuxAlt7);
          break;
        case 7:
          PORT_HAL_SetMuxMode(PORTB,19u,kPortMuxAlt7);
          break;
        case 8:
          PORT_HAL_SetMuxMode(PORTB,20u,kPortMuxAlt7);
          break;
        case 9:
          PORT_HAL_SetMuxMode(PORTB,21u,kPortMuxAlt7);
          break;
        case 10:
          PORT_HAL_SetMuxMode(PORTB,22u,kPortMuxAlt7);
          break;
        case 11:
          PORT_HAL_SetMuxMode(PORTB,23u,kPortMuxAlt7);
          break;
        case 12:
          PORT_HAL_SetMuxMode(PORTC,0u,kPortMuxAlt7);
          break;
        case 13:
          PORT_HAL_SetMuxMode(PORTC,1u,kPortMuxAlt7);
          break;
        case 14:
          PORT_HAL_SetMuxMode(PORTC,6u,kPortMuxAlt7);
          break;
        case 15:
          PORT_HAL_SetMuxMode(PORTC,7u,kPortMuxAlt7);
          break;
        case 16:
          PORT_HAL_SetMuxMode(PORTC,8u,kPortMuxAlt7);
          break;
        case 17:
          PORT_HAL_SetMuxMode(PORTC,9u,kPortMuxAlt7);
          break;
        case 18:
          PORT_HAL_SetMuxMode(PORTC,10u,kPortMuxAlt7);
          break;
        case 19:
          PORT_HAL_SetMuxMode(PORTC,11u,kPortMuxAlt7);
          break;
        case 20:
          PORT_HAL_SetMuxMode(PORTC,14u,kPortMuxAlt7);
          break;
        case 21:
          PORT_HAL_SetMuxMode(PORTC,15u,kPortMuxAlt7);
          break;
        case 22:
          PORT_HAL_SetMuxMode(PORTD,0u,kPortMuxAlt7);
          break;
        case 23:
          PORT_HAL_SetMuxMode(PORTD,1u,kPortMuxAlt7);
          break;
        case 24:
          PORT_HAL_SetMuxMode(PORTD,8u,kPortMuxAlt7);
          break;
        case 25:
          PORT_HAL_SetMuxMode(PORTD,9u,kPortMuxAlt7);
          break;
        case 26:
          PORT_HAL_SetMuxMode(PORTD,10u,kPortMuxAlt7);
          break;
        case 27:
          PORT_HAL_SetMuxMode(PORTD,11u,kPortMuxAlt7);
          break;
        case 28:
          PORT_HAL_SetMuxMode(PORTD,12u,kPortMuxAlt7);
          break;
        case 29:
          PORT_HAL_SetMuxMode(PORTD,13u,kPortMuxAlt7);
          break;
        case 30:
          PORT_HAL_SetMuxMode(PORTD,14u,kPortMuxAlt7);
          break;
        case 31:
          PORT_HAL_SetMuxMode(PORTD,15u,kPortMuxAlt7);
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
}

void configure_ftm_pins(uint32_t instance)
{
  switch(instance) {
    case FTM0_IDX:                       /* HW_FTM0 */
      /* Affects PORTC_PCR3 register */
      PORT_HAL_SetMuxMode(PORTC,3UL,kPortMuxAlt4);
      break;
    case FTM2_IDX:                       /* HW_FTM2 */
      /* Affects PORTA_PCR10 register */
      PORT_HAL_SetMuxMode(PORTA,10UL,kPortMuxAlt3);
      PORT_HAL_SetPullMode(PORTA,10UL,kPortPullUp);
      PORT_HAL_SetPullCmd(PORTA,10UL,true);
      break;
    default:
      break;
  }
}

void configure_gpio_pins(uint32_t instance)
{
  switch(instance) {
    case PORTA_IDX:                      /* HW_PORTA */
      /* Affects PORTA_PCR4 register */
      PORT_HAL_SetPassiveFilterCmd(PORTA,4UL,false);
      PORT_HAL_SetMuxMode(PORTA,4UL,kPortMuxAsGpio);
      PORT_HAL_SetPullMode(PORTA,4UL,kPortPullUp);
      PORT_HAL_SetPullCmd(PORTA,4UL,true);
      /* Affects PORTA_PCR9 register */
      PORT_HAL_SetMuxMode(PORTA,9UL,kPortMuxAsGpio);
      /* Affects PORTA_PCR10 register */
      PORT_HAL_SetMuxMode(PORTA,10UL,kPortMuxAsGpio);
      PORT_HAL_SetPullMode(PORTA,10UL,kPortPullUp);
      PORT_HAL_SetPullCmd(PORTA,10UL,true);
      /* Affects PORTA_PCR28 register */
      PORT_HAL_SetOpenDrainCmd(PORTA,28UL,false);
      PORT_HAL_SetMuxMode(PORTA,28UL,kPortMuxAsGpio);
      PORT_HAL_SetSlewRateMode(PORTA,28UL,kPortSlowSlewRate);
      /* Affects PORTA_PCR29 register */
      PORT_HAL_SetOpenDrainCmd(PORTA,29UL,false);
      PORT_HAL_SetMuxMode(PORTA,29UL,kPortMuxAsGpio);
      PORT_HAL_SetSlewRateMode(PORTA,29UL,kPortSlowSlewRate);
      break;
    case PORTB_IDX:                      /* HW_PORTB */
      /* Affects PORTB_PCR4 register */
      PORT_HAL_SetOpenDrainCmd(PORTB,4UL,false);
      PORT_HAL_SetMuxMode(PORTB,4UL,kPortMuxAsGpio);
      PORT_HAL_SetSlewRateMode(PORTB,4UL,kPortSlowSlewRate);
      /* Affects PORTB_PCR5 register */
      PORT_HAL_SetOpenDrainCmd(PORTB,5UL,false);
      PORT_HAL_SetMuxMode(PORTB,5UL,kPortMuxAsGpio);
      PORT_HAL_SetSlewRateMode(PORTB,5UL,kPortSlowSlewRate);
      break;
    case PORTD_IDX:                      /* HW_PORTD */
      /* Affects PORTD_PCR11 register */
      PORT_HAL_SetMuxMode(PORTD,11UL,kPortMuxAsGpio);
      /* Affects PORTD_PCR15 register */
      PORT_HAL_SetMuxMode(PORTD,15UL,kPortMuxAsGpio);
      break;
    case PORTE_IDX:                      /* HW_PORTE */
      /* Affects PORTE_PCR4 register */
      PORT_HAL_SetMuxMode(PORTE,4UL,kPortMuxAsGpio);
      /* Affects PORTE_PCR7 register */
      PORT_HAL_SetMuxMode(PORTE,7UL,kPortMuxAsGpio);
      /* Affects PORTE_PCR17 register */
      PORT_HAL_SetMuxMode(PORTE,17UL,kPortMuxAsGpio);
      /* Affects PORTE_PCR27 register */
      PORT_HAL_SetMuxMode(PORTE,27UL,kPortMuxAsGpio);
      /* Affects PORTE_PCR28 register */
      PORT_HAL_SetMuxMode(PORTE,28UL,kPortMuxAsGpio);
      break;
    default:
      break;
  }
}

void configure_i2c_pins(uint32_t instance)
{
  switch(instance) {
    case I2C0_IDX:                       /* HW_I2C0 */
      /* Affects PORTD_PCR8 register */
      PORT_HAL_SetMuxMode(PORTD,8UL,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(PORTD,8UL,true);
      /* Affects PORTD_PCR9 register */
      PORT_HAL_SetMuxMode(PORTD,9UL,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(PORTD,9UL,true);
      break;
    case I2C1_IDX:                       /* HW_I2C1 */
      /* Affects PORTC_PCR10 register */
      PORT_HAL_SetMuxMode(PORTC,10UL,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(PORTC,10UL,true);
      /* Affects PORTC_PCR11 register */
      PORT_HAL_SetMuxMode(PORTC,11UL,kPortMuxAlt2);
      PORT_HAL_SetOpenDrainCmd(PORTC,11UL,true);
      break;
    default:
      break;
  }
}

void configure_i2s_pins(uint32_t instance)
{
  /* Affects PORTE_PCR6 register */
  PORT_HAL_SetMuxMode(PORTA,17UL,kPortMuxAlt6);
  /* Affects PORTE_PCR7 register */
  PORT_HAL_SetMuxMode(PORTA,5UL,kPortMuxAlt6);
  /* Affects PORTE_PCR12 register */
  PORT_HAL_SetMuxMode(PORTA,13UL,kPortMuxAlt6);
  /* Affects PORTE_PCR11 register */
  PORT_HAL_SetMuxMode(PORTA,15UL,kPortMuxAlt6);
  /* Affects PORTE_PCR10 register */
  PORT_HAL_SetMuxMode(PORTA,12UL,kPortMuxAlt6);
}

void configure_jtag_pins(uint32_t instance)
{
  /* Affects PORTA_PCR0 register */
  PORT_HAL_SetMuxMode(PORTA,0UL,kPortMuxAlt7);
  /* Affects PORTA_PCR1 register */
  PORT_HAL_SetMuxMode(PORTA,1UL,kPortMuxAlt7);
  /* Affects PORTA_PCR2 register */
  PORT_HAL_SetMuxMode(PORTA,2UL,kPortMuxAlt7);
  /* Affects PORTA_PCR3 register */
  PORT_HAL_SetMuxMode(PORTA,3UL,kPortMuxAlt7);
}

void configure_llwu_pins(uint32_t instance)
{
  /* Affects PORTE_PCR4 register */
  PORT_HAL_SetMuxMode(PORTE,4UL,kPortMuxAsGpio);
  /* Affects PORTA_PCR4 register */
  PORT_HAL_SetPassiveFilterCmd(PORTA,4UL,false);
  PORT_HAL_SetMuxMode(PORTA,4UL,kPortMuxAsGpio);
  PORT_HAL_SetPullMode(PORTA,4UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTA,4UL,true);
  /* Affects PORTE_PCR17 register */
  PORT_HAL_SetMuxMode(PORTE,17UL,kPortMuxAsGpio);
  /* Affects PORTA_PCR10 register */
  PORT_HAL_SetMuxMode(PORTA,10UL,kPortMuxAsGpio);
  PORT_HAL_SetPullMode(PORTA,10UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTA,10UL,true);
  /* Affects PORTD_PCR11 register */
  PORT_HAL_SetMuxMode(PORTD,11UL,kPortMuxAsGpio);
}

void configure_lpuart_pins(uint32_t instance)
{
   switch(instance) {
    case LPUART0_IDX:
      /*PTA14, alt3, LPUART0_TX*/
      PORT_HAL_SetMuxMode(PORTA,14UL,kPortMuxAlt3);
      /*PTA15, alt3, LPUART0_RX*/
      PORT_HAL_SetMuxMode(PORTA,15UL,kPortMuxAlt3);
      break;
    case LPUART1_IDX:
      /* Affects PORTD_PCR8 register */
      PORT_HAL_SetMuxMode(PORTC,3UL,kPortMuxAlt3);
      /* Affects PORTD_PCR9 register */
      PORT_HAL_SetMuxMode(PORTC,4UL,kPortMuxAlt3);
      break;
    default:
      break;
  }
}

void configure_osc_pins(uint32_t instance)
{
  /* Affects PORTA_PCR18 register */
  PORT_HAL_SetMuxMode(PORTA,18UL,kPortPinDisabled);
  /* Affects PORTA_PCR19 register */
  PORT_HAL_SetMuxMode(PORTA,19UL,kPortPinDisabled);
}

void configure_rtc_pins(uint32_t instance)
{
  /* Affects PORTE_PCR0 register */
  PORT_HAL_SetMuxMode(PORTE,0UL,kPortMuxAlt7);
}

void configure_sdhc_pins(uint32_t instance)
{
  /* Affects PORTE_PCR3 register */
  PORT_HAL_SetMuxMode(PORTE,3UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,3UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,3UL,true);
  /* Affects PORTE_PCR1 register */
  PORT_HAL_SetMuxMode(PORTE,1UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,1UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,1UL,true);
  /* Affects PORTE_PCR0 register */
  PORT_HAL_SetMuxMode(PORTE,0UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,0UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,0UL,true);
  /* Affects PORTE_PCR5 register */
  PORT_HAL_SetMuxMode(PORTE,5UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,5UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,5UL,true);
  /* Affects PORTE_PCR4 register */
  PORT_HAL_SetMuxMode(PORTE,4UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,4UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,4UL,true);
  /* Affects PORTE_PCR2 register */
  PORT_HAL_SetMuxMode(PORTE,2UL,kPortMuxAlt4);
  PORT_HAL_SetPullMode(PORTE,2UL,kPortPullUp);
  PORT_HAL_SetPullCmd(PORTE,2UL,true);
}

void configure_sdram_pins(uint32_t instance)
{
  /* CLKOUT*/
  PORT_HAL_SetMuxMode(PORTC,3UL,kPortMuxAlt5);
  /* CAS/RAS*/
  PORT_HAL_SetMuxMode(PORTB,0UL,kPortMuxAlt5);
  PORT_HAL_SetMuxMode(PORTB,1UL,kPortMuxAlt5);
  /* WE */
  PORT_HAL_SetMuxMode(PORTB,2UL,kPortMuxAlt5);
  /* CS */
  PORT_HAL_SetMuxMode(PORTB,3UL,kPortMuxAlt5);

  /* SDRAM Data*/
  PORT_HAL_SetMuxMode(PORTB,6UL,kPortMuxAlt5);   /* SDRAM_D23*/
  PORT_HAL_SetMuxMode(PORTB,7UL,kPortMuxAlt5);   /* SDRAM_D22*/
  PORT_HAL_SetMuxMode(PORTB,8UL,kPortMuxAlt5);   /* SDRAM_D21*/
  PORT_HAL_SetMuxMode(PORTB,9UL,kPortMuxAlt5);   /* SDRAM_D20*/
  PORT_HAL_SetMuxMode(PORTB,10UL,kPortMuxAlt5);  /* SDRAM_D19*/
  PORT_HAL_SetMuxMode(PORTB,11UL,kPortMuxAlt5);  /* SDRAM_D18*/
  PORT_HAL_SetMuxMode(PORTB,16UL,kPortMuxAlt5);  /* SDRAM_D17*/
  PORT_HAL_SetMuxMode(PORTB,17UL,kPortMuxAlt5);  /* SDRAM_D16*/
  PORT_HAL_SetMuxMode(PORTB,20UL,kPortMuxAlt5);  /* SDRAM_D31*/
  PORT_HAL_SetMuxMode(PORTB,21UL,kPortMuxAlt5);  /* SDRAM_D30*/
  PORT_HAL_SetMuxMode(PORTB,22UL,kPortMuxAlt5);  /* SDRAM_D29*/
  PORT_HAL_SetMuxMode(PORTB,23UL,kPortMuxAlt5);  /* SDRAM_D28*/
  PORT_HAL_SetMuxMode(PORTC,12UL,kPortMuxAlt5);  /* SDRAM_D27*/
  PORT_HAL_SetMuxMode(PORTC,13UL,kPortMuxAlt5);  /* SDRAM_D26*/
  PORT_HAL_SetMuxMode(PORTC,14UL,kPortMuxAlt5);  /* SDRAM_D25*/
  PORT_HAL_SetMuxMode(PORTC,15UL,kPortMuxAlt5);  /* SDRAM_D24*/
  /* SDRAM Address*/

  PORT_HAL_SetMuxMode(PORTC,0UL,kPortMuxAlt5);   /* SDRAM_A22*/
  PORT_HAL_SetMuxMode(PORTC,1UL,kPortMuxAlt5);   /* SDRAM_A21*/
  PORT_HAL_SetMuxMode(PORTC,2UL,kPortMuxAlt5);   /* SDRAM_A20*/
  PORT_HAL_SetMuxMode(PORTC,4UL,kPortMuxAlt5);   /* SDRAM_A19*/
  PORT_HAL_SetMuxMode(PORTC,5UL,kPortMuxAlt5);   /* SDRAM_A18*/
  PORT_HAL_SetMuxMode(PORTC,6UL,kPortMuxAlt5);   /* SDRAM_A17*/
  PORT_HAL_SetMuxMode(PORTC,7UL,kPortMuxAlt5);   /* SDRAM_A16*/
  PORT_HAL_SetMuxMode(PORTC,8UL,kPortMuxAlt5);   /* SDRAM_A15*/
  PORT_HAL_SetMuxMode(PORTC,9UL,kPortMuxAlt5);   /* SDRAM_A14*/
  PORT_HAL_SetMuxMode(PORTC,10UL,kPortMuxAlt5);  /* SDRAM_A13*/
  PORT_HAL_SetMuxMode(PORTD,2UL,kPortMuxAlt5);   /* SDRAM_A12*/
  PORT_HAL_SetMuxMode(PORTD,3UL,kPortMuxAlt5);   /* SDRAM_A11*/
  PORT_HAL_SetMuxMode(PORTD,4UL,kPortMuxAlt5);   /* SDRAM_A10*/
  PORT_HAL_SetMuxMode(PORTD,5UL,kPortMuxAlt5);   /* SDRAM_A9*/
  /* SDRAM_CKE*/
  PORT_HAL_SetMuxMode(PORTD,7UL,kPortMuxAlt5);
  /* SDRAM_DQM */
  PORT_HAL_SetMuxMode(PORTC,16UL,kPortMuxAlt5);  /* SDRAM_DQM2*/
  PORT_HAL_SetMuxMode(PORTC,17UL,kPortMuxAlt5);  /* SDRAM_DQM3*/
  //PORT_HAL_SetMuxMode(PORTC,18UL,kPortMuxAlt5);  /* SDRAM_DQM1*/
  //PORT_HAL_SetMuxMode(PORTC,19UL,kPortMuxAlt5);  /* SDRAM_DQM0*/
}

void configure_sim_pins(uint32_t instance)
{
  /* Affects PORTC_PCR3 register */
  PORT_HAL_SetMuxMode(PORTC,3UL,kPortMuxAlt5);
}

void configure_spi_pins(uint32_t instance)
{
  switch(instance) {
    case SPI0_IDX:                       /* HW_SPI0 */
      /* Affects PORTC_PCR7 register */
      PORT_HAL_SetMuxMode(PORTC,7UL,kPortMuxAlt2);
      /* Affects PORTC_PCR6 register */
      PORT_HAL_SetMuxMode(PORTC,6UL,kPortMuxAlt2);
      /* Affects PORTC_PCR5 register */
      PORT_HAL_SetMuxMode(PORTD,0UL,kPortMuxAlt2);
      /* Affects PORTC_PCR4 register */
      PORT_HAL_SetMuxMode(PORTD,1UL,kPortMuxAlt2);
      break;
    case SPI1_IDX:                       /* HW_SPI1 */
      /* Affects PORTE_PCR4 register */
      PORT_HAL_SetMuxMode(PORTE,5UL,kPortMuxAlt2);
      /* Affects PORTE_PCR3 register */
      PORT_HAL_SetMuxMode(PORTE,3UL,kPortMuxAlt2);
      /* Affects PORTE_PCR2 register */
      PORT_HAL_SetMuxMode(PORTE,2UL,kPortMuxAlt2);
      /* Affects PORTE_PCR1 register */
      PORT_HAL_SetMuxMode(PORTE,1UL,kPortMuxAlt2);
      break;
    case SPI2_IDX:                       /* HW_SPI2 */
      /* Affects PORTD_PCR11 register */
      PORT_HAL_SetMuxMode(PORTD,11UL,kPortMuxAlt2);
      /* Affects PORTD_PCR15 register */
      PORT_HAL_SetMuxMode(PORTD,15UL,kPortMuxAlt2);
      /* Affects PORTD_PCR14 register */
      PORT_HAL_SetMuxMode(PORTD,14UL,kPortMuxAlt2);
      /* Affects PORTD_PCR12 register */
      PORT_HAL_SetMuxMode(PORTD,12UL,kPortMuxAlt2);
      /* Affects PORTD_PCR13 register */
      PORT_HAL_SetMuxMode(PORTD,13UL,kPortMuxAlt2);
      break;
    default:
      break;
  }
}

void configure_tpiu_pins(uint32_t instance)
{
  /* Affects PORTA_PCR2 register */
  PORT_HAL_SetMuxMode(PORTA,2UL,kPortMuxAlt7);
}

void configure_tpm_pins(uint32_t instance)
{
  switch(instance) {
    case TPM2_IDX:                       /* HW_TPM2 */
      /* Affects PORTA_PCR10 register */
      PORT_HAL_SetMuxMode(PORTA,10UL,kPortMuxAlt6);
      PORT_HAL_SetPullMode(PORTA,10UL,kPortPullUp);
      PORT_HAL_SetPullCmd(PORTA,10UL,true);

      SIM_HAL_SetTpmChSrcMode(SIM,TPM2_IDX,0u,kSimTpmChSrc0);
      break;
    default:
      break;
  }
}

void configure_tsi_pins(uint32_t instance)
{
  /* Affects PORTB_PCR18 register */
  PORT_HAL_SetMuxMode(PORTB,18UL,kPortPinDisabled);
  /* Affects PORTB_PCR19 register */
  PORT_HAL_SetMuxMode(PORTB,19UL,kPortPinDisabled);
}

void configure_flexbus_pins(uint32_t instance)
{
  switch (instance) {
    case FB_IDX:
      /* Address pins */
      PORT_HAL_SetMuxMode(PORTD, 6u, kPortMuxAlt5);      /* FB_AD0 */
      PORT_HAL_SetMuxMode(PORTD, 5u, kPortMuxAlt5);      /* FB_AD1 */
      PORT_HAL_SetMuxMode(PORTD, 4u, kPortMuxAlt5);      /* FB_AD2 */
      PORT_HAL_SetMuxMode(PORTD, 3u, kPortMuxAlt5);      /* FB_AD3 */
      PORT_HAL_SetMuxMode(PORTD, 2u, kPortMuxAlt5);      /* FB_AD4 */
      PORT_HAL_SetMuxMode(PORTC, 10u, kPortMuxAlt5);     /* FB_AD5 */
      PORT_HAL_SetMuxMode(PORTC, 9u, kPortMuxAlt5);      /* FB_AD6 */
      PORT_HAL_SetMuxMode(PORTC, 8u, kPortMuxAlt5);      /* FB_AD7 */
      PORT_HAL_SetMuxMode(PORTC, 7u, kPortMuxAlt5);      /* FB_AD8 */
      PORT_HAL_SetMuxMode(PORTC, 6u, kPortMuxAlt5);      /* FB_AD9 */
      PORT_HAL_SetMuxMode(PORTC, 5u, kPortMuxAlt5);      /* FB_AD10 */
      /* Comment out for UART1 purpose.*/
      // PORT_HAL_SetMuxMode(PORTC, 4u, kPortMuxAlt5);      /* FB_AD11 */
      PORT_HAL_SetMuxMode(PORTC, 2u, kPortMuxAlt5);      /* FB_AD12 */
      PORT_HAL_SetMuxMode(PORTC, 1u, kPortMuxAlt5);      /* FB_AD13 */
      PORT_HAL_SetMuxMode(PORTC, 0u, kPortMuxAlt5);      /* FB_AD14 */
      PORT_HAL_SetMuxMode(PORTB, 18u, kPortMuxAlt5);     /* FB_AD15 */
      PORT_HAL_SetMuxMode(PORTB, 17u, kPortMuxAlt5);     /* FB_AD16 */
      PORT_HAL_SetMuxMode(PORTB, 16u, kPortMuxAlt5);     /* FB_AD17 */
      PORT_HAL_SetMuxMode(PORTB, 11u, kPortMuxAlt5);     /* FB_AD18 */
      PORT_HAL_SetMuxMode(PORTB, 10u, kPortMuxAlt5);     /* FB_AD19 */
      PORT_HAL_SetMuxMode(PORTC, 15u, kPortMuxAlt5);     /* FB_AD24 */
      PORT_HAL_SetMuxMode(PORTC, 14u, kPortMuxAlt5);     /* FB_AD25 */
      PORT_HAL_SetMuxMode(PORTC, 13u, kPortMuxAlt5);     /* FB_AD26 */
      PORT_HAL_SetMuxMode(PORTC, 12u, kPortMuxAlt5);     /* FB_AD27 */
      PORT_HAL_SetMuxMode(PORTB, 23u, kPortMuxAlt5);     /* FB_D28 */
      PORT_HAL_SetMuxMode(PORTB, 22u, kPortMuxAlt5);     /* FB_D29 */
      PORT_HAL_SetMuxMode(PORTB, 21u, kPortMuxAlt5);     /* FB_D30 */
      PORT_HAL_SetMuxMode(PORTB, 20u, kPortMuxAlt5);     /* FB_D31 */

      /* R/W */
      PORT_HAL_SetMuxMode(PORTC, 11u, kPortMuxAlt5);     /* FB_R/W_B */

      /* OE */
      PORT_HAL_SetMuxMode(PORTB, 19u, kPortMuxAlt5);     /* FB_OE_B */

      /* CS */
      PORT_HAL_SetMuxMode(PORTD, 1u, kPortMuxAlt5);      /* FB_CS0 */
      PORT_HAL_SetMuxMode(PORTD, 0u, kPortMuxAlt5);      /* FB_CS1 */

      /* CLKOUT */
      /* Comment out for UART1 purpose.*/
      // PORT_HAL_SetMuxMode(PORTC, 3u, kPortMuxAlt5);      /* FB_CLKOUT */
      break;
    default:
      break;
  }
}

void configure_qspi_pins(uint32_t instance)
{
  switch (instance) {
    case QuadSPI0_IDX:
      /* Serial flash A pins */
      PORT_HAL_SetMuxMode(PORTE,0u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,1u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,2u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,3u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,4u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,5u,kPortMuxAlt5);

      /* Serial flash B pins */
      PORT_HAL_SetMuxMode(PORTE,6u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,7u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,8u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,9u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,10u,kPortMuxAlt5);
      PORT_HAL_SetMuxMode(PORTE,11u,kPortMuxAlt5);
      break;
    default:
      break;
  }

}

/* Setup all smartcard interface pins */
void configure_smartcard_pins(uint32_t instance)
{
    /* IO*/
     PORT_HAL_SetMuxMode(PORTB,4u,kPortMuxAlt2);
     PORT_HAL_SetOpenDrainCmd(PORTB,4u, true);

    /* Card clock */
    PORT_HAL_SetMuxMode(PORTB,5u,kPortMuxAlt2);
    PORT_HAL_SetDriveStrengthMode(PORTB, 5u, kPortHighDriveStrength);
    PORT_HAL_SetPullMode(PORTB,5u,kPortPullUp);
    PORT_HAL_SetPullCmd(PORTB,5u, true);

    /* Reset */
    PORT_HAL_SetMuxMode(PORTB,8u,kPortMuxAlt2);
    PORT_HAL_SetDriveStrengthMode(PORTB, 8u, kPortHighDriveStrength);
    PORT_HAL_SetPullMode(PORTB,8u,kPortPullUp);
    PORT_HAL_SetPullCmd(PORTB,8u, true);

    /* Presense Detect */
    PORT_HAL_SetMuxMode(PORTB,7u,kPortMuxAlt2);

    /* VCCEN */
    PORT_HAL_SetMuxMode(PORTB,6u,kPortMuxAlt2);
    PORT_HAL_SetDriveStrengthMode(PORTB, 6u, kPortHighDriveStrength);
    PORT_HAL_SetPullMode(PORTB,6u,kPortPullUp);
    PORT_HAL_SetPullCmd(PORTB,6u, true);
}

/* END pin_mux. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
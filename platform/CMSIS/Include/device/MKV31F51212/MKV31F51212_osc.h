/*
** ###################################################################
**     Compilers:           Keil ARM C/C++ Compiler
**                          Freescale C/C++ for Embedded ARM
**                          GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**
**     Reference manual:    KV31P100M120SF7RM, Rev. 1, March 24, 2014
**     Version:             rev. 1.4, 2014-05-06
**     Build:               b140604
**
**     Abstract:
**         Extension to the CMSIS register access layer header.
**
**     Copyright (c) 2014 Freescale Semiconductor, Inc.
**     All rights reserved.
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
**     http:                 www.freescale.com
**     mail:                 support@freescale.com
**
**     Revisions:
**     - rev. 1.0 (2013-11-01)
**         Initial version.
**     - rev. 1.1 (2013-12-20)
**         Update according to reference manual rev. 0.6,
**     - rev. 1.2 (2014-01-13)
**         Update according to reference manual rev. 0.61,
**     - rev. 1.3 (2014-02-10)
**         The declaration of clock configurations has been moved to separate header file system_MKV31F51212.h
**     - rev. 1.4 (2014-05-06)
**         Update according to reference manual rev. 1.0,
**         Update of system and startup files.
**         Module access macro module_BASES replaced by module_BASE_PTRS.
**
** ###################################################################
*/

/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_OSC_REGISTERS_H__
#define __HW_OSC_REGISTERS_H__

#include "MKV31F51212.h"
#include "fsl_bitaccess.h"

/*
 * MKV31F51212 OSC
 *
 * Oscillator
 *
 * Registers defined in this header file:
 * - HW_OSC_CR - OSC Control Register
 * - HW_OSC_DIV - OSC_DIV
 *
 * - hw_osc_t - Struct containing all module registers.
 */

#define HW_OSC_INSTANCE_COUNT (1U) /*!< Number of instances of the OSC module. */

/*******************************************************************************
 * HW_OSC_CR - OSC Control Register
 ******************************************************************************/

/*!
 * @brief HW_OSC_CR - OSC Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * After OSC is enabled and starts generating the clocks, the configurations
 * such as low power and frequency range, must not be changed.
 */
typedef union _hw_osc_cr
{
    uint8_t U;
    struct _hw_osc_cr_bitfields
    {
        uint8_t SC16P : 1;             /*!< [0] Oscillator 16 pF Capacitor Load Configure
                                        * */
        uint8_t SC8P : 1;              /*!< [1] Oscillator 8 pF Capacitor Load Configure */
        uint8_t SC4P : 1;              /*!< [2] Oscillator 4 pF Capacitor Load Configure */
        uint8_t SC2P : 1;              /*!< [3] Oscillator 2 pF Capacitor Load Configure */
        uint8_t RESERVED0 : 1;         /*!< [4]  */
        uint8_t EREFSTEN : 1;          /*!< [5] External Reference Stop Enable */
        uint8_t RESERVED1 : 1;         /*!< [6]  */
        uint8_t ERCLKEN : 1;           /*!< [7] External Reference Enable */
    } B;
} hw_osc_cr_t;

/*!
 * @name Constants and macros for entire OSC_CR register
 */
/*@{*/
#define HW_OSC_CR_ADDR(x)        ((x) + 0x0U)

#define HW_OSC_CR(x)             (*(__IO hw_osc_cr_t *) HW_OSC_CR_ADDR(x))
#define HW_OSC_CR_RD(x)          (HW_OSC_CR(x).U)
#define HW_OSC_CR_WR(x, v)       (HW_OSC_CR(x).U = (v))
#define HW_OSC_CR_SET(x, v)      (HW_OSC_CR_WR(x, HW_OSC_CR_RD(x) |  (v)))
#define HW_OSC_CR_CLR(x, v)      (HW_OSC_CR_WR(x, HW_OSC_CR_RD(x) & ~(v)))
#define HW_OSC_CR_TOG(x, v)      (HW_OSC_CR_WR(x, HW_OSC_CR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual OSC_CR bitfields
 */

/*!
 * @name Register OSC_CR, field SC16P[0] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 16 pF capacitor to the oscillator load.
 */
/*@{*/
#define BP_OSC_CR_SC16P      (0U)          /*!< Bit position for OSC_CR_SC16P. */
#define BM_OSC_CR_SC16P      (0x01U)       /*!< Bit mask for OSC_CR_SC16P. */
#define BS_OSC_CR_SC16P      (1U)          /*!< Bit field size in bits for OSC_CR_SC16P. */

/*! @brief Read current value of the OSC_CR_SC16P field. */
#define BR_OSC_CR_SC16P(x)   (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC16P))

/*! @brief Format value for bitfield OSC_CR_SC16P. */
#define BF_OSC_CR_SC16P(v)   ((uint8_t)((uint8_t)(v) << BP_OSC_CR_SC16P) & BM_OSC_CR_SC16P)

/*! @brief Set the SC16P field to a new value. */
#define BW_OSC_CR_SC16P(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC16P) = (v))
/*@}*/

/*!
 * @name Register OSC_CR, field SC8P[1] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 8 pF capacitor to the oscillator load.
 */
/*@{*/
#define BP_OSC_CR_SC8P       (1U)          /*!< Bit position for OSC_CR_SC8P. */
#define BM_OSC_CR_SC8P       (0x02U)       /*!< Bit mask for OSC_CR_SC8P. */
#define BS_OSC_CR_SC8P       (1U)          /*!< Bit field size in bits for OSC_CR_SC8P. */

/*! @brief Read current value of the OSC_CR_SC8P field. */
#define BR_OSC_CR_SC8P(x)    (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC8P))

/*! @brief Format value for bitfield OSC_CR_SC8P. */
#define BF_OSC_CR_SC8P(v)    ((uint8_t)((uint8_t)(v) << BP_OSC_CR_SC8P) & BM_OSC_CR_SC8P)

/*! @brief Set the SC8P field to a new value. */
#define BW_OSC_CR_SC8P(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC8P) = (v))
/*@}*/

/*!
 * @name Register OSC_CR, field SC4P[2] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 4 pF capacitor to the oscillator load.
 */
/*@{*/
#define BP_OSC_CR_SC4P       (2U)          /*!< Bit position for OSC_CR_SC4P. */
#define BM_OSC_CR_SC4P       (0x04U)       /*!< Bit mask for OSC_CR_SC4P. */
#define BS_OSC_CR_SC4P       (1U)          /*!< Bit field size in bits for OSC_CR_SC4P. */

/*! @brief Read current value of the OSC_CR_SC4P field. */
#define BR_OSC_CR_SC4P(x)    (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC4P))

/*! @brief Format value for bitfield OSC_CR_SC4P. */
#define BF_OSC_CR_SC4P(v)    ((uint8_t)((uint8_t)(v) << BP_OSC_CR_SC4P) & BM_OSC_CR_SC4P)

/*! @brief Set the SC4P field to a new value. */
#define BW_OSC_CR_SC4P(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC4P) = (v))
/*@}*/

/*!
 * @name Register OSC_CR, field SC2P[3] (RW)
 *
 * Configures the oscillator load.
 *
 * Values:
 * - 0 - Disable the selection.
 * - 1 - Add 2 pF capacitor to the oscillator load.
 */
/*@{*/
#define BP_OSC_CR_SC2P       (3U)          /*!< Bit position for OSC_CR_SC2P. */
#define BM_OSC_CR_SC2P       (0x08U)       /*!< Bit mask for OSC_CR_SC2P. */
#define BS_OSC_CR_SC2P       (1U)          /*!< Bit field size in bits for OSC_CR_SC2P. */

/*! @brief Read current value of the OSC_CR_SC2P field. */
#define BR_OSC_CR_SC2P(x)    (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC2P))

/*! @brief Format value for bitfield OSC_CR_SC2P. */
#define BF_OSC_CR_SC2P(v)    ((uint8_t)((uint8_t)(v) << BP_OSC_CR_SC2P) & BM_OSC_CR_SC2P)

/*! @brief Set the SC2P field to a new value. */
#define BW_OSC_CR_SC2P(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_SC2P) = (v))
/*@}*/

/*!
 * @name Register OSC_CR, field EREFSTEN[5] (RW)
 *
 * Controls whether or not the external reference clock (OSCERCLK) remains
 * enabled when MCU enters Stop mode.
 *
 * Values:
 * - 0 - External reference clock is disabled in Stop mode.
 * - 1 - External reference clock stays enabled in Stop mode if ERCLKEN is set
 *     before entering Stop mode.
 */
/*@{*/
#define BP_OSC_CR_EREFSTEN   (5U)          /*!< Bit position for OSC_CR_EREFSTEN. */
#define BM_OSC_CR_EREFSTEN   (0x20U)       /*!< Bit mask for OSC_CR_EREFSTEN. */
#define BS_OSC_CR_EREFSTEN   (1U)          /*!< Bit field size in bits for OSC_CR_EREFSTEN. */

/*! @brief Read current value of the OSC_CR_EREFSTEN field. */
#define BR_OSC_CR_EREFSTEN(x) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_EREFSTEN))

/*! @brief Format value for bitfield OSC_CR_EREFSTEN. */
#define BF_OSC_CR_EREFSTEN(v) ((uint8_t)((uint8_t)(v) << BP_OSC_CR_EREFSTEN) & BM_OSC_CR_EREFSTEN)

/*! @brief Set the EREFSTEN field to a new value. */
#define BW_OSC_CR_EREFSTEN(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_EREFSTEN) = (v))
/*@}*/

/*!
 * @name Register OSC_CR, field ERCLKEN[7] (RW)
 *
 * Enables external reference clock (OSCERCLK).
 *
 * Values:
 * - 0 - External reference clock is inactive.
 * - 1 - External reference clock is enabled.
 */
/*@{*/
#define BP_OSC_CR_ERCLKEN    (7U)          /*!< Bit position for OSC_CR_ERCLKEN. */
#define BM_OSC_CR_ERCLKEN    (0x80U)       /*!< Bit mask for OSC_CR_ERCLKEN. */
#define BS_OSC_CR_ERCLKEN    (1U)          /*!< Bit field size in bits for OSC_CR_ERCLKEN. */

/*! @brief Read current value of the OSC_CR_ERCLKEN field. */
#define BR_OSC_CR_ERCLKEN(x) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_ERCLKEN))

/*! @brief Format value for bitfield OSC_CR_ERCLKEN. */
#define BF_OSC_CR_ERCLKEN(v) ((uint8_t)((uint8_t)(v) << BP_OSC_CR_ERCLKEN) & BM_OSC_CR_ERCLKEN)

/*! @brief Set the ERCLKEN field to a new value. */
#define BW_OSC_CR_ERCLKEN(x, v) (BITBAND_ACCESS8(HW_OSC_CR_ADDR(x), BP_OSC_CR_ERCLKEN) = (v))
/*@}*/

/*******************************************************************************
 * HW_OSC_DIV - OSC_DIV
 ******************************************************************************/

/*!
 * @brief HW_OSC_DIV - OSC_DIV (RW)
 *
 * Reset value: 0x00U
 *
 * OSC CLock divider register.
 */
typedef union _hw_osc_div
{
    uint8_t U;
    struct _hw_osc_div_bitfields
    {
        uint8_t RESERVED0 : 6;         /*!< [5:0]  */
        uint8_t ERPS : 2;              /*!< [7:6]  */
    } B;
} hw_osc_div_t;

/*!
 * @name Constants and macros for entire OSC_DIV register
 */
/*@{*/
#define HW_OSC_DIV_ADDR(x)       ((x) + 0x2U)

#define HW_OSC_DIV(x)            (*(__IO hw_osc_div_t *) HW_OSC_DIV_ADDR(x))
#define HW_OSC_DIV_RD(x)         (HW_OSC_DIV(x).U)
#define HW_OSC_DIV_WR(x, v)      (HW_OSC_DIV(x).U = (v))
#define HW_OSC_DIV_SET(x, v)     (HW_OSC_DIV_WR(x, HW_OSC_DIV_RD(x) |  (v)))
#define HW_OSC_DIV_CLR(x, v)     (HW_OSC_DIV_WR(x, HW_OSC_DIV_RD(x) & ~(v)))
#define HW_OSC_DIV_TOG(x, v)     (HW_OSC_DIV_WR(x, HW_OSC_DIV_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual OSC_DIV bitfields
 */

/*!
 * @name Register OSC_DIV, field ERPS[7:6] (RW)
 *
 * ERCLK prescaler. These two bits are used to divide the ERCLK output. The
 * un-divided ERCLK output is not affected by these two bits.
 *
 * Values:
 * - 00 - The divisor ratio is 1.
 * - 01 - The divisor ratio is 2.
 * - 10 - The divisor ratio is 4.
 * - 11 - The divisor ratio is 8.
 */
/*@{*/
#define BP_OSC_DIV_ERPS      (6U)          /*!< Bit position for OSC_DIV_ERPS. */
#define BM_OSC_DIV_ERPS      (0xC0U)       /*!< Bit mask for OSC_DIV_ERPS. */
#define BS_OSC_DIV_ERPS      (2U)          /*!< Bit field size in bits for OSC_DIV_ERPS. */

/*! @brief Read current value of the OSC_DIV_ERPS field. */
#define BR_OSC_DIV_ERPS(x)   (HW_OSC_DIV(x).B.ERPS)

/*! @brief Format value for bitfield OSC_DIV_ERPS. */
#define BF_OSC_DIV_ERPS(v)   ((uint8_t)((uint8_t)(v) << BP_OSC_DIV_ERPS) & BM_OSC_DIV_ERPS)

/*! @brief Set the ERPS field to a new value. */
#define BW_OSC_DIV_ERPS(x, v) (HW_OSC_DIV_WR(x, (HW_OSC_DIV_RD(x) & ~BM_OSC_DIV_ERPS) | BF_OSC_DIV_ERPS(v)))
/*@}*/

/*******************************************************************************
 * hw_osc_t - module struct
 ******************************************************************************/
/*!
 * @brief All OSC module registers.
 */
#pragma pack(1)
typedef struct _hw_osc
{
    __IO hw_osc_cr_t CR;                   /*!< [0x0] OSC Control Register */
    uint8_t _reserved0[1];
    __IO hw_osc_div_t DIV;                 /*!< [0x2] OSC_DIV */
} hw_osc_t;
#pragma pack()

/*! @brief Macro to access all OSC registers. */
/*! @param x OSC module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_OSC(OSC_BASE)</code>. */
#define HW_OSC(x)      (*(hw_osc_t *)(x))

#endif /* __HW_OSC_REGISTERS_H__ */
/* EOF */

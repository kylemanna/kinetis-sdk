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
#ifndef __HW_DAC_REGISTERS_H__
#define __HW_DAC_REGISTERS_H__

#include "MKV31F51212.h"
#include "fsl_bitaccess.h"

/*
 * MKV31F51212 DAC
 *
 * 12-Bit Digital-to-Analog Converter
 *
 * Registers defined in this header file:
 * - HW_DAC_DATnL - DAC Data Low Register
 * - HW_DAC_DATnH - DAC Data High Register
 * - HW_DAC_SR - DAC Status Register
 * - HW_DAC_C0 - DAC Control Register
 * - HW_DAC_C1 - DAC Control Register 1
 * - HW_DAC_C2 - DAC Control Register 2
 *
 * - hw_dac_t - Struct containing all module registers.
 */

#define HW_DAC_INSTANCE_COUNT (2U) /*!< Number of instances of the DAC module. */
#define HW_DAC0 (0U) /*!< Instance number for DAC0. */
#define HW_DAC1 (1U) /*!< Instance number for DAC1. */

/*******************************************************************************
 * HW_DAC_DATnL - DAC Data Low Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_DATnL - DAC Data Low Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_datnl
{
    uint8_t U;
    struct _hw_dac_datnl_bitfields
    {
        uint8_t DATA0 : 8;             /*!< [7:0]  */
    } B;
} hw_dac_datnl_t;

/*!
 * @name Constants and macros for entire DAC_DATnL register
 */
/*@{*/
#define HW_DAC_DATnL_COUNT (16U)

#define HW_DAC_DATnL_ADDR(x, n)  ((x) + 0x0U + (0x2U * (n)))

#define HW_DAC_DATnL(x, n)       (*(__IO hw_dac_datnl_t *) HW_DAC_DATnL_ADDR(x, n))
#define HW_DAC_DATnL_RD(x, n)    (HW_DAC_DATnL(x, n).U)
#define HW_DAC_DATnL_WR(x, n, v) (HW_DAC_DATnL(x, n).U = (v))
#define HW_DAC_DATnL_SET(x, n, v) (HW_DAC_DATnL_WR(x, n, HW_DAC_DATnL_RD(x, n) |  (v)))
#define HW_DAC_DATnL_CLR(x, n, v) (HW_DAC_DATnL_WR(x, n, HW_DAC_DATnL_RD(x, n) & ~(v)))
#define HW_DAC_DATnL_TOG(x, n, v) (HW_DAC_DATnL_WR(x, n, HW_DAC_DATnL_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_DATnL bitfields
 */

/*!
 * @name Register DAC_DATnL, field DATA0[7:0] (RW)
 *
 * When the DAC buffer is not enabled, DATA[11:0] controls the output voltage
 * based on the following formula: V out = V in * (1 + DACDAT0[11:0])/4096 When the
 * DAC buffer is enabled, DATA is mapped to the 16-word buffer.
 */
/*@{*/
#define BP_DAC_DATnL_DATA0   (0U)          /*!< Bit position for DAC_DATnL_DATA0. */
#define BM_DAC_DATnL_DATA0   (0xFFU)       /*!< Bit mask for DAC_DATnL_DATA0. */
#define BS_DAC_DATnL_DATA0   (8U)          /*!< Bit field size in bits for DAC_DATnL_DATA0. */

/*! @brief Read current value of the DAC_DATnL_DATA0 field. */
#define BR_DAC_DATnL_DATA0(x, n) (HW_DAC_DATnL(x, n).U)

/*! @brief Format value for bitfield DAC_DATnL_DATA0. */
#define BF_DAC_DATnL_DATA0(v) ((uint8_t)((uint8_t)(v) << BP_DAC_DATnL_DATA0) & BM_DAC_DATnL_DATA0)

/*! @brief Set the DATA0 field to a new value. */
#define BW_DAC_DATnL_DATA0(x, n, v) (HW_DAC_DATnL_WR(x, n, v))
/*@}*/
/*******************************************************************************
 * HW_DAC_DATnH - DAC Data High Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_DATnH - DAC Data High Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_datnh
{
    uint8_t U;
    struct _hw_dac_datnh_bitfields
    {
        uint8_t DATA1 : 4;             /*!< [3:0]  */
        uint8_t RESERVED0 : 4;         /*!< [7:4]  */
    } B;
} hw_dac_datnh_t;

/*!
 * @name Constants and macros for entire DAC_DATnH register
 */
/*@{*/
#define HW_DAC_DATnH_COUNT (16U)

#define HW_DAC_DATnH_ADDR(x, n)  ((x) + 0x1U + (0x2U * (n)))

#define HW_DAC_DATnH(x, n)       (*(__IO hw_dac_datnh_t *) HW_DAC_DATnH_ADDR(x, n))
#define HW_DAC_DATnH_RD(x, n)    (HW_DAC_DATnH(x, n).U)
#define HW_DAC_DATnH_WR(x, n, v) (HW_DAC_DATnH(x, n).U = (v))
#define HW_DAC_DATnH_SET(x, n, v) (HW_DAC_DATnH_WR(x, n, HW_DAC_DATnH_RD(x, n) |  (v)))
#define HW_DAC_DATnH_CLR(x, n, v) (HW_DAC_DATnH_WR(x, n, HW_DAC_DATnH_RD(x, n) & ~(v)))
#define HW_DAC_DATnH_TOG(x, n, v) (HW_DAC_DATnH_WR(x, n, HW_DAC_DATnH_RD(x, n) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_DATnH bitfields
 */

/*!
 * @name Register DAC_DATnH, field DATA1[3:0] (RW)
 *
 * When the DAC Buffer is not enabled, DATA[11:0] controls the output voltage
 * based on the following formula. V out = V in * (1 + DACDAT0[11:0])/4096 When the
 * DAC buffer is enabled, DATA[11:0] is mapped to the 16-word buffer.
 */
/*@{*/
#define BP_DAC_DATnH_DATA1   (0U)          /*!< Bit position for DAC_DATnH_DATA1. */
#define BM_DAC_DATnH_DATA1   (0x0FU)       /*!< Bit mask for DAC_DATnH_DATA1. */
#define BS_DAC_DATnH_DATA1   (4U)          /*!< Bit field size in bits for DAC_DATnH_DATA1. */

/*! @brief Read current value of the DAC_DATnH_DATA1 field. */
#define BR_DAC_DATnH_DATA1(x, n) (HW_DAC_DATnH(x, n).B.DATA1)

/*! @brief Format value for bitfield DAC_DATnH_DATA1. */
#define BF_DAC_DATnH_DATA1(v) ((uint8_t)((uint8_t)(v) << BP_DAC_DATnH_DATA1) & BM_DAC_DATnH_DATA1)

/*! @brief Set the DATA1 field to a new value. */
#define BW_DAC_DATnH_DATA1(x, n, v) (HW_DAC_DATnH_WR(x, n, (HW_DAC_DATnH_RD(x, n) & ~BM_DAC_DATnH_DATA1) | BF_DAC_DATnH_DATA1(v)))
/*@}*/

/*******************************************************************************
 * HW_DAC_SR - DAC Status Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_SR - DAC Status Register (RW)
 *
 * Reset value: 0x02U
 *
 * If DMA is enabled, the flags can be cleared automatically by DMA when the DMA
 * request is done. Writing 0 to a field clears it whereas writing 1 has no
 * effect. After reset, DACBFRPTF is set and can be cleared by software, if needed.
 * The flags are set only when the data buffer status is changed.
 */
typedef union _hw_dac_sr
{
    uint8_t U;
    struct _hw_dac_sr_bitfields
    {
        uint8_t DACBFRPBF : 1;         /*!< [0] DAC Buffer Read Pointer Bottom
                                        * Position Flag */
        uint8_t DACBFRPTF : 1;         /*!< [1] DAC Buffer Read Pointer Top Position
                                        * Flag */
        uint8_t DACBFWMF : 1;          /*!< [2] DAC Buffer Watermark Flag */
        uint8_t RESERVED0 : 5;         /*!< [7:3]  */
    } B;
} hw_dac_sr_t;

/*!
 * @name Constants and macros for entire DAC_SR register
 */
/*@{*/
#define HW_DAC_SR_ADDR(x)        ((x) + 0x20U)

#define HW_DAC_SR(x)             (*(__IO hw_dac_sr_t *) HW_DAC_SR_ADDR(x))
#define HW_DAC_SR_RD(x)          (HW_DAC_SR(x).U)
#define HW_DAC_SR_WR(x, v)       (HW_DAC_SR(x).U = (v))
#define HW_DAC_SR_SET(x, v)      (HW_DAC_SR_WR(x, HW_DAC_SR_RD(x) |  (v)))
#define HW_DAC_SR_CLR(x, v)      (HW_DAC_SR_WR(x, HW_DAC_SR_RD(x) & ~(v)))
#define HW_DAC_SR_TOG(x, v)      (HW_DAC_SR_WR(x, HW_DAC_SR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_SR bitfields
 */

/*!
 * @name Register DAC_SR, field DACBFRPBF[0] (RW)
 *
 * In FIFO mode, it is FIFO FULL status bit. It means FIFO read pointer equals
 * Write Pointer because of Write Pointer increase. If this bit is set, any write
 * to FIFO from either DMA or CPU is ignored by DAC. It is cleared if there is
 * any DAC trigger making the DAC read pointer increase. Write to this bit is
 * ignored in FIFO mode.
 *
 * Values:
 * - 0 - The DAC buffer read pointer is not equal to C2[DACBFUP].
 * - 1 - The DAC buffer read pointer is equal to C2[DACBFUP].
 */
/*@{*/
#define BP_DAC_SR_DACBFRPBF  (0U)          /*!< Bit position for DAC_SR_DACBFRPBF. */
#define BM_DAC_SR_DACBFRPBF  (0x01U)       /*!< Bit mask for DAC_SR_DACBFRPBF. */
#define BS_DAC_SR_DACBFRPBF  (1U)          /*!< Bit field size in bits for DAC_SR_DACBFRPBF. */

/*! @brief Read current value of the DAC_SR_DACBFRPBF field. */
#define BR_DAC_SR_DACBFRPBF(x) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPBF))

/*! @brief Format value for bitfield DAC_SR_DACBFRPBF. */
#define BF_DAC_SR_DACBFRPBF(v) ((uint8_t)((uint8_t)(v) << BP_DAC_SR_DACBFRPBF) & BM_DAC_SR_DACBFRPBF)

/*! @brief Set the DACBFRPBF field to a new value. */
#define BW_DAC_SR_DACBFRPBF(x, v) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPBF) = (v))
/*@}*/

/*!
 * @name Register DAC_SR, field DACBFRPTF[1] (RW)
 *
 * In FIFO mode, it is FIFO nearly empty flag. It is set when only one data
 * remains in FIFO. Any DAC trigger does not increase the Read Pointer if this bit is
 * set to avoid any possible glitch or abrupt change at DAC output. It is
 * cleared automatically if FIFO is not empty.
 *
 * Values:
 * - 0 - The DAC buffer read pointer is not zero.
 * - 1 - The DAC buffer read pointer is zero.
 */
/*@{*/
#define BP_DAC_SR_DACBFRPTF  (1U)          /*!< Bit position for DAC_SR_DACBFRPTF. */
#define BM_DAC_SR_DACBFRPTF  (0x02U)       /*!< Bit mask for DAC_SR_DACBFRPTF. */
#define BS_DAC_SR_DACBFRPTF  (1U)          /*!< Bit field size in bits for DAC_SR_DACBFRPTF. */

/*! @brief Read current value of the DAC_SR_DACBFRPTF field. */
#define BR_DAC_SR_DACBFRPTF(x) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPTF))

/*! @brief Format value for bitfield DAC_SR_DACBFRPTF. */
#define BF_DAC_SR_DACBFRPTF(v) ((uint8_t)((uint8_t)(v) << BP_DAC_SR_DACBFRPTF) & BM_DAC_SR_DACBFRPTF)

/*! @brief Set the DACBFRPTF field to a new value. */
#define BW_DAC_SR_DACBFRPTF(x, v) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFRPTF) = (v))
/*@}*/

/*!
 * @name Register DAC_SR, field DACBFWMF[2] (RW)
 *
 * This bit is set if the remaining FIFO data is less than the watermark
 * setting. It is cleared automatically by writing data into FIFO by DMA or CPU. Write
 * to this bit is ignored in FIFO mode.
 *
 * Values:
 * - 0 - The DAC buffer read pointer has not reached the watermark level.
 * - 1 - The DAC buffer read pointer has reached the watermark level.
 */
/*@{*/
#define BP_DAC_SR_DACBFWMF   (2U)          /*!< Bit position for DAC_SR_DACBFWMF. */
#define BM_DAC_SR_DACBFWMF   (0x04U)       /*!< Bit mask for DAC_SR_DACBFWMF. */
#define BS_DAC_SR_DACBFWMF   (1U)          /*!< Bit field size in bits for DAC_SR_DACBFWMF. */

/*! @brief Read current value of the DAC_SR_DACBFWMF field. */
#define BR_DAC_SR_DACBFWMF(x) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFWMF))

/*! @brief Format value for bitfield DAC_SR_DACBFWMF. */
#define BF_DAC_SR_DACBFWMF(v) ((uint8_t)((uint8_t)(v) << BP_DAC_SR_DACBFWMF) & BM_DAC_SR_DACBFWMF)

/*! @brief Set the DACBFWMF field to a new value. */
#define BW_DAC_SR_DACBFWMF(x, v) (BITBAND_ACCESS8(HW_DAC_SR_ADDR(x), BP_DAC_SR_DACBFWMF) = (v))
/*@}*/

/*******************************************************************************
 * HW_DAC_C0 - DAC Control Register
 ******************************************************************************/

/*!
 * @brief HW_DAC_C0 - DAC Control Register (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_c0
{
    uint8_t U;
    struct _hw_dac_c0_bitfields
    {
        uint8_t DACBBIEN : 1;          /*!< [0] DAC Buffer Read Pointer Bottom Flag
                                        * Interrupt Enable */
        uint8_t DACBTIEN : 1;          /*!< [1] DAC Buffer Read Pointer Top Flag
                                        * Interrupt Enable */
        uint8_t DACBWIEN : 1;          /*!< [2] DAC Buffer Watermark Interrupt Enable
                                        * */
        uint8_t LPEN : 1;              /*!< [3] DAC Low Power Control */
        uint8_t DACSWTRG : 1;          /*!< [4] DAC Software Trigger */
        uint8_t DACTRGSEL : 1;         /*!< [5] DAC Trigger Select */
        uint8_t DACRFS : 1;            /*!< [6] DAC Reference Select */
        uint8_t DACEN : 1;             /*!< [7] DAC Enable */
    } B;
} hw_dac_c0_t;

/*!
 * @name Constants and macros for entire DAC_C0 register
 */
/*@{*/
#define HW_DAC_C0_ADDR(x)        ((x) + 0x21U)

#define HW_DAC_C0(x)             (*(__IO hw_dac_c0_t *) HW_DAC_C0_ADDR(x))
#define HW_DAC_C0_RD(x)          (HW_DAC_C0(x).U)
#define HW_DAC_C0_WR(x, v)       (HW_DAC_C0(x).U = (v))
#define HW_DAC_C0_SET(x, v)      (HW_DAC_C0_WR(x, HW_DAC_C0_RD(x) |  (v)))
#define HW_DAC_C0_CLR(x, v)      (HW_DAC_C0_WR(x, HW_DAC_C0_RD(x) & ~(v)))
#define HW_DAC_C0_TOG(x, v)      (HW_DAC_C0_WR(x, HW_DAC_C0_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C0 bitfields
 */

/*!
 * @name Register DAC_C0, field DACBBIEN[0] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer bottom flag interrupt is disabled.
 * - 1 - The DAC buffer read pointer bottom flag interrupt is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACBBIEN   (0U)          /*!< Bit position for DAC_C0_DACBBIEN. */
#define BM_DAC_C0_DACBBIEN   (0x01U)       /*!< Bit mask for DAC_C0_DACBBIEN. */
#define BS_DAC_C0_DACBBIEN   (1U)          /*!< Bit field size in bits for DAC_C0_DACBBIEN. */

/*! @brief Read current value of the DAC_C0_DACBBIEN field. */
#define BR_DAC_C0_DACBBIEN(x) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBBIEN))

/*! @brief Format value for bitfield DAC_C0_DACBBIEN. */
#define BF_DAC_C0_DACBBIEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACBBIEN) & BM_DAC_C0_DACBBIEN)

/*! @brief Set the DACBBIEN field to a new value. */
#define BW_DAC_C0_DACBBIEN(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBBIEN) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACBTIEN[1] (RW)
 *
 * Values:
 * - 0 - The DAC buffer read pointer top flag interrupt is disabled.
 * - 1 - The DAC buffer read pointer top flag interrupt is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACBTIEN   (1U)          /*!< Bit position for DAC_C0_DACBTIEN. */
#define BM_DAC_C0_DACBTIEN   (0x02U)       /*!< Bit mask for DAC_C0_DACBTIEN. */
#define BS_DAC_C0_DACBTIEN   (1U)          /*!< Bit field size in bits for DAC_C0_DACBTIEN. */

/*! @brief Read current value of the DAC_C0_DACBTIEN field. */
#define BR_DAC_C0_DACBTIEN(x) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBTIEN))

/*! @brief Format value for bitfield DAC_C0_DACBTIEN. */
#define BF_DAC_C0_DACBTIEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACBTIEN) & BM_DAC_C0_DACBTIEN)

/*! @brief Set the DACBTIEN field to a new value. */
#define BW_DAC_C0_DACBTIEN(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBTIEN) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACBWIEN[2] (RW)
 *
 * Values:
 * - 0 - The DAC buffer watermark interrupt is disabled.
 * - 1 - The DAC buffer watermark interrupt is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACBWIEN   (2U)          /*!< Bit position for DAC_C0_DACBWIEN. */
#define BM_DAC_C0_DACBWIEN   (0x04U)       /*!< Bit mask for DAC_C0_DACBWIEN. */
#define BS_DAC_C0_DACBWIEN   (1U)          /*!< Bit field size in bits for DAC_C0_DACBWIEN. */

/*! @brief Read current value of the DAC_C0_DACBWIEN field. */
#define BR_DAC_C0_DACBWIEN(x) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBWIEN))

/*! @brief Format value for bitfield DAC_C0_DACBWIEN. */
#define BF_DAC_C0_DACBWIEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACBWIEN) & BM_DAC_C0_DACBWIEN)

/*! @brief Set the DACBWIEN field to a new value. */
#define BW_DAC_C0_DACBWIEN(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACBWIEN) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field LPEN[3] (RW)
 *
 * See the 12-bit DAC electrical characteristics of the device data sheet for
 * details on the impact of the modes below.
 *
 * Values:
 * - 0 - High-Power mode
 * - 1 - Low-Power mode
 */
/*@{*/
#define BP_DAC_C0_LPEN       (3U)          /*!< Bit position for DAC_C0_LPEN. */
#define BM_DAC_C0_LPEN       (0x08U)       /*!< Bit mask for DAC_C0_LPEN. */
#define BS_DAC_C0_LPEN       (1U)          /*!< Bit field size in bits for DAC_C0_LPEN. */

/*! @brief Read current value of the DAC_C0_LPEN field. */
#define BR_DAC_C0_LPEN(x)    (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_LPEN))

/*! @brief Format value for bitfield DAC_C0_LPEN. */
#define BF_DAC_C0_LPEN(v)    ((uint8_t)((uint8_t)(v) << BP_DAC_C0_LPEN) & BM_DAC_C0_LPEN)

/*! @brief Set the LPEN field to a new value. */
#define BW_DAC_C0_LPEN(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_LPEN) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACSWTRG[4] (WORZ)
 *
 * Active high. This is a write-only field, which always reads 0. If DAC
 * software trigger is selected and buffer is enabled, writing 1 to this field will
 * advance the buffer read pointer once.
 *
 * Values:
 * - 0 - The DAC soft trigger is not valid.
 * - 1 - The DAC soft trigger is valid.
 */
/*@{*/
#define BP_DAC_C0_DACSWTRG   (4U)          /*!< Bit position for DAC_C0_DACSWTRG. */
#define BM_DAC_C0_DACSWTRG   (0x10U)       /*!< Bit mask for DAC_C0_DACSWTRG. */
#define BS_DAC_C0_DACSWTRG   (1U)          /*!< Bit field size in bits for DAC_C0_DACSWTRG. */

/*! @brief Format value for bitfield DAC_C0_DACSWTRG. */
#define BF_DAC_C0_DACSWTRG(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACSWTRG) & BM_DAC_C0_DACSWTRG)

/*! @brief Set the DACSWTRG field to a new value. */
#define BW_DAC_C0_DACSWTRG(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACSWTRG) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACTRGSEL[5] (RW)
 *
 * Values:
 * - 0 - The DAC hardware trigger is selected.
 * - 1 - The DAC software trigger is selected.
 */
/*@{*/
#define BP_DAC_C0_DACTRGSEL  (5U)          /*!< Bit position for DAC_C0_DACTRGSEL. */
#define BM_DAC_C0_DACTRGSEL  (0x20U)       /*!< Bit mask for DAC_C0_DACTRGSEL. */
#define BS_DAC_C0_DACTRGSEL  (1U)          /*!< Bit field size in bits for DAC_C0_DACTRGSEL. */

/*! @brief Read current value of the DAC_C0_DACTRGSEL field. */
#define BR_DAC_C0_DACTRGSEL(x) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACTRGSEL))

/*! @brief Format value for bitfield DAC_C0_DACTRGSEL. */
#define BF_DAC_C0_DACTRGSEL(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACTRGSEL) & BM_DAC_C0_DACTRGSEL)

/*! @brief Set the DACTRGSEL field to a new value. */
#define BW_DAC_C0_DACTRGSEL(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACTRGSEL) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACRFS[6] (RW)
 *
 * Values:
 * - 0 - The DAC selects DACREF_1 as the reference voltage.
 * - 1 - The DAC selects DACREF_2 as the reference voltage.
 */
/*@{*/
#define BP_DAC_C0_DACRFS     (6U)          /*!< Bit position for DAC_C0_DACRFS. */
#define BM_DAC_C0_DACRFS     (0x40U)       /*!< Bit mask for DAC_C0_DACRFS. */
#define BS_DAC_C0_DACRFS     (1U)          /*!< Bit field size in bits for DAC_C0_DACRFS. */

/*! @brief Read current value of the DAC_C0_DACRFS field. */
#define BR_DAC_C0_DACRFS(x)  (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACRFS))

/*! @brief Format value for bitfield DAC_C0_DACRFS. */
#define BF_DAC_C0_DACRFS(v)  ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACRFS) & BM_DAC_C0_DACRFS)

/*! @brief Set the DACRFS field to a new value. */
#define BW_DAC_C0_DACRFS(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACRFS) = (v))
/*@}*/

/*!
 * @name Register DAC_C0, field DACEN[7] (RW)
 *
 * Starts the Programmable Reference Generator operation.
 *
 * Values:
 * - 0 - The DAC system is disabled.
 * - 1 - The DAC system is enabled.
 */
/*@{*/
#define BP_DAC_C0_DACEN      (7U)          /*!< Bit position for DAC_C0_DACEN. */
#define BM_DAC_C0_DACEN      (0x80U)       /*!< Bit mask for DAC_C0_DACEN. */
#define BS_DAC_C0_DACEN      (1U)          /*!< Bit field size in bits for DAC_C0_DACEN. */

/*! @brief Read current value of the DAC_C0_DACEN field. */
#define BR_DAC_C0_DACEN(x)   (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACEN))

/*! @brief Format value for bitfield DAC_C0_DACEN. */
#define BF_DAC_C0_DACEN(v)   ((uint8_t)((uint8_t)(v) << BP_DAC_C0_DACEN) & BM_DAC_C0_DACEN)

/*! @brief Set the DACEN field to a new value. */
#define BW_DAC_C0_DACEN(x, v) (BITBAND_ACCESS8(HW_DAC_C0_ADDR(x), BP_DAC_C0_DACEN) = (v))
/*@}*/

/*******************************************************************************
 * HW_DAC_C1 - DAC Control Register 1
 ******************************************************************************/

/*!
 * @brief HW_DAC_C1 - DAC Control Register 1 (RW)
 *
 * Reset value: 0x00U
 */
typedef union _hw_dac_c1
{
    uint8_t U;
    struct _hw_dac_c1_bitfields
    {
        uint8_t DACBFEN : 1;           /*!< [0] DAC Buffer Enable */
        uint8_t DACBFMD : 2;           /*!< [2:1] DAC Buffer Work Mode Select */
        uint8_t DACBFWM : 2;           /*!< [4:3] DAC Buffer Watermark Select */
        uint8_t RESERVED0 : 2;         /*!< [6:5]  */
        uint8_t DMAEN : 1;             /*!< [7] DMA Enable Select */
    } B;
} hw_dac_c1_t;

/*!
 * @name Constants and macros for entire DAC_C1 register
 */
/*@{*/
#define HW_DAC_C1_ADDR(x)        ((x) + 0x22U)

#define HW_DAC_C1(x)             (*(__IO hw_dac_c1_t *) HW_DAC_C1_ADDR(x))
#define HW_DAC_C1_RD(x)          (HW_DAC_C1(x).U)
#define HW_DAC_C1_WR(x, v)       (HW_DAC_C1(x).U = (v))
#define HW_DAC_C1_SET(x, v)      (HW_DAC_C1_WR(x, HW_DAC_C1_RD(x) |  (v)))
#define HW_DAC_C1_CLR(x, v)      (HW_DAC_C1_WR(x, HW_DAC_C1_RD(x) & ~(v)))
#define HW_DAC_C1_TOG(x, v)      (HW_DAC_C1_WR(x, HW_DAC_C1_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C1 bitfields
 */

/*!
 * @name Register DAC_C1, field DACBFEN[0] (RW)
 *
 * Values:
 * - 0 - Buffer read pointer is disabled. The converted data is always the first
 *     word of the buffer.
 * - 1 - Buffer read pointer is enabled. The converted data is the word that the
 *     read pointer points to. It means converted data can be from any word of
 *     the buffer.
 */
/*@{*/
#define BP_DAC_C1_DACBFEN    (0U)          /*!< Bit position for DAC_C1_DACBFEN. */
#define BM_DAC_C1_DACBFEN    (0x01U)       /*!< Bit mask for DAC_C1_DACBFEN. */
#define BS_DAC_C1_DACBFEN    (1U)          /*!< Bit field size in bits for DAC_C1_DACBFEN. */

/*! @brief Read current value of the DAC_C1_DACBFEN field. */
#define BR_DAC_C1_DACBFEN(x) (BITBAND_ACCESS8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DACBFEN))

/*! @brief Format value for bitfield DAC_C1_DACBFEN. */
#define BF_DAC_C1_DACBFEN(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DACBFEN) & BM_DAC_C1_DACBFEN)

/*! @brief Set the DACBFEN field to a new value. */
#define BW_DAC_C1_DACBFEN(x, v) (BITBAND_ACCESS8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DACBFEN) = (v))
/*@}*/

/*!
 * @name Register DAC_C1, field DACBFMD[2:1] (RW)
 *
 * Values:
 * - 00 - Normal mode
 * - 01 - Swing mode
 * - 10 - One-Time Scan mode
 * - 11 - FIFO mode
 */
/*@{*/
#define BP_DAC_C1_DACBFMD    (1U)          /*!< Bit position for DAC_C1_DACBFMD. */
#define BM_DAC_C1_DACBFMD    (0x06U)       /*!< Bit mask for DAC_C1_DACBFMD. */
#define BS_DAC_C1_DACBFMD    (2U)          /*!< Bit field size in bits for DAC_C1_DACBFMD. */

/*! @brief Read current value of the DAC_C1_DACBFMD field. */
#define BR_DAC_C1_DACBFMD(x) (HW_DAC_C1(x).B.DACBFMD)

/*! @brief Format value for bitfield DAC_C1_DACBFMD. */
#define BF_DAC_C1_DACBFMD(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DACBFMD) & BM_DAC_C1_DACBFMD)

/*! @brief Set the DACBFMD field to a new value. */
#define BW_DAC_C1_DACBFMD(x, v) (HW_DAC_C1_WR(x, (HW_DAC_C1_RD(x) & ~BM_DAC_C1_DACBFMD) | BF_DAC_C1_DACBFMD(v)))
/*@}*/

/*!
 * @name Register DAC_C1, field DACBFWM[4:3] (RW)
 *
 * In normal mode it controls when SR[DACBFWMF] is set. When the DAC buffer read
 * pointer reaches the word defined by this field, which is 1-4 words away from
 * the upper limit (DACBUP), SR[DACBFWMF] will be set. This allows user
 * configuration of the watermark interrupt. In FIFO mode, it is FIFO watermark select
 * field.
 *
 * Values:
 * - 00 - In normal mode, 1 word . In FIFO mode, 2 or less than 2 data remaining
 *     in FIFO will set watermark status bit.
 * - 01 - In normal mode, 2 words . In FIFO mode, Max/4 or less than Max/4 data
 *     remaining in FIFO will set watermark status bit.
 * - 10 - In normal mode, 3 words . In FIFO mode, Max/2 or less than Max/2 data
 *     remaining in FIFO will set watermark status bit.
 * - 11 - In normal mode, 4 words . In FIFO mode, Max-2 or less than Max-2 data
 *     remaining in FIFO will set watermark status bit.
 */
/*@{*/
#define BP_DAC_C1_DACBFWM    (3U)          /*!< Bit position for DAC_C1_DACBFWM. */
#define BM_DAC_C1_DACBFWM    (0x18U)       /*!< Bit mask for DAC_C1_DACBFWM. */
#define BS_DAC_C1_DACBFWM    (2U)          /*!< Bit field size in bits for DAC_C1_DACBFWM. */

/*! @brief Read current value of the DAC_C1_DACBFWM field. */
#define BR_DAC_C1_DACBFWM(x) (HW_DAC_C1(x).B.DACBFWM)

/*! @brief Format value for bitfield DAC_C1_DACBFWM. */
#define BF_DAC_C1_DACBFWM(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DACBFWM) & BM_DAC_C1_DACBFWM)

/*! @brief Set the DACBFWM field to a new value. */
#define BW_DAC_C1_DACBFWM(x, v) (HW_DAC_C1_WR(x, (HW_DAC_C1_RD(x) & ~BM_DAC_C1_DACBFWM) | BF_DAC_C1_DACBFWM(v)))
/*@}*/

/*!
 * @name Register DAC_C1, field DMAEN[7] (RW)
 *
 * Values:
 * - 0 - DMA is disabled.
 * - 1 - DMA is enabled. When DMA is enabled, the DMA request will be generated
 *     by original interrupts. The interrupts will not be presented on this
 *     module at the same time.
 */
/*@{*/
#define BP_DAC_C1_DMAEN      (7U)          /*!< Bit position for DAC_C1_DMAEN. */
#define BM_DAC_C1_DMAEN      (0x80U)       /*!< Bit mask for DAC_C1_DMAEN. */
#define BS_DAC_C1_DMAEN      (1U)          /*!< Bit field size in bits for DAC_C1_DMAEN. */

/*! @brief Read current value of the DAC_C1_DMAEN field. */
#define BR_DAC_C1_DMAEN(x)   (BITBAND_ACCESS8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DMAEN))

/*! @brief Format value for bitfield DAC_C1_DMAEN. */
#define BF_DAC_C1_DMAEN(v)   ((uint8_t)((uint8_t)(v) << BP_DAC_C1_DMAEN) & BM_DAC_C1_DMAEN)

/*! @brief Set the DMAEN field to a new value. */
#define BW_DAC_C1_DMAEN(x, v) (BITBAND_ACCESS8(HW_DAC_C1_ADDR(x), BP_DAC_C1_DMAEN) = (v))
/*@}*/

/*******************************************************************************
 * HW_DAC_C2 - DAC Control Register 2
 ******************************************************************************/

/*!
 * @brief HW_DAC_C2 - DAC Control Register 2 (RW)
 *
 * Reset value: 0x0FU
 */
typedef union _hw_dac_c2
{
    uint8_t U;
    struct _hw_dac_c2_bitfields
    {
        uint8_t DACBFUP : 4;           /*!< [3:0] DAC Buffer Upper Limit */
        uint8_t DACBFRP : 4;           /*!< [7:4] DAC Buffer Read Pointer */
    } B;
} hw_dac_c2_t;

/*!
 * @name Constants and macros for entire DAC_C2 register
 */
/*@{*/
#define HW_DAC_C2_ADDR(x)        ((x) + 0x23U)

#define HW_DAC_C2(x)             (*(__IO hw_dac_c2_t *) HW_DAC_C2_ADDR(x))
#define HW_DAC_C2_RD(x)          (HW_DAC_C2(x).U)
#define HW_DAC_C2_WR(x, v)       (HW_DAC_C2(x).U = (v))
#define HW_DAC_C2_SET(x, v)      (HW_DAC_C2_WR(x, HW_DAC_C2_RD(x) |  (v)))
#define HW_DAC_C2_CLR(x, v)      (HW_DAC_C2_WR(x, HW_DAC_C2_RD(x) & ~(v)))
#define HW_DAC_C2_TOG(x, v)      (HW_DAC_C2_WR(x, HW_DAC_C2_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual DAC_C2 bitfields
 */

/*!
 * @name Register DAC_C2, field DACBFUP[3:0] (RW)
 *
 * In normal mode it selects the upper limit of the DAC buffer. The buffer read
 * pointer cannot exceed it. In FIFO mode it is the FIFO write pointer. User
 * cannot set Buffer Up limit in FIFO mode. In Normal mode its reset value is MAX.
 * When IP is configured to FIFO mode, this register becomes Write_Pointer, and its
 * value is initially set to equal READ_POINTER automatically, and the FIFO
 * status is empty. It is writable and user can configure it to the same address to
 * reset FIFO as empty.
 */
/*@{*/
#define BP_DAC_C2_DACBFUP    (0U)          /*!< Bit position for DAC_C2_DACBFUP. */
#define BM_DAC_C2_DACBFUP    (0x0FU)       /*!< Bit mask for DAC_C2_DACBFUP. */
#define BS_DAC_C2_DACBFUP    (4U)          /*!< Bit field size in bits for DAC_C2_DACBFUP. */

/*! @brief Read current value of the DAC_C2_DACBFUP field. */
#define BR_DAC_C2_DACBFUP(x) (HW_DAC_C2(x).B.DACBFUP)

/*! @brief Format value for bitfield DAC_C2_DACBFUP. */
#define BF_DAC_C2_DACBFUP(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C2_DACBFUP) & BM_DAC_C2_DACBFUP)

/*! @brief Set the DACBFUP field to a new value. */
#define BW_DAC_C2_DACBFUP(x, v) (HW_DAC_C2_WR(x, (HW_DAC_C2_RD(x) & ~BM_DAC_C2_DACBFUP) | BF_DAC_C2_DACBFUP(v)))
/*@}*/

/*!
 * @name Register DAC_C2, field DACBFRP[7:4] (RW)
 *
 * In normal mode it keeps the current value of the buffer read pointer. FIFO
 * mode, it is the FIFO read pointer. It is writable in FIFO mode. User can
 * configure it to same address to reset FIFO as empty.
 */
/*@{*/
#define BP_DAC_C2_DACBFRP    (4U)          /*!< Bit position for DAC_C2_DACBFRP. */
#define BM_DAC_C2_DACBFRP    (0xF0U)       /*!< Bit mask for DAC_C2_DACBFRP. */
#define BS_DAC_C2_DACBFRP    (4U)          /*!< Bit field size in bits for DAC_C2_DACBFRP. */

/*! @brief Read current value of the DAC_C2_DACBFRP field. */
#define BR_DAC_C2_DACBFRP(x) (HW_DAC_C2(x).B.DACBFRP)

/*! @brief Format value for bitfield DAC_C2_DACBFRP. */
#define BF_DAC_C2_DACBFRP(v) ((uint8_t)((uint8_t)(v) << BP_DAC_C2_DACBFRP) & BM_DAC_C2_DACBFRP)

/*! @brief Set the DACBFRP field to a new value. */
#define BW_DAC_C2_DACBFRP(x, v) (HW_DAC_C2_WR(x, (HW_DAC_C2_RD(x) & ~BM_DAC_C2_DACBFRP) | BF_DAC_C2_DACBFRP(v)))
/*@}*/

/*******************************************************************************
 * hw_dac_t - module struct
 ******************************************************************************/
/*!
 * @brief All DAC module registers.
 */
#pragma pack(1)
typedef struct _hw_dac
{
    struct {
        __IO hw_dac_datnl_t DATnL;         /*!< [0x0] DAC Data Low Register */
        __IO hw_dac_datnh_t DATnH;         /*!< [0x1] DAC Data High Register */
    } DAT[16];
    __IO hw_dac_sr_t SR;                   /*!< [0x20] DAC Status Register */
    __IO hw_dac_c0_t C0;                   /*!< [0x21] DAC Control Register */
    __IO hw_dac_c1_t C1;                   /*!< [0x22] DAC Control Register 1 */
    __IO hw_dac_c2_t C2;                   /*!< [0x23] DAC Control Register 2 */
} hw_dac_t;
#pragma pack()

/*! @brief Macro to access all DAC registers. */
/*! @param x DAC module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_DAC(DAC0_BASE)</code>. */
#define HW_DAC(x)      (*(hw_dac_t *)(x))

#endif /* __HW_DAC_REGISTERS_H__ */
/* EOF */

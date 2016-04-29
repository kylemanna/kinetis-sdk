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
#ifndef __HW_LPTMR_REGISTERS_H__
#define __HW_LPTMR_REGISTERS_H__

#include "MKV31F51212.h"
#include "fsl_bitaccess.h"

/*
 * MKV31F51212 LPTMR
 *
 * Low Power Timer
 *
 * Registers defined in this header file:
 * - HW_LPTMR_CSR - Low Power Timer Control Status Register
 * - HW_LPTMR_PSR - Low Power Timer Prescale Register
 * - HW_LPTMR_CMR - Low Power Timer Compare Register
 * - HW_LPTMR_CNR - Low Power Timer Counter Register
 *
 * - hw_lptmr_t - Struct containing all module registers.
 */

#define HW_LPTMR_INSTANCE_COUNT (1U) /*!< Number of instances of the LPTMR module. */

/*******************************************************************************
 * HW_LPTMR_CSR - Low Power Timer Control Status Register
 ******************************************************************************/

/*!
 * @brief HW_LPTMR_CSR - Low Power Timer Control Status Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_csr
{
    uint32_t U;
    struct _hw_lptmr_csr_bitfields
    {
        uint32_t TEN : 1;              /*!< [0] Timer Enable */
        uint32_t TMS : 1;              /*!< [1] Timer Mode Select */
        uint32_t TFC : 1;              /*!< [2] Timer Free-Running Counter */
        uint32_t TPP : 1;              /*!< [3] Timer Pin Polarity */
        uint32_t TPS : 2;              /*!< [5:4] Timer Pin Select */
        uint32_t TIE : 1;              /*!< [6] Timer Interrupt Enable */
        uint32_t TCF : 1;              /*!< [7] Timer Compare Flag */
        uint32_t RESERVED0 : 24;       /*!< [31:8]  */
    } B;
} hw_lptmr_csr_t;

/*!
 * @name Constants and macros for entire LPTMR_CSR register
 */
/*@{*/
#define HW_LPTMR_CSR_ADDR(x)     ((x) + 0x0U)

#define HW_LPTMR_CSR(x)          (*(__IO hw_lptmr_csr_t *) HW_LPTMR_CSR_ADDR(x))
#define HW_LPTMR_CSR_RD(x)       (HW_LPTMR_CSR(x).U)
#define HW_LPTMR_CSR_WR(x, v)    (HW_LPTMR_CSR(x).U = (v))
#define HW_LPTMR_CSR_SET(x, v)   (HW_LPTMR_CSR_WR(x, HW_LPTMR_CSR_RD(x) |  (v)))
#define HW_LPTMR_CSR_CLR(x, v)   (HW_LPTMR_CSR_WR(x, HW_LPTMR_CSR_RD(x) & ~(v)))
#define HW_LPTMR_CSR_TOG(x, v)   (HW_LPTMR_CSR_WR(x, HW_LPTMR_CSR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual LPTMR_CSR bitfields
 */

/*!
 * @name Register LPTMR_CSR, field TEN[0] (RW)
 *
 * When TEN is clear, it resets the LPTMR internal logic, including the CNR and
 * TCF. When TEN is set, the LPTMR is enabled. While writing 1 to this field,
 * CSR[5:1] must not be altered.
 *
 * Values:
 * - 0 - LPTMR is disabled and internal logic is reset.
 * - 1 - LPTMR is enabled.
 */
/*@{*/
#define BP_LPTMR_CSR_TEN     (0U)          /*!< Bit position for LPTMR_CSR_TEN. */
#define BM_LPTMR_CSR_TEN     (0x00000001U) /*!< Bit mask for LPTMR_CSR_TEN. */
#define BS_LPTMR_CSR_TEN     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TEN. */

/*! @brief Read current value of the LPTMR_CSR_TEN field. */
#define BR_LPTMR_CSR_TEN(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TEN))

/*! @brief Format value for bitfield LPTMR_CSR_TEN. */
#define BF_LPTMR_CSR_TEN(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TEN) & BM_LPTMR_CSR_TEN)

/*! @brief Set the TEN field to a new value. */
#define BW_LPTMR_CSR_TEN(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TEN) = (v))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TMS[1] (RW)
 *
 * Configures the mode of the LPTMR. TMS must be altered only when the LPTMR is
 * disabled.
 *
 * Values:
 * - 0 - Time Counter mode.
 * - 1 - Pulse Counter mode.
 */
/*@{*/
#define BP_LPTMR_CSR_TMS     (1U)          /*!< Bit position for LPTMR_CSR_TMS. */
#define BM_LPTMR_CSR_TMS     (0x00000002U) /*!< Bit mask for LPTMR_CSR_TMS. */
#define BS_LPTMR_CSR_TMS     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TMS. */

/*! @brief Read current value of the LPTMR_CSR_TMS field. */
#define BR_LPTMR_CSR_TMS(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TMS))

/*! @brief Format value for bitfield LPTMR_CSR_TMS. */
#define BF_LPTMR_CSR_TMS(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TMS) & BM_LPTMR_CSR_TMS)

/*! @brief Set the TMS field to a new value. */
#define BW_LPTMR_CSR_TMS(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TMS) = (v))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TFC[2] (RW)
 *
 * When clear, TFC configures the CNR to reset whenever TCF is set. When set,
 * TFC configures the CNR to reset on overflow. TFC must be altered only when the
 * LPTMR is disabled.
 *
 * Values:
 * - 0 - CNR is reset whenever TCF is set.
 * - 1 - CNR is reset on overflow.
 */
/*@{*/
#define BP_LPTMR_CSR_TFC     (2U)          /*!< Bit position for LPTMR_CSR_TFC. */
#define BM_LPTMR_CSR_TFC     (0x00000004U) /*!< Bit mask for LPTMR_CSR_TFC. */
#define BS_LPTMR_CSR_TFC     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TFC. */

/*! @brief Read current value of the LPTMR_CSR_TFC field. */
#define BR_LPTMR_CSR_TFC(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TFC))

/*! @brief Format value for bitfield LPTMR_CSR_TFC. */
#define BF_LPTMR_CSR_TFC(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TFC) & BM_LPTMR_CSR_TFC)

/*! @brief Set the TFC field to a new value. */
#define BW_LPTMR_CSR_TFC(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TFC) = (v))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TPP[3] (RW)
 *
 * Configures the polarity of the input source in Pulse Counter mode. TPP must
 * be changed only when the LPTMR is disabled.
 *
 * Values:
 * - 0 - Pulse Counter input source is active-high, and the CNR will increment
 *     on the rising-edge.
 * - 1 - Pulse Counter input source is active-low, and the CNR will increment on
 *     the falling-edge.
 */
/*@{*/
#define BP_LPTMR_CSR_TPP     (3U)          /*!< Bit position for LPTMR_CSR_TPP. */
#define BM_LPTMR_CSR_TPP     (0x00000008U) /*!< Bit mask for LPTMR_CSR_TPP. */
#define BS_LPTMR_CSR_TPP     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TPP. */

/*! @brief Read current value of the LPTMR_CSR_TPP field. */
#define BR_LPTMR_CSR_TPP(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TPP))

/*! @brief Format value for bitfield LPTMR_CSR_TPP. */
#define BF_LPTMR_CSR_TPP(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TPP) & BM_LPTMR_CSR_TPP)

/*! @brief Set the TPP field to a new value. */
#define BW_LPTMR_CSR_TPP(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TPP) = (v))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TPS[5:4] (RW)
 *
 * Configures the input source to be used in Pulse Counter mode. TPS must be
 * altered only when the LPTMR is disabled. The input connections vary by device.
 * See the chip configuration details for information on the connections to these
 * inputs.
 *
 * Values:
 * - 00 - Pulse counter input 0 is selected.
 * - 01 - Pulse counter input 1 is selected.
 * - 10 - Pulse counter input 2 is selected.
 * - 11 - Pulse counter input 3 is selected.
 */
/*@{*/
#define BP_LPTMR_CSR_TPS     (4U)          /*!< Bit position for LPTMR_CSR_TPS. */
#define BM_LPTMR_CSR_TPS     (0x00000030U) /*!< Bit mask for LPTMR_CSR_TPS. */
#define BS_LPTMR_CSR_TPS     (2U)          /*!< Bit field size in bits for LPTMR_CSR_TPS. */

/*! @brief Read current value of the LPTMR_CSR_TPS field. */
#define BR_LPTMR_CSR_TPS(x)  (HW_LPTMR_CSR(x).B.TPS)

/*! @brief Format value for bitfield LPTMR_CSR_TPS. */
#define BF_LPTMR_CSR_TPS(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TPS) & BM_LPTMR_CSR_TPS)

/*! @brief Set the TPS field to a new value. */
#define BW_LPTMR_CSR_TPS(x, v) (HW_LPTMR_CSR_WR(x, (HW_LPTMR_CSR_RD(x) & ~BM_LPTMR_CSR_TPS) | BF_LPTMR_CSR_TPS(v)))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TIE[6] (RW)
 *
 * When TIE is set, the LPTMR Interrupt is generated whenever TCF is also set.
 *
 * Values:
 * - 0 - Timer interrupt disabled.
 * - 1 - Timer interrupt enabled.
 */
/*@{*/
#define BP_LPTMR_CSR_TIE     (6U)          /*!< Bit position for LPTMR_CSR_TIE. */
#define BM_LPTMR_CSR_TIE     (0x00000040U) /*!< Bit mask for LPTMR_CSR_TIE. */
#define BS_LPTMR_CSR_TIE     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TIE. */

/*! @brief Read current value of the LPTMR_CSR_TIE field. */
#define BR_LPTMR_CSR_TIE(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TIE))

/*! @brief Format value for bitfield LPTMR_CSR_TIE. */
#define BF_LPTMR_CSR_TIE(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TIE) & BM_LPTMR_CSR_TIE)

/*! @brief Set the TIE field to a new value. */
#define BW_LPTMR_CSR_TIE(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TIE) = (v))
/*@}*/

/*!
 * @name Register LPTMR_CSR, field TCF[7] (W1C)
 *
 * TCF is set when the LPTMR is enabled and the CNR equals the CMR and
 * increments. TCF is cleared when the LPTMR is disabled or a logic 1 is written to it.
 *
 * Values:
 * - 0 - The value of CNR is not equal to CMR and increments.
 * - 1 - The value of CNR is equal to CMR and increments.
 */
/*@{*/
#define BP_LPTMR_CSR_TCF     (7U)          /*!< Bit position for LPTMR_CSR_TCF. */
#define BM_LPTMR_CSR_TCF     (0x00000080U) /*!< Bit mask for LPTMR_CSR_TCF. */
#define BS_LPTMR_CSR_TCF     (1U)          /*!< Bit field size in bits for LPTMR_CSR_TCF. */

/*! @brief Read current value of the LPTMR_CSR_TCF field. */
#define BR_LPTMR_CSR_TCF(x)  (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TCF))

/*! @brief Format value for bitfield LPTMR_CSR_TCF. */
#define BF_LPTMR_CSR_TCF(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_CSR_TCF) & BM_LPTMR_CSR_TCF)

/*! @brief Set the TCF field to a new value. */
#define BW_LPTMR_CSR_TCF(x, v) (BITBAND_ACCESS32(HW_LPTMR_CSR_ADDR(x), BP_LPTMR_CSR_TCF) = (v))
/*@}*/

/*******************************************************************************
 * HW_LPTMR_PSR - Low Power Timer Prescale Register
 ******************************************************************************/

/*!
 * @brief HW_LPTMR_PSR - Low Power Timer Prescale Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_psr
{
    uint32_t U;
    struct _hw_lptmr_psr_bitfields
    {
        uint32_t PCS : 2;              /*!< [1:0] Prescaler Clock Select */
        uint32_t PBYP : 1;             /*!< [2] Prescaler Bypass */
        uint32_t PRESCALE : 4;         /*!< [6:3] Prescale Value */
        uint32_t RESERVED0 : 25;       /*!< [31:7]  */
    } B;
} hw_lptmr_psr_t;

/*!
 * @name Constants and macros for entire LPTMR_PSR register
 */
/*@{*/
#define HW_LPTMR_PSR_ADDR(x)     ((x) + 0x4U)

#define HW_LPTMR_PSR(x)          (*(__IO hw_lptmr_psr_t *) HW_LPTMR_PSR_ADDR(x))
#define HW_LPTMR_PSR_RD(x)       (HW_LPTMR_PSR(x).U)
#define HW_LPTMR_PSR_WR(x, v)    (HW_LPTMR_PSR(x).U = (v))
#define HW_LPTMR_PSR_SET(x, v)   (HW_LPTMR_PSR_WR(x, HW_LPTMR_PSR_RD(x) |  (v)))
#define HW_LPTMR_PSR_CLR(x, v)   (HW_LPTMR_PSR_WR(x, HW_LPTMR_PSR_RD(x) & ~(v)))
#define HW_LPTMR_PSR_TOG(x, v)   (HW_LPTMR_PSR_WR(x, HW_LPTMR_PSR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual LPTMR_PSR bitfields
 */

/*!
 * @name Register LPTMR_PSR, field PCS[1:0] (RW)
 *
 * Selects the clock to be used by the LPTMR prescaler/glitch filter. PCS must
 * be altered only when the LPTMR is disabled. The clock connections vary by
 * device. See the chip configuration details for information on the connections to
 * these inputs.
 *
 * Values:
 * - 00 - Prescaler/glitch filter clock 0 selected.
 * - 01 - Prescaler/glitch filter clock 1 selected.
 * - 10 - Prescaler/glitch filter clock 2 selected.
 * - 11 - Prescaler/glitch filter clock 3 selected.
 */
/*@{*/
#define BP_LPTMR_PSR_PCS     (0U)          /*!< Bit position for LPTMR_PSR_PCS. */
#define BM_LPTMR_PSR_PCS     (0x00000003U) /*!< Bit mask for LPTMR_PSR_PCS. */
#define BS_LPTMR_PSR_PCS     (2U)          /*!< Bit field size in bits for LPTMR_PSR_PCS. */

/*! @brief Read current value of the LPTMR_PSR_PCS field. */
#define BR_LPTMR_PSR_PCS(x)  (HW_LPTMR_PSR(x).B.PCS)

/*! @brief Format value for bitfield LPTMR_PSR_PCS. */
#define BF_LPTMR_PSR_PCS(v)  ((uint32_t)((uint32_t)(v) << BP_LPTMR_PSR_PCS) & BM_LPTMR_PSR_PCS)

/*! @brief Set the PCS field to a new value. */
#define BW_LPTMR_PSR_PCS(x, v) (HW_LPTMR_PSR_WR(x, (HW_LPTMR_PSR_RD(x) & ~BM_LPTMR_PSR_PCS) | BF_LPTMR_PSR_PCS(v)))
/*@}*/

/*!
 * @name Register LPTMR_PSR, field PBYP[2] (RW)
 *
 * When PBYP is set, the selected prescaler clock in Time Counter mode or
 * selected input source in Pulse Counter mode directly clocks the CNR. When PBYP is
 * clear, the CNR is clocked by the output of the prescaler/glitch filter. PBYP
 * must be altered only when the LPTMR is disabled.
 *
 * Values:
 * - 0 - Prescaler/glitch filter is enabled.
 * - 1 - Prescaler/glitch filter is bypassed.
 */
/*@{*/
#define BP_LPTMR_PSR_PBYP    (2U)          /*!< Bit position for LPTMR_PSR_PBYP. */
#define BM_LPTMR_PSR_PBYP    (0x00000004U) /*!< Bit mask for LPTMR_PSR_PBYP. */
#define BS_LPTMR_PSR_PBYP    (1U)          /*!< Bit field size in bits for LPTMR_PSR_PBYP. */

/*! @brief Read current value of the LPTMR_PSR_PBYP field. */
#define BR_LPTMR_PSR_PBYP(x) (BITBAND_ACCESS32(HW_LPTMR_PSR_ADDR(x), BP_LPTMR_PSR_PBYP))

/*! @brief Format value for bitfield LPTMR_PSR_PBYP. */
#define BF_LPTMR_PSR_PBYP(v) ((uint32_t)((uint32_t)(v) << BP_LPTMR_PSR_PBYP) & BM_LPTMR_PSR_PBYP)

/*! @brief Set the PBYP field to a new value. */
#define BW_LPTMR_PSR_PBYP(x, v) (BITBAND_ACCESS32(HW_LPTMR_PSR_ADDR(x), BP_LPTMR_PSR_PBYP) = (v))
/*@}*/

/*!
 * @name Register LPTMR_PSR, field PRESCALE[6:3] (RW)
 *
 * Configures the size of the Prescaler in Time Counter mode or width of the
 * glitch filter in Pulse Counter mode. PRESCALE must be altered only when the LPTMR
 * is disabled.
 *
 * Values:
 * - 0000 - Prescaler divides the prescaler clock by 2; glitch filter does not
 *     support this configuration.
 * - 0001 - Prescaler divides the prescaler clock by 4; glitch filter recognizes
 *     change on input pin after 2 rising clock edges.
 * - 0010 - Prescaler divides the prescaler clock by 8; glitch filter recognizes
 *     change on input pin after 4 rising clock edges.
 * - 0011 - Prescaler divides the prescaler clock by 16; glitch filter
 *     recognizes change on input pin after 8 rising clock edges.
 * - 0100 - Prescaler divides the prescaler clock by 32; glitch filter
 *     recognizes change on input pin after 16 rising clock edges.
 * - 0101 - Prescaler divides the prescaler clock by 64; glitch filter
 *     recognizes change on input pin after 32 rising clock edges.
 * - 0110 - Prescaler divides the prescaler clock by 128; glitch filter
 *     recognizes change on input pin after 64 rising clock edges.
 * - 0111 - Prescaler divides the prescaler clock by 256; glitch filter
 *     recognizes change on input pin after 128 rising clock edges.
 * - 1000 - Prescaler divides the prescaler clock by 512; glitch filter
 *     recognizes change on input pin after 256 rising clock edges.
 * - 1001 - Prescaler divides the prescaler clock by 1024; glitch filter
 *     recognizes change on input pin after 512 rising clock edges.
 * - 1010 - Prescaler divides the prescaler clock by 2048; glitch filter
 *     recognizes change on input pin after 1024 rising clock edges.
 * - 1011 - Prescaler divides the prescaler clock by 4096; glitch filter
 *     recognizes change on input pin after 2048 rising clock edges.
 * - 1100 - Prescaler divides the prescaler clock by 8192; glitch filter
 *     recognizes change on input pin after 4096 rising clock edges.
 * - 1101 - Prescaler divides the prescaler clock by 16,384; glitch filter
 *     recognizes change on input pin after 8192 rising clock edges.
 * - 1110 - Prescaler divides the prescaler clock by 32,768; glitch filter
 *     recognizes change on input pin after 16,384 rising clock edges.
 * - 1111 - Prescaler divides the prescaler clock by 65,536; glitch filter
 *     recognizes change on input pin after 32,768 rising clock edges.
 */
/*@{*/
#define BP_LPTMR_PSR_PRESCALE (3U)         /*!< Bit position for LPTMR_PSR_PRESCALE. */
#define BM_LPTMR_PSR_PRESCALE (0x00000078U) /*!< Bit mask for LPTMR_PSR_PRESCALE. */
#define BS_LPTMR_PSR_PRESCALE (4U)         /*!< Bit field size in bits for LPTMR_PSR_PRESCALE. */

/*! @brief Read current value of the LPTMR_PSR_PRESCALE field. */
#define BR_LPTMR_PSR_PRESCALE(x) (HW_LPTMR_PSR(x).B.PRESCALE)

/*! @brief Format value for bitfield LPTMR_PSR_PRESCALE. */
#define BF_LPTMR_PSR_PRESCALE(v) ((uint32_t)((uint32_t)(v) << BP_LPTMR_PSR_PRESCALE) & BM_LPTMR_PSR_PRESCALE)

/*! @brief Set the PRESCALE field to a new value. */
#define BW_LPTMR_PSR_PRESCALE(x, v) (HW_LPTMR_PSR_WR(x, (HW_LPTMR_PSR_RD(x) & ~BM_LPTMR_PSR_PRESCALE) | BF_LPTMR_PSR_PRESCALE(v)))
/*@}*/

/*******************************************************************************
 * HW_LPTMR_CMR - Low Power Timer Compare Register
 ******************************************************************************/

/*!
 * @brief HW_LPTMR_CMR - Low Power Timer Compare Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_cmr
{
    uint32_t U;
    struct _hw_lptmr_cmr_bitfields
    {
        uint32_t COMPARE : 16;         /*!< [15:0] Compare Value */
        uint32_t RESERVED0 : 16;       /*!< [31:16]  */
    } B;
} hw_lptmr_cmr_t;

/*!
 * @name Constants and macros for entire LPTMR_CMR register
 */
/*@{*/
#define HW_LPTMR_CMR_ADDR(x)     ((x) + 0x8U)

#define HW_LPTMR_CMR(x)          (*(__IO hw_lptmr_cmr_t *) HW_LPTMR_CMR_ADDR(x))
#define HW_LPTMR_CMR_RD(x)       (HW_LPTMR_CMR(x).U)
#define HW_LPTMR_CMR_WR(x, v)    (HW_LPTMR_CMR(x).U = (v))
#define HW_LPTMR_CMR_SET(x, v)   (HW_LPTMR_CMR_WR(x, HW_LPTMR_CMR_RD(x) |  (v)))
#define HW_LPTMR_CMR_CLR(x, v)   (HW_LPTMR_CMR_WR(x, HW_LPTMR_CMR_RD(x) & ~(v)))
#define HW_LPTMR_CMR_TOG(x, v)   (HW_LPTMR_CMR_WR(x, HW_LPTMR_CMR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual LPTMR_CMR bitfields
 */

/*!
 * @name Register LPTMR_CMR, field COMPARE[15:0] (RW)
 *
 * When the LPTMR is enabled and the CNR equals the value in the CMR and
 * increments, TCF is set and the hardware trigger asserts until the next time the CNR
 * increments. If the CMR is 0, the hardware trigger will remain asserted until
 * the LPTMR is disabled. If the LPTMR is enabled, the CMR must be altered only
 * when TCF is set.
 */
/*@{*/
#define BP_LPTMR_CMR_COMPARE (0U)          /*!< Bit position for LPTMR_CMR_COMPARE. */
#define BM_LPTMR_CMR_COMPARE (0x0000FFFFU) /*!< Bit mask for LPTMR_CMR_COMPARE. */
#define BS_LPTMR_CMR_COMPARE (16U)         /*!< Bit field size in bits for LPTMR_CMR_COMPARE. */

/*! @brief Read current value of the LPTMR_CMR_COMPARE field. */
#define BR_LPTMR_CMR_COMPARE(x) (HW_LPTMR_CMR(x).B.COMPARE)

/*! @brief Format value for bitfield LPTMR_CMR_COMPARE. */
#define BF_LPTMR_CMR_COMPARE(v) ((uint32_t)((uint32_t)(v) << BP_LPTMR_CMR_COMPARE) & BM_LPTMR_CMR_COMPARE)

/*! @brief Set the COMPARE field to a new value. */
#define BW_LPTMR_CMR_COMPARE(x, v) (HW_LPTMR_CMR_WR(x, (HW_LPTMR_CMR_RD(x) & ~BM_LPTMR_CMR_COMPARE) | BF_LPTMR_CMR_COMPARE(v)))
/*@}*/

/*******************************************************************************
 * HW_LPTMR_CNR - Low Power Timer Counter Register
 ******************************************************************************/

/*!
 * @brief HW_LPTMR_CNR - Low Power Timer Counter Register (RW)
 *
 * Reset value: 0x00000000U
 */
typedef union _hw_lptmr_cnr
{
    uint32_t U;
    struct _hw_lptmr_cnr_bitfields
    {
        uint32_t COUNTER : 16;         /*!< [15:0] Counter Value */
        uint32_t RESERVED0 : 16;       /*!< [31:16]  */
    } B;
} hw_lptmr_cnr_t;

/*!
 * @name Constants and macros for entire LPTMR_CNR register
 */
/*@{*/
#define HW_LPTMR_CNR_ADDR(x)     ((x) + 0xCU)

#define HW_LPTMR_CNR(x)          (*(__IO hw_lptmr_cnr_t *) HW_LPTMR_CNR_ADDR(x))
#define HW_LPTMR_CNR_RD(x)       (HW_LPTMR_CNR(x).U)
#define HW_LPTMR_CNR_WR(x, v)    (HW_LPTMR_CNR(x).U = (v))
#define HW_LPTMR_CNR_SET(x, v)   (HW_LPTMR_CNR_WR(x, HW_LPTMR_CNR_RD(x) |  (v)))
#define HW_LPTMR_CNR_CLR(x, v)   (HW_LPTMR_CNR_WR(x, HW_LPTMR_CNR_RD(x) & ~(v)))
#define HW_LPTMR_CNR_TOG(x, v)   (HW_LPTMR_CNR_WR(x, HW_LPTMR_CNR_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual LPTMR_CNR bitfields
 */

/*!
 * @name Register LPTMR_CNR, field COUNTER[15:0] (RW)
 */
/*@{*/
#define BP_LPTMR_CNR_COUNTER (0U)          /*!< Bit position for LPTMR_CNR_COUNTER. */
#define BM_LPTMR_CNR_COUNTER (0x0000FFFFU) /*!< Bit mask for LPTMR_CNR_COUNTER. */
#define BS_LPTMR_CNR_COUNTER (16U)         /*!< Bit field size in bits for LPTMR_CNR_COUNTER. */

/*! @brief Read current value of the LPTMR_CNR_COUNTER field. */
#define BR_LPTMR_CNR_COUNTER(x) (HW_LPTMR_CNR(x).B.COUNTER)

/*! @brief Format value for bitfield LPTMR_CNR_COUNTER. */
#define BF_LPTMR_CNR_COUNTER(v) ((uint32_t)((uint32_t)(v) << BP_LPTMR_CNR_COUNTER) & BM_LPTMR_CNR_COUNTER)

/*! @brief Set the COUNTER field to a new value. */
#define BW_LPTMR_CNR_COUNTER(x, v) (HW_LPTMR_CNR_WR(x, (HW_LPTMR_CNR_RD(x) & ~BM_LPTMR_CNR_COUNTER) | BF_LPTMR_CNR_COUNTER(v)))
/*@}*/

/*******************************************************************************
 * hw_lptmr_t - module struct
 ******************************************************************************/
/*!
 * @brief All LPTMR module registers.
 */
#pragma pack(1)
typedef struct _hw_lptmr
{
    __IO hw_lptmr_csr_t CSR;               /*!< [0x0] Low Power Timer Control Status Register */
    __IO hw_lptmr_psr_t PSR;               /*!< [0x4] Low Power Timer Prescale Register */
    __IO hw_lptmr_cmr_t CMR;               /*!< [0x8] Low Power Timer Compare Register */
    __IO hw_lptmr_cnr_t CNR;               /*!< [0xC] Low Power Timer Counter Register */
} hw_lptmr_t;
#pragma pack()

/*! @brief Macro to access all LPTMR registers. */
/*! @param x LPTMR module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_LPTMR(LPTMR0_BASE)</code>. */
#define HW_LPTMR(x)    (*(hw_lptmr_t *)(x))

#endif /* __HW_LPTMR_REGISTERS_H__ */
/* EOF */

/*
 * K3 System Firmware Board Configuration Data Definitions
 *
 * Copyright (C) 2019 Texas Instruments Incorporated - http://www.ti.com/
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef RESASG_TYPES_H
#define RESASG_TYPES_H

/**
 * Resource assignment type shift
 */
#define RESASG_TYPE_SHIFT       (0x0006U)
/**
 * Resource assignment type mask
 */
#define RESASG_TYPE_MASK        (0xFFC0U)

/**
 * Resource assignment subtype shift
 */
#define RESASG_SUBTYPE_SHIFT    (0x0000U)
/**
 * Resource assignment subtype mask
 */
#define RESASG_SUBTYPE_MASK     (0x003FU)

/**
 * Macro to create unique resource assignment types using type and subtype
 */
#define RESASG_UTYPE(type, subtype) \
	(((type << RESASG_TYPE_SHIFT) & RESASG_TYPE_MASK) | \
	 ((subtype << RESASG_SUBTYPE_SHIFT) & RESASG_SUBTYPE_MASK))

/** Main domain Navigator Subsystem UDMASS IA0 */
#define RESASG_TYPE_MAIN_NAV_UDMASS_IA0   (0x000U)
/** Main domain Navigator Subsystem MODSS IA0 */
#define RESASG_TYPE_MAIN_NAV_MODSS_IA0   (0x001U)
/** Main domain Navigator Subsystem MODSS IA1 */
#define RESASG_TYPE_MAIN_NAV_MODSS_IA1   (0x002U)
/** MCU domain Navigator Subsystem UDMASS IA0 */
#define RESASG_TYPE_MCU_NAV_UDMASS_IA0   (0x003U)
/** Main domain Navigator Subsystem MCRC */
#define RESASG_TYPE_MAIN_NAV_MCRC   (0x004U)
/** MCU domain Navigator Subsystem MCRC */
#define RESASG_TYPE_MCU_NAV_MCRC   (0x005U)
/** Main domain Navigator Subsystem UDMAP */
#define RESASG_TYPE_MAIN_NAV_UDMAP   (0x006U)
/** MCU domain Navigator Subsystem UDMAP */
#define RESASG_TYPE_MCU_NAV_UDMAP   (0x007U)
/** MSMC */
#define RESASG_TYPE_MSMC   (0x008U)
/** Main domain Navigator Subsystem Ring Accelerator */
#define RESASG_TYPE_MAIN_NAV_RA   (0x009U)
/** MCU domain Navigator Subsystem Ring Accelerator */
#define RESASG_TYPE_MCU_NAV_RA   (0x00AU)
/** A53 GIC IRQ (input interrupts) */
#define RESASG_TYPE_GIC_IRQ   (0x00BU)
/** Pulsar core 0 IRQ (input interrupts) */
#define RESASG_TYPE_PULSAR_C0_IRQ   (0x00CU)
/** Pulsar core 1 IRQ (input interrupts) */
#define RESASG_TYPE_PULSAR_C1_IRQ   (0x00DU)
/** ICSSG 0 IRQ (input interrupts) */
#define RESASG_TYPE_ICSSG0_IRQ   (0x00EU)
/** ICSSG 1 IRQ (input interrupts) */
#define RESASG_TYPE_ICSSG1_IRQ   (0x00FU)
/** ICSSG 2 IRQ (input interrupts) */
#define RESASG_TYPE_ICSSG2_IRQ   (0x010U)
/** Maximum RESASG_TYPE value.  DO NOT create types with a value
 *  greater than this */
#define RESASG_TYPE_MAX   (0x3FFU)

/** Main Nav UDMASS IA0 virtual interrupts */
#define RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_VINT   (0x00U)
/** Main Nav UDMASS IA0 source events (SEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_SEVI   (0x01U)
/** Main Nav UDMASS IA0 multicast events (MEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_MEVI   (0x02U)
/** Main Nav UDMASS IA0 global counter events (GEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_GEVI   (0x03U)
/** Main Nav Total UDMASS IA0 subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_CNT   (0x04U)

/** Main Nav MODSS IA0 virtual interrupts */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA0_VINT   (0x00U)
/** Main Nav MODSS IA0 single events (SEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA0_SEVI   (0x01U)
/** Total Main Nav MODSS IA0 subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA0_CNT   (0x02U)

/** Main Nav MODSS IA1 virtual interrupts */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA1_VINT   (0x00U)
/** Main Nav MODSS IA1 single events (SEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA1_SEVI   (0x01U)
/** Total Main Nav MODSS IA1 subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MAIN_NAV_MODSS_IA1_CNT   (0x02U)

/** MCU Nav UDMASS IA0 virtual interrupts */
#define RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_VINT   (0x00U)
/** MCU Nav UDMASS IA0 single events (SEVI) */
#define RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_SEVI   (0x01U)
/** MCU Nav UDMASS IA0 multicast events (MEVI) */
#define RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_MEVI   (0x02U)
/** MCU Nav UDMASS IA0 global counter events (GEVI) */
#define RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_GEVI   (0x03U)
/** Total MCU Nav UDMASS IA0 subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_CNT   (0x04U)

/** Main Nav MCRC local events (LEVI) */
#define RESASG_SUBTYPE_MAIN_NAV_MCRC_LEVI   (0x00U)
/** Total Main Nav MCRC subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MAIN_NAV_MCRC_CNT   (0x01U)

/** MCU Nav MCRC local events (LEVI) */
#define RESASG_SUBTYPE_MCU_NAV_MCRC_LEVI   (0x00U)
/** Total MCU Nav MCRC subtypes. Update when subtypes are added */
#define RESASG_SUBTYPE_MCU_NAV_MCRC_CNT   (0x01U)

/** Main Nav UDMAP trigger events */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_TRIGGER   (0x00U)
/** Nav UDMAP driver high capacity transmit channels */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_TX_HCHAN   (0x01U)
/** Main Nav UDMAP driver standard transmit channels */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_TX_CHAN   (0x02U)
/** Main Nav UDMAP driver external transmit channels */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_TX_ECHAN   (0x03U)
/** Main Nav UDMAP driver high capacity receive channels */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_RX_HCHAN   (0x04U)
/** Main Nav UDMAP driver standard receive channels */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_RX_CHAN   (0x05U)
/** Main Nav UDMAP driver common receive flows used by receive channel
 *  RCHAN_RFLOW_RNG parameters */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_RX_FLOW_COMMON   (0x06U)
/** Main Nav UDMAP driver global config invalid flow OES register */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_INVALID_FLOW_OES   (0x07U)
/** Main Nav UDMAP driver global config register region rd/wr access */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_GCFG   (0x08U)
/** Total Main Nav UDMAP subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MAIN_NAV_UDMAP_CNT   (0x09U)

/** MCU Nav UDMAP trigger events */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_TRIGGER   (0x00U)
/** MCU Nav UDMAP driver high capacity transmit channels */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_TX_HCHAN   (0x01U)
/** MCU Nav UDMAP driver standard transmit channels */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_TX_CHAN   (0x02U)
/** MCU Nav UDMAP driver high capacity receive channels */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_RX_HCHAN   (0x03U)
/** MCU Nav UDMAP driver standard receive channels */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_RX_CHAN   (0x04U)
/** MCU Nav UDMAP driver common receive flows used by receive channel
 *  RCHAN_RFLOW_RNG parameters */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_RX_FLOW_COMMON   (0x05U)
/** MCU Nav UDMAP driver global config invalid flow OES register */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_INVALID_FLOW_OES   (0x06U)
/** MCU Nav UDMAP driver global config register region rd/wr access */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_GCFG   (0x07U)
/** Total MCU Nav UDMAP subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MCU_NAV_UDMAP_CNT   (0x08U)

/** MSMC DRU events */
#define RESASG_SUBTYPE_MSMC_DRU   (0x00U)
/** Total MSMC subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MSMC_CNT   (0x01U)

/** Main Nav RA driver UDMAP tx rings */
#define RESASG_SUBTYPE_MAIN_NAV_RA_RING_UDMAP_TX   (0x00U)
/** Main Nav RA driver UDMAP rx rings */
#define RESASG_SUBTYPE_MAIN_NAV_RA_RING_UDMAP_RX   (0x01U)
/** Main Nav RA driver general purpose rings */
#define RESASG_SUBTYPE_MAIN_NAV_RA_RING_GP   (0x02U)
/** Main Nav RA driver global config error OES register */
#define RESASG_SUBTYPE_MAIN_NAV_RA_ERROR_OES   (0x03U)
/** Main Nav RA driver ring virtids */
#define RESASG_SUBTYPE_MAIN_NAV_RA_VIRTID   (0x04U)
/** Total Main Nav RA subtypes. Update when subtypes are added */
#define RESASG_SUBTYPE_MAIN_NAV_RA_CNT   (0x05U)

/** MCU Nav RA driver UDMAP tx rings */
#define RESASG_SUBTYPE_MCU_NAV_RA_RING_UDMAP_TX   (0x00U)
/** MCU Nav RA driver UDMAP rx rings */
#define RESASG_SUBTYPE_MCU_NAV_RA_RING_UDMAP_RX   (0x01U)
/** MCU Nav RA driver general purpose rings */
#define RESASG_SUBTYPE_MCU_NAV_RA_RING_GP   (0x02U)
/** MCU Nav RA driver global config error OES register */
#define RESASG_SUBTYPE_MCU_NAV_RA_ERROR_OES   (0x03U)
/** MCU Nav RA driver ring virtids */
#define RESASG_SUBTYPE_MCU_NAV_RA_VIRTID   (0x04U)
/** Total MCU Nav RA subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_MCU_NAV_RA_CNT   (0x05U)

/** GIC IRQ inputs (64 - 127) from Main Nav */
#define RESASG_SUBTYPE_GIC_IRQ_MAIN_NAV_SET0   (0x00U)
/** GIC IRQ inputs (392 - 423) from Main GPIO IR */
#define RESASG_SUBTYPE_GIC_IRQ_MAIN_GPIO   (0x01U)
/** GIC IRQ inputs (448 - 503) from Main Nav */
#define RESASG_SUBTYPE_GIC_IRQ_MAIN_NAV_SET1   (0x02U)
/** GIC IRQ inputs (544 - 559) from Compare event IR */
#define RESASG_SUBTYPE_GIC_IRQ_COMP_EVT   (0x03U)
/** GIC IRQ inputs (712 - 727) from Wakeup GPIO IR */
#define RESASG_SUBTYPE_GIC_IRQ_WKUP_GPIO   (0x04U)
/** Total GIC IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_GIC_IRQ_CNT   (0x05U)

/** Pulsar core 0 VIM IRQ inputs (64 - 95) from MCU Nav */
#define RESASG_SUBTYPE_PULSAR_C0_IRQ_MCU_NAV   (0x00U)
/** Pulsar core 0 VIM IRQ inputs (124 - 139) from Wakeup GPIO IR */
#define RESASG_SUBTYPE_PULSAR_C0_IRQ_WKUP_GPIO   (0x01U)
/** Pulsar core 0 VIM IRQ inputs (160 - 223) from Main2MCU level IR */
#define RESASG_SUBTYPE_PULSAR_C0_IRQ_MAIN2MCU_LVL   (0x02U)
/** Pulsar core 0 VIM IRQ inputs (224 - 271) from Main2MCU pulse IR */
#define RESASG_SUBTYPE_PULSAR_C0_IRQ_MAIN2MCU_PLS   (0x03U)
/** Total Pulsar core 0 IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_PULSAR_C0_IRQ_CNT   (0x04U)

/** Pulsar core 1 VIM IRQ inputs (64 - 95) from MCU Nav */
#define RESASG_SUBTYPE_PULSAR_C1_IRQ_MCU_NAV   (0x00U)
/** Pulsar core 1 VIM IRQ inputs (124 - 139) from Wakeup GPIO IR */
#define RESASG_SUBTYPE_PULSAR_C1_IRQ_WKUP_GPIO   (0x01U)
/** Pulsar core 1 VIM IRQ inputs (160 - 223) from Main2MCU level IR */
#define RESASG_SUBTYPE_PULSAR_C1_IRQ_MAIN2MCU_LVL   (0x02U)
/** Pulsar core 1 VIM IRQ inputs (224 - 271) from Main2MCU pulse IR */
#define RESASG_SUBTYPE_PULSAR_C1_IRQ_MAIN2MCU_PLS   (0x03U)
/** Total Pulsar core 1 IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_PULSAR_C1_IRQ_CNT   (0x04U)

/** ICSSG0 IRQ inputs (110 - 117) from Main Nav */
#define RESASG_SUBTYPE_ICSSG0_IRQ_MAIN_NAV   (0x00U)
/** ICSSG0 IRQ inputs (152 - 159) from Main GPIO IR */
#define RESASG_SUBTYPE_ICSSG0_IRQ_MAIN_GPIO   (0x01U)
/** Total ICSSG 0 IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_ICSSG0_IRQ_CNT   (0x02U)

/** ICSSG1 IRQ inputs (110 - 117) from Main Nav */
#define RESASG_SUBTYPE_ICSSG1_IRQ_MAIN_NAV   (0x00U)
/** ICSSG1 IRQ inputs (152 - 159) from Main GPIO IR */
#define RESASG_SUBTYPE_ICSSG1_IRQ_MAIN_GPIO   (0x01U)
/** Total ICSSG1 IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_ICSSG1_IRQ_CNT   (0x02U)

/** ICSSG2 IRQ inputs (110 - 117) from Main Nav */
#define RESASG_SUBTYPE_ICSSG2_IRQ_MAIN_NAV   (0x00U)
/** ICSSG2 IRQ inputs (152 - 159) from Main GPIO IR */
#define RESASG_SUBTYPE_ICSSG2_IRQ_MAIN_GPIO   (0x01U)
/** Total ICSSG2 IRQ subtypes. Update when subtypes added */
#define RESASG_SUBTYPE_ICSSG2_IRQ_CNT   (0x02U)

/**
 * Total number of unique resource types for AM6
 */
#define RESASG_UTYPE_CNT \
	(RESASG_SUBTYPE_MAIN_NAV_UDMASS_IA0_CNT + \
	 RESASG_SUBTYPE_MAIN_NAV_MODSS_IA0_CNT + \
	 RESASG_SUBTYPE_MAIN_NAV_MODSS_IA1_CNT + \
	 RESASG_SUBTYPE_MCU_NAV_UDMASS_IA0_CNT + \
	 RESASG_SUBTYPE_MAIN_NAV_MCRC_CNT + \
	 RESASG_SUBTYPE_MCU_NAV_MCRC_CNT + \
	 RESASG_SUBTYPE_MAIN_NAV_UDMAP_CNT + \
	 RESASG_SUBTYPE_MCU_NAV_UDMAP_CNT + \
	 RESASG_SUBTYPE_MSMC_CNT + \
	 RESASG_SUBTYPE_MAIN_NAV_RA_CNT + \
	 RESASG_SUBTYPE_MCU_NAV_RA_CNT + \
	 RESASG_SUBTYPE_GIC_IRQ_CNT + \
	 RESASG_SUBTYPE_PULSAR_C0_IRQ_CNT + \
	 RESASG_SUBTYPE_PULSAR_C1_IRQ_CNT + \
	 RESASG_SUBTYPE_ICSSG0_IRQ_CNT + \
	 RESASG_SUBTYPE_ICSSG1_IRQ_CNT + \
	 RESASG_SUBTYPE_ICSSG2_IRQ_CNT)

#endif /* RESASG_TYPES_H */

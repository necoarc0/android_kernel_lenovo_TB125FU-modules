/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __WF_WFDMA_HOST_DMA0_REGS_H__
#define __WF_WFDMA_HOST_DMA0_REGS_H__

#ifdef __cplusplus
extern "C" {
#endif

/* ************************************************************************** */
/* */
/* WF_WFDMA_HOST_DMA0 CR Definitions */
/* */
/* ************************************************************************** */

#define WF_WFDMA_HOST_DMA0_BASE				0x7C024000

#define WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0XA0) /* 40A0 */
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0XA4) /* 40A4 */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0B0) /* 40B0 */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_EXT_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0B4) /* 40B4 */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_ADDR                                \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0B8) /* 40B8 */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_EXT_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0BC) /* 40BC */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0C0) /* 40C0 */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_EXT_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0C4) /* 40C4 */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_ADDR                                \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0C8) /* 40C8 */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_EXT_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0CC) /* 40CC */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0D0) /* 40D0 */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_EXT_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0D4) /* 40D4 */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_ADDR                                 \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0D8) /* 40D8 */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_EXT_ADDR                             \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0DC) /* 40DC */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0E0) /* 40E0 */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_EXT_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0E4) /* 40E4 */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_ADDR                                 \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0E8) /* 40E8 */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_EXT_ADDR                             \
	(WF_WFDMA_HOST_DMA0_BASE + 0x0EC) /* 40EC */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_ADDR                                   \
	(WF_WFDMA_HOST_DMA0_BASE + 0x100) /* 4100 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x104) /* 4104 */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0X108) /* 4108 */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x10C) /* 410C */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR                                    \
	(WF_WFDMA_HOST_DMA0_BASE + 0X110) /* 4110 */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR                                    \
	(WF_WFDMA_HOST_DMA0_BASE + 0X114) /* 4114 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DUMMY_ADDR                                 \
	(WF_WFDMA_HOST_DMA0_BASE + 0x120) /* 4120 */
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x124) /* 4124 */
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_ADDR                                \
	(WF_WFDMA_HOST_DMA0_BASE + 0x128) /* 4128 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0x12C) /* 412C */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_PROBE_ADDR                             \
	(WF_WFDMA_HOST_DMA0_BASE + 0x130) /* 4130 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DMASHDL_DBG_PROBE_ADDR                     \
	(WF_WFDMA_HOST_DMA0_BASE + 0x134) /* 4134 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x138) /* 4138 */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x13c) /* 413C */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_ADDR                         \
	(WF_WFDMA_HOST_DMA0_BASE + 0x140) /* 4140 */
#define WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_ADDR                         \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1E8) /* 41E8 */
#define WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_ADDR                         \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1EC) /* 41EC */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1F0) /* 41F0 */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1F4) /* 41F4 */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1F8) /* 41F8 */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR                            \
	(WF_WFDMA_HOST_DMA0_BASE + 0x1FC) /* 41FC */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR                                   \
	(WF_WFDMA_HOST_DMA0_BASE + 0x200) /* 4200 */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR                                   \
	(WF_WFDMA_HOST_DMA0_BASE + 0X204) /* 4204 */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x208) /* 4208 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x20C) /* 420C */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_TX_Q_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0x224) /* 4224 */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0X228) /* 4228 */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0X22C) /* 422C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x230) /* 4230 */
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_ADDR                                 \
	(WF_WFDMA_HOST_DMA0_BASE + 0x234) /* 4234 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x240) /* 4240 */
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_ADDR                                     \
	(WF_WFDMA_HOST_DMA0_BASE + 0x250) /* 4250 */
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_ADDR                                     \
	(WF_WFDMA_HOST_DMA0_BASE + 0x254) /* 4254 */
#define WF_WFDMA_HOST_DMA0_MCU2MD_SW_INT_SET_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x258) /* 4258 */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x260) /* 4260 */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x264) /* 4264 */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x268) /* 4268 */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x26C) /* 426C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_ADDR                              \
	(WF_WFDMA_HOST_DMA0_BASE + 0x280) /* 4280 */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR                                     \
	(WF_WFDMA_HOST_DMA0_BASE + 0x284) /* 4284 */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_ADDR                                 \
	(WF_WFDMA_HOST_DMA0_BASE + 0x288) /* 4288 */
#define WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x298) /* 4298 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG0_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2A0) /* 42A0 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG1_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2A4) /* 42A4 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG0_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2A8) /* 42A8 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG1_ADDR                                  \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2AC) /* 42AC */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR                             \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2B0) /* 42B0 */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR                             \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2B4) /* 42B4 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2C0) /* 42C0 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2C4) /* 42C4 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2C8) /* 42C8 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2CC) /* 42CC */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2D0) /* 42D0 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_ADDR                          \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2D4) /* 42D4 */
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_ADDR                               \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2E0) /* 42E0 */
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2E4) /* 42E4 */
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2E8) /* 42E8 */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR                         \
	(WF_WFDMA_HOST_DMA0_BASE + 0x2F0) /* 42F0 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x300) /* 4300 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x304) /* 4304 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x308) /* 4308 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x30c) /* 430C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x310) /* 4310 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x314) /* 4314 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x318) /* 4318 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x31c) /* 431C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x320) /* 4320 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x324) /* 4324 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x328) /* 4328 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x32c) /* 432C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x330) /* 4330 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x334) /* 4334 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x338) /* 4338 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x33c) /* 433C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x500) /* 4500 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x504) /* 4504 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x508) /* 4508 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x50c) /* 450C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x510) /* 4510 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x514) /* 4514 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x518) /* 4518 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x51c) /* 451C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x520) /* 4520 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x524) /* 4524 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x528) /* 4528 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x52C) /* 452C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x530) /* 4530 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x534) /* 4534 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x538) /* 4538 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x53C) /* 453C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x540) /* 4540 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x544) /* 4544 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x548) /* 4548 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x54c) /* 454C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x550) /* 4550 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x554) /* 4554 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x558) /* 4558 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x55c) /* 455C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x560) /* 4560 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x564) /* 4564 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x568) /* 4568 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x56C) /* 456C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL0_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x570) /* 4570 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x574) /* 4574 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL2_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x578) /* 4578 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL3_ADDR                           \
	(WF_WFDMA_HOST_DMA0_BASE + 0x57C) /* 457C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x600) /* 4600 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x604) /* 4604 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x608) /* 4608 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x60C) /* 460C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x680) /* 4680 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x684) /* 4684 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x688) /* 4688 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x68C) /* 468C */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x690) /* 4690 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x694) /* 4694 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x698) /* 4698 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_ADDR                        \
	(WF_WFDMA_HOST_DMA0_BASE + 0x69C) /* 469C */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA00) /* 4A00 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA04) /* 4A04 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA08) /* 4A08 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA10) /* 4A10 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA14) /* 4A14 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA18) /* 4A18 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA20) /* 4A20 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA24) /* 4A24 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA28) /* 4A28 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA30) /* 4A30 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA34) /* 4A34 */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xA38) /* 4A38 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC00) /* 4C00 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC04) /* 4C04 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC08) /* 4C08 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC10) /* 4C10 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC14) /* 4C14 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC18) /* 4C18 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC20) /* 4C20 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC24) /* 4C24 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC28) /* 4C28 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC30) /* 4C30 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC34) /* 4C34 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC38) /* 4C38 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC40) /* 4C40 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC44) /* 4C44 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC48) /* 4C48 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC50) /* 4C50 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC54) /* 4C54 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC58) /* 4C58 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC60) /* 4C60 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC64) /* 4C64 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC68) /* 4C68 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC70) /* 4C70 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC74) /* 4C74 */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR                      \
	(WF_WFDMA_HOST_DMA0_BASE + 0xC78) /* 4C78 */

/*
* ---HOST_IF_TX_DONE_STS (0x18024000 + 0XA0)---
* fifo_dfet_txdone_dat0_done_sts[0] - (W1C) USB DAT0 FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_dat1_done_sts[1] - (W1C) USB DAT1 FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_dat2_done_sts[2] - (W1C) USB DAT2 FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_dat3_done_sts[3] - (W1C) USB DAT3 FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_dat4_done_sts[4] - (W1C) USB DAT4 FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_cmd_done_sts[5] - (W1C) USB CMD FIFO Tx status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* fifo_dfet_txdone_fwdl_done_sts[6] - (W1C) USB Firmware download FIFO Tx
status
* 0 : no tx done
* 1 : pdma fetch data from USB endpoint
buffer
* SDIO Mode (All SDIO Tx packet goto firmware
* download FIFO)
* 0 : no tx done
* 1 : pdma start to fetch data from SDIO
buffer
* RESERVED7[31..7] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_fwdl_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_fwdl_done_sts_MASK \
	\
	0x00000040 /* fifo_dfet_txdone_fwdl_done_sts[6] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_fwdl_done_sts_SHFT \
	\
	6
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_cmd_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_cmd_done_sts_MASK \
	\
	0x00000020 /* fifo_dfet_txdone_cmd_done_sts[5] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_cmd_done_sts_SHFT \
	\
	5
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat4_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat4_done_sts_MASK \
	\
	0x00000010 /* fifo_dfet_txdone_dat4_done_sts[4] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat4_done_sts_SHFT \
	\
	4
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat3_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat3_done_sts_MASK \
	\
	0x00000008 /* fifo_dfet_txdone_dat3_done_sts[3] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat3_done_sts_SHFT \
	\
	3
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat2_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat2_done_sts_MASK \
	\
	0x00000004 /* fifo_dfet_txdone_dat2_done_sts[2] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat2_done_sts_SHFT \
	\
	2
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat1_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat1_done_sts_MASK \
	\
	0x00000002 /* fifo_dfet_txdone_dat1_done_sts[1] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat1_done_sts_SHFT \
	\
	1
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat0_done_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_ADDR
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat0_done_sts_MASK \
	\
	0x00000001 /* fifo_dfet_txdone_dat0_done_sts[0] */
#define \
WF_WFDMA_HOST_DMA0_HOST_IF_TX_DONE_STS_fifo_dfet_txdone_dat0_done_sts_SHFT \
	\
	0

/*
* ---HOST_IF_RX_DONE_STS (0x18024000 + 0XA4)---
* rx0_packet_done_sts[0] - (W1C) USB/SDIO Rx0 packet done status
* 0 : no rx packet done
* 1 : rx packet send to host interface
* rx1_packet_done_sts[1] - (W1C) USB/SDIO Rx1 packet done status
* 0 : no rx packet done
* 1 : rx packet send to host interface
* Note : All SDIO Packet send to SIDO RX0
port
* RESERVED2[31..2] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx1_packet_done_sts_ADDR        \
	WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx1_packet_done_sts_MASK        \
	0x00000002 /* rx1_packet_done_sts[1] */
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx1_packet_done_sts_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx0_packet_done_sts_ADDR        \
	WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx0_packet_done_sts_MASK        \
	0x00000001 /* rx0_packet_done_sts[0] */
#define WF_WFDMA_HOST_DMA0_HOST_IF_RX_DONE_STS_rx0_packet_done_sts_SHFT 0

/*
* ---TX_DMAD_RNG_START (0x18024000 + 0x0B0)---
* tx_dmad_rng_start[31..0] - (RW) TX DMAD address range start [31:0]
*/
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_tx_dmad_rng_start_ADDR            \
	WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_ADDR
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_tx_dmad_rng_start_MASK            \
	0xFFFFFFFF /* tx_dmad_rng_start[31..0] */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_tx_dmad_rng_start_SHFT 0

/*
* ---TX_DMAD_RNG_START_EXT (0x18024000 + 0x0B4)---
* tx_dmad_rng_start_ext[3..0] - (RW) TX DMAD address range start [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_EXT_tx_dmad_rng_start_ext_ADDR    \
	WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_EXT_tx_dmad_rng_start_ext_MASK    \
	0x0000000F /* tx_dmad_rng_start_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_START_EXT_tx_dmad_rng_start_ext_SHFT 0

/*
* ---TX_DMAD_RNG_END (0x18024000 + 0x0B8)---
* tx_dmad_rng_end[31..0] - (RW) TX DMAD address range end [31:0]
*/
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_tx_dmad_rng_end_ADDR                \
	WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_ADDR
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_tx_dmad_rng_end_MASK                \
	0xFFFFFFFF /* tx_dmad_rng_end[31..0] */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_tx_dmad_rng_end_SHFT 0

/*
* ---TX_DMAD_RNG_END_EXT (0x18024000 + 0x0BC)---
* tx_dmad_rng_end_ext[3..0] - (RW) TX DMAD address range end [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_EXT_tx_dmad_rng_end_ext_ADDR        \
	WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_EXT_tx_dmad_rng_end_ext_MASK        \
	0x0000000F /* tx_dmad_rng_end_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_TX_DMAD_RNG_END_EXT_tx_dmad_rng_end_ext_SHFT 0

/*
* ---RX_DMAD_RNG_START (0x18024000 + 0x0C0)---
* rx_dmad_rng_start[31..0] - (RW) RX DMAD address range start [31:0]
*/
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_rx_dmad_rng_start_ADDR            \
	WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_ADDR
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_rx_dmad_rng_start_MASK            \
	0xFFFFFFFF /* rx_dmad_rng_start[31..0] */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_rx_dmad_rng_start_SHFT 0

/*
* ---RX_DMAD_RNG_START_EXT (0x18024000 + 0x0C4)---
* rx_dmad_rng_start_ext[3..0] - (RW) RX DMAD address range start [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_EXT_rx_dmad_rng_start_ext_ADDR    \
	WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_EXT_rx_dmad_rng_start_ext_MASK    \
	0x0000000F /* rx_dmad_rng_start_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_START_EXT_rx_dmad_rng_start_ext_SHFT 0

/*
* ---RX_DMAD_RNG_END (0x18024000 + 0x0C8)---
* rx_dmad_rng_end[31..0] - (RW) RX DMAD address range end [31:0]
*/
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_rx_dmad_rng_end_ADDR                \
	WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_ADDR
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_rx_dmad_rng_end_MASK                \
	0xFFFFFFFF /* rx_dmad_rng_end[31..0] */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_rx_dmad_rng_end_SHFT 0

/*
* ---RX_DMAD_RNG_END_EXT (0x18024000 + 0x0CC)---
* rx_dmad_rng_end_ext[3..0] - (RW) RX DMAD address range end [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_EXT_rx_dmad_rng_end_ext_ADDR        \
	WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_EXT_rx_dmad_rng_end_ext_MASK        \
	0x0000000F /* rx_dmad_rng_end_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_RX_DMAD_RNG_END_EXT_rx_dmad_rng_end_ext_SHFT 0

/*
* ---TX_PLD_RNG_START (0x18024000 + 0x0D0)---
* tx_pld_rng_start[31..0] - (RW) TX PLD address range start [31:0]
*/
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_tx_pld_rng_start_ADDR              \
	WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_ADDR
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_tx_pld_rng_start_MASK              \
	0xFFFFFFFF /* tx_pld_rng_start[31..0] */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_tx_pld_rng_start_SHFT 0

/*
* ---TX_PLD_RNG_START_EXT (0x18024000 + 0x0D4)---
* tx_pld_rng_start_ext[3..0] - (RW) TX PLD address range start [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_EXT_tx_pld_rng_start_ext_ADDR      \
	WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_EXT_tx_pld_rng_start_ext_MASK      \
	0x0000000F /* tx_pld_rng_start_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_START_EXT_tx_pld_rng_start_ext_SHFT 0

/*
* ---TX_PLD_RNG_END (0x18024000 + 0x0D8)---
* tx_pld_rng_end[31..0] - (RW) TX PLD address range end [31:0]
*/
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_tx_pld_rng_end_ADDR                  \
	WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_ADDR
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_tx_pld_rng_end_MASK                  \
	0xFFFFFFFF /* tx_pld_rng_end[31..0] */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_tx_pld_rng_end_SHFT 0

/*
* ---TX_PLD_RNG_END_EXT (0x18024000 + 0x0DC)---
* tx_pld_rng_end_ext[3..0] - (RW) TX PLD address range end [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_EXT_tx_pld_rng_end_ext_ADDR          \
	WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_EXT_tx_pld_rng_end_ext_MASK          \
	0x0000000F /* tx_pld_rng_end_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_TX_PLD_RNG_END_EXT_tx_pld_rng_end_ext_SHFT 0

/*
* ---RX_PLD_RNG_START (0x18024000 + 0x0E0)---
* rx_pld_rng_start[31..0] - (RW) RX PLD address range start [31:0]
*/
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_rx_pld_rng_start_ADDR              \
	WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_ADDR
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_rx_pld_rng_start_MASK              \
	0xFFFFFFFF /* rx_pld_rng_start[31..0] */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_rx_pld_rng_start_SHFT 0

/*
* ---RX_PLD_RNG_START_EXT (0x18024000 + 0x0E4)---
* rx_pld_rng_start_ext[3..0] - (RW) RX PLD address range start [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_EXT_rx_pld_rng_start_ext_ADDR      \
	WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_EXT_rx_pld_rng_start_ext_MASK      \
	0x0000000F /* rx_pld_rng_start_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_START_EXT_rx_pld_rng_start_ext_SHFT 0

/*
* ---RX_PLD_RNG_END (0x18024000 + 0x0E8)---
* rx_pld_rng_end[31..0] - (RW) RX PLD address range end [31:0]
*/
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_rx_pld_rng_end_ADDR                  \
	WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_ADDR
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_rx_pld_rng_end_MASK                  \
	0xFFFFFFFF /* rx_pld_rng_end[31..0] */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_rx_pld_rng_end_SHFT 0

/*
* ---RX_PLD_RNG_END_EXT (0x18024000 + 0x0EC)---
* rx_pld_rng_end_ext[3..0] - (RW) RX PLD address range end [35:32]
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_EXT_rx_pld_rng_end_ext_ADDR          \
	WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_EXT_rx_pld_rng_end_ext_MASK          \
	0x0000000F /* rx_pld_rng_end_ext[3..0] */
#define WF_WFDMA_HOST_DMA0_RX_PLD_RNG_END_EXT_rx_pld_rng_end_ext_SHFT 0

/*
* ---CONN_HIF_RST (0x18024000 + 0x100)---
* RESERVED0[3..0] - (RO) Reserved bits
* conn_hif_logic_rst_n[4] - (RW) This conn_hif_logic_rst_n would reset
* wpdma logic partial control register, include Tx/Rx ring control.
* Also, conn_hif_logic_rst_n would reset wifi
* data path, include tx fifo, rx fifo, r2x_bridge, axi_mux and other other
* asynchronous bridge.
* (Note : conn_hif_logic_rst_n would not
* reset hif_dmashdl logic)
* dmashdl_all_rst_n[5] - (RW) This dmashdl_all_rst_n would reset
* hif_dmashdl_top, include logic and control register.
* RESERVED6[31..6] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_dmashdl_all_rst_n_ADDR                 \
	WF_WFDMA_HOST_DMA0_CONN_HIF_RST_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_dmashdl_all_rst_n_MASK                 \
	0x00000020 /* dmashdl_all_rst_n[5] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_dmashdl_all_rst_n_SHFT 5
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_conn_hif_logic_rst_n_ADDR              \
	WF_WFDMA_HOST_DMA0_CONN_HIF_RST_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_conn_hif_logic_rst_n_MASK              \
	0x00000010 /* conn_hif_logic_rst_n[4] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_RST_conn_hif_logic_rst_n_SHFT 4

/*
* ---CONN_HIF_TOP_MISC (0x18024000 + 0x104)---
* ahb_mux_2to1_ultra[1..0] - (RW) conn _hif ahb mux ultra
* ahb_mux_2to1_qos_en[2] - (RW) conn_hif ahb mux qos enable
* RESERVED3[15..3] - (RO) Reserved bits
* pdma_rxring1_immint_en[16] - (RW) PDMA RX Ring 1 Immediate Interrupt
Enable
* RESERVED17[31..17] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_pdma_rxring1_immint_en_ADDR       \
	WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_pdma_rxring1_immint_en_MASK       \
	0x00010000 /* pdma_rxring1_immint_en[16] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_pdma_rxring1_immint_en_SHFT 16
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_qos_en_ADDR          \
	WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_qos_en_MASK          \
	0x00000004 /* ahb_mux_2to1_qos_en[2] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_qos_en_SHFT 2
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_ultra_ADDR           \
	WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_ultra_MASK           \
	0x00000003 /* ahb_mux_2to1_ultra[1..0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_TOP_MISC_ahb_mux_2to1_ultra_SHFT 0

/*
* ---HOST2MCU_SW_INT_SET (0x18024000 + 0X108)---
* host2mcu_sw_int_0_set[0] - (WO) Driver set this bit to generate MCU
* interrupt and 0x5000_0110[0] will be set to 1.
* host2mcu_sw_int_1_set[1] - (WO) Driver set this bit to generate MCU
* interrupt and 0x5000_0110[1] will be set to 1.
* host2mcu_sw_int_2_set[2] - (WO) Driver set this bit to generate MCU
* interrupt and 0x5000_0110[2] will be set to 1.
* host2mcu_sw_int_3_set[3] - (WO) Driver set [0x0_4108] bit[3] to generate
* MCU interrupt and 0x5000_0110[3] will be set to 1.
* host2mcu_sw_int_4_set[4] - (WO) Driver set [0x0_4108] bit[4] to generate
* MCU interrupt and 0x5000_0110[4] will be set to 1.
* host2mcu_sw_int_5_set[5] - (WO) Driver set [0x0_4108] bit[5] to generate
* MCU interrupt and 0x5000_0110[5] will be set to 1.
* host2mcu_sw_int_6_set[6] - (WO) Driver set [0x0_4108] bit[6] to generate
* MCU interrupt and 0x5000_0110[6] will be set to 1.
* host2mcu_sw_int_7_set[7] - (WO) Driver set [0x0_4108] bit[7] to generate
* MCU interrupt and 0x5000_0110[7] will be set to 1.
* RESERVED8[31..8] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_7_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_7_set_MASK      \
	0x00000080 /* host2mcu_sw_int_7_set[7] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_7_set_SHFT 7
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_6_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_6_set_MASK      \
	0x00000040 /* host2mcu_sw_int_6_set[6] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_6_set_SHFT 6
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_5_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_5_set_MASK      \
	0x00000020 /* host2mcu_sw_int_5_set[5] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_5_set_SHFT 5
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_4_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_4_set_MASK      \
	0x00000010 /* host2mcu_sw_int_4_set[4] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_4_set_SHFT 4
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_3_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_3_set_MASK      \
	0x00000008 /* host2mcu_sw_int_3_set[3] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_3_set_SHFT 3
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_2_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_2_set_MASK      \
	0x00000004 /* host2mcu_sw_int_2_set[2] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_2_set_SHFT 2
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_1_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_1_set_MASK      \
	0x00000002 /* host2mcu_sw_int_1_set[1] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_1_set_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_0_set_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_0_set_MASK      \
	0x00000001 /* host2mcu_sw_int_0_set[0] */
#define WF_WFDMA_HOST_DMA0_HOST2MCU_SW_INT_SET_host2mcu_sw_int_0_set_SHFT 0

/*
* ---MCU2HOST_SW_INT_SET (0x18024000 + 0x10C)---
* mcu2host_sw_int_set_0[0] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[0] to check
* interrupt status
* mcu2host_sw_int_set_1[1] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[1] to check
* interrupt status
* mcu2host_sw_int_set_2[2] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[2] to check
* interrupt status
* mcu2host_sw_int_set_3[3] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[3] to check
* interrupt status
* mcu2host_sw_int_set_4[4] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[4] to check
* interrupt status
* mcu2host_sw_int_set_5[5] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[5] to check
* interrupt status
* mcu2host_sw_int_set_6[6] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[6] to check
* interrupt status
* mcu2host_sw_int_set_7[7] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[7] to check
* interrupt status
* mcu2host_sw_int_set_8[8] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[0] to check
* interrupt status
* mcu2host_sw_int_set_9[9] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[1] to check
* interrupt status
* mcu2host_sw_int_set_10[10] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[2] to check
* interrupt status
* mcu2host_sw_int_set_11[11] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[3] to check
* interrupt status
* mcu2host_sw_int_set_12[12] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[4] to check
* interrupt status
* mcu2host_sw_int_set_13[13] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[5] to check
* interrupt status
* mcu2host_sw_int_set_14[14] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[6] to check
* interrupt status
* mcu2host_sw_int_set_15[15] - (WO) Internal CPU writes this register will
* trigger MCU2HOST software interrupt interrupt to host.
* Host could read [0x0_41F0] bit[7] to check
* interrupt status
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_15_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_15_MASK     \
	0x00008000 /* mcu2host_sw_int_set_15[15] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_15_SHFT 15
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_14_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_14_MASK     \
	0x00004000 /* mcu2host_sw_int_set_14[14] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_14_SHFT 14
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_13_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_13_MASK     \
	0x00002000 /* mcu2host_sw_int_set_13[13] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_13_SHFT 13
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_12_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_12_MASK     \
	0x00001000 /* mcu2host_sw_int_set_12[12] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_12_SHFT 12
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_11_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_11_MASK     \
	0x00000800 /* mcu2host_sw_int_set_11[11] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_11_SHFT 11
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_10_ADDR     \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_10_MASK     \
	0x00000400 /* mcu2host_sw_int_set_10[10] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_10_SHFT 10
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_9_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_9_MASK      \
	0x00000200 /* mcu2host_sw_int_set_9[9] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_9_SHFT 9
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_8_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_8_MASK      \
	0x00000100 /* mcu2host_sw_int_set_8[8] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_8_SHFT 8
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_7_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_7_MASK      \
	0x00000080 /* mcu2host_sw_int_set_7[7] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_7_SHFT 7
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_6_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_6_MASK      \
	0x00000040 /* mcu2host_sw_int_set_6[6] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_6_SHFT 6
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_5_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_5_MASK      \
	0x00000020 /* mcu2host_sw_int_set_5[5] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_5_SHFT 5
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_4_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_4_MASK      \
	0x00000010 /* mcu2host_sw_int_set_4[4] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_4_SHFT 4
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_3_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_3_MASK      \
	0x00000008 /* mcu2host_sw_int_set_3[3] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_2_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_2_MASK      \
	0x00000004 /* mcu2host_sw_int_set_2[2] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_1_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_1_MASK      \
	0x00000002 /* mcu2host_sw_int_set_1[1] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_0_ADDR      \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_0_MASK      \
	0x00000001 /* mcu2host_sw_int_set_0[0] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_SET_mcu2host_sw_int_set_0_SHFT 0

/*
* ---MCU_INT_STA (0x18024000 + 0X110)---
* host2mcu_sw_int_sts[7..0] - (W1C) MCU interrupt status, write 1 to clear
* the interrupt
* wpdma_tx_timeout_int_sts[8] - (W1C) WPDMA TX dma timeout interrupt stauts,
* write 1 to clear the interrupt
* wpdma_rx_timeout_int_sts[9] - (W1C) WPDMA RX dma timeout interrupt stauts,
* write 1 to clear the interrupt
* wifi_txfifo0_wr_ovf_int_sts[10] - (W1C) conn_hif txfifo erorr detec
* interruptt. It indicate tx-fifo memory write overflow.
* wifi_txfifo1_wr_ovf_int_sts[11] - (W1C) conn_hif txfifo erorr detec
* interruptt. It indicate tx-fifo memory write overflow.
* wifi_rxfifo_wr_ovf_int_sts[12] - (W1C) conn_hif rxfifo erorr detect
* interrupt. It indicate rx-fifo memory write overflow.
* wpdma_tx_dmad_mem_range_err_mcu_int_sts[13] - (W1C) WPDMA tx dma descriptor
* memory range error detection mcu interrupt status
* When user setup WPDMA_TX_DMAD_RNG (not
* equal to zero), design would check tx_dmad address. If address range not
* correct, it would alarm memory range error interrupt
* wpdma_rx_dmad_mem_range_err_mcu_int_sts[14] - (W1C) WPDMA rx dma descriptor
* memory range error detection mcu interrupt status
* When user setup WPDMA_RX_DMAD_RNG (not
* equal to zero), design would check rx_dmad address. If address range not
* correct, it would alarm memory range error interrupt
* wpdma_tx_payload_mem_range_err_mcu_int_sts[15] - (W1C) WPDMA tx payload
* memory range error detection mcu interrupt status
* When user setup WPDMA_TX_PLD_RNG (not equal
* to zero), design would check tx_dma payload address. If address range not
* correct, it would alarm memory range error interrupt
* wpdma_rx_payload_mem_range_err_mcu_int_sts[16] - (W1C) WPDMA rx payload
* memory range error detection mcu interrupt status
* When user setup WPDMA_RX_PLD_RNG (not equal
* to zero), design would check rx_dma payload address. If address range not
* correct, it would alarm memory range error interrupt
* RESERVED17[31..17] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_payload_mem_range_err_mcu_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_payload_mem_range_err_mcu_int_sts_MASK \
	\
	0x00010000 /* wpdma_rx_payload_mem_range_err_mcu_int_sts[16] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_payload_mem_range_err_mcu_int_sts_SHFT \
	\
	16
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_payload_mem_range_err_mcu_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_payload_mem_range_err_mcu_int_sts_MASK \
	\
	0x00008000 /* wpdma_tx_payload_mem_range_err_mcu_int_sts[15] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_payload_mem_range_err_mcu_int_sts_SHFT \
	\
	15
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_dmad_mem_range_err_mcu_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_dmad_mem_range_err_mcu_int_sts_MASK \
	\
	0x00004000 /* wpdma_rx_dmad_mem_range_err_mcu_int_sts[14] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_dmad_mem_range_err_mcu_int_sts_SHFT \
	\
	14
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_dmad_mem_range_err_mcu_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_dmad_mem_range_err_mcu_int_sts_MASK \
	\
	0x00002000 /* wpdma_tx_dmad_mem_range_err_mcu_int_sts[13] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_dmad_mem_range_err_mcu_int_sts_SHFT \
	\
	13
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_rxfifo_wr_ovf_int_sts_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_rxfifo_wr_ovf_int_sts_MASK         \
	0x00001000 /* wifi_rxfifo_wr_ovf_int_sts[12] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_rxfifo_wr_ovf_int_sts_SHFT 12
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo1_wr_ovf_int_sts_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo1_wr_ovf_int_sts_MASK        \
	0x00000800 /* wifi_txfifo1_wr_ovf_int_sts[11] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo1_wr_ovf_int_sts_SHFT 11
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo0_wr_ovf_int_sts_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo0_wr_ovf_int_sts_MASK        \
	0x00000400 /* wifi_txfifo0_wr_ovf_int_sts[10] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wifi_txfifo0_wr_ovf_int_sts_SHFT 10
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_timeout_int_sts_ADDR           \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_timeout_int_sts_MASK           \
	0x00000200 /* wpdma_rx_timeout_int_sts[9] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_rx_timeout_int_sts_SHFT 9
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_timeout_int_sts_ADDR           \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_timeout_int_sts_MASK           \
	0x00000100 /* wpdma_tx_timeout_int_sts[8] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_wpdma_tx_timeout_int_sts_SHFT 8
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_host2mcu_sw_int_sts_ADDR                \
	WF_WFDMA_HOST_DMA0_MCU_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_host2mcu_sw_int_sts_MASK                \
	0x000000FF /* host2mcu_sw_int_sts[7..0] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_STA_host2mcu_sw_int_sts_SHFT 0

/*
* ---MCU_INT_ENA (0x18024000 + 0X114)---
* host2mcu_sw_int_ena[7..0] - (RW) host2mcu interrupt enable
* wpdma_tx_dma_timeout_int_ena[8] - (RW) WPDMA TX error detection interrupt
enable
* wpdma_rx_dma_timeout_int_ena[9] - (RW) WPDMA RX error detection interrupt
enable
* wifi_txfifo0_wr_ovf_int_ena[10] - (RW) conn_hif txfifo erorr detect
* interrupt enable.
* wifi_txfifo1_wr_ovf_int_ena[11] - (RW) conn_hif txfifo erorr detect
* interrupt enable.
* wifi_rxfifo_wr_ovf_int_ena[12] - (RW) conn_hif rxfifo erorr detect interrupt
enable.
* wpdma_tx_dmad_mem_range_err_mcu_int_ena[13] - (RW) WPDMA tx dma descriptor
* memory range error detection interrupt enable
* wpdma_rx_dmad_mem_range_err_mcu_int_ena[14] - (RW) WPDMA rx dma descriptor
* memory range error detection interrupt enable
* wpdma_tx_payload_mem_range_err_mcu_int_ena[15] - (RW) WPDMA tx payload
* memory range error detection interrupt enable
* wpdma_rx_payload_mem_range_err_mcu_int_ena[16] - (RW) WPDMA rx payload
* memory range error detection interrupt enable
* RESERVED17[31..17] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_payload_mem_range_err_mcu_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_payload_mem_range_err_mcu_int_ena_MASK \
	\
	0x00010000 /* wpdma_rx_payload_mem_range_err_mcu_int_ena[16] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_payload_mem_range_err_mcu_int_ena_SHFT \
	\
	16
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_payload_mem_range_err_mcu_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_payload_mem_range_err_mcu_int_ena_MASK \
	\
	0x00008000 /* wpdma_tx_payload_mem_range_err_mcu_int_ena[15] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_payload_mem_range_err_mcu_int_ena_SHFT \
	\
	15
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dmad_mem_range_err_mcu_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dmad_mem_range_err_mcu_int_ena_MASK \
	\
	0x00004000 /* wpdma_rx_dmad_mem_range_err_mcu_int_ena[14] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dmad_mem_range_err_mcu_int_ena_SHFT \
	\
	14
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dmad_mem_range_err_mcu_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dmad_mem_range_err_mcu_int_ena_MASK \
	\
	0x00002000 /* wpdma_tx_dmad_mem_range_err_mcu_int_ena[13] */
#define \
WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dmad_mem_range_err_mcu_int_ena_SHFT \
	\
	13
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_rxfifo_wr_ovf_int_ena_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_rxfifo_wr_ovf_int_ena_MASK         \
	0x00001000 /* wifi_rxfifo_wr_ovf_int_ena[12] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_rxfifo_wr_ovf_int_ena_SHFT 12
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo1_wr_ovf_int_ena_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo1_wr_ovf_int_ena_MASK        \
	0x00000800 /* wifi_txfifo1_wr_ovf_int_ena[11] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo1_wr_ovf_int_ena_SHFT 11
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo0_wr_ovf_int_ena_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo0_wr_ovf_int_ena_MASK        \
	0x00000400 /* wifi_txfifo0_wr_ovf_int_ena[10] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wifi_txfifo0_wr_ovf_int_ena_SHFT 10
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dma_timeout_int_ena_ADDR       \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dma_timeout_int_ena_MASK       \
	0x00000200 /* wpdma_rx_dma_timeout_int_ena[9] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_rx_dma_timeout_int_ena_SHFT 9
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dma_timeout_int_ena_ADDR       \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dma_timeout_int_ena_MASK       \
	0x00000100 /* wpdma_tx_dma_timeout_int_ena[8] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_wpdma_tx_dma_timeout_int_ena_SHFT 8
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_host2mcu_sw_int_ena_ADDR                \
	WF_WFDMA_HOST_DMA0_MCU_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_host2mcu_sw_int_ena_MASK                \
	0x000000FF /* host2mcu_sw_int_ena[7..0] */
#define WF_WFDMA_HOST_DMA0_MCU_INT_ENA_host2mcu_sw_int_ena_SHFT 0

/*
* ---CONN_HIF_DUMMY (0x18024000 + 0x120)---
* CONN_HIF_DUMMY[31..0] - (RW) Reserved CR, SE will use it for pcie
calibration!
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DUMMY_CONN_HIF_DUMMY_ADDR                  \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DUMMY_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DUMMY_CONN_HIF_DUMMY_MASK                  \
	0xFFFFFFFF /* CONN_HIF_DUMMY[31..0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DUMMY_CONN_HIF_DUMMY_SHFT 0

/*
* ---WPDMA_DBG_IDX (0x18024000 + 0x124)---
* PDMA_DBG_IDX[7..0] - (RW) PDMA debug index
* PDMA_DBG_Enable[8] - (RW) PDMA Debug Enable
* 0: PDMA_DBG_port would has no function
* 1 : PDMA DBG_IDX select PDMA debug flag
index
* RESERVED9[31..9] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_Enable_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_Enable_MASK                  \
	0x00000100 /* PDMA_DBG_Enable[8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_Enable_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_IDX_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_IDX_MASK                     \
	0x000000FF /* PDMA_DBG_IDX[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_PDMA_DBG_IDX_SHFT 0

/*
* ---WPDMA_DBG_PROBE (0x18024000 + 0x128)---
* PDMA_DBG_PROBE[31..0] - (RO) PDMA Debug probe read
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_PDMA_DBG_PROBE_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_PDMA_DBG_PROBE_MASK                 \
	0xFFFFFFFF /* PDMA_DBG_PROBE[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_PDMA_DBG_PROBE_SHFT 0

/*
* ---CONN_HIF_DBG_IDX (0x18024000 + 0x12C)---
* conn_hif_dbg_byt0_sel[2..0] - (RW) conn_hif_dbg_byt0_sel : Select
* conn_hif_dbg[7:0] from "pdma_dbg"/"hif_dmashdl_top"
* conn_hif_dbg_byt1_sel[5..3] - (RW) conn_hif_dbg_byt1_sel : Select
* conn_hif_dbg[15:8] from "pdma_dbg"/"hif_dmashdl_top"
* conn_hif_dbg_byt2_sel[8..6] - (RW) conn_hif_dbg_byt2_sel : Select
* conn_hif_dbg[23:16] from "pdma_dbg"/"hif_dmashdl_top"
* conn_hif_dbg_byt3_sel[11..9] - (RW) conn_hif_dbg_byt3_sel : Select
* conn_hif_dbg[31:24] from "pdma_dbg"/"hif_dmashdl_top"
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt3_sel_ADDR         \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt3_sel_MASK         \
	0x00000E00 /* conn_hif_dbg_byt3_sel[11..9] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt3_sel_SHFT 9
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt2_sel_ADDR         \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt2_sel_MASK         \
	0x000001C0 /* conn_hif_dbg_byt2_sel[8..6] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt2_sel_SHFT 6
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt1_sel_ADDR         \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt1_sel_MASK         \
	0x00000038 /* conn_hif_dbg_byt1_sel[5..3] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt1_sel_SHFT 3
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt0_sel_ADDR         \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt0_sel_MASK         \
	0x00000007 /* conn_hif_dbg_byt0_sel[2..0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_IDX_conn_hif_dbg_byt0_sel_SHFT 0

/*
* ---CONN_HIF_DBG_PROBE (0x18024000 + 0x130)---
* conn_hif_dbg_probe[31..0] - (RO) conn_hif_dbg_probe read
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_PROBE_conn_hif_dbg_probe_ADDR          \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_PROBE_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_PROBE_conn_hif_dbg_probe_MASK          \
	0xFFFFFFFF /* conn_hif_dbg_probe[31..0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DBG_PROBE_conn_hif_dbg_probe_SHFT 0

/*
* ---CONN_HIF_DMASHDL_DBG_PROBE (0x18024000 + 0x134)---
* DMASHDL_DBG_PROBE[15..0] - (RO) conn_hif_dmashdl_dbg_probe read
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DMASHDL_DBG_PROBE_DMASHDL_DBG_PROBE_ADDR   \
	WF_WFDMA_HOST_DMA0_CONN_HIF_DMASHDL_DBG_PROBE_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DMASHDL_DBG_PROBE_DMASHDL_DBG_PROBE_MASK   \
	0x0000FFFF /* DMASHDL_DBG_PROBE[15..0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_DMASHDL_DBG_PROBE_DMASHDL_DBG_PROBE_SHFT 0

/*
* ---CONN_HIF_BUSY_STATUS (0x18024000 + 0x138)---
* conn_hif_txfifo0_busy[0] - (RO) conn_hif txfifo0 busy status
* 0 : txfifo empty
* 1 : txfifo non empty
* conn_hif_txfifo1_busy[1] - (RO) conn_hif txfifo1 busy status
* 0 : txfifo empty
* 1 : txfifo non empty
* conn_hif_rxfifo_busy[2] - (RO) conn_hif rxfifo busy status
* 0 : rxfifo empty
* 1 : rxfifo non empty
* RESERVED[30..3] - (RO) Reserved CR
* conn_hif_busy[31] - (RO) Over all conn_hif busy status, it was
* busy summation of bit[6] ~ bit[0] status
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_busy_ADDR             \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_busy_MASK             \
	0x80000000 /* conn_hif_busy[31] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_busy_SHFT 31
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_rxfifo_busy_ADDR      \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_rxfifo_busy_MASK      \
	0x00000004 /* conn_hif_rxfifo_busy[2] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_rxfifo_busy_SHFT 2
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo1_busy_ADDR     \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo1_busy_MASK     \
	0x00000002 /* conn_hif_txfifo1_busy[1] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo1_busy_SHFT 1
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo0_busy_ADDR     \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo0_busy_MASK     \
	0x00000001 /* conn_hif_txfifo0_busy[0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_STATUS_conn_hif_txfifo0_busy_SHFT 0

/*
* ---CONN_HIF_BUSY_ENA (0x18024000 + 0x13c)---
* conn_hif_txfifo0_busy_enable[0] - (RW) busy enable control
* 0: ignore busy status
* 1: conn_hif_busy would tack care busy
status
* conn_hif_txfifo1_busy_enable[1] - (RW) busy enable control
* 0: ignore busy status
* 1: conn_hif_busy would tack care busy
status
* conn_hif_rxfifo_busy_enable[2] - (RW) busy enable control
* 0: ignore busy status
* 1: conn_hif_busy would tack care busy
status
* RESERVED3[4..3] - (RO) Reserved bits
* RESERVED[31..5] - (RW) Reserved CR
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_rxfifo_busy_enable_ADDR  \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_rxfifo_busy_enable_MASK  \
	0x00000004 /* conn_hif_rxfifo_busy_enable[2] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_rxfifo_busy_enable_SHFT 2
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo1_busy_enable_ADDR \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo1_busy_enable_MASK \
	0x00000002 /* conn_hif_txfifo1_busy_enable[1] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo1_busy_enable_SHFT 1
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo0_busy_enable_ADDR \
	WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo0_busy_enable_MASK \
	0x00000001 /* conn_hif_txfifo0_busy_enable[0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_BUSY_ENA_conn_hif_txfifo0_busy_enable_SHFT 0

/*
* ---CONN_HIF_FIFO_TEST_MOD (0x18024000 + 0x140)---
* csr_wfdma_loopback_en[0] - (RW) conn_hif fifo loopback enable
* NOTICE : when loopback, OMIT_TX_INFO and
* OMIT_RX_INFO sould be both set to 1'b1
* csr_wfdma_loopback_qsel[2..1] - (RW) No USE for (conn_hif fifo loopback
* packet go into Rx-ring number)
* RESERVED3[31..3] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_qsel_ADDR \
	WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_qsel_MASK \
	0x00000006 /* csr_wfdma_loopback_qsel[2..1] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_qsel_SHFT 1
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_en_ADDR   \
	WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_ADDR
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_en_MASK   \
	0x00000001 /* csr_wfdma_loopback_en[0] */
#define WF_WFDMA_HOST_DMA0_CONN_HIF_FIFO_TEST_MOD_csr_wfdma_loopback_en_SHFT 0

/*
* ---WPDMA2HOST_ERR_INT_STA (0x18024000 + 0x1E8)---
* wpdma_tx_timeout_int_sts[0] - (W1C) WPDMA TX error detection interrupt
* stauts, write 1 to clear the interrupt
* wpdma_rx_timeout_int_sts[1] - (W1C) WPDMA RX error detection interrupt
* stauts, write 1 to clear the interrupt
* RESERVED2[31..2] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_rx_timeout_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_rx_timeout_int_sts_MASK \
	\
	0x00000002 /* wpdma_rx_timeout_int_sts[1] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_rx_timeout_int_sts_SHFT \
	\
	1
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_tx_timeout_int_sts_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_tx_timeout_int_sts_MASK \
	\
	0x00000001 /* wpdma_tx_timeout_int_sts[0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_STA_wpdma_tx_timeout_int_sts_SHFT \
	\
	0

/*
* ---WPDMA2HOST_ERR_INT_ENA (0x18024000 + 0x1EC)---
* wpdma_rx_timeout_int_ena[0] - (RW) WPDMA TX error detection interrupt
enable
* wpdma_tx_timeout_int_ena[1] - (RW) WPDMA RX error detection interrupt
enable
* RESERVED2[31..2] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_tx_timeout_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_tx_timeout_int_ena_MASK \
	\
	0x00000002 /* wpdma_tx_timeout_int_ena[1] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_tx_timeout_int_ena_SHFT \
	\
	1
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_rx_timeout_int_ena_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_rx_timeout_int_ena_MASK \
	\
	0x00000001 /* wpdma_rx_timeout_int_ena[0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA2HOST_ERR_INT_ENA_wpdma_rx_timeout_int_ena_SHFT \
	\
	0

/*
* ---MCU2HOST_SW_INT_STA (0x18024000 + 0x1F0)---
* mcu2host_sw_int_0[0] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_1[1] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_2[2] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_3[3] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_4[4] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_5[5] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_6[6] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_7[7] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_8[8] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_9[9] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_10[10] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_11[11] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_12[12] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_13[13] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_14[14] - (W1C) mcu2host interrupt status
* mcu2host_sw_int_15[15] - (W1C) mcu2host interrupt status
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_15_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_15_MASK         \
	0x00008000 /* mcu2host_sw_int_15[15] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_15_SHFT 15
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_14_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_14_MASK         \
	0x00004000 /* mcu2host_sw_int_14[14] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_14_SHFT 14
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_13_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_13_MASK         \
	0x00002000 /* mcu2host_sw_int_13[13] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_13_SHFT 13
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_12_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_12_MASK         \
	0x00001000 /* mcu2host_sw_int_12[12] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_12_SHFT 12
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_11_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_11_MASK         \
	0x00000800 /* mcu2host_sw_int_11[11] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_11_SHFT 11
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_10_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_10_MASK         \
	0x00000400 /* mcu2host_sw_int_10[10] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_10_SHFT 10
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_9_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_9_MASK          \
	0x00000200 /* mcu2host_sw_int_9[9] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_9_SHFT 9
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_8_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_8_MASK          \
	0x00000100 /* mcu2host_sw_int_8[8] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_8_SHFT 8
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_7_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_7_MASK          \
	0x00000080 /* mcu2host_sw_int_7[7] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_7_SHFT 7
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_6_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_6_MASK          \
	0x00000040 /* mcu2host_sw_int_6[6] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_6_SHFT 6
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_5_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_5_MASK          \
	0x00000020 /* mcu2host_sw_int_5[5] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_5_SHFT 5
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_4_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_4_MASK          \
	0x00000010 /* mcu2host_sw_int_4[4] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_4_SHFT 4
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_3_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_3_MASK          \
	0x00000008 /* mcu2host_sw_int_3[3] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_2_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_2_MASK          \
	0x00000004 /* mcu2host_sw_int_2[2] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_1_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_1_MASK          \
	0x00000002 /* mcu2host_sw_int_1[1] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_0_ADDR          \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_0_MASK          \
	0x00000001 /* mcu2host_sw_int_0[0] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_STA_mcu2host_sw_int_0_SHFT 0

/*
* ---MCU2HOST_SW_INT_ENA (0x18024000 + 0x1F4)---
* mcu2host_int_ena_0[0] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_1[1] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_2[2] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_3[3] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_4[4] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_5[5] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_6[6] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_7[7] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_8[8] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_9[9] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_10[10] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_11[11] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_12[12] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_13[13] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_14[14] - (RW) MCU2HOST software interrupt interrupt
enable
* mcu2host_int_ena_15[15] - (RW) MCU2HOST software interrupt interrupt
enable
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_15_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_15_MASK        \
	0x00008000 /* mcu2host_int_ena_15[15] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_15_SHFT 15
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_14_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_14_MASK        \
	0x00004000 /* mcu2host_int_ena_14[14] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_14_SHFT 14
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_13_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_13_MASK        \
	0x00002000 /* mcu2host_int_ena_13[13] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_13_SHFT 13
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_12_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_12_MASK        \
	0x00001000 /* mcu2host_int_ena_12[12] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_12_SHFT 12
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_11_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_11_MASK        \
	0x00000800 /* mcu2host_int_ena_11[11] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_11_SHFT 11
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_10_ADDR        \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_10_MASK        \
	0x00000400 /* mcu2host_int_ena_10[10] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_10_SHFT 10
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_9_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_9_MASK         \
	0x00000200 /* mcu2host_int_ena_9[9] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_9_SHFT 9
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_8_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_8_MASK         \
	0x00000100 /* mcu2host_int_ena_8[8] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_8_SHFT 8
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_7_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_7_MASK         \
	0x00000080 /* mcu2host_int_ena_7[7] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_7_SHFT 7
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_6_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_6_MASK         \
	0x00000040 /* mcu2host_int_ena_6[6] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_6_SHFT 6
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_5_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_5_MASK         \
	0x00000020 /* mcu2host_int_ena_5[5] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_5_SHFT 5
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_4_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_4_MASK         \
	0x00000010 /* mcu2host_int_ena_4[4] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_4_SHFT 4
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_3_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_3_MASK         \
	0x00000008 /* mcu2host_int_ena_3[3] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_2_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_2_MASK         \
	0x00000004 /* mcu2host_int_ena_2[2] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_1_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_1_MASK         \
	0x00000002 /* mcu2host_int_ena_1[1] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_0_ADDR         \
	WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_0_MASK         \
	0x00000001 /* mcu2host_int_ena_0[0] */
#define WF_WFDMA_HOST_DMA0_MCU2HOST_SW_INT_ENA_mcu2host_int_ena_0_SHFT 0

/*
* ---SUBSYS2HOST_INT_STA (0x18024000 + 0x1F8)---
* mac_int_sts_0[0] - (RO) MAC interrupt 0: TBTT interrupt(Check
* wf_int_wakeup_top/hwisr0 [0x820Fc03c])
* 0 : no interrupt
* 1 : interrupt assert
* mac_int_sts_1[1] - (RO) MAC interrupt 1: Pre-TBTT
* interrupt(Check wf_int_wakeup_top/hwisr1 [0x820Fc044])
* 0 : no interrupt
* 1 : interrupt assert
* mac_int_sts_2[2] - (RO) MAC interrupt 2: TX status
* interrupt(Check wf_int_wakeup_top/hwisr2 [0x820Fc04c])
* 0 : no interrupt
* 1 : interrupt assert
* mac_int_sts_3[3] - (RO) MAC interrupt 3: Auto wakeup interrupt
* (Check wf_int_wakeup_top/hwisr3 [0x820Fc054])
* 0 : no interrupt
* 1 : interrupt assert
* mac_int_sts_4[4] - (RO) MAC interrupt 4: GP timer interrupt
* (Check wf_int_wakeup_top/hwisr4 [0x820Fc05c])
* 0 : no interrupt
* 1 : interrupt assert
* RESERVED5[7..5] - (RO) Reserved bits
* conn_hif_on_host_int_sts[8] - (RO) CONN_HIF_ON interrupt enable
* 0 : no conn_hif_on_host_int interrupt
* 1 : conn_hif_on_host_int interrupt assert.
* User should check conn_hif_on (host_csr) interrupt status and clear interrupt.
* conn2ap_sw_irq_sts[9] - (RO) MCUSYS conn2ap_sw_irq status (Check
* conn_mcu_config/EMI_CTL [0x80000150] bit[4:0])
* 0 : no conn2ap_sw_irq interrupt.
* 1 : conn2ap_sw_irq interrupt assert. User
* should check mcusys_n9 interrupt status and clear interrupt.
* (conn_mcu_config/EMI_CTL [0x80000150] bit[4:0] != 0)
* RESERVED10[31..10] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn2ap_sw_irq_sts_ADDR         \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn2ap_sw_irq_sts_MASK         \
	0x00000200 /* conn2ap_sw_irq_sts[9] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn2ap_sw_irq_sts_SHFT 9
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn_hif_on_host_int_sts_ADDR   \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn_hif_on_host_int_sts_MASK   \
	0x00000100 /* conn_hif_on_host_int_sts[8] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_conn_hif_on_host_int_sts_SHFT 8
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_4_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_4_MASK              \
	0x00000010 /* mac_int_sts_4[4] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_4_SHFT 4
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_3_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_3_MASK              \
	0x00000008 /* mac_int_sts_3[3] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_2_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_2_MASK              \
	0x00000004 /* mac_int_sts_2[2] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_1_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_1_MASK              \
	0x00000002 /* mac_int_sts_1[1] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_0_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_0_MASK              \
	0x00000001 /* mac_int_sts_0[0] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_STA_mac_int_sts_0_SHFT 0

/*
* ---SUBSYS2HOST_INT_ENA (0x18024000 + 0x1FC)---
* mac_int_ena_0[0] - (RW) MAC interrupt enable
* mac_int_ena_1[1] - (RW) MAC interrupt enable
* mac_int_ena_2[2] - (RW) MAC interrupt enable
* mac_int_ena_3[3] - (RW) MAC interrupt enable
* mac_int_ena_4[4] - (RW) MAC interrupt enable
* RESERVED5[7..5] - (RO) Reserved bits
* conn_hif_on_host_int_ena[8] - (RW) CONN_HIF_ON interrupt enable
* conn2ap_sw_irq_ena[9] - (RW) MCUSYS conn2ap_sw_irq enable
* dmashdl_int_ena[10] - (RW) DMASHDL interrupt enable
* mac_int_ena_5[11] - (RW) MAC interrupt enable
* mac_int_ena_6[12] - (RW) MAC interrupt enable
* mac_int_ena_7[13] - (RW) MAC interrupt enable
* mac_int_ena_8[14] - (RW) MAC interrupt enable
* mac_int_ena_9[15] - (RW) MAC interrupt enable
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_9_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_9_MASK              \
	0x00008000 /* mac_int_ena_9[15] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_9_SHFT 15
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_8_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_8_MASK              \
	0x00004000 /* mac_int_ena_8[14] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_8_SHFT 14
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_7_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_7_MASK              \
	0x00002000 /* mac_int_ena_7[13] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_7_SHFT 13
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_6_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_6_MASK              \
	0x00001000 /* mac_int_ena_6[12] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_6_SHFT 12
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_5_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_5_MASK              \
	0x00000800 /* mac_int_ena_5[11] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_5_SHFT 11
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_dmashdl_int_ena_ADDR            \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_dmashdl_int_ena_MASK            \
	0x00000400 /* dmashdl_int_ena[10] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_dmashdl_int_ena_SHFT 10
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn2ap_sw_irq_ena_ADDR         \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn2ap_sw_irq_ena_MASK         \
	0x00000200 /* conn2ap_sw_irq_ena[9] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn2ap_sw_irq_ena_SHFT 9
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn_hif_on_host_int_ena_ADDR   \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn_hif_on_host_int_ena_MASK   \
	0x00000100 /* conn_hif_on_host_int_ena[8] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_conn_hif_on_host_int_ena_SHFT 8
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_4_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_4_MASK              \
	0x00000010 /* mac_int_ena_4[4] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_4_SHFT 4
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_3_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_3_MASK              \
	0x00000008 /* mac_int_ena_3[3] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_2_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_2_MASK              \
	0x00000004 /* mac_int_ena_2[2] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_1_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_1_MASK              \
	0x00000002 /* mac_int_ena_1[1] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_0_ADDR              \
	WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_0_MASK              \
	0x00000001 /* mac_int_ena_0[0] */
#define WF_WFDMA_HOST_DMA0_SUBSYS2HOST_INT_ENA_mac_int_ena_0_SHFT 0

/*
* ---HOST_INT_STA (0x18024000 + 0x200)---
* rx_done_int_sts_0[0] - (W1C) RX Queue#0 packet receive interrupt
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* rx_done_int_sts_1[1] - (W1C) RX Queue#1 packet receive interrupt
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* rx_done_int_sts_2[2] - (W1C) RX Queue#2 packet receive interrupt
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* rx_done_int_sts_3[3] - (W1C) RX Queue#3 packet receive interrupt
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* tx_done_int_sts_0[4] - (W1C) TX Queue#0 packet transmit interrupt
* Write 1 to clear the interrupt
* tx_done_int_sts_1[5] - (W1C) TX Queue#1 packet transmit interrupt
* Write 1 to clear the interrupt
* tx_done_int_sts_2[6] - (W1C) TX Queue#2 packet transmit interrupt
* Write 1 to clear the interrupt
* tx_done_int_sts_3[7] - (W1C) TX Queue#3 packet transmit interrupt
* Write 1 to clear the interrupt
* RESERVED8[18..8] - (RO) Reserved bits
* rx_done_int_sts_6[19] - (W1C) RX Queue#6 packet receive interrupt
* Write 1 to clear the interrupt Read to get the raw interrupt status
* rx_coherent_int_sts[20] - (W1C) RX_DMA finds data coherent event when
* checking ddone bit
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* tx_coherent_int_sts[21] - (W1C) TX_DMA finds data coherent event when
* checking ddone bit
* Write 1 to clear the interrupt
* Read to get the raw interrupt status
* rx_done_int_sts_4[22] - (W1C) RX Queue#4 packet receive interrupt
* Write 1 to clear the interrupt Read to get the raw interrupt status
* rx_done_int_sts_5[23] - (W1C) RX Queue#5 packet receive interrupt
* Write 1 to clear the interrupt Read to get the raw interrupt status
* wpdma2host_err_int_sts[24] - (RO) wpdma interrupt overall status
* User should should check WPDMA_ERR_INT_STA
* for each wpdma error interrupt status
* Host could read [0x0_41E8] to check
* indivisual wpdma2host_error interrupt status
* rx_done_int_sts_7[25] - (W1C) RX Queue#7 packet receive interrupt
* Write 1 to clear the interrupt Read to get the raw interrupt status
* RESERVED26[27..26] - (RO) Reserved bits
* subsys_int_sts[28] - (RO) subsys interrupt overall status
* User should should check
* SUBSYS2HOST_INT_STA for each interrupt status
* Host could read [0x0_41F8] to check
* indivisual subsys hw interrupt status
* mcu2host_sw_int_sts[29] - (RO) subsys interrupt overall status
* User should should check
* SUBSYS2HOST_INT_STA for each interrupt status
* Host could read [0x0_41F8] to check
* indivisual subsys hw interrupt status
* RESERVED30[31..30] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_mcu2host_sw_int_sts_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_mcu2host_sw_int_sts_MASK               \
	0x20000000 /* mcu2host_sw_int_sts[29] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_mcu2host_sw_int_sts_SHFT 29
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_subsys_int_sts_ADDR                    \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_subsys_int_sts_MASK                    \
	0x10000000 /* subsys_int_sts[28] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_subsys_int_sts_SHFT 28
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_7_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_7_MASK                 \
	0x02000000 /* rx_done_int_sts_7[25] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_7_SHFT 25
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_wpdma2host_err_int_sts_ADDR            \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_wpdma2host_err_int_sts_MASK            \
	0x01000000 /* wpdma2host_err_int_sts[24] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_wpdma2host_err_int_sts_SHFT 24
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_5_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_5_MASK                 \
	0x00800000 /* rx_done_int_sts_5[23] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_5_SHFT 23
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_4_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_4_MASK                 \
	0x00400000 /* rx_done_int_sts_4[22] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_4_SHFT 22
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_coherent_int_sts_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_coherent_int_sts_MASK               \
	0x00200000 /* tx_coherent_int_sts[21] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_coherent_int_sts_SHFT 21
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_coherent_int_sts_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_coherent_int_sts_MASK               \
	0x00100000 /* rx_coherent_int_sts[20] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_coherent_int_sts_SHFT 20
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_6_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_6_MASK                 \
	0x00080000 /* rx_done_int_sts_6[19] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_6_SHFT 19
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_3_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_3_MASK                 \
	0x00000080 /* tx_done_int_sts_3[7] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_3_SHFT 7
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_2_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_2_MASK                 \
	0x00000040 /* tx_done_int_sts_2[6] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_2_SHFT 6
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_1_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_1_MASK                 \
	0x00000020 /* tx_done_int_sts_1[5] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_1_SHFT 5
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_0_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_0_MASK                 \
	0x00000010 /* tx_done_int_sts_0[4] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_tx_done_int_sts_0_SHFT 4
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_3_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_3_MASK                 \
	0x00000008 /* rx_done_int_sts_3[3] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_3_SHFT 3
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_2_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_2_MASK                 \
	0x00000004 /* rx_done_int_sts_2[2] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_2_SHFT 2
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_1_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_1_MASK                 \
	0x00000002 /* rx_done_int_sts_1[1] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_0_ADDR                 \
	WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_0_MASK                 \
	0x00000001 /* rx_done_int_sts_0[0] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_rx_done_int_sts_0_SHFT 0

/*
* ---HOST_INT_ENA (0x18024000 + 0X204)---
* HOST_RX_DONE_INT_ENA0[0] - (RW) RX Queue#0 packet receive interrupt
* HOST_RX_DONE_INT_ENA1[1] - (RW) RX Queue#1 packet receive interrupt
* HOST_RX_DONE_INT_ENA2[2] - (RW) RX Queue#2 packet receive interrupt
* HOST_RX_DONE_INT_ENA3[3] - (RW) RX Queue#3 packet receive interrupt
* HOST_TX_DONE_INT_ENA0[4] - (RW) TX Queue#0 packet transmit interrupt
* HOST_TX_DONE_INT_ENA1[5] - (RW) TX Queue#1 packet transmit interrupt
* HOST_TX_DONE_INT_ENA2[6] - (RW) TX Queue#2 packet transmit interrupt
* HOST_TX_DONE_INT_ENA3[7] - (RW) TX Queue#3 packet transmit interrupt
* RESERVED8[18..8] - (RO) Reserved bits
* HOST_RX_DONE_INT_ENA6[19] - (RW) RX Queue#6 packet receive interrupt
* HOST_RX_COHERENT_EN[20] - (RW) Enable for RX_DMA data coherent
interrupt
* HOST_TX_COHERENT_EN[21] - (RW) Enable for TX_DMA data coherent
interrupt
* HOST_RX_DONE_INT_ENA4[22] - (RW) RX Queue#4 packet receive interrupt
* HOST_RX_DONE_INT_ENA5[23] - (RW) RX Queue#5 packet receive interrupt
* wpdma2host_err_int_ena[24] - (RW) Enable bit of wpdma2host_err_int
* HOST_RX_DONE_INT_ENA7[25] - (RW) RX Queue#7 packet receive interrupt
* RESERVED26[27..26] - (RO) Reserved bits
* subsys_int_ena[28] - (RW) Enable bit of subsys_int
* mcu2host_sw_int_ena[29] - (RW) Enable bit of mcu2host_sw_int
* RESERVED30[31..30] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_mcu2host_sw_int_ena_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_mcu2host_sw_int_ena_MASK               \
	0x20000000 /* mcu2host_sw_int_ena[29] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_mcu2host_sw_int_ena_SHFT 29
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_subsys_int_ena_ADDR                    \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_subsys_int_ena_MASK                    \
	0x10000000 /* subsys_int_ena[28] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_subsys_int_ena_SHFT 28
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA7_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA7_MASK             \
	0x02000000 /* HOST_RX_DONE_INT_ENA7[25] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA7_SHFT 25
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_wpdma2host_err_int_ena_ADDR            \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_wpdma2host_err_int_ena_MASK            \
	0x01000000 /* wpdma2host_err_int_ena[24] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_wpdma2host_err_int_ena_SHFT 24
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA5_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA5_MASK             \
	0x00800000 /* HOST_RX_DONE_INT_ENA5[23] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA5_SHFT 23
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA4_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA4_MASK             \
	0x00400000 /* HOST_RX_DONE_INT_ENA4[22] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA4_SHFT 22
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_COHERENT_EN_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_COHERENT_EN_MASK               \
	0x00200000 /* HOST_TX_COHERENT_EN[21] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_COHERENT_EN_SHFT 21
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_COHERENT_EN_ADDR               \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_COHERENT_EN_MASK               \
	0x00100000 /* HOST_RX_COHERENT_EN[20] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_COHERENT_EN_SHFT 20
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA6_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA6_MASK             \
	0x00080000 /* HOST_RX_DONE_INT_ENA6[19] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA6_SHFT 19
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA3_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA3_MASK             \
	0x00000080 /* HOST_TX_DONE_INT_ENA3[7] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA3_SHFT 7
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA2_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA2_MASK             \
	0x00000040 /* HOST_TX_DONE_INT_ENA2[6] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA2_SHFT 6
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA1_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA1_MASK             \
	0x00000020 /* HOST_TX_DONE_INT_ENA1[5] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA1_SHFT 5
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA0_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA0_MASK             \
	0x00000010 /* HOST_TX_DONE_INT_ENA0[4] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_TX_DONE_INT_ENA0_SHFT 4
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA3_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA3_MASK             \
	0x00000008 /* HOST_RX_DONE_INT_ENA3[3] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA3_SHFT 3
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA2_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA2_MASK             \
	0x00000004 /* HOST_RX_DONE_INT_ENA2[2] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA2_SHFT 2
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA1_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA1_MASK             \
	0x00000002 /* HOST_RX_DONE_INT_ENA1[1] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA1_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA0_ADDR             \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA0_MASK             \
	0x00000001 /* HOST_RX_DONE_INT_ENA0[0] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_HOST_RX_DONE_INT_ENA0_SHFT 0

/*
* ---WPDMA_GLO_CFG (0x18024000 + 0x208)---
* TX_DMA_EN[0] - (RW) TX_DMA Enable
* 1: Enable TX_DMA, MUST wait until all
* prefetch rings' MAX_CNT(WPDMA_T(R)X_RING*_EXT_CTRL) of DMA including neighbor
* DMA have been configured successfully
* 0: Disable TX_DMA
* TX_DMA_BUSY[1] - (RO) TX_DMA Busy indicator
* 1: TX_DMA is busy
* 0: TX_DMA is not busy
* RX_DMA_EN[2] - (RW) RX_DMA Enable
* 1: Enable RX_DMA, MUST wait until all
* prefetch rings' MAX_CNT(WPDMA_T(R)X_RING*_EXT_CTRL) of DMA including neighbor
* DMA have been configured successfully
* 0: Disable RX_DMA
* RX_DMA_BUSY[3] - (RO) RX_DMA Busy indicator
* 1: RX_DMA is busy
* 0: RX_DMA is not busy
* PDMA_BT_SIZE[5..4] - (RW) Define the burst size of WPDMA
* 2'h0 : 4 DWORD (16bytes)
* 2'h1 : 8 DWORD (32 bytes)
* 2'h2 : 16 DWORD (64 bytes)
* 2'h3 : 32 DWORD (128 bytes)
* TX_WB_DDONE[6] - (RW) 1'b1 : TX engine will wait to assert IRQ
* util whole TX dmad has been fully written into AXI bus which represents HOST
* memory, 1'b0 : TX engine will assert IRQ once TX dmad write-back request have
* been ACKed
* BIG_ENDIAN[7] - (RW) The endian mode selection. DMA applies
* the endian rule to convert payload and TX/RX information. DMA won't apply
* endian rule to register or descriptor.
* 1: big endian.
* 0: little endian.
* DMAD_32B_EN[8] - (RW) DMA Descriptor 32-byte Enable
* 0: The size of descriptors is set to 16-byte
* 1: The size of descriptors is set to 32-byte
* FW_DWLD_Bypass_dmashdl[9] - (RW) No USE for (APSOC/PCIE)
* For firmware download packet, driver shold using tx-ring16 to download packet
* and set this bit to bypass dmashdl resource control.
* After firmware download finish, driver should clear this bit.
* After all, tx-ring16 could be used for normal data operation.
(USB)
* For USB test_mode, user could set this bit to bypass dmashdl with all endpoint
* CSR_WFDMA_DUMMY_REG[10] - (RW) dummy CR for use if ECO needed
* CSR_AXI_BUFRDY_BYP[11] - (RW) to disable read data fifo available
* checking before issuing next AXI read request
* FIFO_LITTLE_ENDIAN[12] - (RW) Determines the endianness of the FIFO side
* 0: Big-endian
* 1: Little-endian
* CSR_RX_WB_DDONE[13] - (RW) 1'b1 : RX engine will wait to assert IRQ
* util whole RX dmad has been fully written into AXI bus which represents HOST
* memory, 1'b0 : RX engine will assert IRQ once RX dmad write-back request have
* been ACKed
* CSR_PP_HIF_TXP_ACTIVE_EN[14] - (RW) 1'b1 : enable legacy pp_hif_txp_active
* function to lock tx engine for favor TXP transmit requested directly from PP,
* other pdma TX rings request will be masked until pp_hif_txp_active is
deasserted
* 1'b0 : disable legacy pp_hif_txp_active function, use latest TX source QoS
* design to change throttler settings to favor TXP transmit!
* CSR_DISP_BASE_PTR_CHAIN_EN[15] - (RW) Enable prefet sram ring address
* arrangement by hardware chain structure(DMA#N TX ring group -> DMA#N RX ring
* group -> DMA#M TX ring group -> DMA#M RX ring group and son on). If not
* enabled, firmware need to program DISP_BASE_PTR of WPDMA_T(R)X_RING*_EXT_CTRL
instead!!
*CSR_LBK_RX_Q_SEL[18..16] - (RW) loopback data from TXFIFO will be direct to
* this RX ring when CSR_LBK_RX_Q_SEL_EN in loopback mode, valid bit-width is
* equal to RX_RING_WIDTH which can be calculated from WPDMA_INFO 0x284[15:8]
RX_RING_NUMBER
* RESERVED19[19] - (RO) Reserved bits
* CSR_LBK_RX_Q_SEL_EN[20] - (RW) Force configured CSR_LBK_RX_Q_SEL to
* receive loopback data from TXFIFO
* RESERVED21[23..21] - (RO) Reserved bits
* CSR_SW_RST[24] - (RO) SW reset all designs (To be tested for SER in the
future)
* FORCE_TX_EOF[25] - (RW) Force to send an eof after PDMA being reset (for
Packet_Processor)
* 0: Disabled
* 1: Enabled
* PDMA_ADDR_EXT_EN[26] - (RW) No Fnction for now!! For PDMA Address 32bits
* extension. When this design option was enable. PDMA would change Tx/Rx
* descriptor format for address extension.
* 0 : PDMA 32bits address
* 1 : PDMA Tx descirptor DW3 (TXINFO) would used to extend address
* PDMA Rx descirpt DW2 (Reserved) would used to extend address.
* OMIT_RX_INFO[27] - (RW) For loopback mode, set to 1'b1.
* For normal wifi data operation. User should not set this option and should
* keep 1'b0 because UMAC will always add extra QW for checksum after received
* packet's laster QW
* VERY IMPORTANT : for cpu_dma0/1 where CR
* resides in 0x5100_0xxx, OMIT_RX_INFO MUST be set to 1'b1
* Omit rx_info of all RX packets
* 0: All the PX packets should end with a rx_info
* 1: All the PX packets should NOT end with a rx_info but an eof
* OMIT_TX_INFO[28] - (RW) For loopback mode, set to 1'b1.
* For normal wifi data operation. User should
* set this option to
* Omit tx_info of all TX packets because UMAC
* design not support TXINFO
* 0: The tx_info in DMAD will be sent at the beginning
* 1: The tx_info in DMAD will NOT be sent at the beginning
* BYTE_SWAP[29] - (RW) Byte Swapping for TX/RX DMAD
* 0: Not to swap (Endian of DMAD unchanged)
* 1: Swap (Endian of DMAD reversed)
* CLK_GATE_DIS[30] - (RW) PDMA Clock Gated Function Disable
* 0: normal function
* 1: disable clock gated function
* RX_2B_OFFSET[31] - (RW) RX PBF 2-byte Offset
* 1: Skip the first two bytes of the RX PBF
* 0: Not to skip the first two bytes of the
* RX PBF
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_2B_OFFSET_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_2B_OFFSET_MASK                     \
	0x80000000 /* RX_2B_OFFSET[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_2B_OFFSET_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CLK_GATE_DIS_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CLK_GATE_DIS_MASK                     \
	0x40000000 /* CLK_GATE_DIS[30] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CLK_GATE_DIS_SHFT 30
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BYTE_SWAP_ADDR                        \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BYTE_SWAP_MASK                        \
	0x20000000 /* BYTE_SWAP[29] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BYTE_SWAP_SHFT 29
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_TX_INFO_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_TX_INFO_MASK                     \
	0x10000000 /* OMIT_TX_INFO[28] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_TX_INFO_SHFT 28
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_RX_INFO_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_RX_INFO_MASK                     \
	0x08000000 /* OMIT_RX_INFO[27] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_OMIT_RX_INFO_SHFT 27
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_ADDR_EXT_EN_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_ADDR_EXT_EN_MASK                 \
	0x04000000 /* PDMA_ADDR_EXT_EN[26] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_ADDR_EXT_EN_SHFT 26
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FORCE_TX_EOF_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FORCE_TX_EOF_MASK                     \
	0x02000000 /* FORCE_TX_EOF[25] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FORCE_TX_EOF_SHFT 25
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_SW_RST_ADDR                       \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_SW_RST_MASK                       \
	0x01000000 /* CSR_SW_RST[24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_SW_RST_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_EN_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_EN_MASK              \
	0x00100000 /* CSR_LBK_RX_Q_SEL_EN[20] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_EN_SHFT 20
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_MASK                 \
	0x00070000 /* CSR_LBK_RX_Q_SEL[18..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_LBK_RX_Q_SEL_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_MASK       \
	0x00008000 /* CSR_DISP_BASE_PTR_CHAIN_EN[15] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_SHFT 15
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_PP_HIF_TXP_ACTIVE_EN_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_PP_HIF_TXP_ACTIVE_EN_MASK         \
	0x00004000 /* CSR_PP_HIF_TXP_ACTIVE_EN[14] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_PP_HIF_TXP_ACTIVE_EN_SHFT 14
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_RX_WB_DDONE_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_RX_WB_DDONE_MASK                  \
	0x00002000 /* CSR_RX_WB_DDONE[13] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_RX_WB_DDONE_SHFT 13
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FIFO_LITTLE_ENDIAN_ADDR               \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FIFO_LITTLE_ENDIAN_MASK               \
	0x00001000 /* FIFO_LITTLE_ENDIAN[12] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FIFO_LITTLE_ENDIAN_SHFT 12
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_AXI_BUFRDY_BYP_ADDR               \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_AXI_BUFRDY_BYP_MASK               \
	0x00000800 /* CSR_AXI_BUFRDY_BYP[11] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_AXI_BUFRDY_BYP_SHFT 11
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_WFDMA_DUMMY_REG_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_WFDMA_DUMMY_REG_MASK              \
	0x00000400 /* CSR_WFDMA_DUMMY_REG[10] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_WFDMA_DUMMY_REG_SHFT 10
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FW_DWLD_Bypass_dmashdl_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FW_DWLD_Bypass_dmashdl_MASK           \
	0x00000200 /* FW_DWLD_Bypass_dmashdl[9] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_FW_DWLD_Bypass_dmashdl_SHFT 9
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_DMAD_32B_EN_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_DMAD_32B_EN_MASK                      \
	0x00000100 /* DMAD_32B_EN[8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_DMAD_32B_EN_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BIG_ENDIAN_ADDR                       \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BIG_ENDIAN_MASK                       \
	0x00000080 /* BIG_ENDIAN[7] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_BIG_ENDIAN_SHFT 7
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_WB_DDONE_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_WB_DDONE_MASK                      \
	0x00000040 /* TX_WB_DDONE[6] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_WB_DDONE_SHFT 6
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_BT_SIZE_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_BT_SIZE_MASK                     \
	0x00000030 /* PDMA_BT_SIZE[5..4] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_PDMA_BT_SIZE_SHFT 4
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_BUSY_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_BUSY_MASK                      \
	0x00000008 /* RX_DMA_BUSY[3] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_BUSY_SHFT 3
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_EN_ADDR                        \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_EN_MASK                        \
	0x00000004 /* RX_DMA_EN[2] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_RX_DMA_EN_SHFT 2
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_BUSY_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_BUSY_MASK                      \
	0x00000002 /* TX_DMA_BUSY[1] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_BUSY_SHFT 1
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_EN_ADDR                        \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_EN_MASK                        \
	0x00000001 /* TX_DMA_EN[0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_TX_DMA_EN_SHFT 0

/*
* ---WPDMA_RST_DTX_PTR (0x18024000 + 0x20C)---
* RST_DTX_IDX0[0] - (WO) Write 1 to reset to TX_DMATX_IDX0 to 0
* RST_DTX_IDX1[1] - (WO) Write 1 to reset to TX_DMATX_IDX1 to 0
* RST_DTX_IDX2[2] - (WO) Write 1 to reset to TX_DMATX_IDX2 to 0
* RST_DTX_IDX3[3] - (WO) Write 1 to reset to TX_DMATX_IDX3 to 0
* RESERVED[31..4] - (WO) Reserved
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX3_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX3_MASK                 \
	0x00000008 /* RST_DTX_IDX3[3] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX3_SHFT 3
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX2_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX2_MASK                 \
	0x00000004 /* RST_DTX_IDX2[2] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX2_SHFT 2
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX1_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX1_MASK                 \
	0x00000002 /* RST_DTX_IDX1[1] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX1_SHFT 1
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX0_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX0_MASK                 \
	0x00000001 /* RST_DTX_IDX0[0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_RST_DTX_IDX0_SHFT 0

/*
* ---WPDMA_PAUSE_TX_Q (0x18024000 + 0x224)---
* TX_Q_PAUSE[3..0] - (RW) Pause signal for each TX ring (16 bits
* for 16 rings)
* Set 0: Normal function; Set 1: The
* corresponding TX ring is paused
* RESERVED4[31..4] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_TX_Q_TX_Q_PAUSE_ADDR                    \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_TX_Q_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_TX_Q_TX_Q_PAUSE_MASK                    \
	0x0000000F /* TX_Q_PAUSE[3..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_TX_Q_TX_Q_PAUSE_SHFT 0

/*
* ---HOST_INT_ENA_SET (0x18024000 + 0X228)---
* HOST_RX_DONE_INT_ENA0[0] - (W1S) RX Queue#0 packet receive interrupt
* HOST_RX_DONE_INT_ENA1[1] - (W1S) RX Queue#1 packet receive interrupt
* HOST_RX_DONE_INT_ENA2[2] - (W1S) RX Queue#2 packet receive interrupt
* HOST_RX_DONE_INT_ENA3[3] - (W1S) RX Queue#3 packet receive interrupt
* HOST_TX_DONE_INT_ENA0[4] - (W1S) TX Queue#0 packet transmit interrupt
* HOST_TX_DONE_INT_ENA1[5] - (W1S) TX Queue#1 packet transmit interrupt
* HOST_TX_DONE_INT_ENA2[6] - (W1S) TX Queue#2 packet transmit interrupt
* HOST_TX_DONE_INT_ENA3[7] - (W1S) TX Queue#3 packet transmit interrupt
* RESERVED8[18..8] - (RO) Reserved bits
* HOST_RX_DONE_INT_ENA6[19] - (W1S) RX Queue#6 packet receive interrupt
* HOST_RX_COHERENT_EN[20] - (W1S) Enable for RX_DMA data coherent
interrupt
* HOST_TX_COHERENT_EN[21] - (W1S) Enable for TX_DMA data coherent
interrupt
* HOST_RX_DONE_INT_ENA4[22] - (W1S) RX Queue#4 packet receive interrupt
* HOST_RX_DONE_INT_ENA5[23] - (W1S) RX Queue#5 packet receive interrupt
* wpdma2host_err_int_ena[24] - (W1S) Enable bit of wpdma2host_err_int
* HOST_RX_DONE_INT_ENA7[25] - (W1S) RX Queue#7 packet receive interrupt
* RESERVED26[27..26] - (RO) Reserved bits
* subsys_int_ena[28] - (W1S) Enable bit of subsys_int
* mcu2host_sw_int_ena[29] - (W1S) Enable bit of mcu2host_sw_int
* RESERVED30[31..30] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_mcu2host_sw_int_ena_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_mcu2host_sw_int_ena_MASK           \
	0x20000000 /* mcu2host_sw_int_ena[29] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_mcu2host_sw_int_ena_SHFT 29
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_subsys_int_ena_ADDR                \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_subsys_int_ena_MASK                \
	0x10000000 /* subsys_int_ena[28] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_subsys_int_ena_SHFT 28
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA7_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA7_MASK         \
	0x02000000 /* HOST_RX_DONE_INT_ENA7[25] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA7_SHFT 25
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_wpdma2host_err_int_ena_ADDR        \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_wpdma2host_err_int_ena_MASK        \
	0x01000000 /* wpdma2host_err_int_ena[24] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_wpdma2host_err_int_ena_SHFT 24
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA5_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA5_MASK         \
	0x00800000 /* HOST_RX_DONE_INT_ENA5[23] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA5_SHFT 23
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA4_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA4_MASK         \
	0x00400000 /* HOST_RX_DONE_INT_ENA4[22] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA4_SHFT 22
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_COHERENT_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_COHERENT_EN_MASK           \
	0x00200000 /* HOST_TX_COHERENT_EN[21] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_COHERENT_EN_SHFT 21
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_COHERENT_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_COHERENT_EN_MASK           \
	0x00100000 /* HOST_RX_COHERENT_EN[20] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_COHERENT_EN_SHFT 20
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA6_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA6_MASK         \
	0x00080000 /* HOST_RX_DONE_INT_ENA6[19] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA6_SHFT 19
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA3_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA3_MASK         \
	0x00000080 /* HOST_TX_DONE_INT_ENA3[7] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA3_SHFT 7
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA2_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA2_MASK         \
	0x00000040 /* HOST_TX_DONE_INT_ENA2[6] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA2_SHFT 6
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA1_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA1_MASK         \
	0x00000020 /* HOST_TX_DONE_INT_ENA1[5] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA1_SHFT 5
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA0_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA0_MASK         \
	0x00000010 /* HOST_TX_DONE_INT_ENA0[4] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_TX_DONE_INT_ENA0_SHFT 4
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA3_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA3_MASK         \
	0x00000008 /* HOST_RX_DONE_INT_ENA3[3] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA3_SHFT 3
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA2_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA2_MASK         \
	0x00000004 /* HOST_RX_DONE_INT_ENA2[2] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA2_SHFT 2
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA1_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA1_MASK         \
	0x00000002 /* HOST_RX_DONE_INT_ENA1[1] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA1_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA0_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA0_MASK         \
	0x00000001 /* HOST_RX_DONE_INT_ENA0[0] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_SET_HOST_RX_DONE_INT_ENA0_SHFT 0

/*
* ---HOST_INT_ENA_CLR (0x18024000 + 0X22C)---
* HOST_RX_DONE_INT_ENA0[0] - (W1C) RX Queue#0 packet receive interrupt
* HOST_RX_DONE_INT_ENA1[1] - (W1C) RX Queue#1 packet receive interrupt
* HOST_RX_DONE_INT_ENA2[2] - (W1C) RX Queue#2 packet receive interrupt
* HOST_RX_DONE_INT_ENA3[3] - (W1C) RX Queue#3 packet receive interrupt
* HOST_TX_DONE_INT_ENA0[4] - (W1C) TX Queue#0 packet transmit interrupt
* HOST_TX_DONE_INT_ENA1[5] - (W1C) TX Queue#1 packet transmit interrupt
* HOST_TX_DONE_INT_ENA2[6] - (W1C) TX Queue#2 packet transmit interrupt
* HOST_TX_DONE_INT_ENA3[7] - (W1C) TX Queue#3 packet transmit interrupt
* RESERVED8[18..8] - (RO) Reserved bits
* HOST_RX_DONE_INT_ENA6[19] - (W1C) RX Queue#6 packet receive interrupt
* HOST_RX_COHERENT_EN[20] - (W1C) Enable for RX_DMA data coherent
interrupt
* HOST_TX_COHERENT_EN[21] - (W1C) Enable for TX_DMA data coherent
interrupt
* HOST_RX_DONE_INT_ENA4[22] - (W1C) RX Queue#4 packet receive interrupt
* HOST_RX_DONE_INT_ENA5[23] - (W1C) RX Queue#5 packet receive interrupt
* wpdma2host_err_int_ena[24] - (W1C) Enable bit of wpdma2host_err_int
* HOST_RX_DONE_INT_ENA7[25] - (W1C) RX Queue#7 packet receive interrupt
* RESERVED26[27..26] - (RO) Reserved bits
* subsys_int_ena[28] - (W1C) Enable bit of subsys_int
* mcu2host_sw_int_ena[29] - (W1C) Enable bit of mcu2host_sw_int
* RESERVED30[31..30] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_mcu2host_sw_int_ena_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_mcu2host_sw_int_ena_MASK           \
	0x20000000 /* mcu2host_sw_int_ena[29] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_mcu2host_sw_int_ena_SHFT 29
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_subsys_int_ena_ADDR                \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_subsys_int_ena_MASK                \
	0x10000000 /* subsys_int_ena[28] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_subsys_int_ena_SHFT 28
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA7_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA7_MASK         \
	0x02000000 /* HOST_RX_DONE_INT_ENA7[25] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA7_SHFT 25
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_wpdma2host_err_int_ena_ADDR        \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_wpdma2host_err_int_ena_MASK        \
	0x01000000 /* wpdma2host_err_int_ena[24] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_wpdma2host_err_int_ena_SHFT 24
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA5_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA5_MASK         \
	0x00800000 /* HOST_RX_DONE_INT_ENA5[23] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA5_SHFT 23
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA4_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA4_MASK         \
	0x00400000 /* HOST_RX_DONE_INT_ENA4[22] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA4_SHFT 22
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_COHERENT_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_COHERENT_EN_MASK           \
	0x00200000 /* HOST_TX_COHERENT_EN[21] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_COHERENT_EN_SHFT 21
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_COHERENT_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_COHERENT_EN_MASK           \
	0x00100000 /* HOST_RX_COHERENT_EN[20] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_COHERENT_EN_SHFT 20
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA6_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA6_MASK         \
	0x00080000 /* HOST_RX_DONE_INT_ENA6[19] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA6_SHFT 19
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA3_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA3_MASK         \
	0x00000080 /* HOST_TX_DONE_INT_ENA3[7] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA3_SHFT 7
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA2_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA2_MASK         \
	0x00000040 /* HOST_TX_DONE_INT_ENA2[6] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA2_SHFT 6
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA1_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA1_MASK         \
	0x00000020 /* HOST_TX_DONE_INT_ENA1[5] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA1_SHFT 5
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA0_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA0_MASK         \
	0x00000010 /* HOST_TX_DONE_INT_ENA0[4] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_TX_DONE_INT_ENA0_SHFT 4
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA3_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA3_MASK         \
	0x00000008 /* HOST_RX_DONE_INT_ENA3[3] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA3_SHFT 3
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA2_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA2_MASK         \
	0x00000004 /* HOST_RX_DONE_INT_ENA2[2] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA2_SHFT 2
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA1_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA1_MASK         \
	0x00000002 /* HOST_RX_DONE_INT_ENA1[1] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA1_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA0_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA0_MASK         \
	0x00000001 /* HOST_RX_DONE_INT_ENA0[0] */
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_CLR_HOST_RX_DONE_INT_ENA0_SHFT 0

/*
* ---WPDMA_TIMEOUT_CFG (0x18024000 + 0x230)---
* WPDMA_TX_TIMEOUT_TH[7..0] - (RW) xxx
* WPDMA_TX_TIMEOUT_TICK[14..8] - (RW) xxx
* WPDMA_TX_TIMEOUT_ENA[15] - (RW) xxx
* WPDMA_RX_TIMEOUT_TH[23..16] - (RW) xxx
* WPDMA_RX_TIMEOUT_TICK[30..24] - (RW) xxx
* WPDMA_RX_TIMEOUT_ENA[31] - (RW) xxx
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_ENA_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_ENA_MASK         \
	0x80000000 /* WPDMA_RX_TIMEOUT_ENA[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_ENA_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TICK_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TICK_MASK        \
	0x7F000000 /* WPDMA_RX_TIMEOUT_TICK[30..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TICK_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TH_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TH_MASK          \
	0x00FF0000 /* WPDMA_RX_TIMEOUT_TH[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_RX_TIMEOUT_TH_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_ENA_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_ENA_MASK         \
	0x00008000 /* WPDMA_TX_TIMEOUT_ENA[15] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_ENA_SHFT 15
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TICK_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TICK_MASK        \
	0x00007F00 /* WPDMA_TX_TIMEOUT_TICK[14..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TICK_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TH_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TH_MASK          \
	0x000000FF /* WPDMA_TX_TIMEOUT_TH[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TIMEOUT_CFG_WPDMA_TX_TIMEOUT_TH_SHFT 0

/*
* ---WPDMA_MISC_CFG (0x18024000 + 0x234)---
* WPDMA_TX_TIMEOUT_SEL[0] - (RW) xxx
* WPDMA_RX_TIMEOUT_SEL[1] - (RW) xxx
* WPDMA_RX_FREE_Q_TH[5..2] - (RW) When loopback, this will be used to
* generate correct tx_pause to avlid deadlock which caused from situration that
* tx_dma will start reading tx packet from memory without considering lack of RX
* dmad in prefetch sram and needing to read RX dmad from memory which tx dma is
* reading tx packet too and rready is deasserted due to txfifo full !!
* RX dmad in prefetch sram should be greater
* than RX_FREE_Q_TH for rx_dma to start writing received packet into memory!!
* RESERVED6[31..6] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_FREE_Q_TH_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_FREE_Q_TH_MASK              \
	0x0000003C /* WPDMA_RX_FREE_Q_TH[5..2] */
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_FREE_Q_TH_SHFT 2
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_TIMEOUT_SEL_ADDR            \
	WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_TIMEOUT_SEL_MASK            \
	0x00000002 /* WPDMA_RX_TIMEOUT_SEL[1] */
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_RX_TIMEOUT_SEL_SHFT 1
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_TX_TIMEOUT_SEL_ADDR            \
	WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_TX_TIMEOUT_SEL_MASK            \
	0x00000001 /* WPDMA_TX_TIMEOUT_SEL[0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_MISC_CFG_WPDMA_TX_TIMEOUT_SEL_SHFT 0

/*
* ---WPDMA_TX_WRR_ARB_GBF0 (0x18024000 + 0x240)---
* WRR_REQ0_ARB_GBF[2..0] - (RW) WRR REQ#0 priority level, mapped to
* lumpped request from TX ring0~ring15 for host TXD
* WRR_REQ1_ARB_GBF[5..3] - (RW) WRR REQ#1 priority level, mapped to
* request from TX ring16 when dual tx fifo for host event packet
* WRR_REQ2_ARB_GBF[8..6] - (RW) WRR REQ#2 priority level, mapped to
* request from TX ring17 when dual tx fifo for host event packet
* WRR_REQ3_ARB_GBF[11..9] - (RW) WRR REQ#3 priority level, mapped to
* request from TX ring18 when dual tx fifo for host event packet
* WRR_REQ4_ARB_GBF[14..12] - (RW) WRR REQ#4 priority level, mapped to
* request from TX ring19 when dual tx fifo for host event packet
* RESERVED[31..15] - (RW) Reserved
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ4_ARB_GBF_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ4_ARB_GBF_MASK         \
	0x00007000 /* WRR_REQ4_ARB_GBF[14..12] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ4_ARB_GBF_SHFT 12
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ3_ARB_GBF_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ3_ARB_GBF_MASK         \
	0x00000E00 /* WRR_REQ3_ARB_GBF[11..9] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ3_ARB_GBF_SHFT 9
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ2_ARB_GBF_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ2_ARB_GBF_MASK         \
	0x000001C0 /* WRR_REQ2_ARB_GBF[8..6] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ2_ARB_GBF_SHFT 6
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ1_ARB_GBF_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ1_ARB_GBF_MASK         \
	0x00000038 /* WRR_REQ1_ARB_GBF[5..3] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ1_ARB_GBF_SHFT 3
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ0_ARB_GBF_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ0_ARB_GBF_MASK         \
	0x00000007 /* WRR_REQ0_ARB_GBF[2..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_WRR_ARB_GBF0_WRR_REQ0_ARB_GBF_SHFT 0

/*
* ---MD_INT_STA (0x18024000 + 0x250)---
* MCU2MD_SW_INT_STS[15..0] - (W1C) MCU to MD S/W interrupt indicator
* CONN_HIF_ON_MD_INT_STS[16] - (RO) MD driver own interrupt indicator
* RESERVED17[31..17] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_CONN_HIF_ON_MD_INT_STS_ADDR              \
	WF_WFDMA_HOST_DMA0_MD_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_CONN_HIF_ON_MD_INT_STS_MASK              \
	0x00010000 /* CONN_HIF_ON_MD_INT_STS[16] */
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_CONN_HIF_ON_MD_INT_STS_SHFT 16
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_MCU2MD_SW_INT_STS_ADDR                   \
	WF_WFDMA_HOST_DMA0_MD_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_MCU2MD_SW_INT_STS_MASK                   \
	0x0000FFFF /* MCU2MD_SW_INT_STS[15..0] */
#define WF_WFDMA_HOST_DMA0_MD_INT_STA_MCU2MD_SW_INT_STS_SHFT 0

/*
* ---MD_INT_ENA (0x18024000 + 0x254)---
* MCU2MD_SW_INT_ENA[15..0] - (RW) MCU to MD S/W interrupt enable
* CONN_HIF_ON_MD_INT_ENA[16] - (RW) MD driver own interrupt enable
* RESERVED17[31..17] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_CONN_HIF_ON_MD_INT_ENA_ADDR              \
	WF_WFDMA_HOST_DMA0_MD_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_CONN_HIF_ON_MD_INT_ENA_MASK              \
	0x00010000 /* CONN_HIF_ON_MD_INT_ENA[16] */
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_CONN_HIF_ON_MD_INT_ENA_SHFT 16
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_MCU2MD_SW_INT_ENA_ADDR                   \
	WF_WFDMA_HOST_DMA0_MD_INT_ENA_ADDR
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_MCU2MD_SW_INT_ENA_MASK                   \
	0x0000FFFF /* MCU2MD_SW_INT_ENA[15..0] */
#define WF_WFDMA_HOST_DMA0_MD_INT_ENA_MCU2MD_SW_INT_ENA_SHFT 0

/*
* ---MCU2MD_SW_INT_SET (0x18024000 + 0x258)---
* MCU2MD_SW_INT_SET[15..0] - (RO) MCU to MD S/W interrupt set
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_MCU2MD_SW_INT_SET_MCU2MD_SW_INT_SET_ADDR            \
	WF_WFDMA_HOST_DMA0_MCU2MD_SW_INT_SET_ADDR
#define WF_WFDMA_HOST_DMA0_MCU2MD_SW_INT_SET_MCU2MD_SW_INT_SET_MASK            \
	0x0000FFFF /* MCU2MD_SW_INT_SET[15..0] */
#define WF_WFDMA_HOST_DMA0_MCU2MD_SW_INT_SET_MCU2MD_SW_INT_SET_SHFT 0

/*
* ---WPDMA_PAUSE_RX_Q_TH10 (0x18024000 + 0x260)---
* RX_DMAD_TH0[11..0] - (RW) RX Ring0 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_0>
* RESERVED12[15..12] - (RO) Reserved bits
* RX_DMAD_TH1[27..16] - (RW) RX Ring1 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_1>
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH1_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH1_MASK              \
	0x0FFF0000 /* RX_DMAD_TH1[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH1_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH0_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH0_MASK              \
	0x00000FFF /* RX_DMAD_TH0[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH10_RX_DMAD_TH0_SHFT 0

/*
* ---WPDMA_PAUSE_RX_Q_TH32 (0x18024000 + 0x264)---
* RX_DMAD_TH2[11..0] - (RW) RX Ring2 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_2>
* RESERVED12[15..12] - (RO) Reserved bits
* RX_DMAD_TH3[27..16] - (RW) RX Ring3 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_3>
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH3_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH3_MASK              \
	0x0FFF0000 /* RX_DMAD_TH3[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH3_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH2_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH2_MASK              \
	0x00000FFF /* RX_DMAD_TH2[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH32_RX_DMAD_TH2_SHFT 0

/*
* ---WPDMA_PAUSE_RX_Q_TH54 (0x18024000 + 0x268)---
* RX_DMAD_TH4[11..0] - (RW) RX Ring4 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_4>
* RESERVED12[15..12] - (RO) Reserved bits
* RX_DMAD_TH5[27..16] - (RW) RX Ring5 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_5>
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH5_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH5_MASK              \
	0x0FFF0000 /* RX_DMAD_TH5[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH5_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH4_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH4_MASK              \
	0x00000FFF /* RX_DMAD_TH4[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH54_RX_DMAD_TH4_SHFT 0

/*
* ---WPDMA_PAUSE_RX_Q_TH76 (0x18024000 + 0x26C)---
* RX_DMAD_TH6[11..0] - (RW) RX Ring6 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_6>
* RESERVED12[15..12] - (RO) Reserved bits
* RX_DMAD_TH7[27..16] - (RW) RX Ring7 DMAD threshold to pause PP
* sending packet to RX FIFO
* pause_rx_q = (available RX DMAD counts) <
<RX_DMAD_TH_7>
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH7_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH7_MASK              \
	0x0FFF0000 /* RX_DMAD_TH7[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH7_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH6_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH6_MASK              \
	0x00000FFF /* RX_DMAD_TH6[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PAUSE_RX_Q_TH76_RX_DMAD_TH6_SHFT 0

/*
* ---WPDMA_RST_DRX_PTR (0x18024000 + 0x280)---
* RST_DRX_IDX0[0] - (WO) Write 1 to reset to RX_DMARX_IDX0 to 0
* RST_DRX_IDX1[1] - (WO) Write 1 to reset to RX_DMARX_IDX1 to 0
* RST_DRX_IDX2[2] - (WO) Write 1 to reset to RX_DMARX_IDX2 to 0
* RST_DRX_IDX3[3] - (WO) Write 1 to reset to RX_DMARX_IDX3 to 0
* RESERVED[31..4] - (WO) Reserved
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX3_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX3_MASK                 \
	0x00000008 /* RST_DRX_IDX3[3] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX3_SHFT 3
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX2_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX2_MASK                 \
	0x00000004 /* RST_DRX_IDX2[2] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX2_SHFT 2
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX1_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX1_MASK                 \
	0x00000002 /* RST_DRX_IDX1[1] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX1_SHFT 1
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX0_ADDR                 \
	WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX0_MASK                 \
	0x00000001 /* RST_DRX_IDX0[0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DRX_PTR_RST_DRX_IDX0_SHFT 0

/*
* ---WPDMA_INFO (0x18024000 + 0x284)---
* TX_RING_NUMBER[7..0] - (RO) TX_RING_NUMBER
* RX_RING_NUMBER[15..8] - (RO) RX_RING_NUMBER
* BASE_PTR_WIDTH[23..16] - (RO) {2'h0, 6'd32-'BASE_PTR_WIDTH[5:0]}
* INDEX_WIDTH[27..24] - (RO) RING_INDEX_WIDTH
* PDMA_PREFETCH_SRAM_SIZE[30..28] - (RO) PDMA prefetch sram size{3'h0 : 128
* byte, 3'h1 : 256 byte, 3'h2 : 512 byte, 3'h3 : 1KB, 3'h4 : 2KB, 3'h5 : 4KB,
* 3'h6 : 8KB, 3'h7 : reserved}, be noticed that prefetch sram is shared outside
* with other DMAs, please check all DMAs' total prefetch ring number and max_cnt
* for each prefetch ring to make sure that total size of all configured prefetch
* dmad of all DMAs' prefetch ring should be less than PDMA_PREFETCH_SRAM_SIZE
* WFDMA_PDA_EXIST[31] - (RO) Only cpu_dma1 will support pda functions
* for firmware download and wfdma_pda_top resides in between cpu_dma0 and
cpu_dma1!
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_WFDMA_PDA_EXIST_ADDR                     \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_WFDMA_PDA_EXIST_MASK                     \
	0x80000000 /* WFDMA_PDA_EXIST[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_WFDMA_PDA_EXIST_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_PDMA_PREFETCH_SRAM_SIZE_ADDR             \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_PDMA_PREFETCH_SRAM_SIZE_MASK             \
	0x70000000 /* PDMA_PREFETCH_SRAM_SIZE[30..28] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_PDMA_PREFETCH_SRAM_SIZE_SHFT 28
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_INDEX_WIDTH_ADDR                         \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_INDEX_WIDTH_MASK                         \
	0x0F000000 /* INDEX_WIDTH[27..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_INDEX_WIDTH_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_BASE_PTR_WIDTH_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_BASE_PTR_WIDTH_MASK                      \
	0x00FF0000 /* BASE_PTR_WIDTH[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_BASE_PTR_WIDTH_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_RX_RING_NUMBER_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_RX_RING_NUMBER_MASK                      \
	0x0000FF00 /* RX_RING_NUMBER[15..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_RX_RING_NUMBER_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_TX_RING_NUMBER_ADDR                      \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_TX_RING_NUMBER_MASK                      \
	0x000000FF /* TX_RING_NUMBER[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_TX_RING_NUMBER_SHFT 0

/*
* ---WPDMA_INFO_EXT (0x18024000 + 0x288)---
* TX_EVENT_RING_NUMBER[7..0] - (RO) When TX_EVENT_RING_NUMBER equal 8'h0, it
* means that this DMA doesn't support dual TX fifo, thus in default it only
* support TX_RING_NUMBER of TX rings !!
* But when TX_EVENT_RING_NUMBER NOT equal
* 8'h0, this dma is configured as dual TX fifo and
* TX_RING[16+TX_EVENT_RING_NUM-1:16] are for getting HOST EVENT packet from HOST
* to WX_CPU!!
* TX_DMAD_RING_NUMBER[15..8] - (RO) When TX_EVENT_RING_NUMBER not equal to
* 8'h0, it means that this DMA support dual TX fifo and TX
* ring[TX_DMAD_RING_NUMBER-1:0] are for getting TXD from HOST to UMAC!!
* RESERVED[30..16] - (RO) Reserved
* TX_DMASHDL_EXIST[31] - (RO) TX_DMASHDL_EXIST
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMASHDL_EXIST_ADDR                \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMASHDL_EXIST_MASK                \
	0x80000000 /* TX_DMASHDL_EXIST[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMASHDL_EXIST_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMAD_RING_NUMBER_ADDR             \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMAD_RING_NUMBER_MASK             \
	0x0000FF00 /* TX_DMAD_RING_NUMBER[15..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_DMAD_RING_NUMBER_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_EVENT_RING_NUMBER_ADDR            \
	WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_EVENT_RING_NUMBER_MASK            \
	0x000000FF /* TX_EVENT_RING_NUMBER[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_INFO_EXT_TX_EVENT_RING_NUMBER_SHFT 0

/*
* ---WPDMA_INT_RX_PRI_SEL (0x18024000 + 0x298)---
* WPDMA_INT_RX_RING0_PRI_SEL[0] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING1_PRI_SEL[1] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING2_PRI_SEL[2] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING3_PRI_SEL[3] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING4_PRI_SEL[4] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING5_PRI_SEL[5] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING6_PRI_SEL[6] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* WPDMA_INT_RX_RING7_PRI_SEL[7] - (RW) write 1 to enable corresponding ring to
* be priority-selected interrupt for MSI message[6:0] and CIRQ[45:38], write
* 1'b0 to disable and combine it into legacy interrupt
* RESERVED8[31..8] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING7_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING7_PRI_SEL_MASK \
	\
	0x00000080 /* WPDMA_INT_RX_RING7_PRI_SEL[7] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING7_PRI_SEL_SHFT \
	\
	7
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING6_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING6_PRI_SEL_MASK \
	\
	0x00000040 /* WPDMA_INT_RX_RING6_PRI_SEL[6] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING6_PRI_SEL_SHFT \
	\
	6
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING5_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING5_PRI_SEL_MASK \
	\
	0x00000020 /* WPDMA_INT_RX_RING5_PRI_SEL[5] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING5_PRI_SEL_SHFT \
	\
	5
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING4_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING4_PRI_SEL_MASK \
	\
	0x00000010 /* WPDMA_INT_RX_RING4_PRI_SEL[4] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING4_PRI_SEL_SHFT \
	\
	4
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING3_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING3_PRI_SEL_MASK \
	\
	0x00000008 /* WPDMA_INT_RX_RING3_PRI_SEL[3] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING3_PRI_SEL_SHFT \
	\
	3
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING2_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING2_PRI_SEL_MASK \
	\
	0x00000004 /* WPDMA_INT_RX_RING2_PRI_SEL[2] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING2_PRI_SEL_SHFT \
	\
	2
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING1_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING1_PRI_SEL_MASK \
	\
	0x00000002 /* WPDMA_INT_RX_RING1_PRI_SEL[1] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING1_PRI_SEL_SHFT \
	\
	1
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING0_PRI_SEL_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING0_PRI_SEL_MASK \
	\
	0x00000001 /* WPDMA_INT_RX_RING0_PRI_SEL[0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_INT_RX_PRI_SEL_WPDMA_INT_RX_RING0_PRI_SEL_SHFT \
	\
	0

/*
* ---WPDMA_TX_DBG0 (0x18024000 + 0x2A0)---
* WPDMA_TX_DBG0[31..0] - (RO) xxx
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG0_WPDMA_TX_DBG0_ADDR                    \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG0_WPDMA_TX_DBG0_MASK                    \
	0xFFFFFFFF /* WPDMA_TX_DBG0[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG0_WPDMA_TX_DBG0_SHFT 0

/*
* ---WPDMA_TX_DBG1 (0x18024000 + 0x2A4)---
* WPDMA_TX_DBG1[31..0] - (RO) xxx
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG1_WPDMA_TX_DBG1_ADDR                    \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG1_WPDMA_TX_DBG1_MASK                    \
	0xFFFFFFFF /* WPDMA_TX_DBG1[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_DBG1_WPDMA_TX_DBG1_SHFT 0

/*
* ---WPDMA_RX_DBG0 (0x18024000 + 0x2A8)---
* WPDMA_RX_DBG0[31..0] - (RO) xxx
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG0_WPDMA_RX_DBG0_ADDR                    \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG0_WPDMA_RX_DBG0_MASK                    \
	0xFFFFFFFF /* WPDMA_RX_DBG0[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG0_WPDMA_RX_DBG0_SHFT 0

/*
* ---WPDMA_RX_DBG1 (0x18024000 + 0x2AC)---
* WPDMA_RX_DBG1[31..0] - (RO) xxx
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG1_WPDMA_RX_DBG1_ADDR                    \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG1_WPDMA_RX_DBG1_MASK                    \
	0xFFFFFFFF /* WPDMA_RX_DBG1[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_DBG1_WPDMA_RX_DBG1_SHFT 0

/*
* ---WPDMA_GLO_CFG_EXT0 (0x18024000 + 0x2B0)---
* CSR_MAX_PREFETCH_CNT[1..0] - (RW) Max. dmad count per prefet request,
* 2'b00 : 1 entry, 2'b01 : 2 entries, 2'b10 : 4 entries, 2'b11 : 8 entries, Note
* : 1 entry(dmad size) is 16 bytes = 4 DWs = 2 QWs
* CSR_MEM_BST_SIZE[3..2] - (RW) Max. burst size per sram request. 00 :
* 16-byte, 01 : 32-byte, 10 : 64-byte, 11 : 128-byte
* CSR_MEM_ARB_LOCK_EN[4] - (RW) 1'b1 : Lock round-robin sram access
* arbiter until whole long burst request from dma FSM finish, 1'b0 : no lock
sram
* arbiter, grant will be change per request due to round-robin
* CSR_RX_DMA_WBQ_EN[5] - (RW) 1'b1 : RX dmad will be posted-write and
* deal with next received packet immediately, 1'b0 : RX dmad will be written
back
* immediately after received packet has been sent to host memory
* CSR_TX_DMASHDL_ENABLE[6] - (RW) 1'b1 : request DMASHDL before TX to
* select next TX ring, 1'b0 : disable DMASHDL and use round-robin arbiter to
* select next TX ring
* CSR_BRESP_ERROR_BYPASS_EN[7] - (RW) 1'b1 : Bypass AXI error bresp as a
* normal response. 1'b0 : Will not assert bready to error bresp(00 : OKAY, 01 :
* EXOKAY, 10 : SLVERR, 11 : DECERR)
* CSR_AXI_SLEEP_MODE[9..8] - (RW) 2'b00 : no sleep, normal TX/RX, 2b1* :
* sleep after AXI request, 2'b11 : force assertion of wvalid, rready and bready
* to finish all committed data phases, then sleep immediately
* RESERVED10[14..10] - (RO) Reserved bits
* CSR_Q_STATUS_IDX_BKRS_EN[15] - (RW) backup/restore enable bit for
* q_status(payload, prefetch and dispatch) index
* CSR_AXI_BST_SIZE[17..16] - (RW) AXI busrt length, 00 : 128-byte, 01 :
* 64-byte, 10 : 32-byte, 11 : 16-byte
* RESERVED18[18] - (RO) Reserved bits
* CSR_AXI_FAKE[19] - (RW) If set to 1'b1, all requests from DMA
* engine will not be sent to AXI INFRA, this try to fix AXI bus hang issue
temporarily!
* CSR_DMAD_PREFETCH_THRESHOLD[21..20] - (RW) trigger dmad prefetch when
* available dmad cnt >= {1(2'b00), 2(2'b01), 4(2'b10), 8(2'b11)}
* CSR_BID_CHECK_BYPASS_EN[22] - (RW) If set to 1'b0, axi master will check
* matching between awid and bid before assert bready, if set to 1'b1, it will
* bypass this checking and assert bready for each bvalid even though bid doesn't
* match any awid ever issued!
* CSR_RX_INFO_WB_EN[23] - (RW) If set to 1'b0, only DW0 and DW1 will be
* written back into memory after received RX packet process finished, this will
* save bus bandwidth a little because DW2 and DW3 are useless for FW
* CSR_AXI_OUTSTANDING_NUM[27..24] - (RW) decide max. outstanding AXI requests,
* common for AXI read or write!
* CSR_AXI_ARUSER_LOCK_EN[28] - (RW) on/off customized lock ctrl design thru
* AXI aruser signal, this will influence TX QoS ctrl
* CSR_AXI_AWUSER_LOCK_EN[29] - (RW) on/off customized lock ctrl design thru AXI
* awuser signal when RX dmad write-back have to be separately written into
* memory due to external dispatcher exists!
* CSR_AXI_LOCK_EN[30] - (RW) Global lock enable to on/off AXI spec. lock(axlock)
* behavior and also will on/off customized lock ctrl design thru AXI awuser
signal
* CSR_AXI_CLKGATE_BYP[31] - (RW) To bypass functional CG enable which
* incduced from coding style for DC inserted CG cell in all AXI read/write
master
* design module
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_CLKGATE_BYP_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_CLKGATE_BYP_MASK         \
	0x80000000 /* CSR_AXI_CLKGATE_BYP[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_CLKGATE_BYP_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_LOCK_EN_ADDR             \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_LOCK_EN_MASK             \
	0x40000000 /* CSR_AXI_LOCK_EN[30] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_LOCK_EN_SHFT 30
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_AWUSER_LOCK_EN_ADDR      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_AWUSER_LOCK_EN_MASK      \
	0x20000000 /* CSR_AXI_AWUSER_LOCK_EN[29] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_AWUSER_LOCK_EN_SHFT 29
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_ARUSER_LOCK_EN_ADDR      \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_ARUSER_LOCK_EN_MASK      \
	0x10000000 /* CSR_AXI_ARUSER_LOCK_EN[28] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_ARUSER_LOCK_EN_SHFT 28
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_OUTSTANDING_NUM_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_OUTSTANDING_NUM_MASK     \
	0x0F000000 /* CSR_AXI_OUTSTANDING_NUM[27..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_OUTSTANDING_NUM_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_INFO_WB_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_INFO_WB_EN_MASK           \
	0x00800000 /* CSR_RX_INFO_WB_EN[23] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_INFO_WB_EN_SHFT 23
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BID_CHECK_BYPASS_EN_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BID_CHECK_BYPASS_EN_MASK     \
	0x00400000 /* CSR_BID_CHECK_BYPASS_EN[22] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BID_CHECK_BYPASS_EN_SHFT 22
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_DMAD_PREFETCH_THRESHOLD_ADDR \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_DMAD_PREFETCH_THRESHOLD_MASK \
	0x00300000 /* CSR_DMAD_PREFETCH_THRESHOLD[21..20] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_DMAD_PREFETCH_THRESHOLD_SHFT \
	20
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_FAKE_ADDR                \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_FAKE_MASK                \
	0x00080000 /* CSR_AXI_FAKE[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_FAKE_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_BST_SIZE_ADDR            \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_BST_SIZE_MASK            \
	0x00030000 /* CSR_AXI_BST_SIZE[17..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_BST_SIZE_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_Q_STATUS_IDX_BKRS_EN_ADDR    \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_Q_STATUS_IDX_BKRS_EN_MASK    \
	0x00008000 /* CSR_Q_STATUS_IDX_BKRS_EN[15] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_Q_STATUS_IDX_BKRS_EN_SHFT 15
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_SLEEP_MODE_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_SLEEP_MODE_MASK          \
	0x00000300 /* CSR_AXI_SLEEP_MODE[9..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_AXI_SLEEP_MODE_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BRESP_ERROR_BYPASS_EN_ADDR   \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BRESP_ERROR_BYPASS_EN_MASK   \
	0x00000080 /* CSR_BRESP_ERROR_BYPASS_EN[7] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_BRESP_ERROR_BYPASS_EN_SHFT 7
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_TX_DMASHDL_ENABLE_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_TX_DMASHDL_ENABLE_MASK       \
	0x00000040 /* CSR_TX_DMASHDL_ENABLE[6] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_TX_DMASHDL_ENABLE_SHFT 6
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_DMA_WBQ_EN_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_DMA_WBQ_EN_MASK           \
	0x00000020 /* CSR_RX_DMA_WBQ_EN[5] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_RX_DMA_WBQ_EN_SHFT 5
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_ARB_LOCK_EN_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_ARB_LOCK_EN_MASK         \
	0x00000010 /* CSR_MEM_ARB_LOCK_EN[4] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_ARB_LOCK_EN_SHFT 4
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_BST_SIZE_ADDR            \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_BST_SIZE_MASK            \
	0x0000000C /* CSR_MEM_BST_SIZE[3..2] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MEM_BST_SIZE_SHFT 2
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MAX_PREFETCH_CNT_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MAX_PREFETCH_CNT_MASK        \
	0x00000003 /* CSR_MAX_PREFETCH_CNT[1..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT0_CSR_MAX_PREFETCH_CNT_SHFT 0

/*
* ---WPDMA_GLO_CFG_EXT1 (0x18024000 + 0x2B4)---
* CSR_TXFIFO0_RDY_THRESHOLD[7..0] - (RW) xxx
* CSR_TXFIFO1_RDY_THRESHOLD[15..8] - (RW) xxx
* CSR_TX_DISP_ARB_SCHEDULED_ACCESS_TIMER[23..16] - (RW) timer setting for
* SCHEDULED_ACCESS_TIME_ARB of csr_tx_disp_arb_mode
* CSR_TX_DISP_ARB_MODE[25..24] - (RW) 00 : FAIR_ARB, 01 : FIX_ARB, 10 :
* UNBALANCED_ARB, 11 : SCHEDULED_ACCESS_TIME_ARB
* CSR_FWDL_FLOW_CTRL_BYASS_EN[26] - (RW) To disable firmware download TX flow
* control of TX dma(host_dma1) when firmare download of RX dma(mcu_dma1) is in
* firmware download polling mode!! Remember to set to 1'b0 when firmware
download
* ring is set back to normal ring usage which should be in flow control for
* correct behavior!!
* CSR_FWDL_FLOW_CTRL_BYASS_LS_QSEL_EN[27] - (RW) select firmware download TX
* ring(LSB/MSB ring) to bypass TX flow control when firmare download RX
* ring(LSB/MSB ring) of RX dma(mcu_dma1) is in firmware download polling mode!!
* RESERVED[31..28] - (RW) reserved
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_LS_QSEL_EN_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_LS_QSEL_EN_MASK \
	\
	0x08000000 /* CSR_FWDL_FLOW_CTRL_BYASS_LS_QSEL_EN[27] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_LS_QSEL_EN_SHFT \
	\
	27
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_EN_ADDR \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_EN_MASK \
	0x04000000 /* CSR_FWDL_FLOW_CTRL_BYASS_EN[26] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_FWDL_FLOW_CTRL_BYASS_EN_SHFT \
	26
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_MODE_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_MODE_MASK        \
	0x03000000 /* CSR_TX_DISP_ARB_MODE[25..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_MODE_SHFT 24
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_SCHEDULED_ACCESS_TIMER_AD\
DR \
\
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_SCHEDULED_ACCESS_TIMER_MA\
SK \
\
	0x00FF0000 /* CSR_TX_DISP_ARB_SCHEDULED_ACCESS_TIMER[23..16] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TX_DISP_ARB_SCHEDULED_ACCESS_TIMER_SH\
FT \
\
	16
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO1_RDY_THRESHOLD_ADDR   \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO1_RDY_THRESHOLD_MASK   \
	0x0000FF00 /* CSR_TXFIFO1_RDY_THRESHOLD[15..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO1_RDY_THRESHOLD_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO0_RDY_THRESHOLD_ADDR   \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO0_RDY_THRESHOLD_MASK   \
	0x000000FF /* CSR_TXFIFO0_RDY_THRESHOLD[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_EXT1_CSR_TXFIFO0_RDY_THRESHOLD_SHFT 0

/*
* ---WPDMA_TX_QOS_LMT_CFG0 (0x18024000 + 0x2C0)---
* CSR_TX_PLD_0_AXI_LIMITER_REQ[2..0] - (RW) QoS CR, Limiter Enable for packet
* traffice of type TX_PLD_0
* CSR_TX_PLD_0_AXI_LIMITER_EN_REQ[3] - (RW) QoS CR, Limiter Enable for packet
* traffice of type TX_PLD_0
* CSR_TX_PLD_0_AXI_LIMITER_PKT[6..4] - (RW) QoS CR, Limiter Enable for packet
* traffice of type TX_PLD_0
* CSR_TX_PLD_0_AXI_LIMITER_EN_PKT[7] - (RW) QoS CR, Limiter Enable for packet
* traffice of type TX_PLD_0
* CSR_TX_PLD_1_PLD_AXI_LIMITER_REQ[10..8] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_PLD_1_PLD
* CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_REQ[11] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_PLD_1_PLD
* CSR_TX_PLD_1_PLD_AXI_LIMITER_PKT[14..12] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_PLD_1_PLD
* CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_PKT[15] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_PLD_1_PLD
* CSR_RX_PLD_AXI_LIMITER_REQ[18..16] - (RW) QoS CR, Limiter Enable for request
* traffice of type RX_PLD
* CSR_RX_PLD_AXI_LIMITER_EN_REQ[19] - (RW) QoS CR, Limiter Enable for request
* traffice of type RX_PLD
* CSR_RX_PLD_AXI_LIMITER_PKT[22..20] - (RW) QoS CR, Limiter Enable for request
* traffice of type RX_PLD
* CSR_RX_PLD_AXI_LIMITER_EN_PKT[23] - (RW) QoS CR, Limiter Enable for request
* traffice of type RX_PLD
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_PKT_MASK \
	\
	0x00800000 /* CSR_RX_PLD_AXI_LIMITER_EN_PKT[23] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_PKT_SHFT \
	\
	23
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_PKT_MASK \
	\
	0x00700000 /* CSR_RX_PLD_AXI_LIMITER_PKT[22..20] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_PKT_SHFT \
	\
	20
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_REQ_MASK \
	\
	0x00080000 /* CSR_RX_PLD_AXI_LIMITER_EN_REQ[19] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_EN_REQ_SHFT \
	\
	19
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_REQ_MASK \
	\
	0x00070000 /* CSR_RX_PLD_AXI_LIMITER_REQ[18..16] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_RX_PLD_AXI_LIMITER_REQ_SHFT \
	\
	16
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_PKT_AD\
DR \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_PKT_MA\
SK \
\
	0x00008000 /* CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_PKT[15] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_PKT_SH\
FT \
\
	15
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_PKT_MASK \
	\
	0x00007000 /* CSR_TX_PLD_1_PLD_AXI_LIMITER_PKT[14..12] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_PKT_SHFT \
	\
	12
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_REQ_AD\
DR \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_REQ_MA\
SK \
\
	0x00000800 /* CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_REQ[11] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_EN_REQ_SH\
FT \
\
	11
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_REQ_MASK \
	\
	0x00000700 /* CSR_TX_PLD_1_PLD_AXI_LIMITER_REQ[10..8] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_1_PLD_AXI_LIMITER_REQ_SHFT \
	\
	8
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_PKT_MASK \
	\
	0x00000080 /* CSR_TX_PLD_0_AXI_LIMITER_EN_PKT[7] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_PKT_SHFT \
	\
	7
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_PKT_MASK \
	\
	0x00000070 /* CSR_TX_PLD_0_AXI_LIMITER_PKT[6..4] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_PKT_SHFT \
	\
	4
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_REQ_MASK \
	\
	0x00000008 /* CSR_TX_PLD_0_AXI_LIMITER_EN_REQ[3] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_EN_REQ_SHFT \
	\
	3
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_REQ_MASK \
	\
	0x00000007 /* CSR_TX_PLD_0_AXI_LIMITER_REQ[2..0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG0_CSR_TX_PLD_0_AXI_LIMITER_REQ_SHFT \
	\
	0

/*
* ---WPDMA_TX_QOS_LMT_CFG1 (0x18024000 + 0x2C4)---
* CSR_AUX_TX_PLD_0_AXI_LIMITER_REQ[2..0] - (RW) QoS CR, Limiter value selected
* by PP dynamically
* RESERVED3[3] - (RO) Reserved bits
* CSR_AUX_TX_PLD_0_AXI_LIMITER_PKT[6..4] - (RW) QoS CR, Limiter value selected
* by PP dynamically
* RESERVED7[7] - (RO) Reserved bits
* CSR_AUX_TX_PLD_1_AXI_LIMITER_REQ[10..8] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED11[11] - (RO) Reserved bits
* CSR_AUX_TX_PLD_1_AXI_LIMITER_PKT[14..12] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED15[15] - (RO) Reserved bits
* CSR_AUX_RX_PLD_AXI_LIMITER_REQ[18..16] - (RW) QoS CR, Limiter value selected
* by PP dynamically
* RESERVED19[19] - (RO) Reserved bits
* CSR_AUX_RX_PLD_AXI_LIMITER_PKT[22..20] - (RW) QoS CR, Limiter value selected
* by PP dynamically
* RESERVED23[31..23] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_PKT_MASK \
	\
	0x00700000 /* CSR_AUX_RX_PLD_AXI_LIMITER_PKT[22..20] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_PKT_SHFT \
	\
	20
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_REQ_MASK \
	\
	0x00070000 /* CSR_AUX_RX_PLD_AXI_LIMITER_REQ[18..16] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_RX_PLD_AXI_LIMITER_REQ_SHFT \
	\
	16
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_PKT_MASK \
	\
	0x00007000 /* CSR_AUX_TX_PLD_1_AXI_LIMITER_PKT[14..12] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_PKT_SHFT \
	\
	12
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_REQ_MASK \
	\
	0x00000700 /* CSR_AUX_TX_PLD_1_AXI_LIMITER_REQ[10..8] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_1_AXI_LIMITER_REQ_SHFT \
	\
	8
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_PKT_MASK \
	\
	0x00000070 /* CSR_AUX_TX_PLD_0_AXI_LIMITER_PKT[6..4] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_PKT_SHFT \
	\
	4
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_REQ_MASK \
	\
	0x00000007 /* CSR_AUX_TX_PLD_0_AXI_LIMITER_REQ[2..0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG1_CSR_AUX_TX_PLD_0_AXI_LIMITER_REQ_SHFT \
	\
	0

/*
* ---WPDMA_TX_QOS_LMT_CFG2 (0x18024000 + 0x2C8)---
* CSR_RX_RD_DMAD_AXI_LIMITER_REQ[2..0] - (RW) QoS CR, Limiter Value for
* packet traffice of type RX_RD_DMAD
* CSR_RX_RD_DMAD_AXI_LIMITER_EN_REQ[3] - (RW) QoS CR, Limiter Enable for
* request traffice of type RX_RD_DMAD
* CSR_RX_RD_DMAD_AXI_LIMITER_PKT[6..4] - (RW) QoS CR, Limiter Value for
* packet traffice of type RX_RD_DMAD
* CSR_RX_RD_DMAD_AXI_LIMITER_EN_PKT[7] - (RW) QoS CR, Limiter Enable for
* packet traffice of type RX_RD_DMAD
* CSR_RX_WR_DMAD_AXI_LIMITER_REQ[10..8] - (RW) QoS CR, Limiter Value for
* packet traffice of type RX_WR_DMAD
* CSR_RX_WR_DMAD_AXI_LIMITER_EN_REQ[11] - (RW) QoS CR, Limiter Enable for
* request traffice of type RX_WR_DMAD
* CSR_RX_WR_DMAD_AXI_LIMITER_PKT[14..12] - (RW) QoS CR, Limiter Value for
* packet traffice of type RX_WR_DMAD
* CSR_RX_WR_DMAD_AXI_LIMITER_EN_PKT[15] - (RW) QoS CR, Limiter Enable for
* packet traffice of type RX_WR_DMAD
* CSR_TX_RD_DMAD_AXI_LIMITER_REQ[18..16] - (RW) QoS CR, Limiter Value for
* packet traffice of type TX_RD_DMAD
* CSR_TX_RD_DMAD_AXI_LIMITER_EN_REQ[19] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_RD_DMAD
* CSR_TX_RD_DMAD_AXI_LIMITER_PKT[22..20] - (RW) QoS CR, Limiter Value for
* packet traffice of type TX_RD_DMAD
* CSR_TX_RD_DMAD_AXI_LIMITER_EN_PKT[23] - (RW) QoS CR, Limiter Enable for
* packet traffice of type TX_RD_DMAD
* CSR_TX_WR_DMAD_AXI_LIMITER_REQ[26..24] - (RW) QoS CR, Limiter Value for
* packet traffice of type TX_WR_DMAD
* CSR_TX_WR_DMAD_AXI_LIMITER_EN_REQ[27] - (RW) QoS CR, Limiter Enable for
* request traffice of type TX_WR_DMAD
* CSR_TX_WR_DMAD_AXI_LIMITER_PKT[30..28] - (RW) QoS CR, Limiter Value for
* packet traffice of type TX_WR_DMAD
* CSR_TX_WR_DMAD_AXI_LIMITER_EN_PKT[31] - (RW) QoS CR, Limiter Enable for
* packet traffice of type TX_WR_DMAD
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_PKT_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_PKT_MASK\
\
	0x80000000 /* CSR_TX_WR_DMAD_AXI_LIMITER_EN_PKT[31] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_PKT_SHFT\
\
	31
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_PKT_MASK \
	\
	0x70000000 /* CSR_TX_WR_DMAD_AXI_LIMITER_PKT[30..28] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_PKT_SHFT \
	\
	28
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_REQ_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_REQ_MASK\
\
	0x08000000 /* CSR_TX_WR_DMAD_AXI_LIMITER_EN_REQ[27] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_EN_REQ_SHFT\
\
	27
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_REQ_MASK \
	\
	0x07000000 /* CSR_TX_WR_DMAD_AXI_LIMITER_REQ[26..24] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_WR_DMAD_AXI_LIMITER_REQ_SHFT \
	\
	24
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_PKT_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_PKT_MASK\
\
	0x00800000 /* CSR_TX_RD_DMAD_AXI_LIMITER_EN_PKT[23] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_PKT_SHFT\
\
	23
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_PKT_MASK \
	\
	0x00700000 /* CSR_TX_RD_DMAD_AXI_LIMITER_PKT[22..20] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_PKT_SHFT \
	\
	20
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_REQ_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_REQ_MASK\
\
	0x00080000 /* CSR_TX_RD_DMAD_AXI_LIMITER_EN_REQ[19] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_EN_REQ_SHFT\
\
	19
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_REQ_MASK \
	\
	0x00070000 /* CSR_TX_RD_DMAD_AXI_LIMITER_REQ[18..16] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_TX_RD_DMAD_AXI_LIMITER_REQ_SHFT \
	\
	16
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_PKT_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_PKT_MASK\
\
	0x00008000 /* CSR_RX_WR_DMAD_AXI_LIMITER_EN_PKT[15] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_PKT_SHFT\
\
	15
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_PKT_MASK \
	\
	0x00007000 /* CSR_RX_WR_DMAD_AXI_LIMITER_PKT[14..12] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_PKT_SHFT \
	\
	12
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_REQ_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_REQ_MASK\
\
	0x00000800 /* CSR_RX_WR_DMAD_AXI_LIMITER_EN_REQ[11] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_EN_REQ_SHFT\
\
	11
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_REQ_MASK \
	\
	0x00000700 /* CSR_RX_WR_DMAD_AXI_LIMITER_REQ[10..8] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_WR_DMAD_AXI_LIMITER_REQ_SHFT \
	\
	8
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_PKT_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_PKT_MASK\
\
	0x00000080 /* CSR_RX_RD_DMAD_AXI_LIMITER_EN_PKT[7] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_PKT_SHFT\
\
	7
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_PKT_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_PKT_MASK \
	\
	0x00000070 /* CSR_RX_RD_DMAD_AXI_LIMITER_PKT[6..4] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_PKT_SHFT \
	\
	4
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_REQ_ADDR\
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_REQ_MASK\
\
	0x00000008 /* CSR_RX_RD_DMAD_AXI_LIMITER_EN_REQ[3] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_EN_REQ_SHFT\
\
	3
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_REQ_ADDR \
	\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_REQ_MASK \
	\
	0x00000007 /* CSR_RX_RD_DMAD_AXI_LIMITER_REQ[2..0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG2_CSR_RX_RD_DMAD_AXI_LIMITER_REQ_SHFT \
	\
	0

/*
* ---WPDMA_TX_QOS_LMT_CFG3 (0x18024000 + 0x2CC)---
* CSR_AUX_RX_RD_DMAD_AXI_LIMITER_REQ[2..0] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED3[3] - (RO) Reserved bits
* CSR_AUX_RX_RD_DMAD_AXI_LIMITER_PKT[6..4] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED7[7] - (RO) Reserved bits
* CSR_AUX_RX_WR_DMAD_AXI_LIMITER_REQ[10..8] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED11[11] - (RO) Reserved bits
* CSR_AUX_RX_WR_DMAD_AXI_LIMITER_PKT[14..12] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED15[15] - (RO) Reserved bits
* CSR_AUX_TX_RD_DMAD_AXI_LIMITER_REQ[18..16] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED19[19] - (RO) Reserved bits
* CSR_AUX_TX_RD_DMAD_AXI_LIMITER_PKT[22..20] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED23[23] - (RO) Reserved bits
* CSR_AUX_TX_WR_DMAD_AXI_LIMITER_REQ[26..24] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED27[27] - (RO) Reserved bits
* CSR_AUX_TX_WR_DMAD_AXI_LIMITER_PKT[30..28] - (RW) QoS CR, Limiter value
* selected by PP dynamically
* RESERVED31[31] - (RO) Reserved bits
*/
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_PKT_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_PKT_MAS\
K \
\
	0x70000000 /* CSR_AUX_TX_WR_DMAD_AXI_LIMITER_PKT[30..28] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_PKT_SHF\
T \
\
	28
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_REQ_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_REQ_MAS\
K \
\
	0x07000000 /* CSR_AUX_TX_WR_DMAD_AXI_LIMITER_REQ[26..24] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_WR_DMAD_AXI_LIMITER_REQ_SHF\
T \
\
	24
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_PKT_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_PKT_MAS\
K \
\
	0x00700000 /* CSR_AUX_TX_RD_DMAD_AXI_LIMITER_PKT[22..20] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_PKT_SHF\
T \
\
	20
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_REQ_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_REQ_MAS\
K \
\
	0x00070000 /* CSR_AUX_TX_RD_DMAD_AXI_LIMITER_REQ[18..16] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_TX_RD_DMAD_AXI_LIMITER_REQ_SHF\
T \
\
	16
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_PKT_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_PKT_MAS\
K \
\
	0x00007000 /* CSR_AUX_RX_WR_DMAD_AXI_LIMITER_PKT[14..12] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_PKT_SHF\
T \
\
	12
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_REQ_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_REQ_MAS\
K \
\
	0x00000700 /* CSR_AUX_RX_WR_DMAD_AXI_LIMITER_REQ[10..8] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_WR_DMAD_AXI_LIMITER_REQ_SHF\
T \
\
	8
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_PKT_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_PKT_MAS\
K \
\
	0x00000070 /* CSR_AUX_RX_RD_DMAD_AXI_LIMITER_PKT[6..4] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_PKT_SHF\
T \
\
	4
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_REQ_ADD\
R \
\
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_ADDR
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_REQ_MAS\
K \
\
	0x00000007 /* CSR_AUX_RX_RD_DMAD_AXI_LIMITER_REQ[2..0] */
#define \
WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_LMT_CFG3_CSR_AUX_RX_RD_DMAD_AXI_LIMITER_REQ_SHF\
T \
\
	0

/*
* ---WPDMA_TX_QOS_QTM_CFG0 (0x18024000 + 0x2D0)---
* CSR_TXP0_FFA_QTM[3..0] - (RW) CSR_TXP0_FFA_QTM
* CSR_TXP0_RSVD_QTM[7..4] - (RW) CSR_TXP0_RSVD_QTM
* CSR_TXP1_FFA_QTM[11..8] - (RW) CSR_TXP1_FFA_QTM
* CSR_TXP1_RSVD_QTM[15..12] - (RW) CSR_TXP1_RSVD_QTM
* RESERVED16[23..16] - (RO) Reserved bits
* CSR_FFA_TOTAL_QTM[27..24] - (RW) CSR_FFA_TOTAL_QTM
* CSR_QOS_QTM_MODE[29..28] - (RW) 2'b01 : csr_rsvd_qtm_mode_only, 2'b10 :
* csr_ffa_qtm_mode_only, others : rsvd+ffa mode
* RESERVED30[31..30] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_QOS_QTM_MODE_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_QOS_QTM_MODE_MASK         \
	0x30000000 /* CSR_QOS_QTM_MODE[29..28] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_QOS_QTM_MODE_SHFT 28
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_FFA_TOTAL_QTM_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_FFA_TOTAL_QTM_MASK        \
	0x0F000000 /* CSR_FFA_TOTAL_QTM[27..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_FFA_TOTAL_QTM_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_RSVD_QTM_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_RSVD_QTM_MASK        \
	0x0000F000 /* CSR_TXP1_RSVD_QTM[15..12] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_RSVD_QTM_SHFT 12
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_FFA_QTM_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_FFA_QTM_MASK         \
	0x00000F00 /* CSR_TXP1_FFA_QTM[11..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP1_FFA_QTM_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_RSVD_QTM_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_RSVD_QTM_MASK        \
	0x000000F0 /* CSR_TXP0_RSVD_QTM[7..4] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_RSVD_QTM_SHFT 4
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_FFA_QTM_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_FFA_QTM_MASK         \
	0x0000000F /* CSR_TXP0_FFA_QTM[3..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG0_CSR_TXP0_FFA_QTM_SHFT 0

/*
* ---WPDMA_TX_QOS_QTM_CFG1 (0x18024000 + 0x2D4)---
* CSR_DMAD_FFA_QTM[3..0] - (RW) CSR_DMAD_FFA_QTM
* CSR_DMAD_RSVD_QTM[7..4] - (RW) CSR_DMAD_RSVD_QTM
* CSR_TXD_FFA_QTM[11..8] - (RW) CSR_TXD_FFA_QTM
* CSR_TXD_RSVD_QTM[15..12] - (RW) CSR_TXD_RSVD_QTM
* RESERVED16[31..16] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_RSVD_QTM_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_RSVD_QTM_MASK         \
	0x0000F000 /* CSR_TXD_RSVD_QTM[15..12] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_RSVD_QTM_SHFT 12
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_FFA_QTM_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_FFA_QTM_MASK          \
	0x00000F00 /* CSR_TXD_FFA_QTM[11..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_TXD_FFA_QTM_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_RSVD_QTM_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_RSVD_QTM_MASK        \
	0x000000F0 /* CSR_DMAD_RSVD_QTM[7..4] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_RSVD_QTM_SHFT 4
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_FFA_QTM_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_FFA_QTM_MASK         \
	0x0000000F /* CSR_DMAD_FFA_QTM[3..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_QOS_QTM_CFG1_CSR_DMAD_FFA_QTM_SHFT 0

/*
* ---HOST_PRI_INT_STA (0x18024000 + 0x2E0)---
* host_pri_int_sts_0[0] - (W1C) rx_done_int[0], W1C to clear delay
interrupt
* host_pri_int_sts_1[1] - (W1C) rx_done_int[1], W1C to clear delay
interrupt
* RESERVED2[31..2] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_1_ADDR            \
	WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_1_MASK            \
	0x00000002 /* host_pri_int_sts_1[1] */
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_1_SHFT 1
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_0_ADDR            \
	WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_0_MASK            \
	0x00000001 /* host_pri_int_sts_0[0] */
#define WF_WFDMA_HOST_DMA0_HOST_PRI_INT_STA_host_pri_int_sts_0_SHFT 0

/*
* ---HOST_PER_INT_ENA_STA (0x18024000 + 0x2E4)---
* wpdma_per_int_sts[3..0] - (W1C) status bit for rx ring periodic delayed
* interrupt to tracking ring is full or not, start delayed interrupt timer when
* RX ring is not full from falling edge of full flag and reset when ring full
* flag is asserted
* RESERVED4[15..4] - (RO) Reserved bits
* wpdma_per_int_ena[19..16] - (RW) enable bit for rx ring periodic delayed
* interrupt to tracking ring is full or not, start delayed interrupt timer when
* RX ring is not full from falling edge of full flag and reset when ring full
* flag is asserted
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_ena_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_ena_MASK         \
	0x000F0000 /* wpdma_per_int_ena[19..16] */
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_ena_SHFT 16
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_sts_ADDR         \
	WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_sts_MASK         \
	0x0000000F /* wpdma_per_int_sts[3..0] */
#define WF_WFDMA_HOST_DMA0_HOST_PER_INT_ENA_STA_wpdma_per_int_sts_SHFT 0

/*
* ---HOST_PER_DLY_INT_CFG (0x18024000 + 0x2E8)---
* wpdma_per_max_ptime[7..0] - (RW) Specified Max pending time for the
* internal RX ring full flag falling edge. When the pending time equal or
greater
* PER_MAX_PTIME x 20us or the # of pended TX_DONE_INT equal or greater than
* TX_MAX_PINT (see above), an Final TX_DLY_INT is generated
* Set to 0 will disable pending interrupt
* time check
* wpdma_per_dly_int_en[11..8] - (RW) RX periodic Delayed Interrupt Enable
* 1: Enable RX periodic delayed interrupt
mechanism
* 0: Disable RX periodic delayed interrupt
mechanism
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_dly_int_en_ADDR      \
	WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_dly_int_en_MASK      \
	0x00000F00 /* wpdma_per_dly_int_en[11..8] */
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_dly_int_en_SHFT 8
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_max_ptime_ADDR       \
	WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_max_ptime_MASK       \
	0x000000FF /* wpdma_per_max_ptime[7..0] */
#define WF_WFDMA_HOST_DMA0_HOST_PER_DLY_INT_CFG_wpdma_per_max_ptime_SHFT 0

/*
* ---WPDMA_PRI_DLY_INT_CFG0 (0x18024000 + 0x2F0)---
* PRI0_MAX_PTIME[7..0] - (RW) Specified Max pending time for the
* internal PRI0_DONE_INT. When the pending time equal or greater PRI0_MAX_PTIME
x
* 20us or the # of pended PRI0_DONE_INT equal or greater than PRI0_MAX_PINT (see
* above), an Final PRI0_DLY_INT is generated
* Set to 0 will disable pending interrupt
* time check
* PRI0_MAX_PINT[14..8] - (RW) Specified Max # of pended interrupts.
* When the # of pended interrupts equal or
* greater than the value specified here or interrupt pending time reach the
limit
* (See below), a Final PRI0_DLY_INT is generated.
* Set to 0 will disable pending interrupt
* count check
* PRI0_DLY_INT_EN[15] - (RW) Priority Delayed Interrupt Enable
* 1: Enable Priority delayed interrupt
mechanism
* 0: Disable Priority delayed interrupt
mechanism
* In AXE host_dma0, these PRI1_* settings are
* for rx_ring[1]_int, and PRI0_* settings are for rx_ring[0]_int
* In AXE host_dma1, these PRI1_* settings are
* for rx_ring[0]_int, and PRI0_* settings are for Ored-tx_ring[14:0]_int
* In AXE mcu_dma0 and mcu_dma1, there are no
* priority interrupt thus no this 0x2E0 CR!!
* PRI1_MAX_PTIME[23..16] - (RW) Specified Max pending time for the
* internal PRI1_DONE_INT. When the pending time equal or greater PRI1_MAX_PTIME
x
* 20us or the # of pended PRI1_DONE_INT equal or greater than PRI1_MAX_PINT (see
* above), an Final PRI1_DLY_INT is generated
* Set to 0 will disable pending interrupt
* time check
* PRI1_MAX_PINT[30..24] - (RW) Specified Max # of pended interrupts.
* When the # of pended interrupts equal or
* greater than the value specified here or interrupt pending time reach the
limit
* (See below), a Final PRI1_DLY_INT is generated.
* Set to 0 will disable pending interrupt
* count check
* PRI1_DLY_INT_EN[31] - (RW) Priority Delayed Interrupt Enable
* 1: Enable Priority delayed interrupt
mechanism
* 0: Disable Priority delayed interrupt
mechanism
* In AXE host_dma0, these PRI1_* settings are
* for rx_ring[1]_int, and PRI0_* settings are for rx_ring[0]_int
* In AXE host_dma1, these PRI1_* settings are
* for rx_ring[0]_int, and PRI0_* settings are for Ored-tx_ring[14:0]_int
* In AXE mcu_dma0 and mcu_dma1, there are no
* priority interrupt thus no this 0x2E0 CR!!
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_DLY_INT_EN_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_DLY_INT_EN_MASK         \
	0x80000000 /* PRI1_DLY_INT_EN[31] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_DLY_INT_EN_SHFT 31
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PINT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PINT_MASK           \
	0x7F000000 /* PRI1_MAX_PINT[30..24] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PINT_SHFT 24
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PTIME_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PTIME_MASK          \
	0x00FF0000 /* PRI1_MAX_PTIME[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI1_MAX_PTIME_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_DLY_INT_EN_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_DLY_INT_EN_MASK         \
	0x00008000 /* PRI0_DLY_INT_EN[15] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_DLY_INT_EN_SHFT 15
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PINT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PINT_MASK           \
	0x00007F00 /* PRI0_MAX_PINT[14..8] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PINT_SHFT 8
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PTIME_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PTIME_MASK          \
	0x000000FF /* PRI0_MAX_PTIME[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_PRI_DLY_INT_CFG0_PRI0_MAX_PTIME_SHFT 0

/*
* ---WPDMA_TX_RING0_CTRL0 (0x18024000 + 0x300)---
* BASE_PTR[31..0] - (RW) Point to the base address of TX_Ring0
* (8-DWORD aligned address)
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_TX_RING0_CTRL1 (0x18024000 + 0x304)---
* MAX_CNT[11..0] - (RW) The maximum number of TXD count in
TXD_Ring0.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring0 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING0_CTRL2 (0x18024000 + 0x308)---
* CPU_IDX[11..0] - (RW) Point to the next TXD CPU wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_TX_RING0_CTRL3 (0x18024000 + 0x30c)---
* DMA_IDX[11..0] - (RO) Point to the next TXD DMA wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_TX_RING1_CTRL0 (0x18024000 + 0x310)---
* BASE_PTR[31..0] - (RW) Point to the base address of TX_Ring1
* (8-DWORD aligned address)
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_TX_RING1_CTRL1 (0x18024000 + 0x314)---
* MAX_CNT[11..0] - (RW) The maximum number of TXD count in
TXD_Ring1.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring1 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING1_CTRL2 (0x18024000 + 0x318)---
* CPU_IDX[11..0] - (RW) Point to the next TXD CPU wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_TX_RING1_CTRL3 (0x18024000 + 0x31c)---
* DMA_IDX[11..0] - (RO) Point to the next TXD DMA wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_TX_RING2_CTRL0 (0x18024000 + 0x320)---
* BASE_PTR[31..0] - (RW) Point to the base address of TX_Ring2
* (8-DWORD aligned address)
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_TX_RING2_CTRL1 (0x18024000 + 0x324)---
* MAX_CNT[11..0] - (RW) The maximum number of TXD count in
TXD_Ring2.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring2 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING2_CTRL2 (0x18024000 + 0x328)---
* CPU_IDX[11..0] - (RW) Point to the next TXD CPU wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_TX_RING2_CTRL3 (0x18024000 + 0x32c)---
* DMA_IDX[11..0] - (RO) Point to the next TXD DMA wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_TX_RING3_CTRL0 (0x18024000 + 0x330)---
* BASE_PTR[31..0] - (RW) Point to the base address of TX_Ring3
* (8-DWORD aligned address)
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_TX_RING3_CTRL1 (0x18024000 + 0x334)---
* MAX_CNT[11..0] - (RW) The maximum number of TXD count in
TXD_Ring3.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring3 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING3_CTRL2 (0x18024000 + 0x338)---
* CPU_IDX[11..0] - (RW) Point to the next TXD CPU wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_TX_RING3_CTRL3 (0x18024000 + 0x33c)---
* DMA_IDX[11..0] - (RO) Point to the next TXD DMA wants to use
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING0_CTRL0 (0x18024000 + 0x500)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #0
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING0_CTRL1 (0x18024000 + 0x504)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #0.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring0 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING0_CTRL2 (0x18024000 + 0x508)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #0.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING0_CTRL3 (0x18024000 + 0x50c)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#0. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING1_CTRL0 (0x18024000 + 0x510)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #1
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING1_CTRL1 (0x18024000 + 0x514)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #1.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring1 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING1_CTRL2 (0x18024000 + 0x518)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #1.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING1_CTRL3 (0x18024000 + 0x51c)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#1. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING2_CTRL0 (0x18024000 + 0x520)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #2
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING2_CTRL1 (0x18024000 + 0x524)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #2.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring2 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING2_CTRL2 (0x18024000 + 0x528)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #2.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING2_CTRL3 (0x18024000 + 0x52C)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#2. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING3_CTRL0 (0x18024000 + 0x530)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #3
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING3_CTRL1 (0x18024000 + 0x534)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #3.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring3 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING3_CTRL2 (0x18024000 + 0x538)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #3.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING3_CTRL3 (0x18024000 + 0x53C)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#3. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING4_CTRL0 (0x18024000 + 0x540)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #0
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING4_CTRL1 (0x18024000 + 0x544)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #0.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring0 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING4_CTRL2 (0x18024000 + 0x548)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #0.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING4_CTRL3 (0x18024000 + 0x54c)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#0. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING5_CTRL0 (0x18024000 + 0x550)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #1
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING5_CTRL1 (0x18024000 + 0x554)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #1.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring1 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING5_CTRL2 (0x18024000 + 0x558)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #1.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING5_CTRL3 (0x18024000 + 0x55c)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#1. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING6_CTRL0 (0x18024000 + 0x560)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #2
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING6_CTRL1 (0x18024000 + 0x564)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #2.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring2 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING6_CTRL2 (0x18024000 + 0x568)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #2.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING6_CTRL3 (0x18024000 + 0x56C)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#2. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_RX_RING7_CTRL0 (0x18024000 + 0x570)---
* BASE_PTR[31..0] - (RW) Point to the base address of RXD Ring #3
* (GE ports). It should be a 8-DWORD aligned address
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL0_BASE_PTR_ADDR                  \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL0_BASE_PTR_MASK                  \
	0xFFFFFFFF /* BASE_PTR[31..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL0_BASE_PTR_SHFT 0

/*
* ---WPDMA_RX_RING7_CTRL1 (0x18024000 + 0x574)---
* MAX_CNT[11..0] - (RW) The maximum number of RXD count in RXD
* Ring #3.
* RESERVED12[15..12] - (RO) Reserved bits
* BASE_PTR_EXT[19..16] - (RW) Point to the base address[35:32] of
* TX_Ring3 (8-DWORD aligned address)
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_BASE_PTR_EXT_ADDR              \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_BASE_PTR_EXT_MASK              \
	0x000F0000 /* BASE_PTR_EXT[19..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_BASE_PTR_EXT_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_MAX_CNT_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_MAX_CNT_MASK                   \
	0x00000FFF /* MAX_CNT[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL1_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING7_CTRL2 (0x18024000 + 0x578)---
* CPU_IDX[11..0] - (RW) Point to the next RXD CPU wants to
* allocate to RXD Ring #3.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL2_CPU_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL2_CPU_IDX_MASK                   \
	0x00000FFF /* CPU_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL2_CPU_IDX_SHFT 0

/*
* ---WPDMA_RX_RING7_CTRL3 (0x18024000 + 0x57C)---
* DMA_IDX[11..0] - (RW) In normal operation, user dma_index
* would udated by hardware when moving rx packet done. User should not write
dma_index.
* Point to the next RXD DMA wants to use in
* FDS Ring#3. It should be a 8-DWORD aligned address.
* RESERVED12[31..12] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL3_DMA_IDX_ADDR                   \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL3_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL3_DMA_IDX_MASK                   \
	0x00000FFF /* DMA_IDX[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_CTRL3_DMA_IDX_SHFT 0

/*
* ---WPDMA_TX_RING0_EXT_CTRL (0x18024000 + 0x600)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) TXD Ring #0 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING1_EXT_CTRL (0x18024000 + 0x604)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) TXD Ring #1 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING2_EXT_CTRL (0x18024000 + 0x608)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) TXD Ring #2 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING3_EXT_CTRL (0x18024000 + 0x60C)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) TXD Ring #3 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING0_EXT_CTRL (0x18024000 + 0x680)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #0 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING1_EXT_CTRL (0x18024000 + 0x684)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #1 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING2_EXT_CTRL (0x18024000 + 0x688)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #2 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING3_EXT_CTRL (0x18024000 + 0x68C)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #3 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING4_EXT_CTRL (0x18024000 + 0x690)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #0 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING5_EXT_CTRL (0x18024000 + 0x694)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #1 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING6_EXT_CTRL (0x18024000 + 0x698)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #2 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_RX_RING7_EXT_CTRL (0x18024000 + 0x69C)---
* DISP_MAX_CNT[7..0] - (RW) xxx
* RESERVED8[15..8] - (RO) Reserved bits
* DISP_BASE_PTR[31..16] - (RW) RXD Ring #3 Extension, to configure
* prefetch settings, like base_ptr means each prefetch ring's base address in
* internal prefetch sram, disp_max_cnt means each prefetch ring's depth
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_BASE_PTR_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_BASE_PTR_MASK          \
	0xFFFF0000 /* DISP_BASE_PTR[31..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_BASE_PTR_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_MAX_CNT_ADDR           \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_MAX_CNT_MASK           \
	0x000000FF /* DISP_MAX_CNT[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_DISP_MAX_CNT_SHFT 0

/*
* ---WPDMA_TX_RING0_BKRS_CTRL0 (0x18024000 + 0xA00)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_TX_RING0_BKRS_CTRL1 (0x18024000 + 0xA04)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING0_BKRS_CTRL2 (0x18024000 + 0xA08)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING1_BKRS_CTRL0 (0x18024000 + 0xA10)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_TX_RING1_BKRS_CTRL1 (0x18024000 + 0xA14)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING1_BKRS_CTRL2 (0x18024000 + 0xA18)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING2_BKRS_CTRL0 (0x18024000 + 0xA20)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_TX_RING2_BKRS_CTRL1 (0x18024000 + 0xA24)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING2_BKRS_CTRL2 (0x18024000 + 0xA28)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING3_BKRS_CTRL0 (0x18024000 + 0xA30)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_TX_RING3_BKRS_CTRL1 (0x18024000 + 0xA34)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_TX_RING3_BKRS_CTRL2 (0x18024000 + 0xA38)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING0_BKRS_CTRL0 (0x18024000 + 0xC00)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING0_BKRS_CTRL1 (0x18024000 + 0xC04)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING0_BKRS_CTRL2 (0x18024000 + 0xC08)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING1_BKRS_CTRL0 (0x18024000 + 0xC10)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING1_BKRS_CTRL1 (0x18024000 + 0xC14)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING1_BKRS_CTRL2 (0x18024000 + 0xC18)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING2_BKRS_CTRL0 (0x18024000 + 0xC20)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING2_BKRS_CTRL1 (0x18024000 + 0xC24)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING2_BKRS_CTRL2 (0x18024000 + 0xC28)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING3_BKRS_CTRL0 (0x18024000 + 0xC30)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING3_BKRS_CTRL1 (0x18024000 + 0xC34)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING3_BKRS_CTRL2 (0x18024000 + 0xC38)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING4_BKRS_CTRL0 (0x18024000 + 0xC40)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING4_BKRS_CTRL1 (0x18024000 + 0xC44)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING4_BKRS_CTRL2 (0x18024000 + 0xC48)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING5_BKRS_CTRL0 (0x18024000 + 0xC50)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING5_BKRS_CTRL1 (0x18024000 + 0xC54)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING5_BKRS_CTRL2 (0x18024000 + 0xC58)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING6_BKRS_CTRL0 (0x18024000 + 0xC60)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING6_BKRS_CTRL1 (0x18024000 + 0xC64)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING6_BKRS_CTRL2 (0x18024000 + 0xC68)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_BKRS_CTRL2_pld_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING7_BKRS_CTRL0 (0x18024000 + 0xC70)---
* pld_didx_idx[11..0] - (RO) pld_didx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pf_didx_idx[27..16] - (RO) pf_didx_idx
* RESERVED28[31..28] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pf_didx_idx_ADDR          \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pf_didx_idx_MASK          \
	0x0FFF0000 /* pf_didx_idx[27..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pf_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pld_didx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pld_didx_idx_MASK         \
	0x00000FFF /* pld_didx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL0_pld_didx_idx_SHFT 0

/*
* ---WPDMA_RX_RING7_BKRS_CTRL1 (0x18024000 + 0xC74)---
* disp_cidx_idx[7..0] - (RO) disp_cidx_idx
* RESERVED8[15..8] - (RO) Reserved bits
* disp_didx_idx[23..16] - (RO) disp_didx_idx
* RESERVED24[31..24] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_didx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_didx_idx_MASK        \
	0x00FF0000 /* disp_didx_idx[23..16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_didx_idx_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_cidx_idx_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_cidx_idx_MASK        \
	0x000000FF /* disp_cidx_idx[7..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL1_disp_cidx_idx_SHFT 0

/*
* ---WPDMA_RX_RING7_BKRS_CTRL2 (0x18024000 + 0xC78)---
* pld_cidx_idx[11..0] - (RO) pld_cidx_idx
* RESERVED12[15..12] - (RO) Reserved bits
* pld_ring_empty[16] - (RO) pld_ring_empty
* pf_ring_empty[17] - (RO) pf_ring_empty
* pf_dq_ring_empty[18] - (RO) pf_dq_ring_empty
* disp_ring_vld[19] - (RO) disp_ring_vld
* RESERVED20[31..20] - (RO) Reserved bits
*/
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_disp_ring_vld_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_disp_ring_vld_MASK        \
	0x00080000 /* disp_ring_vld[19] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_disp_ring_vld_SHFT 19
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_dq_ring_empty_ADDR     \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_dq_ring_empty_MASK     \
	0x00040000 /* pf_dq_ring_empty[18] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_dq_ring_empty_SHFT 18
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_ring_empty_ADDR        \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_ring_empty_MASK        \
	0x00020000 /* pf_ring_empty[17] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pf_ring_empty_SHFT 17
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_ring_empty_ADDR       \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_ring_empty_MASK       \
	0x00010000 /* pld_ring_empty[16] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_ring_empty_SHFT 16
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_cidx_idx_ADDR         \
	WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_cidx_idx_MASK         \
	0x00000FFF /* pld_cidx_idx[11..0] */
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_BKRS_CTRL2_pld_cidx_idx_SHFT 0

#ifdef __cplusplus
}
#endif

#endif /* __WF_WFDMA_HOST_DMA0_REGS_H__ */

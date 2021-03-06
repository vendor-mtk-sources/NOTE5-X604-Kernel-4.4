/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MTK_CLKID_MT6775_H__
#define __MTK_CLKID_MT6775_H__

enum mt_cg_clk_id {
	/* INFRA0 */
	MTK_CG_INFRA0_MD2MD_CCIF_MD_CG_SET_0 = 0,
	MTK_CG_INFRA0_MD2MD_CCIF_MD_CG_SET_1 = 3,
	MTK_CG_INFRA0_CLDMA_AO_TOP_HCLK_CK_CG = 6,
	MTK_CG_INFRA0_MD2MD_CCIF_MD_CG_SET_2 = 7,
	MTK_CG_INFRA0_TRNG_CG = 9,
	MTK_CG_INFRA0_AUXADC_CG = 10,
	MTK_CG_INFRA0_CPUM_CG = 11,
	MTK_CG_INFRA0_CCIF1_AP_CG = 12,
	MTK_CG_INFRA0_CCIF1_MD_CG = 13,
	MTK_CG_INFRA0_CCIF2_AP_CG = 16,
	MTK_CG_INFRA0_CCIF2_MD_CG = 17,
	MTK_CG_INFRA0_CCIF4_AP_CG = 18,
	MTK_CG_INFRA0_XIU_CKCG_SET_FOR_DBG_CTRLER = 19,
	MTK_CG_INFRA0_DEVICE_APC_CG = 20,
	MTK_CG_INFRA0_CCIF4_MD_CG = 21,
	MTK_CG_INFRA0_SMI_L2C_CK_CG = 22,
	MTK_CG_INFRA0_CCIF_AP_CG = 23,
	MTK_CG_INFRA0_RG_DBG_AO_CLK_CG = 24,
	MTK_CG_INFRA0_AUDIO_CG = 25,
	MTK_CG_INFRA0_CCIF_MD_CG = 26,
	MTK_CG_INFRA0_CCIF5_AP_CG = 27,
	MTK_CG_INFRA0_CCIF5_MD_CG = 28,
	MTK_CG_INFRA0_RG_FT_I2C_CK_CG = 29,
	MTK_CG_INFRA0_SPM_AHB_CK_CG = 30,
	MTK_CG_INFRA0_DRAMC_F26M_CK = 31,
	/* INFRA1 */
	MTK_CG_INFRA1_PMIC_CG_TMR = 32,
	MTK_CG_INFRA1_PMIC_CG_AP = 33,
	MTK_CG_INFRA1_PMIC_CG_MD = 34,
	MTK_CG_INFRA1_PMIC_CG_CONN = 35,
	MTK_CG_INFRA1_SCP_CG = 36,
	MTK_CG_INFRA1_SEJ_CG = 37,
	MTK_CG_INFRA1_APXGPT_CG = 38,
	MTK_CG_INFRA1_DVFSRC_CG = 39,
	MTK_CG_INFRA1_GCE_CG = 40,
	MTK_CG_INFRA1_DBG_CG = 41,
	MTK_CG_INFRA1_SPM_APB_ASYNC_CG = 44,
	MTK_CG_INFRA1_CLDMA_AP_TOP_CG = 45,
	MTK_CG_INFRA1_CCIF_3_CG_SET_0 = 49,
	MTK_CG_INFRA1_AES_TOP0_CG = 50,
	MTK_CG_INFRA1_AES_TOP1_CG = 51,
	MTK_CG_INFRA1_DEVAPC_MPU_CG = 52,
	MTK_CG_INFRA1_CCIF_3_CG_SET_1 = 56,
	MTK_CG_INFRA1_MD2MD_CCIF_CG_SET_0 = 59,
	MTK_CG_INFRA1_MD2MD_CCIF_CG_SET_1 = 60,
	MTK_CG_INFRA1_MD2MD_CCIF_CG_SET_2 = 61,
	MTK_CG_INFRA1_FHCTL_CG = 62,
	MTK_CG_INFRA1_MODEM_TEMP_SHARE_CG = 63,
	/* INFRA2 */
	MTK_CG_INFRA2_THERM_BCLK_CG = 70,
	MTK_CG_INFRA2_PTP_BCLK_CG = 71,
	MTK_CG_INFRA2_AUXADC_MD_CG = 88,
	MTK_CG_INFRA2_DVFS_CTRL_APB_RX_CK_CG = 94,
	/* PERI0 */
	MTK_CG_PERI0_RG_PWM_BCLK_CK_PDN = 96,
	MTK_CG_PERI0_RG_PWM_FBCLK1_CK_PDN = 97,
	MTK_CG_PERI0_RG_PWM_FBCLK2_CK_PDN = 98,
	MTK_CG_PERI0_RG_PWM_FBCLK3_CK_PDN = 99,
	MTK_CG_PERI0_RG_PWM_FBCLK4_CK_PDN = 100,
	MTK_CG_PERI0_RG_I2C0_BCLK_CK_PDN = 112,
	MTK_CG_PERI0_RG_I2C1_BCLK_CK_PDN = 113,
	MTK_CG_PERI0_RG_I2C2_BCLK_CK_PDN = 114,
	MTK_CG_PERI0_RG_I2C3_BCLK_CK_PDN = 115,
	MTK_CG_PERI0_RG_I2C4_BCLK_CK_PDN = 116,
	MTK_CG_PERI0_RG_I2C5_BCLK_CK_PDN = 117,
	MTK_CG_PERI0_RG_I2C6_BCLK_CK_PDN = 118,
	MTK_CG_PERI0_RG_I2C7_BCLK_CK_PDN = 119,
	MTK_CG_PERI0_RG_I2C2_IMM_BCLK_CK_PDN = 120,
	MTK_CG_PERI0_RG_I2C3_IMM_BCLK_CK_PDN = 121,
	MTK_CG_PERI0_RG_I2C8_BCLK_CK_PDN = 122,
	MTK_CG_PERI0_RG_I2C9_BCLK_CK_PDN = 123,
	MTK_CG_PERI0_RG_IDVFS_CK_PDN = 127,
	/* PERI1 */
	MTK_CG_PERI1_RG_UART0_CK_PDN = 128,
	MTK_CG_PERI1_RG_UART1_CK_PDN = 129,
	MTK_CG_PERI1_RG_UART2_CK_PDN = 130,
	MTK_CG_PERI1_RG_SPI0_CK_PDN = 144,
	MTK_CG_PERI1_RG_SPI1_CK_PDN = 145,
	MTK_CG_PERI1_RG_SPI2_CK_PDN = 146,
	MTK_CG_PERI1_RG_SPI3_CK_PDN = 147,
	MTK_CG_PERI1_RG_SPI4_CK_PDN = 148,
	MTK_CG_PERI1_RG_SPI5_CK_PDN = 149,
	MTK_CG_PERI1_RG_SPI6_CK_PDN = 150,
	MTK_CG_PERI1_RG_SPI7_CK_PDN = 151,
	MTK_CG_PERI1_RG_SPI8_CK_PDN = 152,
	MTK_CG_PERI1_RG_SPI9_CK_PDN = 153,
	/* PERI2 */
	MTK_CG_PERI2_RG_MSDC0_CK_PDN_AP_NORM = 160,
	MTK_CG_PERI2_RG_MSDC1_CK_PDN = 161,
	MTK_CG_PERI2_RG_MSDC2_CK_PDN = 162,
	MTK_CG_PERI2_RG_MSDC3_CK_PDN = 163,
	MTK_CG_PERI2_RG_MSDC4_CK_PDN = 164,
	MTK_CG_PERI2_RG_UFSDEV_CK_PDN = 168,
	MTK_CG_PERI2_RG_UFSDEV_MP_SAP_CFG_CK_PDN = 169,
	MTK_CG_PERI2_RG_UFSCARD_CK_PDN = 170,
	MTK_CG_PERI2_RG_UFSCARD_MP_SAP_CFG_CK_PDN = 171,
	MTK_CG_PERI2_RG_UFS_AES_CORE_CK_PDN = 172,
	MTK_CG_PERI2_RG_MSDC0_CK_PDN_AP_SECURE = 184,
	MTK_CG_PERI2_RG_MSDC0_CK_PDN_MD_SECURE = 185,
	/* PERI3 */
	MTK_CG_PERI3_RG_USB_P0_CK_PDN = 192,
	MTK_CG_PERI3_RG_USB_P1_CK_PDN = 193,
	/* PERI4 */
	MTK_CG_PERI4_RG_AP_DM_CK_PDN = 224,
	MTK_CG_PERI4_RG_DISP_PWM0_CK_PDN = 227,
	MTK_CG_PERI4_RG_BTIF_CK_PDN = 229,
	MTK_CG_PERI4_RG_CQ_DMA_CK_PDN = 230,
	MTK_CG_PERI4_RG_BIST2FPC_CK_PDN = 231,
	MTK_CG_PERI4_RG_MBIST_MEM_OFF_DLY_CK_PDN = 232,
	MTK_CG_PERI4_RG_DEVICE_APC_PERI_CK_PDN = 233,
	MTK_CG_PERI4_RG_DXCC_AO_CK_PDN = 240,
	MTK_CG_PERI4_RG_DXCC_PUB_CK_PDN = 241,
	MTK_CG_PERI4_RG_DXCC_SEC_CK_PDN = 242,
	MTK_CG_PERI4_RG_MTK_TRNG_CK_PDN = 243,
	MTK_CG_PERI4_RG_DEBUGTOP_CK_PDN = 244,
	/* PERI5 */
	/* AUDIO0 */
	MTK_CG_AUDIO0_PDN_AFE = 290,
	MTK_CG_AUDIO0_PDN_22M = 296,
	MTK_CG_AUDIO0_PDN_24M = 297,
	MTK_CG_AUDIO0_PDN_APLL2_TUNER = 306,
	MTK_CG_AUDIO0_PDN_APLL_TUNER = 307,
	MTK_CG_AUDIO0_PDN_TDM_CK = 308,
	MTK_CG_AUDIO0_PDN_ADC = 312,
	MTK_CG_AUDIO0_PDN_DAC = 313,
	MTK_CG_AUDIO0_PDN_DAC_PREDIS = 314,
	MTK_CG_AUDIO0_PDN_TML = 315,
	/* AUDIO1 */
	MTK_CG_AUDIO1_I2S1_BCLK_SW_CG = 324,
	MTK_CG_AUDIO1_I2S2_BCLK_SW_CG = 325,
	MTK_CG_AUDIO1_I2S3_BCLK_SW_CG = 326,
	MTK_CG_AUDIO1_I2S4_BCLK_SW_CG = 327,
	MTK_CG_AUDIO1_I2S5_BCLK_SW_CG = 328,
	MTK_CG_AUDIO1_PDN_ADC_HIRES = 336,
	MTK_CG_AUDIO1_PDN_ADC_HIRES_TML = 337,
	MTK_CG_AUDIO1_PDN_ADDA6_ADC = 340,
	MTK_CG_AUDIO1_PDN_ADDA6_ADC_HIRES = 341,
	/* DISP0 */
	MTK_CG_DISP0_SMI_COMMON = 352,
	MTK_CG_DISP0_SMI_LARB0 = 353,
	MTK_CG_DISP0_SMI_LARB1 = 354,
	MTK_CG_DISP0_GALS_COMM0 = 355,
	MTK_CG_DISP0_GALS_COMM1 = 356,
	MTK_CG_DISP0_GALS_VENC2MM = 357,
	MTK_CG_DISP0_GALS_VDEC2MM = 358,
	MTK_CG_DISP0_GALS_IMG2MM = 359,
	MTK_CG_DISP0_GALS_CAM2MM = 360,
	MTK_CG_DISP0_GALS_IPU2MM = 361,
	MTK_CG_DISP0_ISP_MDP_DL = 362,
	MTK_CG_DISP0_IPU_MDP_DL = 363,
	MTK_CG_DISP0_MDP_RDMA0 = 364,
	MTK_CG_DISP0_MDP_RDMA1 = 365,
	MTK_CG_DISP0_MDP_RSZ0 = 366,
	MTK_CG_DISP0_MDP_RSZ1 = 367,
	MTK_CG_DISP0_MDP_TDSHP = 368,
	MTK_CG_DISP0_MDP_WROT0 = 369,
	MTK_CG_DISP0_MDP_WROT1 = 370,
	MTK_CG_DISP0_FAKE_ENG = 371,
	MTK_CG_DISP0_DISP_OVL0 = 372,
	MTK_CG_DISP0_DISP_OVL0_2L = 373,
	MTK_CG_DISP0_DISP_OVL1_2L = 374,
	MTK_CG_DISP0_DISP_RDMA0 = 375,
	MTK_CG_DISP0_DISP_RDMA1 = 376,
	MTK_CG_DISP0_DISP_WDMA0 = 377,
	MTK_CG_DISP0_DISP_COLOR0 = 378,
	MTK_CG_DISP0_DISP_CCORR0 = 379,
	MTK_CG_DISP0_DISP_AAL0 = 380,
	MTK_CG_DISP0_DISP_GAMMA0 = 381,
	MTK_CG_DISP0_DISP_DITHER0 = 382,
	MTK_CG_DISP0_DISP_SPLIT = 383,
	/* DISP1 */
	MTK_CG_DISP1_DSI0_DSI0 = 384,
	MTK_CG_DISP1_DSI0_DSI0_DIG = 385,
	MTK_CG_DISP1_DSI1_DSI1 = 386,
	MTK_CG_DISP1_DSI1_DSI1_DIG = 387,
	MTK_CG_DISP1_DISP_FAKE1 = 388,
	MTK_CG_DISP1_IMG_MDP_DL = 389,
	MTK_CG_DISP1_IPU_MDP_DL = 390,
	MTK_CG_DISP1_26M = 391,
	MTK_CG_DISP1_MMSYS_R2Y = 392,
	MTK_CG_DISP1_DISP_RSZ = 393,
	MTK_CG_DISP1_MDP_CCORR = 394,
	MTK_CG_DISP1_MDP_AAL = 395,
	MTK_CG_DISP1_GALS_UPI12 = 396,
	MTK_CG_DISP1_GALS_CCU2 = 397,
	/* DISP2 */
	/* CAM */
	MTK_CG_CAM_LARB6_CGPDN = 448,
	MTK_CG_CAM_DFP_VAD_CGPDN = 449,
	MTK_CG_CAM_LARB3_CGPDN = 450,
	MTK_CG_CAM_CAM_CGPDN = 454,
	MTK_CG_CAM_CAMTG_CGPDN = 455,
	MTK_CG_CAM_SENINF_CGPDN = 456,
	MTK_CG_CAM_CAMSV0_CGPDN = 457,
	MTK_CG_CAM_CAMSV1_CGPDN = 458,
	MTK_CG_CAM_CAMSV2_CGPDN = 459,
	MTK_CG_CAM_CCU_CGPDN = 460,
	/* IMG */
	MTK_CG_IMG_LARB5_CGPDN = 480,
	MTK_CG_IMG_LARB2_CGPDN = 481,
	MTK_CG_IMG_DIP_CGPDN = 482,
	MTK_CG_IMG_FDVT_CGPDN = 483,
	MTK_CG_IMG_DPE_CGPDN = 484,
	MTK_CG_IMG_RSC_CGPDN = 485,
	MTK_CG_IMG_MFB_CGPDN = 486,
	MTK_CG_IMG_WPE_A_CGPDN = 487,
	MTK_CG_IMG_WPE_B_CGPDN = 488,
	MTK_CG_IMG_OWE_CGPDN = 489,
	/* MFG */
	MTK_CG_MFG_BG3D = 512,
	/* VDEC0 */
	MTK_CG_VDEC0_VDEC_CKEN = 544,
	/* VDEC1 */
	MTK_CG_VDEC1_LARB1_CKEN = 576,
	/* VENC0 */
	MTK_CG_VENC0_CE = 608,
	/* VENC1 */
	MTK_CG_VENC1_CKE0 = 640,
	MTK_CG_VENC1_CKE1 = 644,
	MTK_CG_VENC1_CKE1 = 648,
	/* MJC */
	/* IPU */
	MTK_CG_IPU_IPU_CG = 704,
	MTK_CG_IPU_AXI_CG = 706,
};

#endif /* __MTK_CLKID_MT6775_H__ */


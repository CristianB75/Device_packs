/*
 * Component description for SUPC
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-11T10:28:46Z */
#ifndef _SAMG53_SUPC_COMPONENT_H_
#define _SAMG53_SUPC_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR SUPC                                         */
/* ************************************************************************** */

/* -------- SUPC_CR : (SUPC Offset: 0x00) ( /W 32) Supply Controller Control Register -------- */
#define SUPC_CR_ZERO_Pos                      _UINT32_(2)                                          /* (SUPC_CR) This bit must always be written to 0. Position */
#define SUPC_CR_ZERO_Msk                      (_UINT32_(0x1) << SUPC_CR_ZERO_Pos)                  /* (SUPC_CR) This bit must always be written to 0. Mask */
#define SUPC_CR_ZERO(value)                   (SUPC_CR_ZERO_Msk & (_UINT32_(value) << SUPC_CR_ZERO_Pos)) /* Assigment of value for ZERO in the SUPC_CR register */
#define SUPC_CR_XTALSEL_Pos                   _UINT32_(3)                                          /* (SUPC_CR) Crystal Oscillator Select Position */
#define SUPC_CR_XTALSEL_Msk                   (_UINT32_(0x1) << SUPC_CR_XTALSEL_Pos)               /* (SUPC_CR) Crystal Oscillator Select Mask */
#define SUPC_CR_XTALSEL(value)                (SUPC_CR_XTALSEL_Msk & (_UINT32_(value) << SUPC_CR_XTALSEL_Pos)) /* Assigment of value for XTALSEL in the SUPC_CR register */
#define   SUPC_CR_XTALSEL_NO_EFFECT_Val       _UINT32_(0x0)                                        /* (SUPC_CR) No effect.  */
#define   SUPC_CR_XTALSEL_CRYSTAL_SEL_Val     _UINT32_(0x1)                                        /* (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output.  */
#define SUPC_CR_XTALSEL_NO_EFFECT             (SUPC_CR_XTALSEL_NO_EFFECT_Val << SUPC_CR_XTALSEL_Pos) /* (SUPC_CR) No effect. Position  */
#define SUPC_CR_XTALSEL_CRYSTAL_SEL           (SUPC_CR_XTALSEL_CRYSTAL_SEL_Val << SUPC_CR_XTALSEL_Pos) /* (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output. Position  */
#define SUPC_CR_KEY_Pos                       _UINT32_(24)                                         /* (SUPC_CR) Password Position */
#define SUPC_CR_KEY_Msk                       (_UINT32_(0xFF) << SUPC_CR_KEY_Pos)                  /* (SUPC_CR) Password Mask */
#define SUPC_CR_KEY(value)                    (SUPC_CR_KEY_Msk & (_UINT32_(value) << SUPC_CR_KEY_Pos)) /* Assigment of value for KEY in the SUPC_CR register */
#define   SUPC_CR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_CR_KEY_PASSWD                    (SUPC_CR_KEY_PASSWD_Val << SUPC_CR_KEY_Pos)          /* (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_CR_Msk                           _UINT32_(0xFF00000C)                                 /* (SUPC_CR) Register Mask  */


/* -------- SUPC_SMMR : (SUPC Offset: 0x04) (R/W 32) Supply Controller Supply Monitor Mode Register -------- */
#define SUPC_SMMR_SMTH_Pos                    _UINT32_(0)                                          /* (SUPC_SMMR) Supply Monitor Threshold Position */
#define SUPC_SMMR_SMTH_Msk                    (_UINT32_(0xF) << SUPC_SMMR_SMTH_Pos)                /* (SUPC_SMMR) Supply Monitor Threshold Mask */
#define SUPC_SMMR_SMTH(value)                 (SUPC_SMMR_SMTH_Msk & (_UINT32_(value) << SUPC_SMMR_SMTH_Pos)) /* Assigment of value for SMTH in the SUPC_SMMR register */
#define   SUPC_SMMR_SMTH_V1P6_Val             _UINT32_(0x0)                                        /* (SUPC_SMMR) 1.6 V  */
#define   SUPC_SMMR_SMTH_V1P72_Val            _UINT32_(0x1)                                        /* (SUPC_SMMR) 1.72 V  */
#define   SUPC_SMMR_SMTH_V1P84_Val            _UINT32_(0x2)                                        /* (SUPC_SMMR) 1.84 V  */
#define   SUPC_SMMR_SMTH_V1P96_Val            _UINT32_(0x3)                                        /* (SUPC_SMMR) 1.96 V  */
#define   SUPC_SMMR_SMTH_V2P08_Val            _UINT32_(0x4)                                        /* (SUPC_SMMR) 2.08 V  */
#define   SUPC_SMMR_SMTH_V2P2_Val             _UINT32_(0x5)                                        /* (SUPC_SMMR) 2.2 V  */
#define   SUPC_SMMR_SMTH_V2P32_Val            _UINT32_(0x6)                                        /* (SUPC_SMMR) 2.32 V  */
#define   SUPC_SMMR_SMTH_V2P44_Val            _UINT32_(0x7)                                        /* (SUPC_SMMR) 2.44 V  */
#define   SUPC_SMMR_SMTH_V2P56_Val            _UINT32_(0x8)                                        /* (SUPC_SMMR) 2.56 V  */
#define   SUPC_SMMR_SMTH_V2P68_Val            _UINT32_(0x9)                                        /* (SUPC_SMMR) 2.68 V  */
#define   SUPC_SMMR_SMTH_V2P8_Val             _UINT32_(0xA)                                        /* (SUPC_SMMR) 2.8 V  */
#define   SUPC_SMMR_SMTH_V2P92_Val            _UINT32_(0xB)                                        /* (SUPC_SMMR) 2.92 V  */
#define   SUPC_SMMR_SMTH_V3P04_Val            _UINT32_(0xC)                                        /* (SUPC_SMMR) 3.04 V  */
#define   SUPC_SMMR_SMTH_V3P16_Val            _UINT32_(0xD)                                        /* (SUPC_SMMR) 3.16 V  */
#define   SUPC_SMMR_SMTH_V3P28_Val            _UINT32_(0xE)                                        /* (SUPC_SMMR) 3.28 V  */
#define   SUPC_SMMR_SMTH_V3P4_Val             _UINT32_(0xF)                                        /* (SUPC_SMMR) 3.4 V  */
#define SUPC_SMMR_SMTH_V1P6                   (SUPC_SMMR_SMTH_V1P6_Val << SUPC_SMMR_SMTH_Pos)      /* (SUPC_SMMR) 1.6 V Position  */
#define SUPC_SMMR_SMTH_V1P72                  (SUPC_SMMR_SMTH_V1P72_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 1.72 V Position  */
#define SUPC_SMMR_SMTH_V1P84                  (SUPC_SMMR_SMTH_V1P84_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 1.84 V Position  */
#define SUPC_SMMR_SMTH_V1P96                  (SUPC_SMMR_SMTH_V1P96_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 1.96 V Position  */
#define SUPC_SMMR_SMTH_V2P08                  (SUPC_SMMR_SMTH_V2P08_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.08 V Position  */
#define SUPC_SMMR_SMTH_V2P2                   (SUPC_SMMR_SMTH_V2P2_Val << SUPC_SMMR_SMTH_Pos)      /* (SUPC_SMMR) 2.2 V Position  */
#define SUPC_SMMR_SMTH_V2P32                  (SUPC_SMMR_SMTH_V2P32_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.32 V Position  */
#define SUPC_SMMR_SMTH_V2P44                  (SUPC_SMMR_SMTH_V2P44_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.44 V Position  */
#define SUPC_SMMR_SMTH_V2P56                  (SUPC_SMMR_SMTH_V2P56_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.56 V Position  */
#define SUPC_SMMR_SMTH_V2P68                  (SUPC_SMMR_SMTH_V2P68_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.68 V Position  */
#define SUPC_SMMR_SMTH_V2P8                   (SUPC_SMMR_SMTH_V2P8_Val << SUPC_SMMR_SMTH_Pos)      /* (SUPC_SMMR) 2.8 V Position  */
#define SUPC_SMMR_SMTH_V2P92                  (SUPC_SMMR_SMTH_V2P92_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 2.92 V Position  */
#define SUPC_SMMR_SMTH_V3P04                  (SUPC_SMMR_SMTH_V3P04_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 3.04 V Position  */
#define SUPC_SMMR_SMTH_V3P16                  (SUPC_SMMR_SMTH_V3P16_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 3.16 V Position  */
#define SUPC_SMMR_SMTH_V3P28                  (SUPC_SMMR_SMTH_V3P28_Val << SUPC_SMMR_SMTH_Pos)     /* (SUPC_SMMR) 3.28 V Position  */
#define SUPC_SMMR_SMTH_V3P4                   (SUPC_SMMR_SMTH_V3P4_Val << SUPC_SMMR_SMTH_Pos)      /* (SUPC_SMMR) 3.4 V Position  */
#define SUPC_SMMR_SMSMPL_Pos                  _UINT32_(8)                                          /* (SUPC_SMMR) Supply Monitor Sampling Period Position */
#define SUPC_SMMR_SMSMPL_Msk                  (_UINT32_(0x7) << SUPC_SMMR_SMSMPL_Pos)              /* (SUPC_SMMR) Supply Monitor Sampling Period Mask */
#define SUPC_SMMR_SMSMPL(value)               (SUPC_SMMR_SMSMPL_Msk & (_UINT32_(value) << SUPC_SMMR_SMSMPL_Pos)) /* Assigment of value for SMSMPL in the SUPC_SMMR register */
#define   SUPC_SMMR_SMSMPL_SMD_Val            _UINT32_(0x0)                                        /* (SUPC_SMMR) Supply Monitor disabled  */
#define   SUPC_SMMR_SMSMPL_CSM_Val            _UINT32_(0x1)                                        /* (SUPC_SMMR) Continuous Supply Monitor  */
#define   SUPC_SMMR_SMSMPL_32SLCK_Val         _UINT32_(0x2)                                        /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_256SLCK_Val        _UINT32_(0x3)                                        /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_2048SLCK_Val       _UINT32_(0x4)                                        /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods  */
#define SUPC_SMMR_SMSMPL_SMD                  (SUPC_SMMR_SMSMPL_SMD_Val << SUPC_SMMR_SMSMPL_Pos)   /* (SUPC_SMMR) Supply Monitor disabled Position  */
#define SUPC_SMMR_SMSMPL_CSM                  (SUPC_SMMR_SMSMPL_CSM_Val << SUPC_SMMR_SMSMPL_Pos)   /* (SUPC_SMMR) Continuous Supply Monitor Position  */
#define SUPC_SMMR_SMSMPL_32SLCK               (SUPC_SMMR_SMSMPL_32SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_256SLCK              (SUPC_SMMR_SMSMPL_256SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_2048SLCK             (SUPC_SMMR_SMSMPL_2048SLCK_Val << SUPC_SMMR_SMSMPL_Pos) /* (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods Position  */
#define SUPC_SMMR_SMRSTEN_Pos                 _UINT32_(12)                                         /* (SUPC_SMMR) Supply Monitor Reset Enable Position */
#define SUPC_SMMR_SMRSTEN_Msk                 (_UINT32_(0x1) << SUPC_SMMR_SMRSTEN_Pos)             /* (SUPC_SMMR) Supply Monitor Reset Enable Mask */
#define SUPC_SMMR_SMRSTEN(value)              (SUPC_SMMR_SMRSTEN_Msk & (_UINT32_(value) << SUPC_SMMR_SMRSTEN_Pos)) /* Assigment of value for SMRSTEN in the SUPC_SMMR register */
#define   SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val    _UINT32_(0x0)                                        /* (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMRSTEN_ENABLE_Val        _UINT32_(0x1)                                        /* (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMRSTEN_NOT_ENABLE          (SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos) /* (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMRSTEN_ENABLE              (SUPC_SMMR_SMRSTEN_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos) /* (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_Pos                   _UINT32_(13)                                         /* (SUPC_SMMR) Supply Monitor Interrupt Enable Position */
#define SUPC_SMMR_SMIEN_Msk                   (_UINT32_(0x1) << SUPC_SMMR_SMIEN_Pos)               /* (SUPC_SMMR) Supply Monitor Interrupt Enable Mask */
#define SUPC_SMMR_SMIEN(value)                (SUPC_SMMR_SMIEN_Msk & (_UINT32_(value) << SUPC_SMMR_SMIEN_Pos)) /* Assigment of value for SMIEN in the SUPC_SMMR register */
#define   SUPC_SMMR_SMIEN_NOT_ENABLE_Val      _UINT32_(0x0)                                        /* (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMIEN_ENABLE_Val          _UINT32_(0x1)                                        /* (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMIEN_NOT_ENABLE            (SUPC_SMMR_SMIEN_NOT_ENABLE_Val << SUPC_SMMR_SMIEN_Pos) /* (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_ENABLE                (SUPC_SMMR_SMIEN_ENABLE_Val << SUPC_SMMR_SMIEN_Pos)  /* (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_Msk                         _UINT32_(0x0000370F)                                 /* (SUPC_SMMR) Register Mask  */


/* -------- SUPC_MR : (SUPC Offset: 0x08) (R/W 32) Supply Controller Mode Register -------- */
#define SUPC_MR_BODRSTEN_Pos                  _UINT32_(12)                                         /* (SUPC_MR) POR Core Reset Enable Position */
#define SUPC_MR_BODRSTEN_Msk                  (_UINT32_(0x1) << SUPC_MR_BODRSTEN_Pos)              /* (SUPC_MR) POR Core Reset Enable Mask */
#define SUPC_MR_BODRSTEN(value)               (SUPC_MR_BODRSTEN_Msk & (_UINT32_(value) << SUPC_MR_BODRSTEN_Pos)) /* Assigment of value for BODRSTEN in the SUPC_MR register */
#define   SUPC_MR_BODRSTEN_NOT_ENABLE_Val     _UINT32_(0x0)                                        /* (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs.  */
#define   SUPC_MR_BODRSTEN_ENABLE_Val         _UINT32_(0x1)                                        /* (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs.  */
#define SUPC_MR_BODRSTEN_NOT_ENABLE           (SUPC_MR_BODRSTEN_NOT_ENABLE_Val << SUPC_MR_BODRSTEN_Pos) /* (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs. Position  */
#define SUPC_MR_BODRSTEN_ENABLE               (SUPC_MR_BODRSTEN_ENABLE_Val << SUPC_MR_BODRSTEN_Pos) /* (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs. Position  */
#define SUPC_MR_BODDIS_Pos                    _UINT32_(13)                                         /* (SUPC_MR) POR Core Disable Position */
#define SUPC_MR_BODDIS_Msk                    (_UINT32_(0x1) << SUPC_MR_BODDIS_Pos)                /* (SUPC_MR) POR Core Disable Mask */
#define SUPC_MR_BODDIS(value)                 (SUPC_MR_BODDIS_Msk & (_UINT32_(value) << SUPC_MR_BODDIS_Pos)) /* Assigment of value for BODDIS in the SUPC_MR register */
#define   SUPC_MR_BODDIS_ENABLE_Val           _UINT32_(0x0)                                        /* (SUPC_MR) The core brownout detector is enabled.  */
#define   SUPC_MR_BODDIS_DISABLE_Val          _UINT32_(0x1)                                        /* (SUPC_MR) The core brownout detector is disabled.  */
#define SUPC_MR_BODDIS_ENABLE                 (SUPC_MR_BODDIS_ENABLE_Val << SUPC_MR_BODDIS_Pos)    /* (SUPC_MR) The core brownout detector is enabled. Position  */
#define SUPC_MR_BODDIS_DISABLE                (SUPC_MR_BODDIS_DISABLE_Val << SUPC_MR_BODDIS_Pos)   /* (SUPC_MR) The core brownout detector is disabled. Position  */
#define SUPC_MR_OSCBYPASS_Pos                 _UINT32_(20)                                         /* (SUPC_MR) Oscillator Bypass Position */
#define SUPC_MR_OSCBYPASS_Msk                 (_UINT32_(0x1) << SUPC_MR_OSCBYPASS_Pos)             /* (SUPC_MR) Oscillator Bypass Mask */
#define SUPC_MR_OSCBYPASS(value)              (SUPC_MR_OSCBYPASS_Msk & (_UINT32_(value) << SUPC_MR_OSCBYPASS_Pos)) /* Assigment of value for OSCBYPASS in the SUPC_MR register */
#define   SUPC_MR_OSCBYPASS_NO_EFFECT_Val     _UINT32_(0x0)                                        /* (SUPC_MR) No effect. Clock selection depends on XTALSEL value.  */
#define   SUPC_MR_OSCBYPASS_BYPASS_Val        _UINT32_(0x1)                                        /* (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1.  */
#define SUPC_MR_OSCBYPASS_NO_EFFECT           (SUPC_MR_OSCBYPASS_NO_EFFECT_Val << SUPC_MR_OSCBYPASS_Pos) /* (SUPC_MR) No effect. Clock selection depends on XTALSEL value. Position  */
#define SUPC_MR_OSCBYPASS_BYPASS              (SUPC_MR_OSCBYPASS_BYPASS_Val << SUPC_MR_OSCBYPASS_Pos) /* (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1. Position  */
#define SUPC_MR_PSWITCH1_Pos                  _UINT32_(22)                                         /* (SUPC_MR) SRAM1 Power Switch Position */
#define SUPC_MR_PSWITCH1_Msk                  (_UINT32_(0x1) << SUPC_MR_PSWITCH1_Pos)              /* (SUPC_MR) SRAM1 Power Switch Mask */
#define SUPC_MR_PSWITCH1(value)               (SUPC_MR_PSWITCH1_Msk & (_UINT32_(value) << SUPC_MR_PSWITCH1_Pos)) /* Assigment of value for PSWITCH1 in the SUPC_MR register */
#define   SUPC_MR_PSWITCH1_OFF_Val            _UINT32_(0x0)                                        /* (SUPC_MR) The SRAM1 is not powered.  */
#define   SUPC_MR_PSWITCH1_ON_Val             _UINT32_(0x1)                                        /* (SUPC_MR) The SRAM1 is powered.  */
#define SUPC_MR_PSWITCH1_OFF                  (SUPC_MR_PSWITCH1_OFF_Val << SUPC_MR_PSWITCH1_Pos)   /* (SUPC_MR) The SRAM1 is not powered. Position  */
#define SUPC_MR_PSWITCH1_ON                   (SUPC_MR_PSWITCH1_ON_Val << SUPC_MR_PSWITCH1_Pos)    /* (SUPC_MR) The SRAM1 is powered. Position  */
#define SUPC_MR_PSWITCH2_Pos                  _UINT32_(23)                                         /* (SUPC_MR) SRAM2 Power Switch Position */
#define SUPC_MR_PSWITCH2_Msk                  (_UINT32_(0x1) << SUPC_MR_PSWITCH2_Pos)              /* (SUPC_MR) SRAM2 Power Switch Mask */
#define SUPC_MR_PSWITCH2(value)               (SUPC_MR_PSWITCH2_Msk & (_UINT32_(value) << SUPC_MR_PSWITCH2_Pos)) /* Assigment of value for PSWITCH2 in the SUPC_MR register */
#define   SUPC_MR_PSWITCH2_OFF_Val            _UINT32_(0x0)                                        /* (SUPC_MR) The SRAM2 is not powered.  */
#define   SUPC_MR_PSWITCH2_ON_Val             _UINT32_(0x1)                                        /* (SUPC_MR) The SRAM2 is powered.  */
#define SUPC_MR_PSWITCH2_OFF                  (SUPC_MR_PSWITCH2_OFF_Val << SUPC_MR_PSWITCH2_Pos)   /* (SUPC_MR) The SRAM2 is not powered. Position  */
#define SUPC_MR_PSWITCH2_ON                   (SUPC_MR_PSWITCH2_ON_Val << SUPC_MR_PSWITCH2_Pos)    /* (SUPC_MR) The SRAM2 is powered. Position  */
#define SUPC_MR_KEY_Pos                       _UINT32_(24)                                         /* (SUPC_MR) Password Key Position */
#define SUPC_MR_KEY_Msk                       (_UINT32_(0xFF) << SUPC_MR_KEY_Pos)                  /* (SUPC_MR) Password Key Mask */
#define SUPC_MR_KEY(value)                    (SUPC_MR_KEY_Msk & (_UINT32_(value) << SUPC_MR_KEY_Pos)) /* Assigment of value for KEY in the SUPC_MR register */
#define   SUPC_MR_KEY_PASSWD_Val              _UINT32_(0xA5)                                       /* (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_MR_KEY_PASSWD                    (SUPC_MR_KEY_PASSWD_Val << SUPC_MR_KEY_Pos)          /* (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_MR_Msk                           _UINT32_(0xFFD03000)                                 /* (SUPC_MR) Register Mask  */

#define SUPC_MR_PSWITCH_Pos                   _UINT32_(22)                                         /* (SUPC_MR Position) SRAMx Power Switch */
#define SUPC_MR_PSWITCH_Msk                   (_UINT32_(0x3) << SUPC_MR_PSWITCH_Pos)               /* (SUPC_MR Mask) PSWITCH */
#define SUPC_MR_PSWITCH(value)                (SUPC_MR_PSWITCH_Msk & (_UINT32_(value) << SUPC_MR_PSWITCH_Pos)) 

/* -------- SUPC_SR : (SUPC Offset: 0x14) ( R/ 32) Supply Controller Status Register -------- */
#define SUPC_SR_BODRSTS_Pos                   _UINT32_(3)                                          /* (SUPC_SR) Brownout Detector Reset Status (cleared on read) Position */
#define SUPC_SR_BODRSTS_Msk                   (_UINT32_(0x1) << SUPC_SR_BODRSTS_Pos)               /* (SUPC_SR) Brownout Detector Reset Status (cleared on read) Mask */
#define SUPC_SR_BODRSTS(value)                (SUPC_SR_BODRSTS_Msk & (_UINT32_(value) << SUPC_SR_BODRSTS_Pos)) /* Assigment of value for BODRSTS in the SUPC_SR register */
#define   SUPC_SR_BODRSTS_NO_Val              _UINT32_(0x0)                                        /* (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR.  */
#define   SUPC_SR_BODRSTS_PRESENT_Val         _UINT32_(0x1)                                        /* (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR.  */
#define SUPC_SR_BODRSTS_NO                    (SUPC_SR_BODRSTS_NO_Val << SUPC_SR_BODRSTS_Pos)      /* (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_BODRSTS_PRESENT               (SUPC_SR_BODRSTS_PRESENT_Val << SUPC_SR_BODRSTS_Pos) /* (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_Pos                    _UINT32_(4)                                          /* (SUPC_SR) Supply Monitor Reset Status (cleared on read) Position */
#define SUPC_SR_SMRSTS_Msk                    (_UINT32_(0x1) << SUPC_SR_SMRSTS_Pos)                /* (SUPC_SR) Supply Monitor Reset Status (cleared on read) Mask */
#define SUPC_SR_SMRSTS(value)                 (SUPC_SR_SMRSTS_Msk & (_UINT32_(value) << SUPC_SR_SMRSTS_Pos)) /* Assigment of value for SMRSTS in the SUPC_SR register */
#define   SUPC_SR_SMRSTS_NO_Val               _UINT32_(0x0)                                        /* (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define   SUPC_SR_SMRSTS_PRESENT_Val          _UINT32_(0x1)                                        /* (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define SUPC_SR_SMRSTS_NO                     (SUPC_SR_SMRSTS_NO_Val << SUPC_SR_SMRSTS_Pos)        /* (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_PRESENT                (SUPC_SR_SMRSTS_PRESENT_Val << SUPC_SR_SMRSTS_Pos)   /* (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_Pos                       _UINT32_(5)                                          /* (SUPC_SR) Supply Monitor Status (cleared on read) Position */
#define SUPC_SR_SMS_Msk                       (_UINT32_(0x1) << SUPC_SR_SMS_Pos)                   /* (SUPC_SR) Supply Monitor Status (cleared on read) Mask */
#define SUPC_SR_SMS(value)                    (SUPC_SR_SMS_Msk & (_UINT32_(value) << SUPC_SR_SMS_Pos)) /* Assigment of value for SMS in the SUPC_SR register */
#define   SUPC_SR_SMS_NO_Val                  _UINT32_(0x0)                                        /* (SUPC_SR) No supply monitor detection since the last read of SUPC_SR.  */
#define   SUPC_SR_SMS_PRESENT_Val             _UINT32_(0x1)                                        /* (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR.  */
#define SUPC_SR_SMS_NO                        (SUPC_SR_SMS_NO_Val << SUPC_SR_SMS_Pos)              /* (SUPC_SR) No supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_PRESENT                   (SUPC_SR_SMS_PRESENT_Val << SUPC_SR_SMS_Pos)         /* (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMOS_Pos                      _UINT32_(6)                                          /* (SUPC_SR) Supply Monitor Output Status Position */
#define SUPC_SR_SMOS_Msk                      (_UINT32_(0x1) << SUPC_SR_SMOS_Pos)                  /* (SUPC_SR) Supply Monitor Output Status Mask */
#define SUPC_SR_SMOS(value)                   (SUPC_SR_SMOS_Msk & (_UINT32_(value) << SUPC_SR_SMOS_Pos)) /* Assigment of value for SMOS in the SUPC_SR register */
#define   SUPC_SR_SMOS_HIGH_Val               _UINT32_(0x0)                                        /* (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement.  */
#define   SUPC_SR_SMOS_LOW_Val                _UINT32_(0x1)                                        /* (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement.  */
#define SUPC_SR_SMOS_HIGH                     (SUPC_SR_SMOS_HIGH_Val << SUPC_SR_SMOS_Pos)          /* (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement. Position  */
#define SUPC_SR_SMOS_LOW                      (SUPC_SR_SMOS_LOW_Val << SUPC_SR_SMOS_Pos)           /* (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement. Position  */
#define SUPC_SR_OSCSEL_Pos                    _UINT32_(7)                                          /* (SUPC_SR) 32-kHz Oscillator Selection Status Position */
#define SUPC_SR_OSCSEL_Msk                    (_UINT32_(0x1) << SUPC_SR_OSCSEL_Pos)                /* (SUPC_SR) 32-kHz Oscillator Selection Status Mask */
#define SUPC_SR_OSCSEL(value)                 (SUPC_SR_OSCSEL_Msk & (_UINT32_(value) << SUPC_SR_OSCSEL_Pos)) /* Assigment of value for OSCSEL in the SUPC_SR register */
#define   SUPC_SR_OSCSEL_RC_Val               _UINT32_(0x0)                                        /* (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator.  */
#define   SUPC_SR_OSCSEL_CRYST_Val            _UINT32_(0x1)                                        /* (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator.  */
#define SUPC_SR_OSCSEL_RC                     (SUPC_SR_OSCSEL_RC_Val << SUPC_SR_OSCSEL_Pos)        /* (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator. Position  */
#define SUPC_SR_OSCSEL_CRYST                  (SUPC_SR_OSCSEL_CRYST_Val << SUPC_SR_OSCSEL_Pos)     /* (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator. Position  */
#define SUPC_SR_Msk                           _UINT32_(0x000000F8)                                 /* (SUPC_SR) Register Mask  */


/** \brief SUPC register offsets definitions */
#define SUPC_CR_REG_OFST               _UINT32_(0x00)      /* (SUPC_CR) Supply Controller Control Register Offset */
#define SUPC_SMMR_REG_OFST             _UINT32_(0x04)      /* (SUPC_SMMR) Supply Controller Supply Monitor Mode Register Offset */
#define SUPC_MR_REG_OFST               _UINT32_(0x08)      /* (SUPC_MR) Supply Controller Mode Register Offset */
#define SUPC_SR_REG_OFST               _UINT32_(0x14)      /* (SUPC_SR) Supply Controller Status Register Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief SUPC register API structure */
typedef struct
{
  __O   uint32_t                       SUPC_CR;            /**< Offset: 0x00 ( /W  32) Supply Controller Control Register */
  __IO  uint32_t                       SUPC_SMMR;          /**< Offset: 0x04 (R/W  32) Supply Controller Supply Monitor Mode Register */
  __IO  uint32_t                       SUPC_MR;            /**< Offset: 0x08 (R/W  32) Supply Controller Mode Register */
  __I   uint8_t                        Reserved1[0x08];
  __I   uint32_t                       SUPC_SR;            /**< Offset: 0x14 (R/   32) Supply Controller Status Register */
} supc_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMG53_SUPC_COMPONENT_H_ */

/*
 * Component description for MCLK
 *
 * Copyright (c) 2022 Microchip Technology Inc. and its subsidiaries.
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

/* file generated from device description version 2021-07-05T12:48:26Z */
#ifndef _WLR089_MCLK_COMPONENT_H_
#define _WLR089_MCLK_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR MCLK                                         */
/* ************************************************************************** */

/* -------- MCLK_CTRLA : (MCLK Offset: 0x00) (R/W 8) Control A -------- */
#define MCLK_CTRLA_RESETVALUE                 _UINT8_(0x00)                                        /*  (MCLK_CTRLA) Control A  Reset Value */

#define MCLK_CTRLA_Msk                        _UINT8_(0x00)                                        /* (MCLK_CTRLA) Register Mask  */


/* -------- MCLK_INTENCLR : (MCLK Offset: 0x01) (R/W 8) Interrupt Enable Clear -------- */
#define MCLK_INTENCLR_RESETVALUE              _UINT8_(0x00)                                        /*  (MCLK_INTENCLR) Interrupt Enable Clear  Reset Value */

#define MCLK_INTENCLR_CKRDY_Pos               _UINT8_(0)                                           /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Position */
#define MCLK_INTENCLR_CKRDY_Msk               (_UINT8_(0x1) << MCLK_INTENCLR_CKRDY_Pos)            /* (MCLK_INTENCLR) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENCLR_CKRDY(value)            (MCLK_INTENCLR_CKRDY_Msk & (_UINT8_(value) << MCLK_INTENCLR_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTENCLR register */
#define MCLK_INTENCLR_Msk                     _UINT8_(0x01)                                        /* (MCLK_INTENCLR) Register Mask  */


/* -------- MCLK_INTENSET : (MCLK Offset: 0x02) (R/W 8) Interrupt Enable Set -------- */
#define MCLK_INTENSET_RESETVALUE              _UINT8_(0x00)                                        /*  (MCLK_INTENSET) Interrupt Enable Set  Reset Value */

#define MCLK_INTENSET_CKRDY_Pos               _UINT8_(0)                                           /* (MCLK_INTENSET) Clock Ready Interrupt Enable Position */
#define MCLK_INTENSET_CKRDY_Msk               (_UINT8_(0x1) << MCLK_INTENSET_CKRDY_Pos)            /* (MCLK_INTENSET) Clock Ready Interrupt Enable Mask */
#define MCLK_INTENSET_CKRDY(value)            (MCLK_INTENSET_CKRDY_Msk & (_UINT8_(value) << MCLK_INTENSET_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTENSET register */
#define MCLK_INTENSET_Msk                     _UINT8_(0x01)                                        /* (MCLK_INTENSET) Register Mask  */


/* -------- MCLK_INTFLAG : (MCLK Offset: 0x03) (R/W 8) Interrupt Flag Status and Clear -------- */
#define MCLK_INTFLAG_RESETVALUE               _UINT8_(0x01)                                        /*  (MCLK_INTFLAG) Interrupt Flag Status and Clear  Reset Value */

#define MCLK_INTFLAG_CKRDY_Pos                _UINT8_(0)                                           /* (MCLK_INTFLAG) Clock Ready Position */
#define MCLK_INTFLAG_CKRDY_Msk                (_UINT8_(0x1) << MCLK_INTFLAG_CKRDY_Pos)             /* (MCLK_INTFLAG) Clock Ready Mask */
#define MCLK_INTFLAG_CKRDY(value)             (MCLK_INTFLAG_CKRDY_Msk & (_UINT8_(value) << MCLK_INTFLAG_CKRDY_Pos)) /* Assigment of value for CKRDY in the MCLK_INTFLAG register */
#define MCLK_INTFLAG_Msk                      _UINT8_(0x01)                                        /* (MCLK_INTFLAG) Register Mask  */


/* -------- MCLK_CPUDIV : (MCLK Offset: 0x04) (R/W 8) CPU Clock Division -------- */
#define MCLK_CPUDIV_RESETVALUE                _UINT8_(0x01)                                        /*  (MCLK_CPUDIV) CPU Clock Division  Reset Value */

#define MCLK_CPUDIV_CPUDIV_Pos                _UINT8_(0)                                           /* (MCLK_CPUDIV) CPU Clock Division Factor Position */
#define MCLK_CPUDIV_CPUDIV_Msk                (_UINT8_(0xFF) << MCLK_CPUDIV_CPUDIV_Pos)            /* (MCLK_CPUDIV) CPU Clock Division Factor Mask */
#define MCLK_CPUDIV_CPUDIV(value)             (MCLK_CPUDIV_CPUDIV_Msk & (_UINT8_(value) << MCLK_CPUDIV_CPUDIV_Pos)) /* Assigment of value for CPUDIV in the MCLK_CPUDIV register */
#define   MCLK_CPUDIV_CPUDIV_DIV1_Val         _UINT8_(0x1)                                         /* (MCLK_CPUDIV) Divide by 1  */
#define   MCLK_CPUDIV_CPUDIV_DIV2_Val         _UINT8_(0x2)                                         /* (MCLK_CPUDIV) Divide by 2  */
#define   MCLK_CPUDIV_CPUDIV_DIV4_Val         _UINT8_(0x4)                                         /* (MCLK_CPUDIV) Divide by 4  */
#define   MCLK_CPUDIV_CPUDIV_DIV8_Val         _UINT8_(0x8)                                         /* (MCLK_CPUDIV) Divide by 8  */
#define   MCLK_CPUDIV_CPUDIV_DIV16_Val        _UINT8_(0x10)                                        /* (MCLK_CPUDIV) Divide by 16  */
#define   MCLK_CPUDIV_CPUDIV_DIV32_Val        _UINT8_(0x20)                                        /* (MCLK_CPUDIV) Divide by 32  */
#define   MCLK_CPUDIV_CPUDIV_DIV64_Val        _UINT8_(0x40)                                        /* (MCLK_CPUDIV) Divide by 64  */
#define   MCLK_CPUDIV_CPUDIV_DIV128_Val       _UINT8_(0x80)                                        /* (MCLK_CPUDIV) Divide by 128  */
#define MCLK_CPUDIV_CPUDIV_DIV1               (MCLK_CPUDIV_CPUDIV_DIV1_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 1 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV2               (MCLK_CPUDIV_CPUDIV_DIV2_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 2 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV4               (MCLK_CPUDIV_CPUDIV_DIV4_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 4 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV8               (MCLK_CPUDIV_CPUDIV_DIV8_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 8 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV16              (MCLK_CPUDIV_CPUDIV_DIV16_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 16 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV32              (MCLK_CPUDIV_CPUDIV_DIV32_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 32 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV64              (MCLK_CPUDIV_CPUDIV_DIV64_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 64 Position  */
#define MCLK_CPUDIV_CPUDIV_DIV128             (MCLK_CPUDIV_CPUDIV_DIV128_Val << MCLK_CPUDIV_CPUDIV_Pos) /* (MCLK_CPUDIV) Divide by 128 Position  */
#define MCLK_CPUDIV_Msk                       _UINT8_(0xFF)                                        /* (MCLK_CPUDIV) Register Mask  */


/* -------- MCLK_LPDIV : (MCLK Offset: 0x05) (R/W 8) Low-Power Clock Division -------- */
#define MCLK_LPDIV_RESETVALUE                 _UINT8_(0x01)                                        /*  (MCLK_LPDIV) Low-Power Clock Division  Reset Value */

#define MCLK_LPDIV_LPDIV_Pos                  _UINT8_(0)                                           /* (MCLK_LPDIV) Low-Power Clock Division Factor Position */
#define MCLK_LPDIV_LPDIV_Msk                  (_UINT8_(0xFF) << MCLK_LPDIV_LPDIV_Pos)              /* (MCLK_LPDIV) Low-Power Clock Division Factor Mask */
#define MCLK_LPDIV_LPDIV(value)               (MCLK_LPDIV_LPDIV_Msk & (_UINT8_(value) << MCLK_LPDIV_LPDIV_Pos)) /* Assigment of value for LPDIV in the MCLK_LPDIV register */
#define   MCLK_LPDIV_LPDIV_DIV1_Val           _UINT8_(0x1)                                         /* (MCLK_LPDIV) Divide by 1  */
#define   MCLK_LPDIV_LPDIV_DIV2_Val           _UINT8_(0x2)                                         /* (MCLK_LPDIV) Divide by 2  */
#define   MCLK_LPDIV_LPDIV_DIV4_Val           _UINT8_(0x4)                                         /* (MCLK_LPDIV) Divide by 4  */
#define   MCLK_LPDIV_LPDIV_DIV8_Val           _UINT8_(0x8)                                         /* (MCLK_LPDIV) Divide by 8  */
#define   MCLK_LPDIV_LPDIV_DIV16_Val          _UINT8_(0x10)                                        /* (MCLK_LPDIV) Divide by 16  */
#define   MCLK_LPDIV_LPDIV_DIV32_Val          _UINT8_(0x20)                                        /* (MCLK_LPDIV) Divide by 32  */
#define   MCLK_LPDIV_LPDIV_DIV64_Val          _UINT8_(0x40)                                        /* (MCLK_LPDIV) Divide by 64  */
#define   MCLK_LPDIV_LPDIV_DIV128_Val         _UINT8_(0x80)                                        /* (MCLK_LPDIV) Divide by 128  */
#define MCLK_LPDIV_LPDIV_DIV1                 (MCLK_LPDIV_LPDIV_DIV1_Val << MCLK_LPDIV_LPDIV_Pos)  /* (MCLK_LPDIV) Divide by 1 Position  */
#define MCLK_LPDIV_LPDIV_DIV2                 (MCLK_LPDIV_LPDIV_DIV2_Val << MCLK_LPDIV_LPDIV_Pos)  /* (MCLK_LPDIV) Divide by 2 Position  */
#define MCLK_LPDIV_LPDIV_DIV4                 (MCLK_LPDIV_LPDIV_DIV4_Val << MCLK_LPDIV_LPDIV_Pos)  /* (MCLK_LPDIV) Divide by 4 Position  */
#define MCLK_LPDIV_LPDIV_DIV8                 (MCLK_LPDIV_LPDIV_DIV8_Val << MCLK_LPDIV_LPDIV_Pos)  /* (MCLK_LPDIV) Divide by 8 Position  */
#define MCLK_LPDIV_LPDIV_DIV16                (MCLK_LPDIV_LPDIV_DIV16_Val << MCLK_LPDIV_LPDIV_Pos) /* (MCLK_LPDIV) Divide by 16 Position  */
#define MCLK_LPDIV_LPDIV_DIV32                (MCLK_LPDIV_LPDIV_DIV32_Val << MCLK_LPDIV_LPDIV_Pos) /* (MCLK_LPDIV) Divide by 32 Position  */
#define MCLK_LPDIV_LPDIV_DIV64                (MCLK_LPDIV_LPDIV_DIV64_Val << MCLK_LPDIV_LPDIV_Pos) /* (MCLK_LPDIV) Divide by 64 Position  */
#define MCLK_LPDIV_LPDIV_DIV128               (MCLK_LPDIV_LPDIV_DIV128_Val << MCLK_LPDIV_LPDIV_Pos) /* (MCLK_LPDIV) Divide by 128 Position  */
#define MCLK_LPDIV_Msk                        _UINT8_(0xFF)                                        /* (MCLK_LPDIV) Register Mask  */


/* -------- MCLK_BUPDIV : (MCLK Offset: 0x06) (R/W 8) Backup Clock Division -------- */
#define MCLK_BUPDIV_RESETVALUE                _UINT8_(0x01)                                        /*  (MCLK_BUPDIV) Backup Clock Division  Reset Value */

#define MCLK_BUPDIV_BUPDIV_Pos                _UINT8_(0)                                           /* (MCLK_BUPDIV) Backup Clock Division Factor Position */
#define MCLK_BUPDIV_BUPDIV_Msk                (_UINT8_(0xFF) << MCLK_BUPDIV_BUPDIV_Pos)            /* (MCLK_BUPDIV) Backup Clock Division Factor Mask */
#define MCLK_BUPDIV_BUPDIV(value)             (MCLK_BUPDIV_BUPDIV_Msk & (_UINT8_(value) << MCLK_BUPDIV_BUPDIV_Pos)) /* Assigment of value for BUPDIV in the MCLK_BUPDIV register */
#define   MCLK_BUPDIV_BUPDIV_DIV1_Val         _UINT8_(0x1)                                         /* (MCLK_BUPDIV) Divide by 1  */
#define   MCLK_BUPDIV_BUPDIV_DIV2_Val         _UINT8_(0x2)                                         /* (MCLK_BUPDIV) Divide by 2  */
#define   MCLK_BUPDIV_BUPDIV_DIV4_Val         _UINT8_(0x4)                                         /* (MCLK_BUPDIV) Divide by 4  */
#define   MCLK_BUPDIV_BUPDIV_DIV8_Val         _UINT8_(0x8)                                         /* (MCLK_BUPDIV) Divide by 8  */
#define   MCLK_BUPDIV_BUPDIV_DIV16_Val        _UINT8_(0x10)                                        /* (MCLK_BUPDIV) Divide by 16  */
#define   MCLK_BUPDIV_BUPDIV_DIV32_Val        _UINT8_(0x20)                                        /* (MCLK_BUPDIV) Divide by 32  */
#define   MCLK_BUPDIV_BUPDIV_DIV64_Val        _UINT8_(0x40)                                        /* (MCLK_BUPDIV) Divide by 64  */
#define   MCLK_BUPDIV_BUPDIV_DIV128_Val       _UINT8_(0x80)                                        /* (MCLK_BUPDIV) Divide by 128  */
#define MCLK_BUPDIV_BUPDIV_DIV1               (MCLK_BUPDIV_BUPDIV_DIV1_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 1 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV2               (MCLK_BUPDIV_BUPDIV_DIV2_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 2 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV4               (MCLK_BUPDIV_BUPDIV_DIV4_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 4 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV8               (MCLK_BUPDIV_BUPDIV_DIV8_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 8 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV16              (MCLK_BUPDIV_BUPDIV_DIV16_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 16 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV32              (MCLK_BUPDIV_BUPDIV_DIV32_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 32 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV64              (MCLK_BUPDIV_BUPDIV_DIV64_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 64 Position  */
#define MCLK_BUPDIV_BUPDIV_DIV128             (MCLK_BUPDIV_BUPDIV_DIV128_Val << MCLK_BUPDIV_BUPDIV_Pos) /* (MCLK_BUPDIV) Divide by 128 Position  */
#define MCLK_BUPDIV_Msk                       _UINT8_(0xFF)                                        /* (MCLK_BUPDIV) Register Mask  */


/* -------- MCLK_AHBMASK : (MCLK Offset: 0x10) (R/W 32) AHB Mask -------- */
#define MCLK_AHBMASK_RESETVALUE               _UINT32_(0xFFFFF)                                    /*  (MCLK_AHBMASK) AHB Mask  Reset Value */

#define MCLK_AHBMASK_HPB0_Pos                 _UINT32_(0)                                          /* (MCLK_AHBMASK) HPB0 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB0_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB0_Pos)             /* (MCLK_AHBMASK) HPB0 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB0(value)              (MCLK_AHBMASK_HPB0_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB0_Pos)) /* Assigment of value for HPB0 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB1_Pos                 _UINT32_(1)                                          /* (MCLK_AHBMASK) HPB1 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB1_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB1_Pos)             /* (MCLK_AHBMASK) HPB1 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB1(value)              (MCLK_AHBMASK_HPB1_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB1_Pos)) /* Assigment of value for HPB1 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB2_Pos                 _UINT32_(2)                                          /* (MCLK_AHBMASK) HPB2 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB2_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB2_Pos)             /* (MCLK_AHBMASK) HPB2 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB2(value)              (MCLK_AHBMASK_HPB2_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB2_Pos)) /* Assigment of value for HPB2 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB3_Pos                 _UINT32_(3)                                          /* (MCLK_AHBMASK) HPB3 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB3_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB3_Pos)             /* (MCLK_AHBMASK) HPB3 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB3(value)              (MCLK_AHBMASK_HPB3_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB3_Pos)) /* Assigment of value for HPB3 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HPB4_Pos                 _UINT32_(4)                                          /* (MCLK_AHBMASK) HPB4 AHB Clock Mask Position */
#define MCLK_AHBMASK_HPB4_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_HPB4_Pos)             /* (MCLK_AHBMASK) HPB4 AHB Clock Mask Mask */
#define MCLK_AHBMASK_HPB4(value)              (MCLK_AHBMASK_HPB4_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB4_Pos)) /* Assigment of value for HPB4 in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_DSU_Pos                  _UINT32_(5)                                          /* (MCLK_AHBMASK) DSU AHB Clock Mask Position */
#define MCLK_AHBMASK_DSU_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_DSU_Pos)              /* (MCLK_AHBMASK) DSU AHB Clock Mask Mask */
#define MCLK_AHBMASK_DSU(value)               (MCLK_AHBMASK_DSU_Msk & (_UINT32_(value) << MCLK_AHBMASK_DSU_Pos)) /* Assigment of value for DSU in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_NVMCTRL_Pos              _UINT32_(8)                                          /* (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_Msk              (_UINT32_(0x1) << MCLK_AHBMASK_NVMCTRL_Pos)          /* (MCLK_AHBMASK) NVMCTRL AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL(value)           (MCLK_AHBMASK_NVMCTRL_Msk & (_UINT32_(value) << MCLK_AHBMASK_NVMCTRL_Pos)) /* Assigment of value for NVMCTRL in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HSRAM_Pos                _UINT32_(9)                                          /* (MCLK_AHBMASK) HSRAM AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_Msk                (_UINT32_(0x1) << MCLK_AHBMASK_HSRAM_Pos)            /* (MCLK_AHBMASK) HSRAM AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM(value)             (MCLK_AHBMASK_HSRAM_Msk & (_UINT32_(value) << MCLK_AHBMASK_HSRAM_Pos)) /* Assigment of value for HSRAM in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_LPRAM_Pos                _UINT32_(10)                                         /* (MCLK_AHBMASK) LPRAM AHB Clock Mask Position */
#define MCLK_AHBMASK_LPRAM_Msk                (_UINT32_(0x1) << MCLK_AHBMASK_LPRAM_Pos)            /* (MCLK_AHBMASK) LPRAM AHB Clock Mask Mask */
#define MCLK_AHBMASK_LPRAM(value)             (MCLK_AHBMASK_LPRAM_Msk & (_UINT32_(value) << MCLK_AHBMASK_LPRAM_Pos)) /* Assigment of value for LPRAM in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_DMAC_Pos                 _UINT32_(11)                                         /* (MCLK_AHBMASK) DMAC AHB Clock Mask Position */
#define MCLK_AHBMASK_DMAC_Msk                 (_UINT32_(0x1) << MCLK_AHBMASK_DMAC_Pos)             /* (MCLK_AHBMASK) DMAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_DMAC(value)              (MCLK_AHBMASK_DMAC_Msk & (_UINT32_(value) << MCLK_AHBMASK_DMAC_Pos)) /* Assigment of value for DMAC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_USB_Pos                  _UINT32_(12)                                         /* (MCLK_AHBMASK) USB AHB Clock Mask Position */
#define MCLK_AHBMASK_USB_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_USB_Pos)              /* (MCLK_AHBMASK) USB AHB Clock Mask Mask */
#define MCLK_AHBMASK_USB(value)               (MCLK_AHBMASK_USB_Msk & (_UINT32_(value) << MCLK_AHBMASK_USB_Pos)) /* Assigment of value for USB in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_PAC_Pos                  _UINT32_(14)                                         /* (MCLK_AHBMASK) PAC AHB Clock Mask Position */
#define MCLK_AHBMASK_PAC_Msk                  (_UINT32_(0x1) << MCLK_AHBMASK_PAC_Pos)              /* (MCLK_AHBMASK) PAC AHB Clock Mask Mask */
#define MCLK_AHBMASK_PAC(value)               (MCLK_AHBMASK_PAC_Msk & (_UINT32_(value) << MCLK_AHBMASK_PAC_Pos)) /* Assigment of value for PAC in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_NVMCTRL_PICACHU_Pos      _UINT32_(15)                                         /* (MCLK_AHBMASK) NVMCTRL_PICACHU AHB Clock Mask Position */
#define MCLK_AHBMASK_NVMCTRL_PICACHU_Msk      (_UINT32_(0x1) << MCLK_AHBMASK_NVMCTRL_PICACHU_Pos)  /* (MCLK_AHBMASK) NVMCTRL_PICACHU AHB Clock Mask Mask */
#define MCLK_AHBMASK_NVMCTRL_PICACHU(value)   (MCLK_AHBMASK_NVMCTRL_PICACHU_Msk & (_UINT32_(value) << MCLK_AHBMASK_NVMCTRL_PICACHU_Pos)) /* Assigment of value for NVMCTRL_PICACHU in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_L2HBRIDGES_H_Pos         _UINT32_(16)                                         /* (MCLK_AHBMASK) L2HBRIDGES_H AHB Clock Mask Position */
#define MCLK_AHBMASK_L2HBRIDGES_H_Msk         (_UINT32_(0x1) << MCLK_AHBMASK_L2HBRIDGES_H_Pos)     /* (MCLK_AHBMASK) L2HBRIDGES_H AHB Clock Mask Mask */
#define MCLK_AHBMASK_L2HBRIDGES_H(value)      (MCLK_AHBMASK_L2HBRIDGES_H_Msk & (_UINT32_(value) << MCLK_AHBMASK_L2HBRIDGES_H_Pos)) /* Assigment of value for L2HBRIDGES_H in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_H2LBRIDGES_H_Pos         _UINT32_(17)                                         /* (MCLK_AHBMASK) H2LBRIDGES_H AHB Clock Mask Position */
#define MCLK_AHBMASK_H2LBRIDGES_H_Msk         (_UINT32_(0x1) << MCLK_AHBMASK_H2LBRIDGES_H_Pos)     /* (MCLK_AHBMASK) H2LBRIDGES_H AHB Clock Mask Mask */
#define MCLK_AHBMASK_H2LBRIDGES_H(value)      (MCLK_AHBMASK_H2LBRIDGES_H_Msk & (_UINT32_(value) << MCLK_AHBMASK_H2LBRIDGES_H_Pos)) /* Assigment of value for H2LBRIDGES_H in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Pos _UINT32_(18)                                         /* (MCLK_AHBMASK) HSRAM_AHBSETUPKEEPER AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Msk (_UINT32_(0x1) << MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Pos) /* (MCLK_AHBMASK) HSRAM_AHBSETUPKEEPER AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER(value) (MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Msk & (_UINT32_(value) << MCLK_AHBMASK_HSRAM_AHBSETUPKEEPER_Pos)) /* Assigment of value for HSRAM_AHBSETUPKEEPER in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Pos _UINT32_(19)                                         /* (MCLK_AHBMASK) HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE AHB Clock Mask Position */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Msk (_UINT32_(0x1) << MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Pos) /* (MCLK_AHBMASK) HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE AHB Clock Mask Mask */
#define MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE(value) (MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Msk & (_UINT32_(value) << MCLK_AHBMASK_HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE_Pos)) /* Assigment of value for HSRAM_HMATRIXLP2HMCRAMCHSBRIDGE in the MCLK_AHBMASK register */
#define MCLK_AHBMASK_Msk                      _UINT32_(0x000FDF3F)                                 /* (MCLK_AHBMASK) Register Mask  */

#define MCLK_AHBMASK_HPB_Pos                  _UINT32_(0)                                          /* (MCLK_AHBMASK Position) HPBx AHB Clock Mask */
#define MCLK_AHBMASK_HPB_Msk                  (_UINT32_(0x1F) << MCLK_AHBMASK_HPB_Pos)             /* (MCLK_AHBMASK Mask) HPB */
#define MCLK_AHBMASK_HPB(value)               (MCLK_AHBMASK_HPB_Msk & (_UINT32_(value) << MCLK_AHBMASK_HPB_Pos)) 

/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
#define MCLK_APBAMASK_RESETVALUE              _UINT32_(0x1FFF)                                     /*  (MCLK_APBAMASK) APBA Mask  Reset Value */

#define MCLK_APBAMASK_PM_Pos                  _UINT32_(0)                                          /* (MCLK_APBAMASK) PM APB Clock Enable Position */
#define MCLK_APBAMASK_PM_Msk                  (_UINT32_(0x1) << MCLK_APBAMASK_PM_Pos)              /* (MCLK_APBAMASK) PM APB Clock Enable Mask */
#define MCLK_APBAMASK_PM(value)               (MCLK_APBAMASK_PM_Msk & (_UINT32_(value) << MCLK_APBAMASK_PM_Pos)) /* Assigment of value for PM in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_MCLK_Pos                _UINT32_(1)                                          /* (MCLK_APBAMASK) MCLK APB Clock Enable Position */
#define MCLK_APBAMASK_MCLK_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_MCLK_Pos)            /* (MCLK_APBAMASK) MCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_MCLK(value)             (MCLK_APBAMASK_MCLK_Msk & (_UINT32_(value) << MCLK_APBAMASK_MCLK_Pos)) /* Assigment of value for MCLK in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_RSTC_Pos                _UINT32_(2)                                          /* (MCLK_APBAMASK) RSTC APB Clock Enable Position */
#define MCLK_APBAMASK_RSTC_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_RSTC_Pos)            /* (MCLK_APBAMASK) RSTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RSTC(value)             (MCLK_APBAMASK_RSTC_Msk & (_UINT32_(value) << MCLK_APBAMASK_RSTC_Pos)) /* Assigment of value for RSTC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_OSCCTRL_Pos             _UINT32_(3)                                          /* (MCLK_APBAMASK) OSCCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSCCTRL_Msk             (_UINT32_(0x1) << MCLK_APBAMASK_OSCCTRL_Pos)         /* (MCLK_APBAMASK) OSCCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSCCTRL(value)          (MCLK_APBAMASK_OSCCTRL_Msk & (_UINT32_(value) << MCLK_APBAMASK_OSCCTRL_Pos)) /* Assigment of value for OSCCTRL in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_OSC32KCTRL_Pos          _UINT32_(4)                                          /* (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Position */
#define MCLK_APBAMASK_OSC32KCTRL_Msk          (_UINT32_(0x1) << MCLK_APBAMASK_OSC32KCTRL_Pos)      /* (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable Mask */
#define MCLK_APBAMASK_OSC32KCTRL(value)       (MCLK_APBAMASK_OSC32KCTRL_Msk & (_UINT32_(value) << MCLK_APBAMASK_OSC32KCTRL_Pos)) /* Assigment of value for OSC32KCTRL in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_SUPC_Pos                _UINT32_(5)                                          /* (MCLK_APBAMASK) SUPC APB Clock Enable Position */
#define MCLK_APBAMASK_SUPC_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_SUPC_Pos)            /* (MCLK_APBAMASK) SUPC APB Clock Enable Mask */
#define MCLK_APBAMASK_SUPC(value)             (MCLK_APBAMASK_SUPC_Msk & (_UINT32_(value) << MCLK_APBAMASK_SUPC_Pos)) /* Assigment of value for SUPC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_GCLK_Pos                _UINT32_(6)                                          /* (MCLK_APBAMASK) GCLK APB Clock Enable Position */
#define MCLK_APBAMASK_GCLK_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_GCLK_Pos)            /* (MCLK_APBAMASK) GCLK APB Clock Enable Mask */
#define MCLK_APBAMASK_GCLK(value)             (MCLK_APBAMASK_GCLK_Msk & (_UINT32_(value) << MCLK_APBAMASK_GCLK_Pos)) /* Assigment of value for GCLK in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_WDT_Pos                 _UINT32_(7)                                          /* (MCLK_APBAMASK) WDT APB Clock Enable Position */
#define MCLK_APBAMASK_WDT_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_WDT_Pos)             /* (MCLK_APBAMASK) WDT APB Clock Enable Mask */
#define MCLK_APBAMASK_WDT(value)              (MCLK_APBAMASK_WDT_Msk & (_UINT32_(value) << MCLK_APBAMASK_WDT_Pos)) /* Assigment of value for WDT in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_RTC_Pos                 _UINT32_(8)                                          /* (MCLK_APBAMASK) RTC APB Clock Enable Position */
#define MCLK_APBAMASK_RTC_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_RTC_Pos)             /* (MCLK_APBAMASK) RTC APB Clock Enable Mask */
#define MCLK_APBAMASK_RTC(value)              (MCLK_APBAMASK_RTC_Msk & (_UINT32_(value) << MCLK_APBAMASK_RTC_Pos)) /* Assigment of value for RTC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_EIC_Pos                 _UINT32_(9)                                          /* (MCLK_APBAMASK) EIC APB Clock Enable Position */
#define MCLK_APBAMASK_EIC_Msk                 (_UINT32_(0x1) << MCLK_APBAMASK_EIC_Pos)             /* (MCLK_APBAMASK) EIC APB Clock Enable Mask */
#define MCLK_APBAMASK_EIC(value)              (MCLK_APBAMASK_EIC_Msk & (_UINT32_(value) << MCLK_APBAMASK_EIC_Pos)) /* Assigment of value for EIC in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_PORT_Pos                _UINT32_(10)                                         /* (MCLK_APBAMASK) PORT APB Clock Enable Position */
#define MCLK_APBAMASK_PORT_Msk                (_UINT32_(0x1) << MCLK_APBAMASK_PORT_Pos)            /* (MCLK_APBAMASK) PORT APB Clock Enable Mask */
#define MCLK_APBAMASK_PORT(value)             (MCLK_APBAMASK_PORT_Msk & (_UINT32_(value) << MCLK_APBAMASK_PORT_Pos)) /* Assigment of value for PORT in the MCLK_APBAMASK register */
#define MCLK_APBAMASK_Msk                     _UINT32_(0x000007FF)                                 /* (MCLK_APBAMASK) Register Mask  */


/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
#define MCLK_APBBMASK_RESETVALUE              _UINT32_(0x17)                                       /*  (MCLK_APBBMASK) APBB Mask  Reset Value */

#define MCLK_APBBMASK_USB_Pos                 _UINT32_(0)                                          /* (MCLK_APBBMASK) USB APB Clock Enable Position */
#define MCLK_APBBMASK_USB_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_USB_Pos)             /* (MCLK_APBBMASK) USB APB Clock Enable Mask */
#define MCLK_APBBMASK_USB(value)              (MCLK_APBBMASK_USB_Msk & (_UINT32_(value) << MCLK_APBBMASK_USB_Pos)) /* Assigment of value for USB in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_DSU_Pos                 _UINT32_(1)                                          /* (MCLK_APBBMASK) DSU APB Clock Enable Position */
#define MCLK_APBBMASK_DSU_Msk                 (_UINT32_(0x1) << MCLK_APBBMASK_DSU_Pos)             /* (MCLK_APBBMASK) DSU APB Clock Enable Mask */
#define MCLK_APBBMASK_DSU(value)              (MCLK_APBBMASK_DSU_Msk & (_UINT32_(value) << MCLK_APBBMASK_DSU_Pos)) /* Assigment of value for DSU in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_NVMCTRL_Pos             _UINT32_(2)                                          /* (MCLK_APBBMASK) NVMCTRL APB Clock Enable Position */
#define MCLK_APBBMASK_NVMCTRL_Msk             (_UINT32_(0x1) << MCLK_APBBMASK_NVMCTRL_Pos)         /* (MCLK_APBBMASK) NVMCTRL APB Clock Enable Mask */
#define MCLK_APBBMASK_NVMCTRL(value)          (MCLK_APBBMASK_NVMCTRL_Msk & (_UINT32_(value) << MCLK_APBBMASK_NVMCTRL_Pos)) /* Assigment of value for NVMCTRL in the MCLK_APBBMASK register */
#define MCLK_APBBMASK_Msk                     _UINT32_(0x00000007)                                 /* (MCLK_APBBMASK) Register Mask  */


/* -------- MCLK_APBCMASK : (MCLK Offset: 0x1C) (R/W 32) APBC Mask -------- */
#define MCLK_APBCMASK_RESETVALUE              _UINT32_(0x7FFF)                                     /*  (MCLK_APBCMASK) APBC Mask  Reset Value */

#define MCLK_APBCMASK_SERCOM0_Pos             _UINT32_(0)                                          /* (MCLK_APBCMASK) SERCOM0 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM0_Msk             (_UINT32_(0x1) << MCLK_APBCMASK_SERCOM0_Pos)         /* (MCLK_APBCMASK) SERCOM0 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM0(value)          (MCLK_APBCMASK_SERCOM0_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM0_Pos)) /* Assigment of value for SERCOM0 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_SERCOM1_Pos             _UINT32_(1)                                          /* (MCLK_APBCMASK) SERCOM1 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM1_Msk             (_UINT32_(0x1) << MCLK_APBCMASK_SERCOM1_Pos)         /* (MCLK_APBCMASK) SERCOM1 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM1(value)          (MCLK_APBCMASK_SERCOM1_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM1_Pos)) /* Assigment of value for SERCOM1 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_SERCOM2_Pos             _UINT32_(2)                                          /* (MCLK_APBCMASK) SERCOM2 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM2_Msk             (_UINT32_(0x1) << MCLK_APBCMASK_SERCOM2_Pos)         /* (MCLK_APBCMASK) SERCOM2 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM2(value)          (MCLK_APBCMASK_SERCOM2_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM2_Pos)) /* Assigment of value for SERCOM2 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_SERCOM3_Pos             _UINT32_(3)                                          /* (MCLK_APBCMASK) SERCOM3 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM3_Msk             (_UINT32_(0x1) << MCLK_APBCMASK_SERCOM3_Pos)         /* (MCLK_APBCMASK) SERCOM3 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM3(value)          (MCLK_APBCMASK_SERCOM3_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM3_Pos)) /* Assigment of value for SERCOM3 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_SERCOM4_Pos             _UINT32_(4)                                          /* (MCLK_APBCMASK) SERCOM4 APB Clock Enable Position */
#define MCLK_APBCMASK_SERCOM4_Msk             (_UINT32_(0x1) << MCLK_APBCMASK_SERCOM4_Pos)         /* (MCLK_APBCMASK) SERCOM4 APB Clock Enable Mask */
#define MCLK_APBCMASK_SERCOM4(value)          (MCLK_APBCMASK_SERCOM4_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM4_Pos)) /* Assigment of value for SERCOM4 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TCC0_Pos                _UINT32_(5)                                          /* (MCLK_APBCMASK) TCC0 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC0_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TCC0_Pos)            /* (MCLK_APBCMASK) TCC0 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC0(value)             (MCLK_APBCMASK_TCC0_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC0_Pos)) /* Assigment of value for TCC0 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TCC1_Pos                _UINT32_(6)                                          /* (MCLK_APBCMASK) TCC1 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC1_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TCC1_Pos)            /* (MCLK_APBCMASK) TCC1 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC1(value)             (MCLK_APBCMASK_TCC1_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC1_Pos)) /* Assigment of value for TCC1 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TCC2_Pos                _UINT32_(7)                                          /* (MCLK_APBCMASK) TCC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TCC2_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TCC2_Pos)            /* (MCLK_APBCMASK) TCC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TCC2(value)             (MCLK_APBCMASK_TCC2_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC2_Pos)) /* Assigment of value for TCC2 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC0_Pos                 _UINT32_(8)                                          /* (MCLK_APBCMASK) TC0 APB Clock Enable Position */
#define MCLK_APBCMASK_TC0_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC0_Pos)             /* (MCLK_APBCMASK) TC0 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC0(value)              (MCLK_APBCMASK_TC0_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC0_Pos)) /* Assigment of value for TC0 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC1_Pos                 _UINT32_(9)                                          /* (MCLK_APBCMASK) TC1 APB Clock Enable Position */
#define MCLK_APBCMASK_TC1_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC1_Pos)             /* (MCLK_APBCMASK) TC1 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC1(value)              (MCLK_APBCMASK_TC1_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC1_Pos)) /* Assigment of value for TC1 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC2_Pos                 _UINT32_(10)                                         /* (MCLK_APBCMASK) TC2 APB Clock Enable Position */
#define MCLK_APBCMASK_TC2_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC2_Pos)             /* (MCLK_APBCMASK) TC2 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC2(value)              (MCLK_APBCMASK_TC2_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC2_Pos)) /* Assigment of value for TC2 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TC3_Pos                 _UINT32_(11)                                         /* (MCLK_APBCMASK) TC3 APB Clock Enable Position */
#define MCLK_APBCMASK_TC3_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_TC3_Pos)             /* (MCLK_APBCMASK) TC3 APB Clock Enable Mask */
#define MCLK_APBCMASK_TC3(value)              (MCLK_APBCMASK_TC3_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC3_Pos)) /* Assigment of value for TC3 in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_AES_Pos                 _UINT32_(13)                                         /* (MCLK_APBCMASK) AES APB Clock Enable Position */
#define MCLK_APBCMASK_AES_Msk                 (_UINT32_(0x1) << MCLK_APBCMASK_AES_Pos)             /* (MCLK_APBCMASK) AES APB Clock Enable Mask */
#define MCLK_APBCMASK_AES(value)              (MCLK_APBCMASK_AES_Msk & (_UINT32_(value) << MCLK_APBCMASK_AES_Pos)) /* Assigment of value for AES in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_TRNG_Pos                _UINT32_(14)                                         /* (MCLK_APBCMASK) TRNG APB Clock Enable Position */
#define MCLK_APBCMASK_TRNG_Msk                (_UINT32_(0x1) << MCLK_APBCMASK_TRNG_Pos)            /* (MCLK_APBCMASK) TRNG APB Clock Enable Mask */
#define MCLK_APBCMASK_TRNG(value)             (MCLK_APBCMASK_TRNG_Msk & (_UINT32_(value) << MCLK_APBCMASK_TRNG_Pos)) /* Assigment of value for TRNG in the MCLK_APBCMASK register */
#define MCLK_APBCMASK_Msk                     _UINT32_(0x00006FFF)                                 /* (MCLK_APBCMASK) Register Mask  */

#define MCLK_APBCMASK_SERCOM_Pos              _UINT32_(0)                                          /* (MCLK_APBCMASK Position) SERCOMx APB Clock Enable */
#define MCLK_APBCMASK_SERCOM_Msk              (_UINT32_(0x1F) << MCLK_APBCMASK_SERCOM_Pos)         /* (MCLK_APBCMASK Mask) SERCOM */
#define MCLK_APBCMASK_SERCOM(value)           (MCLK_APBCMASK_SERCOM_Msk & (_UINT32_(value) << MCLK_APBCMASK_SERCOM_Pos)) 
#define MCLK_APBCMASK_TCC_Pos                 _UINT32_(5)                                          /* (MCLK_APBCMASK Position) TCCx APB Clock Enable */
#define MCLK_APBCMASK_TCC_Msk                 (_UINT32_(0x7) << MCLK_APBCMASK_TCC_Pos)             /* (MCLK_APBCMASK Mask) TCC */
#define MCLK_APBCMASK_TCC(value)              (MCLK_APBCMASK_TCC_Msk & (_UINT32_(value) << MCLK_APBCMASK_TCC_Pos)) 
#define MCLK_APBCMASK_TC_Pos                  _UINT32_(8)                                          /* (MCLK_APBCMASK Position) TCx APB Clock Enable */
#define MCLK_APBCMASK_TC_Msk                  (_UINT32_(0xF) << MCLK_APBCMASK_TC_Pos)              /* (MCLK_APBCMASK Mask) TC */
#define MCLK_APBCMASK_TC(value)               (MCLK_APBCMASK_TC_Msk & (_UINT32_(value) << MCLK_APBCMASK_TC_Pos)) 

/* -------- MCLK_APBDMASK : (MCLK Offset: 0x20) (R/W 32) APBD Mask -------- */
#define MCLK_APBDMASK_RESETVALUE              _UINT32_(0xFF)                                       /*  (MCLK_APBDMASK) APBD Mask  Reset Value */

#define MCLK_APBDMASK_EVSYS_Pos               _UINT32_(0)                                          /* (MCLK_APBDMASK) EVSYS APB Clock Enable Position */
#define MCLK_APBDMASK_EVSYS_Msk               (_UINT32_(0x1) << MCLK_APBDMASK_EVSYS_Pos)           /* (MCLK_APBDMASK) EVSYS APB Clock Enable Mask */
#define MCLK_APBDMASK_EVSYS(value)            (MCLK_APBDMASK_EVSYS_Msk & (_UINT32_(value) << MCLK_APBDMASK_EVSYS_Pos)) /* Assigment of value for EVSYS in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_SERCOM5_Pos             _UINT32_(1)                                          /* (MCLK_APBDMASK) SERCOM5 APB Clock Enable Position */
#define MCLK_APBDMASK_SERCOM5_Msk             (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM5_Pos)         /* (MCLK_APBDMASK) SERCOM5 APB Clock Enable Mask */
#define MCLK_APBDMASK_SERCOM5(value)          (MCLK_APBDMASK_SERCOM5_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM5_Pos)) /* Assigment of value for SERCOM5 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_TC4_Pos                 _UINT32_(2)                                          /* (MCLK_APBDMASK) TC4 APB Clock Enable Position */
#define MCLK_APBDMASK_TC4_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_TC4_Pos)             /* (MCLK_APBDMASK) TC4 APB Clock Enable Mask */
#define MCLK_APBDMASK_TC4(value)              (MCLK_APBDMASK_TC4_Msk & (_UINT32_(value) << MCLK_APBDMASK_TC4_Pos)) /* Assigment of value for TC4 in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_ADC_Pos                 _UINT32_(3)                                          /* (MCLK_APBDMASK) ADC APB Clock Enable Position */
#define MCLK_APBDMASK_ADC_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_ADC_Pos)             /* (MCLK_APBDMASK) ADC APB Clock Enable Mask */
#define MCLK_APBDMASK_ADC(value)              (MCLK_APBDMASK_ADC_Msk & (_UINT32_(value) << MCLK_APBDMASK_ADC_Pos)) /* Assigment of value for ADC in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_AC_Pos                  _UINT32_(4)                                          /* (MCLK_APBDMASK) AC APB Clock Enable Position */
#define MCLK_APBDMASK_AC_Msk                  (_UINT32_(0x1) << MCLK_APBDMASK_AC_Pos)              /* (MCLK_APBDMASK) AC APB Clock Enable Mask */
#define MCLK_APBDMASK_AC(value)               (MCLK_APBDMASK_AC_Msk & (_UINT32_(value) << MCLK_APBDMASK_AC_Pos)) /* Assigment of value for AC in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_PTC_Pos                 _UINT32_(5)                                          /* (MCLK_APBDMASK) PTC APB Clock Enable Position */
#define MCLK_APBDMASK_PTC_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_PTC_Pos)             /* (MCLK_APBDMASK) PTC APB Clock Enable Mask */
#define MCLK_APBDMASK_PTC(value)              (MCLK_APBDMASK_PTC_Msk & (_UINT32_(value) << MCLK_APBDMASK_PTC_Pos)) /* Assigment of value for PTC in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_OPAMP_Pos               _UINT32_(6)                                          /* (MCLK_APBDMASK) OPAMP APB Clock Enable Position */
#define MCLK_APBDMASK_OPAMP_Msk               (_UINT32_(0x1) << MCLK_APBDMASK_OPAMP_Pos)           /* (MCLK_APBDMASK) OPAMP APB Clock Enable Mask */
#define MCLK_APBDMASK_OPAMP(value)            (MCLK_APBDMASK_OPAMP_Msk & (_UINT32_(value) << MCLK_APBDMASK_OPAMP_Pos)) /* Assigment of value for OPAMP in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_CCL_Pos                 _UINT32_(7)                                          /* (MCLK_APBDMASK) CCL APB Clock Enable Position */
#define MCLK_APBDMASK_CCL_Msk                 (_UINT32_(0x1) << MCLK_APBDMASK_CCL_Pos)             /* (MCLK_APBDMASK) CCL APB Clock Enable Mask */
#define MCLK_APBDMASK_CCL(value)              (MCLK_APBDMASK_CCL_Msk & (_UINT32_(value) << MCLK_APBDMASK_CCL_Pos)) /* Assigment of value for CCL in the MCLK_APBDMASK register */
#define MCLK_APBDMASK_Msk                     _UINT32_(0x000000FF)                                 /* (MCLK_APBDMASK) Register Mask  */

#define MCLK_APBDMASK_SERCOM_Pos              _UINT32_(1)                                          /* (MCLK_APBDMASK Position) SERCOM5 APB Clock Enable */
#define MCLK_APBDMASK_SERCOM_Msk              (_UINT32_(0x1) << MCLK_APBDMASK_SERCOM_Pos)          /* (MCLK_APBDMASK Mask) SERCOM */
#define MCLK_APBDMASK_SERCOM(value)           (MCLK_APBDMASK_SERCOM_Msk & (_UINT32_(value) << MCLK_APBDMASK_SERCOM_Pos)) 
#define MCLK_APBDMASK_TC_Pos                  _UINT32_(2)                                          /* (MCLK_APBDMASK Position) TC4 APB Clock Enable */
#define MCLK_APBDMASK_TC_Msk                  (_UINT32_(0x1) << MCLK_APBDMASK_TC_Pos)              /* (MCLK_APBDMASK Mask) TC */
#define MCLK_APBDMASK_TC(value)               (MCLK_APBDMASK_TC_Msk & (_UINT32_(value) << MCLK_APBDMASK_TC_Pos)) 

/* -------- MCLK_APBEMASK : (MCLK Offset: 0x24) (R/W 32) APBE Mask -------- */
#define MCLK_APBEMASK_RESETVALUE              _UINT32_(0x0D)                                       /*  (MCLK_APBEMASK) APBE Mask  Reset Value */

#define MCLK_APBEMASK_PAC_Pos                 _UINT32_(0)                                          /* (MCLK_APBEMASK) PAC APB Clock Enable Position */
#define MCLK_APBEMASK_PAC_Msk                 (_UINT32_(0x1) << MCLK_APBEMASK_PAC_Pos)             /* (MCLK_APBEMASK) PAC APB Clock Enable Mask */
#define MCLK_APBEMASK_PAC(value)              (MCLK_APBEMASK_PAC_Msk & (_UINT32_(value) << MCLK_APBEMASK_PAC_Pos)) /* Assigment of value for PAC in the MCLK_APBEMASK register */
#define MCLK_APBEMASK_Msk                     _UINT32_(0x00000001)                                 /* (MCLK_APBEMASK) Register Mask  */


/** \brief MCLK register offsets definitions */
#define MCLK_CTRLA_REG_OFST            _UINT32_(0x00)      /* (MCLK_CTRLA) Control A Offset */
#define MCLK_INTENCLR_REG_OFST         _UINT32_(0x01)      /* (MCLK_INTENCLR) Interrupt Enable Clear Offset */
#define MCLK_INTENSET_REG_OFST         _UINT32_(0x02)      /* (MCLK_INTENSET) Interrupt Enable Set Offset */
#define MCLK_INTFLAG_REG_OFST          _UINT32_(0x03)      /* (MCLK_INTFLAG) Interrupt Flag Status and Clear Offset */
#define MCLK_CPUDIV_REG_OFST           _UINT32_(0x04)      /* (MCLK_CPUDIV) CPU Clock Division Offset */
#define MCLK_LPDIV_REG_OFST            _UINT32_(0x05)      /* (MCLK_LPDIV) Low-Power Clock Division Offset */
#define MCLK_BUPDIV_REG_OFST           _UINT32_(0x06)      /* (MCLK_BUPDIV) Backup Clock Division Offset */
#define MCLK_AHBMASK_REG_OFST          _UINT32_(0x10)      /* (MCLK_AHBMASK) AHB Mask Offset */
#define MCLK_APBAMASK_REG_OFST         _UINT32_(0x14)      /* (MCLK_APBAMASK) APBA Mask Offset */
#define MCLK_APBBMASK_REG_OFST         _UINT32_(0x18)      /* (MCLK_APBBMASK) APBB Mask Offset */
#define MCLK_APBCMASK_REG_OFST         _UINT32_(0x1C)      /* (MCLK_APBCMASK) APBC Mask Offset */
#define MCLK_APBDMASK_REG_OFST         _UINT32_(0x20)      /* (MCLK_APBDMASK) APBD Mask Offset */
#define MCLK_APBEMASK_REG_OFST         _UINT32_(0x24)      /* (MCLK_APBEMASK) APBE Mask Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief MCLK register API structure */
typedef struct
{  /* Main Clock */
  __IO  uint8_t                        MCLK_CTRLA;         /**< Offset: 0x00 (R/W  8) Control A */
  __IO  uint8_t                        MCLK_INTENCLR;      /**< Offset: 0x01 (R/W  8) Interrupt Enable Clear */
  __IO  uint8_t                        MCLK_INTENSET;      /**< Offset: 0x02 (R/W  8) Interrupt Enable Set */
  __IO  uint8_t                        MCLK_INTFLAG;       /**< Offset: 0x03 (R/W  8) Interrupt Flag Status and Clear */
  __IO  uint8_t                        MCLK_CPUDIV;        /**< Offset: 0x04 (R/W  8) CPU Clock Division */
  __IO  uint8_t                        MCLK_LPDIV;         /**< Offset: 0x05 (R/W  8) Low-Power Clock Division */
  __IO  uint8_t                        MCLK_BUPDIV;        /**< Offset: 0x06 (R/W  8) Backup Clock Division */
  __I   uint8_t                        Reserved1[0x09];
  __IO  uint32_t                       MCLK_AHBMASK;       /**< Offset: 0x10 (R/W  32) AHB Mask */
  __IO  uint32_t                       MCLK_APBAMASK;      /**< Offset: 0x14 (R/W  32) APBA Mask */
  __IO  uint32_t                       MCLK_APBBMASK;      /**< Offset: 0x18 (R/W  32) APBB Mask */
  __IO  uint32_t                       MCLK_APBCMASK;      /**< Offset: 0x1C (R/W  32) APBC Mask */
  __IO  uint32_t                       MCLK_APBDMASK;      /**< Offset: 0x20 (R/W  32) APBD Mask */
  __IO  uint32_t                       MCLK_APBEMASK;      /**< Offset: 0x24 (R/W  32) APBE Mask */
} mclk_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _WLR089_MCLK_COMPONENT_H_ */

/*
 * Component description for PORT
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

/* file generated from device description version 2020-11-19T13:00:10Z */
#ifndef _SAMHA0_PORT_COMPONENT_H_
#define _SAMHA0_PORT_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR PORT                                         */
/* ************************************************************************** */

/* -------- PORT_DIR : (PORT Offset: 0x00) (R/W 32) Data Direction -------- */
#define PORT_DIR_RESETVALUE                   _UINT32_(0x00)                                       /*  (PORT_DIR) Data Direction  Reset Value */

#define PORT_DIR_DIR_Pos                      _UINT32_(0)                                          /* (PORT_DIR) Port Data Direction Position */
#define PORT_DIR_DIR_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_DIR_DIR_Pos)           /* (PORT_DIR) Port Data Direction Mask */
#define PORT_DIR_DIR(value)                   (PORT_DIR_DIR_Msk & (_UINT32_(value) << PORT_DIR_DIR_Pos)) /* Assigment of value for DIR in the PORT_DIR register */
#define PORT_DIR_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIR) Register Mask  */


/* -------- PORT_DIRCLR : (PORT Offset: 0x04) (R/W 32) Data Direction Clear -------- */
#define PORT_DIRCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRCLR) Data Direction Clear  Reset Value */

#define PORT_DIRCLR_DIRCLR_Pos                _UINT32_(0)                                          /* (PORT_DIRCLR) Port Data Direction Clear Position */
#define PORT_DIRCLR_DIRCLR_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRCLR_DIRCLR_Pos)     /* (PORT_DIRCLR) Port Data Direction Clear Mask */
#define PORT_DIRCLR_DIRCLR(value)             (PORT_DIRCLR_DIRCLR_Msk & (_UINT32_(value) << PORT_DIRCLR_DIRCLR_Pos)) /* Assigment of value for DIRCLR in the PORT_DIRCLR register */
#define PORT_DIRCLR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRCLR) Register Mask  */


/* -------- PORT_DIRSET : (PORT Offset: 0x08) (R/W 32) Data Direction Set -------- */
#define PORT_DIRSET_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRSET) Data Direction Set  Reset Value */

#define PORT_DIRSET_DIRSET_Pos                _UINT32_(0)                                          /* (PORT_DIRSET) Port Data Direction Set Position */
#define PORT_DIRSET_DIRSET_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRSET_DIRSET_Pos)     /* (PORT_DIRSET) Port Data Direction Set Mask */
#define PORT_DIRSET_DIRSET(value)             (PORT_DIRSET_DIRSET_Msk & (_UINT32_(value) << PORT_DIRSET_DIRSET_Pos)) /* Assigment of value for DIRSET in the PORT_DIRSET register */
#define PORT_DIRSET_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRSET) Register Mask  */


/* -------- PORT_DIRTGL : (PORT Offset: 0x0C) (R/W 32) Data Direction Toggle -------- */
#define PORT_DIRTGL_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_DIRTGL) Data Direction Toggle  Reset Value */

#define PORT_DIRTGL_DIRTGL_Pos                _UINT32_(0)                                          /* (PORT_DIRTGL) Port Data Direction Toggle Position */
#define PORT_DIRTGL_DIRTGL_Msk                (_UINT32_(0xFFFFFFFF) << PORT_DIRTGL_DIRTGL_Pos)     /* (PORT_DIRTGL) Port Data Direction Toggle Mask */
#define PORT_DIRTGL_DIRTGL(value)             (PORT_DIRTGL_DIRTGL_Msk & (_UINT32_(value) << PORT_DIRTGL_DIRTGL_Pos)) /* Assigment of value for DIRTGL in the PORT_DIRTGL register */
#define PORT_DIRTGL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_DIRTGL) Register Mask  */


/* -------- PORT_OUT : (PORT Offset: 0x10) (R/W 32) Data Output Value -------- */
#define PORT_OUT_RESETVALUE                   _UINT32_(0x00)                                       /*  (PORT_OUT) Data Output Value  Reset Value */

#define PORT_OUT_OUT_Pos                      _UINT32_(0)                                          /* (PORT_OUT) Port Data Output Value Position */
#define PORT_OUT_OUT_Msk                      (_UINT32_(0xFFFFFFFF) << PORT_OUT_OUT_Pos)           /* (PORT_OUT) Port Data Output Value Mask */
#define PORT_OUT_OUT(value)                   (PORT_OUT_OUT_Msk & (_UINT32_(value) << PORT_OUT_OUT_Pos)) /* Assigment of value for OUT in the PORT_OUT register */
#define PORT_OUT_Msk                          _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUT) Register Mask  */


/* -------- PORT_OUTCLR : (PORT Offset: 0x14) (R/W 32) Data Output Value Clear -------- */
#define PORT_OUTCLR_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTCLR) Data Output Value Clear  Reset Value */

#define PORT_OUTCLR_OUTCLR_Pos                _UINT32_(0)                                          /* (PORT_OUTCLR) Port Data Output Value Clear Position */
#define PORT_OUTCLR_OUTCLR_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTCLR_OUTCLR_Pos)     /* (PORT_OUTCLR) Port Data Output Value Clear Mask */
#define PORT_OUTCLR_OUTCLR(value)             (PORT_OUTCLR_OUTCLR_Msk & (_UINT32_(value) << PORT_OUTCLR_OUTCLR_Pos)) /* Assigment of value for OUTCLR in the PORT_OUTCLR register */
#define PORT_OUTCLR_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTCLR) Register Mask  */


/* -------- PORT_OUTSET : (PORT Offset: 0x18) (R/W 32) Data Output Value Set -------- */
#define PORT_OUTSET_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTSET) Data Output Value Set  Reset Value */

#define PORT_OUTSET_OUTSET_Pos                _UINT32_(0)                                          /* (PORT_OUTSET) Port Data Output Value Set Position */
#define PORT_OUTSET_OUTSET_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTSET_OUTSET_Pos)     /* (PORT_OUTSET) Port Data Output Value Set Mask */
#define PORT_OUTSET_OUTSET(value)             (PORT_OUTSET_OUTSET_Msk & (_UINT32_(value) << PORT_OUTSET_OUTSET_Pos)) /* Assigment of value for OUTSET in the PORT_OUTSET register */
#define PORT_OUTSET_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTSET) Register Mask  */


/* -------- PORT_OUTTGL : (PORT Offset: 0x1C) (R/W 32) Data Output Value Toggle -------- */
#define PORT_OUTTGL_RESETVALUE                _UINT32_(0x00)                                       /*  (PORT_OUTTGL) Data Output Value Toggle  Reset Value */

#define PORT_OUTTGL_OUTTGL_Pos                _UINT32_(0)                                          /* (PORT_OUTTGL) Port Data Output Value Toggle Position */
#define PORT_OUTTGL_OUTTGL_Msk                (_UINT32_(0xFFFFFFFF) << PORT_OUTTGL_OUTTGL_Pos)     /* (PORT_OUTTGL) Port Data Output Value Toggle Mask */
#define PORT_OUTTGL_OUTTGL(value)             (PORT_OUTTGL_OUTTGL_Msk & (_UINT32_(value) << PORT_OUTTGL_OUTTGL_Pos)) /* Assigment of value for OUTTGL in the PORT_OUTTGL register */
#define PORT_OUTTGL_Msk                       _UINT32_(0xFFFFFFFF)                                 /* (PORT_OUTTGL) Register Mask  */


/* -------- PORT_IN : (PORT Offset: 0x20) ( R/ 32) Data Input Value -------- */
#define PORT_IN_RESETVALUE                    _UINT32_(0x00)                                       /*  (PORT_IN) Data Input Value  Reset Value */

#define PORT_IN_IN_Pos                        _UINT32_(0)                                          /* (PORT_IN) Port Data Input Value Position */
#define PORT_IN_IN_Msk                        (_UINT32_(0xFFFFFFFF) << PORT_IN_IN_Pos)             /* (PORT_IN) Port Data Input Value Mask */
#define PORT_IN_IN(value)                     (PORT_IN_IN_Msk & (_UINT32_(value) << PORT_IN_IN_Pos)) /* Assigment of value for IN in the PORT_IN register */
#define PORT_IN_Msk                           _UINT32_(0xFFFFFFFF)                                 /* (PORT_IN) Register Mask  */


/* -------- PORT_CTRL : (PORT Offset: 0x24) (R/W 32) Control -------- */
#define PORT_CTRL_RESETVALUE                  _UINT32_(0x00)                                       /*  (PORT_CTRL) Control  Reset Value */

#define PORT_CTRL_SAMPLING_Pos                _UINT32_(0)                                          /* (PORT_CTRL) Input Sampling Mode Position */
#define PORT_CTRL_SAMPLING_Msk                (_UINT32_(0xFFFFFFFF) << PORT_CTRL_SAMPLING_Pos)     /* (PORT_CTRL) Input Sampling Mode Mask */
#define PORT_CTRL_SAMPLING(value)             (PORT_CTRL_SAMPLING_Msk & (_UINT32_(value) << PORT_CTRL_SAMPLING_Pos)) /* Assigment of value for SAMPLING in the PORT_CTRL register */
#define PORT_CTRL_Msk                         _UINT32_(0xFFFFFFFF)                                 /* (PORT_CTRL) Register Mask  */


/* -------- PORT_WRCONFIG : (PORT Offset: 0x28) ( /W 32) Write Configuration -------- */
#define PORT_WRCONFIG_RESETVALUE              _UINT32_(0x00)                                       /*  (PORT_WRCONFIG) Write Configuration  Reset Value */

#define PORT_WRCONFIG_PINMASK_Pos             _UINT32_(0)                                          /* (PORT_WRCONFIG) Pin Mask for Multiple Pin Configuration Position */
#define PORT_WRCONFIG_PINMASK_Msk             (_UINT32_(0xFFFF) << PORT_WRCONFIG_PINMASK_Pos)      /* (PORT_WRCONFIG) Pin Mask for Multiple Pin Configuration Mask */
#define PORT_WRCONFIG_PINMASK(value)          (PORT_WRCONFIG_PINMASK_Msk & (_UINT32_(value) << PORT_WRCONFIG_PINMASK_Pos)) /* Assigment of value for PINMASK in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PMUXEN_Pos              _UINT32_(16)                                         /* (PORT_WRCONFIG) Peripheral Multiplexer Enable Position */
#define PORT_WRCONFIG_PMUXEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PMUXEN_Pos)          /* (PORT_WRCONFIG) Peripheral Multiplexer Enable Mask */
#define PORT_WRCONFIG_PMUXEN(value)           (PORT_WRCONFIG_PMUXEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUXEN_Pos)) /* Assigment of value for PMUXEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_INEN_Pos                _UINT32_(17)                                         /* (PORT_WRCONFIG) Input Enable Position */
#define PORT_WRCONFIG_INEN_Msk                (_UINT32_(0x1) << PORT_WRCONFIG_INEN_Pos)            /* (PORT_WRCONFIG) Input Enable Mask */
#define PORT_WRCONFIG_INEN(value)             (PORT_WRCONFIG_INEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_INEN_Pos)) /* Assigment of value for INEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PULLEN_Pos              _UINT32_(18)                                         /* (PORT_WRCONFIG) Pull Enable Position */
#define PORT_WRCONFIG_PULLEN_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_PULLEN_Pos)          /* (PORT_WRCONFIG) Pull Enable Mask */
#define PORT_WRCONFIG_PULLEN(value)           (PORT_WRCONFIG_PULLEN_Msk & (_UINT32_(value) << PORT_WRCONFIG_PULLEN_Pos)) /* Assigment of value for PULLEN in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_DRVSTR_Pos              _UINT32_(22)                                         /* (PORT_WRCONFIG) Output Driver Strength Selection Position */
#define PORT_WRCONFIG_DRVSTR_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_DRVSTR_Pos)          /* (PORT_WRCONFIG) Output Driver Strength Selection Mask */
#define PORT_WRCONFIG_DRVSTR(value)           (PORT_WRCONFIG_DRVSTR_Msk & (_UINT32_(value) << PORT_WRCONFIG_DRVSTR_Pos)) /* Assigment of value for DRVSTR in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_PMUX_Pos                _UINT32_(24)                                         /* (PORT_WRCONFIG) Peripheral Multiplexing Position */
#define PORT_WRCONFIG_PMUX_Msk                (_UINT32_(0xF) << PORT_WRCONFIG_PMUX_Pos)            /* (PORT_WRCONFIG) Peripheral Multiplexing Mask */
#define PORT_WRCONFIG_PMUX(value)             (PORT_WRCONFIG_PMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_PMUX_Pos)) /* Assigment of value for PMUX in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_WRPMUX_Pos              _UINT32_(28)                                         /* (PORT_WRCONFIG) Write PMUX Position */
#define PORT_WRCONFIG_WRPMUX_Msk              (_UINT32_(0x1) << PORT_WRCONFIG_WRPMUX_Pos)          /* (PORT_WRCONFIG) Write PMUX Mask */
#define PORT_WRCONFIG_WRPMUX(value)           (PORT_WRCONFIG_WRPMUX_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPMUX_Pos)) /* Assigment of value for WRPMUX in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_WRPINCFG_Pos            _UINT32_(30)                                         /* (PORT_WRCONFIG) Write PINCFG Position */
#define PORT_WRCONFIG_WRPINCFG_Msk            (_UINT32_(0x1) << PORT_WRCONFIG_WRPINCFG_Pos)        /* (PORT_WRCONFIG) Write PINCFG Mask */
#define PORT_WRCONFIG_WRPINCFG(value)         (PORT_WRCONFIG_WRPINCFG_Msk & (_UINT32_(value) << PORT_WRCONFIG_WRPINCFG_Pos)) /* Assigment of value for WRPINCFG in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_HWSEL_Pos               _UINT32_(31)                                         /* (PORT_WRCONFIG) Half-Word Select Position */
#define PORT_WRCONFIG_HWSEL_Msk               (_UINT32_(0x1) << PORT_WRCONFIG_HWSEL_Pos)           /* (PORT_WRCONFIG) Half-Word Select Mask */
#define PORT_WRCONFIG_HWSEL(value)            (PORT_WRCONFIG_HWSEL_Msk & (_UINT32_(value) << PORT_WRCONFIG_HWSEL_Pos)) /* Assigment of value for HWSEL in the PORT_WRCONFIG register */
#define PORT_WRCONFIG_Msk                     _UINT32_(0xDF47FFFF)                                 /* (PORT_WRCONFIG) Register Mask  */


/* -------- PORT_PMUX : (PORT Offset: 0x30) (R/W 8) Peripheral Multiplexing n -------- */
#define PORT_PMUX_RESETVALUE                  _UINT8_(0x00)                                        /*  (PORT_PMUX) Peripheral Multiplexing n  Reset Value */

#define PORT_PMUX_PMUXE_Pos                   _UINT8_(0)                                           /* (PORT_PMUX) Peripheral Multiplexing Even Position */
#define PORT_PMUX_PMUXE_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXE_Pos)                /* (PORT_PMUX) Peripheral Multiplexing Even Mask */
#define PORT_PMUX_PMUXE(value)                (PORT_PMUX_PMUXE_Msk & (_UINT8_(value) << PORT_PMUX_PMUXE_Pos)) /* Assigment of value for PMUXE in the PORT_PMUX register */
#define   PORT_PMUX_PMUXE_A_Val               _UINT8_(0x0)                                         /* (PORT_PMUX) Peripheral function A selected  */
#define   PORT_PMUX_PMUXE_B_Val               _UINT8_(0x1)                                         /* (PORT_PMUX) Peripheral function B selected  */
#define   PORT_PMUX_PMUXE_C_Val               _UINT8_(0x2)                                         /* (PORT_PMUX) Peripheral function C selected  */
#define   PORT_PMUX_PMUXE_D_Val               _UINT8_(0x3)                                         /* (PORT_PMUX) Peripheral function D selected  */
#define   PORT_PMUX_PMUXE_E_Val               _UINT8_(0x4)                                         /* (PORT_PMUX) Peripheral function E selected  */
#define   PORT_PMUX_PMUXE_F_Val               _UINT8_(0x5)                                         /* (PORT_PMUX) Peripheral function F selected  */
#define   PORT_PMUX_PMUXE_G_Val               _UINT8_(0x6)                                         /* (PORT_PMUX) Peripheral function G selected  */
#define   PORT_PMUX_PMUXE_H_Val               _UINT8_(0x7)                                         /* (PORT_PMUX) Peripheral function H selected  */
#define PORT_PMUX_PMUXE_A                     (PORT_PMUX_PMUXE_A_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function A selected Position  */
#define PORT_PMUX_PMUXE_B                     (PORT_PMUX_PMUXE_B_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function B selected Position  */
#define PORT_PMUX_PMUXE_C                     (PORT_PMUX_PMUXE_C_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function C selected Position  */
#define PORT_PMUX_PMUXE_D                     (PORT_PMUX_PMUXE_D_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function D selected Position  */
#define PORT_PMUX_PMUXE_E                     (PORT_PMUX_PMUXE_E_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function E selected Position  */
#define PORT_PMUX_PMUXE_F                     (PORT_PMUX_PMUXE_F_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function F selected Position  */
#define PORT_PMUX_PMUXE_G                     (PORT_PMUX_PMUXE_G_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function G selected Position  */
#define PORT_PMUX_PMUXE_H                     (PORT_PMUX_PMUXE_H_Val << PORT_PMUX_PMUXE_Pos)       /* (PORT_PMUX) Peripheral function H selected Position  */
#define PORT_PMUX_PMUXO_Pos                   _UINT8_(4)                                           /* (PORT_PMUX) Peripheral Multiplexing Odd Position */
#define PORT_PMUX_PMUXO_Msk                   (_UINT8_(0xF) << PORT_PMUX_PMUXO_Pos)                /* (PORT_PMUX) Peripheral Multiplexing Odd Mask */
#define PORT_PMUX_PMUXO(value)                (PORT_PMUX_PMUXO_Msk & (_UINT8_(value) << PORT_PMUX_PMUXO_Pos)) /* Assigment of value for PMUXO in the PORT_PMUX register */
#define   PORT_PMUX_PMUXO_A_Val               _UINT8_(0x0)                                         /* (PORT_PMUX) Peripheral function A selected  */
#define   PORT_PMUX_PMUXO_B_Val               _UINT8_(0x1)                                         /* (PORT_PMUX) Peripheral function B selected  */
#define   PORT_PMUX_PMUXO_C_Val               _UINT8_(0x2)                                         /* (PORT_PMUX) Peripheral function C selected  */
#define   PORT_PMUX_PMUXO_D_Val               _UINT8_(0x3)                                         /* (PORT_PMUX) Peripheral function D selected  */
#define   PORT_PMUX_PMUXO_E_Val               _UINT8_(0x4)                                         /* (PORT_PMUX) Peripheral function E selected  */
#define   PORT_PMUX_PMUXO_F_Val               _UINT8_(0x5)                                         /* (PORT_PMUX) Peripheral function F selected  */
#define   PORT_PMUX_PMUXO_G_Val               _UINT8_(0x6)                                         /* (PORT_PMUX) Peripheral function G selected  */
#define   PORT_PMUX_PMUXO_H_Val               _UINT8_(0x7)                                         /* (PORT_PMUX) Peripheral function H selected  */
#define PORT_PMUX_PMUXO_A                     (PORT_PMUX_PMUXO_A_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function A selected Position  */
#define PORT_PMUX_PMUXO_B                     (PORT_PMUX_PMUXO_B_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function B selected Position  */
#define PORT_PMUX_PMUXO_C                     (PORT_PMUX_PMUXO_C_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function C selected Position  */
#define PORT_PMUX_PMUXO_D                     (PORT_PMUX_PMUXO_D_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function D selected Position  */
#define PORT_PMUX_PMUXO_E                     (PORT_PMUX_PMUXO_E_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function E selected Position  */
#define PORT_PMUX_PMUXO_F                     (PORT_PMUX_PMUXO_F_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function F selected Position  */
#define PORT_PMUX_PMUXO_G                     (PORT_PMUX_PMUXO_G_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function G selected Position  */
#define PORT_PMUX_PMUXO_H                     (PORT_PMUX_PMUXO_H_Val << PORT_PMUX_PMUXO_Pos)       /* (PORT_PMUX) Peripheral function H selected Position  */
#define PORT_PMUX_Msk                         _UINT8_(0xFF)                                        /* (PORT_PMUX) Register Mask  */


/* -------- PORT_PINCFG : (PORT Offset: 0x40) (R/W 8) Pin Configuration n -------- */
#define PORT_PINCFG_RESETVALUE                _UINT8_(0x00)                                        /*  (PORT_PINCFG) Pin Configuration n  Reset Value */

#define PORT_PINCFG_PMUXEN_Pos                _UINT8_(0)                                           /* (PORT_PINCFG) Peripheral Multiplexer Enable Position */
#define PORT_PINCFG_PMUXEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PMUXEN_Pos)             /* (PORT_PINCFG) Peripheral Multiplexer Enable Mask */
#define PORT_PINCFG_PMUXEN(value)             (PORT_PINCFG_PMUXEN_Msk & (_UINT8_(value) << PORT_PINCFG_PMUXEN_Pos)) /* Assigment of value for PMUXEN in the PORT_PINCFG register */
#define PORT_PINCFG_INEN_Pos                  _UINT8_(1)                                           /* (PORT_PINCFG) Input Enable Position */
#define PORT_PINCFG_INEN_Msk                  (_UINT8_(0x1) << PORT_PINCFG_INEN_Pos)               /* (PORT_PINCFG) Input Enable Mask */
#define PORT_PINCFG_INEN(value)               (PORT_PINCFG_INEN_Msk & (_UINT8_(value) << PORT_PINCFG_INEN_Pos)) /* Assigment of value for INEN in the PORT_PINCFG register */
#define PORT_PINCFG_PULLEN_Pos                _UINT8_(2)                                           /* (PORT_PINCFG) Pull Enable Position */
#define PORT_PINCFG_PULLEN_Msk                (_UINT8_(0x1) << PORT_PINCFG_PULLEN_Pos)             /* (PORT_PINCFG) Pull Enable Mask */
#define PORT_PINCFG_PULLEN(value)             (PORT_PINCFG_PULLEN_Msk & (_UINT8_(value) << PORT_PINCFG_PULLEN_Pos)) /* Assigment of value for PULLEN in the PORT_PINCFG register */
#define PORT_PINCFG_DRVSTR_Pos                _UINT8_(6)                                           /* (PORT_PINCFG) Output Driver Strength Selection Position */
#define PORT_PINCFG_DRVSTR_Msk                (_UINT8_(0x1) << PORT_PINCFG_DRVSTR_Pos)             /* (PORT_PINCFG) Output Driver Strength Selection Mask */
#define PORT_PINCFG_DRVSTR(value)             (PORT_PINCFG_DRVSTR_Msk & (_UINT8_(value) << PORT_PINCFG_DRVSTR_Pos)) /* Assigment of value for DRVSTR in the PORT_PINCFG register */
#define PORT_PINCFG_Msk                       _UINT8_(0x47)                                        /* (PORT_PINCFG) Register Mask  */


/** \brief PORT register offsets definitions */
#define PORT_DIR_REG_OFST              _UINT32_(0x00)      /* (PORT_DIR) Data Direction Offset */
#define PORT_DIRCLR_REG_OFST           _UINT32_(0x04)      /* (PORT_DIRCLR) Data Direction Clear Offset */
#define PORT_DIRSET_REG_OFST           _UINT32_(0x08)      /* (PORT_DIRSET) Data Direction Set Offset */
#define PORT_DIRTGL_REG_OFST           _UINT32_(0x0C)      /* (PORT_DIRTGL) Data Direction Toggle Offset */
#define PORT_OUT_REG_OFST              _UINT32_(0x10)      /* (PORT_OUT) Data Output Value Offset */
#define PORT_OUTCLR_REG_OFST           _UINT32_(0x14)      /* (PORT_OUTCLR) Data Output Value Clear Offset */
#define PORT_OUTSET_REG_OFST           _UINT32_(0x18)      /* (PORT_OUTSET) Data Output Value Set Offset */
#define PORT_OUTTGL_REG_OFST           _UINT32_(0x1C)      /* (PORT_OUTTGL) Data Output Value Toggle Offset */
#define PORT_IN_REG_OFST               _UINT32_(0x20)      /* (PORT_IN) Data Input Value Offset */
#define PORT_CTRL_REG_OFST             _UINT32_(0x24)      /* (PORT_CTRL) Control Offset */
#define PORT_WRCONFIG_REG_OFST         _UINT32_(0x28)      /* (PORT_WRCONFIG) Write Configuration Offset */
#define PORT_PMUX_REG_OFST             _UINT32_(0x30)      /* (PORT_PMUX) Peripheral Multiplexing n Offset */
#define PORT_PMUX0_REG_OFST            _UINT32_(0x30)      /* (PORT_PMUX0) Peripheral Multiplexing n Offset */
#define PORT_PMUX1_REG_OFST            _UINT32_(0x31)      /* (PORT_PMUX1) Peripheral Multiplexing n Offset */
#define PORT_PMUX2_REG_OFST            _UINT32_(0x32)      /* (PORT_PMUX2) Peripheral Multiplexing n Offset */
#define PORT_PMUX3_REG_OFST            _UINT32_(0x33)      /* (PORT_PMUX3) Peripheral Multiplexing n Offset */
#define PORT_PMUX4_REG_OFST            _UINT32_(0x34)      /* (PORT_PMUX4) Peripheral Multiplexing n Offset */
#define PORT_PMUX5_REG_OFST            _UINT32_(0x35)      /* (PORT_PMUX5) Peripheral Multiplexing n Offset */
#define PORT_PMUX6_REG_OFST            _UINT32_(0x36)      /* (PORT_PMUX6) Peripheral Multiplexing n Offset */
#define PORT_PMUX7_REG_OFST            _UINT32_(0x37)      /* (PORT_PMUX7) Peripheral Multiplexing n Offset */
#define PORT_PMUX8_REG_OFST            _UINT32_(0x38)      /* (PORT_PMUX8) Peripheral Multiplexing n Offset */
#define PORT_PMUX9_REG_OFST            _UINT32_(0x39)      /* (PORT_PMUX9) Peripheral Multiplexing n Offset */
#define PORT_PMUX10_REG_OFST           _UINT32_(0x3A)      /* (PORT_PMUX10) Peripheral Multiplexing n Offset */
#define PORT_PMUX11_REG_OFST           _UINT32_(0x3B)      /* (PORT_PMUX11) Peripheral Multiplexing n Offset */
#define PORT_PMUX12_REG_OFST           _UINT32_(0x3C)      /* (PORT_PMUX12) Peripheral Multiplexing n Offset */
#define PORT_PMUX13_REG_OFST           _UINT32_(0x3D)      /* (PORT_PMUX13) Peripheral Multiplexing n Offset */
#define PORT_PMUX14_REG_OFST           _UINT32_(0x3E)      /* (PORT_PMUX14) Peripheral Multiplexing n Offset */
#define PORT_PMUX15_REG_OFST           _UINT32_(0x3F)      /* (PORT_PMUX15) Peripheral Multiplexing n Offset */
#define PORT_PINCFG_REG_OFST           _UINT32_(0x40)      /* (PORT_PINCFG) Pin Configuration n Offset */
#define PORT_PINCFG0_REG_OFST          _UINT32_(0x40)      /* (PORT_PINCFG0) Pin Configuration n Offset */
#define PORT_PINCFG1_REG_OFST          _UINT32_(0x41)      /* (PORT_PINCFG1) Pin Configuration n Offset */
#define PORT_PINCFG2_REG_OFST          _UINT32_(0x42)      /* (PORT_PINCFG2) Pin Configuration n Offset */
#define PORT_PINCFG3_REG_OFST          _UINT32_(0x43)      /* (PORT_PINCFG3) Pin Configuration n Offset */
#define PORT_PINCFG4_REG_OFST          _UINT32_(0x44)      /* (PORT_PINCFG4) Pin Configuration n Offset */
#define PORT_PINCFG5_REG_OFST          _UINT32_(0x45)      /* (PORT_PINCFG5) Pin Configuration n Offset */
#define PORT_PINCFG6_REG_OFST          _UINT32_(0x46)      /* (PORT_PINCFG6) Pin Configuration n Offset */
#define PORT_PINCFG7_REG_OFST          _UINT32_(0x47)      /* (PORT_PINCFG7) Pin Configuration n Offset */
#define PORT_PINCFG8_REG_OFST          _UINT32_(0x48)      /* (PORT_PINCFG8) Pin Configuration n Offset */
#define PORT_PINCFG9_REG_OFST          _UINT32_(0x49)      /* (PORT_PINCFG9) Pin Configuration n Offset */
#define PORT_PINCFG10_REG_OFST         _UINT32_(0x4A)      /* (PORT_PINCFG10) Pin Configuration n Offset */
#define PORT_PINCFG11_REG_OFST         _UINT32_(0x4B)      /* (PORT_PINCFG11) Pin Configuration n Offset */
#define PORT_PINCFG12_REG_OFST         _UINT32_(0x4C)      /* (PORT_PINCFG12) Pin Configuration n Offset */
#define PORT_PINCFG13_REG_OFST         _UINT32_(0x4D)      /* (PORT_PINCFG13) Pin Configuration n Offset */
#define PORT_PINCFG14_REG_OFST         _UINT32_(0x4E)      /* (PORT_PINCFG14) Pin Configuration n Offset */
#define PORT_PINCFG15_REG_OFST         _UINT32_(0x4F)      /* (PORT_PINCFG15) Pin Configuration n Offset */
#define PORT_PINCFG16_REG_OFST         _UINT32_(0x50)      /* (PORT_PINCFG16) Pin Configuration n Offset */
#define PORT_PINCFG17_REG_OFST         _UINT32_(0x51)      /* (PORT_PINCFG17) Pin Configuration n Offset */
#define PORT_PINCFG18_REG_OFST         _UINT32_(0x52)      /* (PORT_PINCFG18) Pin Configuration n Offset */
#define PORT_PINCFG19_REG_OFST         _UINT32_(0x53)      /* (PORT_PINCFG19) Pin Configuration n Offset */
#define PORT_PINCFG20_REG_OFST         _UINT32_(0x54)      /* (PORT_PINCFG20) Pin Configuration n Offset */
#define PORT_PINCFG21_REG_OFST         _UINT32_(0x55)      /* (PORT_PINCFG21) Pin Configuration n Offset */
#define PORT_PINCFG22_REG_OFST         _UINT32_(0x56)      /* (PORT_PINCFG22) Pin Configuration n Offset */
#define PORT_PINCFG23_REG_OFST         _UINT32_(0x57)      /* (PORT_PINCFG23) Pin Configuration n Offset */
#define PORT_PINCFG24_REG_OFST         _UINT32_(0x58)      /* (PORT_PINCFG24) Pin Configuration n Offset */
#define PORT_PINCFG25_REG_OFST         _UINT32_(0x59)      /* (PORT_PINCFG25) Pin Configuration n Offset */
#define PORT_PINCFG26_REG_OFST         _UINT32_(0x5A)      /* (PORT_PINCFG26) Pin Configuration n Offset */
#define PORT_PINCFG27_REG_OFST         _UINT32_(0x5B)      /* (PORT_PINCFG27) Pin Configuration n Offset */
#define PORT_PINCFG28_REG_OFST         _UINT32_(0x5C)      /* (PORT_PINCFG28) Pin Configuration n Offset */
#define PORT_PINCFG29_REG_OFST         _UINT32_(0x5D)      /* (PORT_PINCFG29) Pin Configuration n Offset */
#define PORT_PINCFG30_REG_OFST         _UINT32_(0x5E)      /* (PORT_PINCFG30) Pin Configuration n Offset */
#define PORT_PINCFG31_REG_OFST         _UINT32_(0x5F)      /* (PORT_PINCFG31) Pin Configuration n Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief GROUP register API structure */
typedef struct
{
  __IO  uint32_t                       PORT_DIR;           /**< Offset: 0x00 (R/W  32) Data Direction */
  __IO  uint32_t                       PORT_DIRCLR;        /**< Offset: 0x04 (R/W  32) Data Direction Clear */
  __IO  uint32_t                       PORT_DIRSET;        /**< Offset: 0x08 (R/W  32) Data Direction Set */
  __IO  uint32_t                       PORT_DIRTGL;        /**< Offset: 0x0C (R/W  32) Data Direction Toggle */
  __IO  uint32_t                       PORT_OUT;           /**< Offset: 0x10 (R/W  32) Data Output Value */
  __IO  uint32_t                       PORT_OUTCLR;        /**< Offset: 0x14 (R/W  32) Data Output Value Clear */
  __IO  uint32_t                       PORT_OUTSET;        /**< Offset: 0x18 (R/W  32) Data Output Value Set */
  __IO  uint32_t                       PORT_OUTTGL;        /**< Offset: 0x1C (R/W  32) Data Output Value Toggle */
  __I   uint32_t                       PORT_IN;            /**< Offset: 0x20 (R/   32) Data Input Value */
  __IO  uint32_t                       PORT_CTRL;          /**< Offset: 0x24 (R/W  32) Control */
  __O   uint32_t                       PORT_WRCONFIG;      /**< Offset: 0x28 ( /W  32) Write Configuration */
  __I   uint8_t                        Reserved1[0x04];
  __IO  uint8_t                        PORT_PMUX[16];      /**< Offset: 0x30 (R/W  8) Peripheral Multiplexing n */
  __IO  uint8_t                        PORT_PINCFG[32];    /**< Offset: 0x40 (R/W  8) Pin Configuration n */
  __I   uint8_t                        Reserved2[0x20];
} port_group_registers_t;

#define PORT_GROUP_NUMBER 2

/** \brief PORT register API structure */
typedef struct
{  /* Port Module */
        port_group_registers_t         GROUP[PORT_GROUP_NUMBER]; /**< Offset: 0x00  */
} port_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _SAMHA0_PORT_COMPONENT_H_ */

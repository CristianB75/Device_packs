/*
 * Header file for ATSAMDA1E15B
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

/* File generated from device description version 2019-12-19T02:18:43Z */
#ifndef _SAMDA1E15B_H_
#define _SAMDA1E15B_H_

/* Header version uses Semantic Versioning 2.0.0 (https://semver.org/) */
#define HEADER_FORMAT_VERSION "2.1.0"

#define HEADER_FORMAT_VERSION_MAJOR (2)
#define HEADER_FORMAT_VERSION_MINOR (1)
#define HEADER_FORMAT_VERSION_PATCH (0)

/* SAMDA1E15B definitions
  This file defines all structures and symbols for SAMDA1E15B:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#  include <stdint.h>
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !defined(SKIP_INTEGER_LITERALS)
#  if defined(_UINT8_) || defined(_UINT16_) || defined(_UINT32_)
#    error "Integer constant value macros already defined elsewhere"
#  endif

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with sizes of integer constants for C/C++ */
#  define _UINT8_(x)   ((uint8_t)(x))    /* C code: 8-bits unsigned integer constant value */
#  define _UINT16_(x)  ((uint16_t)(x))   /* C code: 16-bits unsigned integer constant value */
#  define _UINT32_(x)  ((uint32_t)(x))   /* C code: 32-bits unsigned integer constant value */

#else /* Assembler */

#  define _UINT8_(x) x    /* Assembler: 8-bits unsigned integer constant value */
#  define _UINT16_(x) x   /* Assembler: 16-bits unsigned integer constant value */
#  define _UINT32_(x) x   /* Assembler: 32-bits unsigned integer constant value */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/* CMSIS DEFINITIONS FOR SAMDA1E15B                                         */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/* Interrupt Number Definition */
typedef enum IRQn
{
/******  CORTEX-M0PLUS Processor Exceptions Numbers ******************************/
  Reset_IRQn                = -15, /* -15 Reset Vector, invoked on Power up and warm reset */
  NonMaskableInt_IRQn       = -14, /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  HardFault_IRQn            = -13, /* -13 Hard Fault, all classes of Fault    */
  SVCall_IRQn               =  -5, /* -5  System Service Call via SVC instruction */
  PendSV_IRQn               =  -2, /* -2  Pendable request for system service */
  SysTick_IRQn              =  -1, /* -1  System Tick Timer                   */

/******  SAMDA1E15B specific Interrupt Numbers ***********************************/
  PM_IRQn                   =   0, /* 0   Power Manager (PM)                  */
  SYSCTRL_IRQn              =   1, /* 1   System Control (SYSCTRL)            */
  WDT_IRQn                  =   2, /* 2   Watchdog Timer (WDT)                */
  RTC_IRQn                  =   3, /* 3   Real-Time Counter (RTC)             */
  EIC_IRQn                  =   4, /* 4   External Interrupt Controller (EIC) */
  NVMCTRL_IRQn              =   5, /* 5   Non-Volatile Memory Controller (NVMCTRL) */
  DMAC_IRQn                 =   6, /* 6   Direct Memory Access Controller (DMAC) */
  USB_IRQn                  =   7, /* 7   Universal Serial Bus (USB)          */
  EVSYS_IRQn                =   8, /* 8   Event System Interface (EVSYS)      */
  SERCOM0_IRQn              =   9, /* 9   Serial Communication Interface (SERCOM0) */
  SERCOM1_IRQn              =  10, /* 10  Serial Communication Interface (SERCOM1) */
  SERCOM2_IRQn              =  11, /* 11  Serial Communication Interface (SERCOM2) */
  SERCOM3_IRQn              =  12, /* 12  Serial Communication Interface (SERCOM3) */
  SERCOM4_IRQn              =  13, /* 13  Serial Communication Interface (SERCOM4) */
  SERCOM5_IRQn              =  14, /* 14  Serial Communication Interface (SERCOM5) */
  TCC0_IRQn                 =  15, /* 15  Timer Counter Control (TCC0)        */
  TCC1_IRQn                 =  16, /* 16  Timer Counter Control (TCC1)        */
  TCC2_IRQn                 =  17, /* 17  Timer Counter Control (TCC2)        */
  TC3_IRQn                  =  18, /* 18  Basic Timer Counter (TC3)           */
  TC4_IRQn                  =  19, /* 19  Basic Timer Counter (TC4)           */
  TC5_IRQn                  =  20, /* 20  Basic Timer Counter (TC5)           */
  TC6_IRQn                  =  21, /* 21  Basic Timer Counter (TC6)           */
  TC7_IRQn                  =  22, /* 22  Basic Timer Counter (TC7)           */
  ADC_IRQn                  =  23, /* 23  Analog Digital Converter (ADC)      */
  AC_IRQn                   =  24, /* 24  Analog Comparators (AC)             */
  DAC_IRQn                  =  25, /* 25  Digital Analog Converter (DAC)      */
  PTC_IRQn                  =  26, /* 26  Peripheral Touch Controller (PTC)   */
  I2S_IRQn                  =  27, /* 27  Inter-IC Sound Interface (I2S)      */

  PERIPH_MAX_IRQn           =  27  /* Max peripheral ID */
} IRQn_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;
  /* CORTEX-M0PLUS handlers */
  void* pfnReset_Handler;                        /* -15 Reset Vector, invoked on Power up and warm reset */
  void* pfnNonMaskableInt_Handler;               /* -14 Non maskable Interrupt, cannot be stopped or preempted */
  void* pfnHardFault_Handler;                    /* -13 Hard Fault, all classes of Fault */
  void* pvReservedC12;
  void* pvReservedC11;
  void* pvReservedC10;
  void* pvReservedC9;
  void* pvReservedC8;
  void* pvReservedC7;
  void* pvReservedC6;
  void* pfnSVCall_Handler;                       /*  -5 System Service Call via SVC instruction */
  void* pvReservedC4;
  void* pvReservedC3;
  void* pfnPendSV_Handler;                       /*  -2 Pendable request for system service */
  void* pfnSysTick_Handler;                      /*  -1 System Tick Timer */

  /* Peripheral handlers */
  void* pfnPM_Handler;                           /*   0 Power Manager (PM) */
  void* pfnSYSCTRL_Handler;                      /*   1 System Control (SYSCTRL) */
  void* pfnWDT_Handler;                          /*   2 Watchdog Timer (WDT) */
  void* pfnRTC_Handler;                          /*   3 Real-Time Counter (RTC) */
  void* pfnEIC_Handler;                          /*   4 External Interrupt Controller (EIC) */
  void* pfnNVMCTRL_Handler;                      /*   5 Non-Volatile Memory Controller (NVMCTRL) */
  void* pfnDMAC_Handler;                         /*   6 Direct Memory Access Controller (DMAC) */
  void* pfnUSB_Handler;                          /*   7 Universal Serial Bus (USB) */
  void* pfnEVSYS_Handler;                        /*   8 Event System Interface (EVSYS) */
  void* pfnSERCOM0_Handler;                      /*   9 Serial Communication Interface (SERCOM0) */
  void* pfnSERCOM1_Handler;                      /*  10 Serial Communication Interface (SERCOM1) */
  void* pfnSERCOM2_Handler;                      /*  11 Serial Communication Interface (SERCOM2) */
  void* pfnSERCOM3_Handler;                      /*  12 Serial Communication Interface (SERCOM3) */
  void* pfnSERCOM4_Handler;                      /*  13 Serial Communication Interface (SERCOM4) */
  void* pfnSERCOM5_Handler;                      /*  14 Serial Communication Interface (SERCOM5) */
  void* pfnTCC0_Handler;                         /*  15 Timer Counter Control (TCC0) */
  void* pfnTCC1_Handler;                         /*  16 Timer Counter Control (TCC1) */
  void* pfnTCC2_Handler;                         /*  17 Timer Counter Control (TCC2) */
  void* pfnTC3_Handler;                          /*  18 Basic Timer Counter (TC3) */
  void* pfnTC4_Handler;                          /*  19 Basic Timer Counter (TC4) */
  void* pfnTC5_Handler;                          /*  20 Basic Timer Counter (TC5) */
  void* pfnTC6_Handler;                          /*  21 Basic Timer Counter (TC6) */
  void* pfnTC7_Handler;                          /*  22 Basic Timer Counter (TC7) */
  void* pfnADC_Handler;                          /*  23 Analog Digital Converter (ADC) */
  void* pfnAC_Handler;                           /*  24 Analog Comparators (AC) */
  void* pfnDAC_Handler;                          /*  25 Digital Analog Converter (DAC) */
  void* pfnPTC_Handler;                          /*  26 Peripheral Touch Controller (PTC) */
  void* pfnI2S_Handler;                          /*  27 Inter-IC Sound Interface (I2S) */
} DeviceVectors;

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if !defined DONT_USE_PREDEFINED_CORE_HANDLERS
/* CORTEX-M0PLUS exception handlers */
void Reset_Handler                 ( void );
void NonMaskableInt_Handler        ( void );
void HardFault_Handler             ( void );
void SVCall_Handler                ( void );
void PendSV_Handler                ( void );
void SysTick_Handler               ( void );
#endif /* DONT_USE_PREDEFINED_CORE_HANDLERS */

#if !defined DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS
/* Peripherals interrupt handlers */
void PM_Handler                    ( void );
void SYSCTRL_Handler               ( void );
void WDT_Handler                   ( void );
void RTC_Handler                   ( void );
void EIC_Handler                   ( void );
void NVMCTRL_Handler               ( void );
void DMAC_Handler                  ( void );
void USB_Handler                   ( void );
void EVSYS_Handler                 ( void );
void SERCOM0_Handler               ( void );
void SERCOM1_Handler               ( void );
void SERCOM2_Handler               ( void );
void SERCOM3_Handler               ( void );
void SERCOM4_Handler               ( void );
void SERCOM5_Handler               ( void );
void TCC0_Handler                  ( void );
void TCC1_Handler                  ( void );
void TCC2_Handler                  ( void );
void TC3_Handler                   ( void );
void TC4_Handler                   ( void );
void TC5_Handler                   ( void );
void TC6_Handler                   ( void );
void TC7_Handler                   ( void );
void ADC_Handler                   ( void );
void AC_Handler                    ( void );
void DAC_Handler                   ( void );
void PTC_Handler                   ( void );
void I2S_Handler                   ( void );
#endif /* DONT_USE_PREDEFINED_PERIPHERALS_HANDLERS */
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* Configuration of the CORTEX-M0PLUS Processor and Core Peripherals */
#define __CM0PLUS_REV                 0x0001 /* Cortex-M0+ Core Revision                                                  */
#define __MPU_PRESENT                      0 /* MPU present or not                                                        */
#define __NVIC_PRIO_BITS                   2 /* Number of Bits used for Priority Levels                                   */
#define __VTOR_PRESENT                     1 /* Vector Table Offset Register present or not                               */
#define __Vendor_SysTickConfig             0 /* Set to 1 if different SysTick Config is used                              */
#define __ARCH_ARM                         1
#define __ARCH_ARM_CORTEX_M                1

/* CMSIS includes */
#include "core_cm0plus.h"
#if defined USE_CMSIS_INIT
#include "system_samda1.h"
#endif /* USE_CMSIS_INIT */

/* ************************************************************************** */
/*   SOFTWARE PERIPHERAL API DEFINITION FOR SAMDA1E15B                        */
/* ************************************************************************** */
#include "component/ac.h"
#include "component/adc.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/fuses.h"
#include "component/gclk.h"
#include "component/hmatrixb.h"
#include "component/i2s.h"
#include "component/mtb.h"
#include "component/nvmctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/ptc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/sysctrl.h"
#include "component/tc.h"
#include "component/tcc.h"
#include "component/usb.h"
#include "component/wdt.h"

/* ************************************************************************** */
/*   INSTANCE DEFINITIONS FOR SAMDA1E15B */
/* ************************************************************************** */
#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/fuses.h"
#include "instance/gclk.h"
#include "instance/i2s.h"
#include "instance/mtb.h"
#include "instance/nvmctrl.h"
#include "instance/pac0.h"
#include "instance/pac1.h"
#include "instance/pac2.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/ptc.h"
#include "instance/rtc.h"
#include "instance/sbmatrix.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/sercom2.h"
#include "instance/sercom3.h"
#include "instance/sercom4.h"
#include "instance/sercom5.h"
#include "instance/sysctrl.h"
#include "instance/tc3.h"
#include "instance/tc4.h"
#include "instance/tc5.h"
#include "instance/tc6.h"
#include "instance/tc7.h"
#include "instance/tcc0.h"
#include "instance/tcc1.h"
#include "instance/tcc2.h"
#include "instance/usb.h"
#include "instance/wdt.h"

/* ************************************************************************** */
/*  PERIPHERAL ID DEFINITIONS FOR SAMDA1E15B                                  */
/* ************************************************************************** */
#define ID_PAC0          (  0) /* Peripheral Access Controller (PAC0) */
#define ID_PM            (  1) /* Power Manager (PM) */
#define ID_SYSCTRL       (  2) /* System Control (SYSCTRL) */
#define ID_GCLK          (  3) /* Generic Clock Generator (GCLK) */
#define ID_WDT           (  4) /* Watchdog Timer (WDT) */
#define ID_RTC           (  5) /* Real-Time Counter (RTC) */
#define ID_EIC           (  6) /* External Interrupt Controller (EIC) */
#define ID_PAC1          ( 32) /* Peripheral Access Controller (PAC1) */
#define ID_DSU           ( 33) /* Device Service Unit (DSU) */
#define ID_NVMCTRL       ( 34) /* Non-Volatile Memory Controller (NVMCTRL) */
#define ID_PORT          ( 35) /* Port Module (PORT) */
#define ID_DMAC          ( 36) /* Direct Memory Access Controller (DMAC) */
#define ID_USB           ( 37) /* Universal Serial Bus (USB) */
#define ID_MTB           ( 38) /* Cortex-M0+ Micro-Trace Buffer (MTB) */
#define ID_SBMATRIX      ( 39) /* HSB Matrix (SBMATRIX) */
#define ID_PAC2          ( 64) /* Peripheral Access Controller (PAC2) */
#define ID_EVSYS         ( 65) /* Event System Interface (EVSYS) */
#define ID_SERCOM0       ( 66) /* Serial Communication Interface (SERCOM0) */
#define ID_SERCOM1       ( 67) /* Serial Communication Interface (SERCOM1) */
#define ID_SERCOM2       ( 68) /* Serial Communication Interface (SERCOM2) */
#define ID_SERCOM3       ( 69) /* Serial Communication Interface (SERCOM3) */
#define ID_SERCOM4       ( 70) /* Serial Communication Interface (SERCOM4) */
#define ID_SERCOM5       ( 71) /* Serial Communication Interface (SERCOM5) */
#define ID_TCC0          ( 72) /* Timer Counter Control (TCC0) */
#define ID_TCC1          ( 73) /* Timer Counter Control (TCC1) */
#define ID_TCC2          ( 74) /* Timer Counter Control (TCC2) */
#define ID_TC3           ( 75) /* Basic Timer Counter (TC3) */
#define ID_TC4           ( 76) /* Basic Timer Counter (TC4) */
#define ID_TC5           ( 77) /* Basic Timer Counter (TC5) */
#define ID_TC6           ( 78) /* Basic Timer Counter (TC6) */
#define ID_TC7           ( 79) /* Basic Timer Counter (TC7) */
#define ID_ADC           ( 80) /* Analog Digital Converter (ADC) */
#define ID_AC            ( 81) /* Analog Comparators (AC) */
#define ID_DAC           ( 82) /* Digital Analog Converter (DAC) */
#define ID_PTC           ( 83) /* Peripheral Touch Controller (PTC) */
#define ID_I2S           ( 84) /* Inter-IC Sound Interface (I2S) */

#define ID_PERIPH_MAX    ( 84) /* Number of peripheral IDs */

/* ************************************************************************** */
/*   REGISTER STRUCTURE ADDRESS DEFINITIONS FOR SAMDA1E15B                    */
/* ************************************************************************** */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AC_REGS                          ((ac_registers_t*)0x42004400)                 /* AC Registers Address         */
#define ADC_REGS                         ((adc_registers_t*)0x42004000)                /* ADC Registers Address        */
#define DAC_REGS                         ((dac_registers_t*)0x42004800)                /* DAC Registers Address        */
#define DMAC_REGS                        ((dmac_registers_t*)0x41004800)               /* DMAC Registers Address       */
#define DSU_REGS                         ((dsu_registers_t*)0x41002000)                /* DSU Registers Address        */
#define EIC_REGS                         ((eic_registers_t*)0x40001800)                /* EIC Registers Address        */
#define EVSYS_REGS                       ((evsys_registers_t*)0x42000400)              /* EVSYS Registers Address      */
#define GCLK_REGS                        ((gclk_registers_t*)0x40000c00)               /* GCLK Registers Address       */
#define SBMATRIX_REGS                    ((hmatrixb_registers_t*)0x41007000)           /* SBMATRIX Registers Address   */
#define I2S_REGS                         ((i2s_registers_t*)0x42005000)                /* I2S Registers Address        */
#define MTB_REGS                         ((mtb_registers_t*)0x41006000)                /* MTB Registers Address        */
#define NVMCTRL_REGS                     ((nvmctrl_registers_t*)0x41004000)            /* NVMCTRL Registers Address    */
#define AUX3_FUSES_REGS                  ((fuses_aux3_fuses_registers_t*)0x0080a000)   /* FUSES Registers Address      */
#define OTP4_FUSES_REGS                  ((fuses_otp4_fuses_registers_t*)0x00806020)   /* FUSES Registers Address      */
#define TEMP_LOG_FUSES_REGS              ((fuses_temp_log_fuses_registers_t*)0x00806030) /* FUSES Registers Address      */
#define USER_FUSES_REGS                  ((fuses_user_fuses_registers_t*)0x00804000)   /* FUSES Registers Address      */
#define PAC0_REGS                        ((pac_registers_t*)0x40000000)                /* PAC0 Registers Address       */
#define PAC1_REGS                        ((pac_registers_t*)0x41000000)                /* PAC1 Registers Address       */
#define PAC2_REGS                        ((pac_registers_t*)0x42000000)                /* PAC2 Registers Address       */
#define PM_REGS                          ((pm_registers_t*)0x40000400)                 /* PM Registers Address         */
#define PORT_REGS                        ((port_registers_t*)0x41004400)               /* PORT Registers Address       */
#define PORT_IOBUS_REGS                  ((port_registers_t*)0x60000000)               /* PORT Registers Address       */
#define PTC_REGS                         ((ptc_registers_t*)0x42004c00)                /* PTC Registers Address        */
#define RTC_REGS                         ((rtc_registers_t*)0x40001400)                /* RTC Registers Address        */
#define SERCOM0_REGS                     ((sercom_registers_t*)0x42000800)             /* SERCOM0 Registers Address    */
#define SERCOM1_REGS                     ((sercom_registers_t*)0x42000c00)             /* SERCOM1 Registers Address    */
#define SERCOM2_REGS                     ((sercom_registers_t*)0x42001000)             /* SERCOM2 Registers Address    */
#define SERCOM3_REGS                     ((sercom_registers_t*)0x42001400)             /* SERCOM3 Registers Address    */
#define SERCOM4_REGS                     ((sercom_registers_t*)0x42001800)             /* SERCOM4 Registers Address    */
#define SERCOM5_REGS                     ((sercom_registers_t*)0x42001c00)             /* SERCOM5 Registers Address    */
#define SYSCTRL_REGS                     ((sysctrl_registers_t*)0x40000800)            /* SYSCTRL Registers Address    */
#define TC3_REGS                         ((tc_registers_t*)0x42002c00)                 /* TC3 Registers Address        */
#define TC4_REGS                         ((tc_registers_t*)0x42003000)                 /* TC4 Registers Address        */
#define TC5_REGS                         ((tc_registers_t*)0x42003400)                 /* TC5 Registers Address        */
#define TC6_REGS                         ((tc_registers_t*)0x42003800)                 /* TC6 Registers Address        */
#define TC7_REGS                         ((tc_registers_t*)0x42003c00)                 /* TC7 Registers Address        */
#define TCC0_REGS                        ((tcc_registers_t*)0x42002000)                /* TCC0 Registers Address       */
#define TCC1_REGS                        ((tcc_registers_t*)0x42002400)                /* TCC1 Registers Address       */
#define TCC2_REGS                        ((tcc_registers_t*)0x42002800)                /* TCC2 Registers Address       */
#define USB_REGS                         ((usb_registers_t*)0x41005000)                /* USB Registers Address        */
#define WDT_REGS                         ((wdt_registers_t*)0x40001000)                /* WDT Registers Address        */
#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAMDA1E15B                                  */
/* ************************************************************************** */
#define AC_BASE_ADDRESS                  _UINT32_(0x42004400)                          /* AC Base Address */
#define ADC_BASE_ADDRESS                 _UINT32_(0x42004000)                          /* ADC Base Address */
#define DAC_BASE_ADDRESS                 _UINT32_(0x42004800)                          /* DAC Base Address */
#define DMAC_BASE_ADDRESS                _UINT32_(0x41004800)                          /* DMAC Base Address */
#define DSU_BASE_ADDRESS                 _UINT32_(0x41002000)                          /* DSU Base Address */
#define EIC_BASE_ADDRESS                 _UINT32_(0x40001800)                          /* EIC Base Address */
#define EVSYS_BASE_ADDRESS               _UINT32_(0x42000400)                          /* EVSYS Base Address */
#define GCLK_BASE_ADDRESS                _UINT32_(0x40000c00)                          /* GCLK Base Address */
#define SBMATRIX_BASE_ADDRESS            _UINT32_(0x41007000)                          /* SBMATRIX Base Address */
#define I2S_BASE_ADDRESS                 _UINT32_(0x42005000)                          /* I2S Base Address */
#define MTB_BASE_ADDRESS                 _UINT32_(0x41006000)                          /* MTB Base Address */
#define NVMCTRL_BASE_ADDRESS             _UINT32_(0x41004000)                          /* NVMCTRL Base Address */
#define AUX3_FUSES_BASE_ADDRESS          _UINT32_(0x0080a000)                          /* FUSES Base Address */
#define OTP4_FUSES_BASE_ADDRESS          _UINT32_(0x00806020)                          /* FUSES Base Address */
#define TEMP_LOG_FUSES_BASE_ADDRESS      _UINT32_(0x00806030)                          /* FUSES Base Address */
#define USER_FUSES_BASE_ADDRESS          _UINT32_(0x00804000)                          /* FUSES Base Address */
#define PAC0_BASE_ADDRESS                _UINT32_(0x40000000)                          /* PAC0 Base Address */
#define PAC1_BASE_ADDRESS                _UINT32_(0x41000000)                          /* PAC1 Base Address */
#define PAC2_BASE_ADDRESS                _UINT32_(0x42000000)                          /* PAC2 Base Address */
#define PM_BASE_ADDRESS                  _UINT32_(0x40000400)                          /* PM Base Address */
#define PORT_BASE_ADDRESS                _UINT32_(0x41004400)                          /* PORT Base Address */
#define PORT_IOBUS_BASE_ADDRESS          _UINT32_(0x60000000)                          /* PORT Base Address */
#define PTC_BASE_ADDRESS                 _UINT32_(0x42004c00)                          /* PTC Base Address */
#define RTC_BASE_ADDRESS                 _UINT32_(0x40001400)                          /* RTC Base Address */
#define SERCOM0_BASE_ADDRESS             _UINT32_(0x42000800)                          /* SERCOM0 Base Address */
#define SERCOM1_BASE_ADDRESS             _UINT32_(0x42000c00)                          /* SERCOM1 Base Address */
#define SERCOM2_BASE_ADDRESS             _UINT32_(0x42001000)                          /* SERCOM2 Base Address */
#define SERCOM3_BASE_ADDRESS             _UINT32_(0x42001400)                          /* SERCOM3 Base Address */
#define SERCOM4_BASE_ADDRESS             _UINT32_(0x42001800)                          /* SERCOM4 Base Address */
#define SERCOM5_BASE_ADDRESS             _UINT32_(0x42001c00)                          /* SERCOM5 Base Address */
#define SYSCTRL_BASE_ADDRESS             _UINT32_(0x40000800)                          /* SYSCTRL Base Address */
#define TC3_BASE_ADDRESS                 _UINT32_(0x42002c00)                          /* TC3 Base Address */
#define TC4_BASE_ADDRESS                 _UINT32_(0x42003000)                          /* TC4 Base Address */
#define TC5_BASE_ADDRESS                 _UINT32_(0x42003400)                          /* TC5 Base Address */
#define TC6_BASE_ADDRESS                 _UINT32_(0x42003800)                          /* TC6 Base Address */
#define TC7_BASE_ADDRESS                 _UINT32_(0x42003c00)                          /* TC7 Base Address */
#define TCC0_BASE_ADDRESS                _UINT32_(0x42002000)                          /* TCC0 Base Address */
#define TCC1_BASE_ADDRESS                _UINT32_(0x42002400)                          /* TCC1 Base Address */
#define TCC2_BASE_ADDRESS                _UINT32_(0x42002800)                          /* TCC2 Base Address */
#define USB_BASE_ADDRESS                 _UINT32_(0x41005000)                          /* USB Base Address */
#define WDT_BASE_ADDRESS                 _UINT32_(0x40001000)                          /* WDT Base Address */

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAMDA1E15B                                           */
/* ************************************************************************** */
#include "pio/samda1e15b.h"

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAMDA1E15B                                */
/* ************************************************************************** */
#define FLASH_SIZE                     _UINT32_(0x00008000)    /*   32kB Memory segment type: flash */
#define FLASH_PAGE_SIZE                _UINT32_(        64)
#define FLASH_NB_OF_PAGES              _UINT32_(       512)

#define AUX0_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX0_PAGE_SIZE                 _UINT32_(        64)
#define AUX0_NB_OF_PAGES               _UINT32_(         4)

#define AUX1_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX1_PAGE_SIZE                 _UINT32_(        64)
#define AUX1_NB_OF_PAGES               _UINT32_(         4)

#define AUX3_SIZE                      _UINT32_(0x00000100)    /*    0kB Memory segment type: fuses */
#define AUX3_PAGE_SIZE                 _UINT32_(        64)
#define AUX3_NB_OF_PAGES               _UINT32_(         4)

#define OTP1_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP2_SIZE                      _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define OTP4_SIZE                      _UINT32_(0x000000e0)    /*    0kB Memory segment type: fuses */
#define OTP4_PAGE_SIZE                 _UINT32_(        64)
#define OTP4_NB_OF_PAGES               _UINT32_(         3)

#define TEMP_LOG_SIZE                  _UINT32_(0x00000008)    /*    0kB Memory segment type: fuses */
#define USER_PAGE_SIZE                 _UINT32_(0x00000100)    /*    0kB Memory segment type: user_page */
#define USER_PAGE_PAGE_SIZE            _UINT32_(        64)
#define USER_PAGE_NB_OF_PAGES          _UINT32_(         4)

#define RWW_SIZE                       _UINT32_(0x00000400)    /*    1kB Memory segment type: flash */
#define RWW_PAGE_SIZE                  _UINT32_(        64)
#define RWW_NB_OF_PAGES                _UINT32_(        16)

#define HMCRAMC0_SIZE                  _UINT32_(0x00001000)    /*    4kB Memory segment type: ram */
#define HPB0_SIZE                      _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB1_SIZE                      _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define HPB2_SIZE                      _UINT32_(0x00010000)    /*   64kB Memory segment type: io */
#define PPB_SIZE                       _UINT32_(0x00100000)    /* 1024kB Memory segment type: io */
#define SCS_SIZE                       _UINT32_(0x00001000)    /*    4kB Memory segment type: io */
#define PERIPHERALS_SIZE               _UINT32_(0x20000000)    /* 524288kB Memory segment type: io */

#define FLASH_ADDR                     _UINT32_(0x00000000)    /* FLASH base address (type: flash)*/
#define AUX0_ADDR                      _UINT32_(0x00804000)    /* AUX0 base address (type: fuses)*/
#define AUX1_ADDR                      _UINT32_(0x00806000)    /* AUX1 base address (type: fuses)*/
#define AUX3_ADDR                      _UINT32_(0x0080a000)    /* AUX3 base address (type: fuses)*/
#define OTP1_ADDR                      _UINT32_(0x00806000)    /* OTP1 base address (type: fuses)*/
#define OTP2_ADDR                      _UINT32_(0x00806008)    /* OTP2 base address (type: fuses)*/
#define OTP4_ADDR                      _UINT32_(0x00806020)    /* OTP4 base address (type: fuses)*/
#define TEMP_LOG_ADDR                  _UINT32_(0x00806030)    /* TEMP_LOG base address (type: fuses)*/
#define USER_PAGE_ADDR                 _UINT32_(0x00804000)    /* USER_PAGE base address (type: user_page)*/
#define RWW_ADDR                       _UINT32_(0x00400000)    /* RWW base address (type: flash)*/
#define HMCRAMC0_ADDR                  _UINT32_(0x20000000)    /* HMCRAMC0 base address (type: ram)*/
#define HPB0_ADDR                      _UINT32_(0x40000000)    /* HPB0 base address (type: io)*/
#define HPB1_ADDR                      _UINT32_(0x41000000)    /* HPB1 base address (type: io)*/
#define HPB2_ADDR                      _UINT32_(0x42000000)    /* HPB2 base address (type: io)*/
#define PPB_ADDR                       _UINT32_(0xe0000000)    /* PPB base address (type: io)*/
#define SCS_ADDR                       _UINT32_(0xe000e000)    /* SCS base address (type: io)*/
#define PERIPHERALS_ADDR               _UINT32_(0x40000000)    /* PERIPHERALS base address (type: io)*/

/* ************************************************************************** */
/*   DEVICE SIGNATURES FOR SAMDA1E15B                                         */
/* ************************************************************************** */
#define CHIP_DSU_DID                   _UINT32_(0X1001156B)

/* ************************************************************************** */
/*   ELECTRICAL DEFINITIONS FOR SAMDA1E15B                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/* Event Generator IDs for SAMDA1E15B */
/* ************************************************************************** */
#define EVENT_ID_GEN_RTC_CMP_0                            1 /* ID for RTC event generator CMP_0 */
#define EVENT_ID_GEN_RTC_CMP_1                            2 /* ID for RTC event generator CMP_1 */
#define EVENT_ID_GEN_RTC_OVF                              3 /* ID for RTC event generator OVF */
#define EVENT_ID_GEN_RTC_PER_0                            4 /* ID for RTC event generator PER_0 */
#define EVENT_ID_GEN_RTC_PER_1                            5 /* ID for RTC event generator PER_1 */
#define EVENT_ID_GEN_RTC_PER_2                            6 /* ID for RTC event generator PER_2 */
#define EVENT_ID_GEN_RTC_PER_3                            7 /* ID for RTC event generator PER_3 */
#define EVENT_ID_GEN_RTC_PER_4                            8 /* ID for RTC event generator PER_4 */
#define EVENT_ID_GEN_RTC_PER_5                            9 /* ID for RTC event generator PER_5 */
#define EVENT_ID_GEN_RTC_PER_6                           10 /* ID for RTC event generator PER_6 */
#define EVENT_ID_GEN_RTC_PER_7                           11 /* ID for RTC event generator PER_7 */
#define EVENT_ID_GEN_EIC_EXTINT_0                        12 /* ID for EIC event generator EXTINT_0 */
#define EVENT_ID_GEN_EIC_EXTINT_1                        13 /* ID for EIC event generator EXTINT_1 */
#define EVENT_ID_GEN_EIC_EXTINT_2                        14 /* ID for EIC event generator EXTINT_2 */
#define EVENT_ID_GEN_EIC_EXTINT_3                        15 /* ID for EIC event generator EXTINT_3 */
#define EVENT_ID_GEN_EIC_EXTINT_4                        16 /* ID for EIC event generator EXTINT_4 */
#define EVENT_ID_GEN_EIC_EXTINT_5                        17 /* ID for EIC event generator EXTINT_5 */
#define EVENT_ID_GEN_EIC_EXTINT_6                        18 /* ID for EIC event generator EXTINT_6 */
#define EVENT_ID_GEN_EIC_EXTINT_7                        19 /* ID for EIC event generator EXTINT_7 */
#define EVENT_ID_GEN_EIC_EXTINT_8                        20 /* ID for EIC event generator EXTINT_8 */
#define EVENT_ID_GEN_EIC_EXTINT_9                        21 /* ID for EIC event generator EXTINT_9 */
#define EVENT_ID_GEN_EIC_EXTINT_10                       22 /* ID for EIC event generator EXTINT_10 */
#define EVENT_ID_GEN_EIC_EXTINT_11                       23 /* ID for EIC event generator EXTINT_11 */
#define EVENT_ID_GEN_EIC_EXTINT_12                       24 /* ID for EIC event generator EXTINT_12 */
#define EVENT_ID_GEN_EIC_EXTINT_13                       25 /* ID for EIC event generator EXTINT_13 */
#define EVENT_ID_GEN_EIC_EXTINT_14                       26 /* ID for EIC event generator EXTINT_14 */
#define EVENT_ID_GEN_EIC_EXTINT_15                       27 /* ID for EIC event generator EXTINT_15 */
#define EVENT_ID_GEN_EIC_EXTINT_16                       28 /* ID for EIC event generator EXTINT_16 */
#define EVENT_ID_GEN_EIC_EXTINT_17                       29 /* ID for EIC event generator EXTINT_17 */
#define EVENT_ID_GEN_DMAC_CH_0                           30 /* ID for DMAC event generator CH_0 */
#define EVENT_ID_GEN_DMAC_CH_1                           31 /* ID for DMAC event generator CH_1 */
#define EVENT_ID_GEN_DMAC_CH_2                           32 /* ID for DMAC event generator CH_2 */
#define EVENT_ID_GEN_DMAC_CH_3                           33 /* ID for DMAC event generator CH_3 */
#define EVENT_ID_GEN_TCC0_OVF                            34 /* ID for TCC0 event generator OVF */
#define EVENT_ID_GEN_TCC0_TRG                            35 /* ID for TCC0 event generator TRG */
#define EVENT_ID_GEN_TCC0_CNT                            36 /* ID for TCC0 event generator CNT */
#define EVENT_ID_GEN_TCC0_MC_0                           37 /* ID for TCC0 event generator MC_0 */
#define EVENT_ID_GEN_TCC0_MC_1                           38 /* ID for TCC0 event generator MC_1 */
#define EVENT_ID_GEN_TCC0_MC_2                           39 /* ID for TCC0 event generator MC_2 */
#define EVENT_ID_GEN_TCC0_MC_3                           40 /* ID for TCC0 event generator MC_3 */
#define EVENT_ID_GEN_TCC1_OVF                            41 /* ID for TCC1 event generator OVF */
#define EVENT_ID_GEN_TCC1_TRG                            42 /* ID for TCC1 event generator TRG */
#define EVENT_ID_GEN_TCC1_CNT                            43 /* ID for TCC1 event generator CNT */
#define EVENT_ID_GEN_TCC1_MC_0                           44 /* ID for TCC1 event generator MC_0 */
#define EVENT_ID_GEN_TCC1_MC_1                           45 /* ID for TCC1 event generator MC_1 */
#define EVENT_ID_GEN_TCC2_OVF                            46 /* ID for TCC2 event generator OVF */
#define EVENT_ID_GEN_TCC2_TRG                            47 /* ID for TCC2 event generator TRG */
#define EVENT_ID_GEN_TCC2_CNT                            48 /* ID for TCC2 event generator CNT */
#define EVENT_ID_GEN_TCC2_MC_0                           49 /* ID for TCC2 event generator MC_0 */
#define EVENT_ID_GEN_TCC2_MC_1                           50 /* ID for TCC2 event generator MC_1 */
#define EVENT_ID_GEN_TC3_OVF                             51 /* ID for TC3 event generator OVF */
#define EVENT_ID_GEN_TC3_MC_0                            52 /* ID for TC3 event generator MC_0 */
#define EVENT_ID_GEN_TC3_MC_1                            53 /* ID for TC3 event generator MC_1 */
#define EVENT_ID_GEN_TC4_OVF                             54 /* ID for TC4 event generator OVF */
#define EVENT_ID_GEN_TC4_MC_0                            55 /* ID for TC4 event generator MC_0 */
#define EVENT_ID_GEN_TC4_MC_1                            56 /* ID for TC4 event generator MC_1 */
#define EVENT_ID_GEN_TC5_OVF                             57 /* ID for TC5 event generator OVF */
#define EVENT_ID_GEN_TC5_MC_0                            58 /* ID for TC5 event generator MC_0 */
#define EVENT_ID_GEN_TC5_MC_1                            59 /* ID for TC5 event generator MC_1 */
#define EVENT_ID_GEN_TC6_OVF                             60 /* ID for TC6 event generator OVF */
#define EVENT_ID_GEN_TC6_MC_0                            61 /* ID for TC6 event generator MC_0 */
#define EVENT_ID_GEN_TC6_MC_1                            62 /* ID for TC6 event generator MC_1 */
#define EVENT_ID_GEN_TC7_OVF                             63 /* ID for TC7 event generator OVF */
#define EVENT_ID_GEN_TC7_MC_0                            64 /* ID for TC7 event generator MC_0 */
#define EVENT_ID_GEN_TC7_MC_1                            65 /* ID for TC7 event generator MC_1 */
#define EVENT_ID_GEN_ADC_RESRDY                          66 /* ID for ADC event generator RESRDY */
#define EVENT_ID_GEN_ADC_WINMON                          67 /* ID for ADC event generator WINMON */
#define EVENT_ID_GEN_AC_COMP_0                           68 /* ID for AC event generator COMP_0 */
#define EVENT_ID_GEN_AC_COMP_1                           69 /* ID for AC event generator COMP_1 */
#define EVENT_ID_GEN_AC_WIN_0                            70 /* ID for AC event generator WIN_0 */
#define EVENT_ID_GEN_DAC_EMPTY                           71 /* ID for DAC event generator EMPTY */

/* ************************************************************************** */
/*  Event User IDs for SAMDA1E15B */
/* ************************************************************************** */
#define EVENT_ID_USER_DMAC_CH_0                           0 /* ID for DMAC event user CH_0 */
#define EVENT_ID_USER_DMAC_CH_1                           1 /* ID for DMAC event user CH_1 */
#define EVENT_ID_USER_DMAC_CH_2                           2 /* ID for DMAC event user CH_2 */
#define EVENT_ID_USER_DMAC_CH_3                           3 /* ID for DMAC event user CH_3 */
#define EVENT_ID_USER_TCC0_EV_0                           4 /* ID for TCC0 event user EV_0 */
#define EVENT_ID_USER_TCC0_EV_1                           5 /* ID for TCC0 event user EV_1 */
#define EVENT_ID_USER_TCC0_MC_0                           6 /* ID for TCC0 event user MC_0 */
#define EVENT_ID_USER_TCC0_MC_1                           7 /* ID for TCC0 event user MC_1 */
#define EVENT_ID_USER_TCC0_MC_2                           8 /* ID for TCC0 event user MC_2 */
#define EVENT_ID_USER_TCC0_MC_3                           9 /* ID for TCC0 event user MC_3 */
#define EVENT_ID_USER_TCC1_EV_0                          10 /* ID for TCC1 event user EV_0 */
#define EVENT_ID_USER_TCC1_EV_1                          11 /* ID for TCC1 event user EV_1 */
#define EVENT_ID_USER_TCC1_MC_0                          12 /* ID for TCC1 event user MC_0 */
#define EVENT_ID_USER_TCC1_MC_1                          13 /* ID for TCC1 event user MC_1 */
#define EVENT_ID_USER_TCC2_EV_0                          14 /* ID for TCC2 event user EV_0 */
#define EVENT_ID_USER_TCC2_EV_1                          15 /* ID for TCC2 event user EV_1 */
#define EVENT_ID_USER_TCC2_MC_0                          16 /* ID for TCC2 event user MC_0 */
#define EVENT_ID_USER_TCC2_MC_1                          17 /* ID for TCC2 event user MC_1 */
#define EVENT_ID_USER_TC3_EVU                            18 /* ID for TC3 event user EVU */
#define EVENT_ID_USER_TC4_EVU                            19 /* ID for TC4 event user EVU */
#define EVENT_ID_USER_TC5_EVU                            20 /* ID for TC5 event user EVU */
#define EVENT_ID_USER_TC6_EVU                            21 /* ID for TC6 event user EVU */
#define EVENT_ID_USER_TC7_EVU                            22 /* ID for TC7 event user EVU */
#define EVENT_ID_USER_ADC_START                          23 /* ID for ADC event user START */
#define EVENT_ID_USER_ADC_SYNC                           24 /* ID for ADC event user SYNC */
#define EVENT_ID_USER_AC_SOC_0                           25 /* ID for AC event user SOC_0 */
#define EVENT_ID_USER_AC_SOC_1                           26 /* ID for AC event user SOC_1 */
#define EVENT_ID_USER_DAC_START                          27 /* ID for DAC event user START */

#ifdef __cplusplus
}
#endif

#endif /* _SAMDA1E15B_H_ */


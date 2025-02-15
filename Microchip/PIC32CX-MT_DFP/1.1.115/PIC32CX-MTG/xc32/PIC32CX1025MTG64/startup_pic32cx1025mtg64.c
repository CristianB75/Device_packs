/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for PIC32CX1025MTG64
 *
 * Copyright (c) 2023 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#if __XC32_VERSION__ >= 2300
#pragma nocodecov
#endif


#ifndef   __INLINE
#if __GNUC_GNU_INLINE__ == 1
  #define __INLINE              __inline__
#else
  #define __INLINE              inline
#endif
#endif

#ifndef   __STATIC_INLINE
  #define __STATIC_INLINE       static __INLINE
#endif

#ifndef   __STATIC_FORCEINLINE
  #define __STATIC_FORCEINLINE  __attribute__((always_inline)) static __INLINE
#endif

#include <xc.h>
#include <libpic32c.h>

#ifndef __always_inline
#define __always_inline	__attribute__((__always_inline__))
#endif

/*
 *  Define the __XC32_RESET_HANDLER_NAME macro on the command line when you
 *  want to use a different name for the Reset Handler function.
 */
#ifndef __XC32_RESET_HANDLER_NAME
#define __XC32_RESET_HANDLER_NAME Reset_Handler
#endif /* __XC32_RESET_HANDLER_NAME */


/* Initialize segments */
extern uint32_t __svectors;
extern uint32_t _stack;
extern uint32_t _dinit_size;
extern uint32_t _dinit_addr;

/** \cond DOXYGEN_SHOULD_SKIP_THIS */
int main(void);
/** \endcond */

extern void __attribute__((long_call)) __libc_init_array(void);

/* Default empty handler */
void __attribute__((weak, used, optimize("-O1"), long_call, externally_visible)) Dummy_Handler(void);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wredundant-decls"

/* Reset handler and application-provided reset handler */
void __attribute__((weak, optimize("-O1"), long_call, naked, externally_visible)) Reset_Handler(void);
extern void __attribute__((weak, used, long_call)) __XC32_RESET_HANDLER_NAME(void);

#pragma GCC diagnostic pop

/* Cortex-M4 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemoryManagement_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMonitor_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SUPC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RSTC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DWDT0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DWDT1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PMC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SEFC0_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SEFC1_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM2_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM3_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM4_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM5_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM6_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FLEXCOM7_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOA_SEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOB_SEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOC_SEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void QSPI_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ACC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved26_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved27_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved28_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved29_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM0_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CHANNEL0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CHANNEL1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CHANNEL2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CHANNEL0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CHANNEL1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CHANNEL2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CHANNEL0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CHANNEL1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CHANNEL2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C0SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C1SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_C2SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C0SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C1SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_C2SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C0SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C1SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_C2SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AES_AESSEC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AESB_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AESB_AESBSEC_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SHA_SHASEC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_TRNGSEC_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ICM_ICMSEC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void CPKCC_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP3_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP4_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP5_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP6_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP7_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP8_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP9_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP10_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP11_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP12_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP13_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP14_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SUPC_WKUP15_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved75_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved76_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved77_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MEM2MEM1_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CHANNEL2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_CH2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C0SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C1SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC3_C2SEC_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PIOD_SEC_Handler          ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved87_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved88_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved89_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PWM_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved91_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved92_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved93_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MATRIX3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"

/* Exception Table */
__attribute__ ((section(".vectors.default"), weak, externally_visible))
const DeviceVectors exception_table=
{
        /* Configure Initial Stack Pointer, using linker-generated symbols */
        .pvStack = (void*) (&_stack),

        .pfnReset_Handler              = (void*) __XC32_RESET_HANDLER_NAME,
        /* .pfnNonMaskableInt_Handler = */ (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        /* .pfnMemoryManagement_Handler = */ (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        /* .pfnDebugMonitor_Handler = */ (void*) DebugMonitor_Handler,
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnDWDT0_Handler        = */ (void*) DWDT0_Handler,       /* 4  Dual Watchdog Timer */
        /* .pfnDWDT1_Handler        = */ (void*) DWDT1_Handler,       /* 5  Dual Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 6  Power Management Controller */
        /* .pfnSEFC0_Handler        = */ (void*) SEFC0_Handler,       /* 7  Secure Embedded Flash Controller */
        /* .pfnSEFC1_Handler        = */ (void*) SEFC1_Handler,       /* 8  Secure Embedded Flash Controller */
        /* .pfnFLEXCOM0_Handler     = */ (void*) FLEXCOM0_Handler,    /* 9  Flexible Serial Communication */
        /* .pfnFLEXCOM1_Handler     = */ (void*) FLEXCOM1_Handler,    /* 10 Flexible Serial Communication */
        /* .pfnFLEXCOM2_Handler     = */ (void*) FLEXCOM2_Handler,    /* 11 Flexible Serial Communication */
        /* .pfnFLEXCOM3_Handler     = */ (void*) FLEXCOM3_Handler,    /* 12 Flexible Serial Communication */
        /* .pfnFLEXCOM4_Handler     = */ (void*) FLEXCOM4_Handler,    /* 13 Flexible Serial Communication */
        /* .pfnFLEXCOM5_Handler     = */ (void*) FLEXCOM5_Handler,    /* 14 Flexible Serial Communication */
        /* .pfnFLEXCOM6_Handler     = */ (void*) FLEXCOM6_Handler,    /* 15 Flexible Serial Communication */
        /* .pfnFLEXCOM7_Handler     = */ (void*) FLEXCOM7_Handler,    /* 16 Flexible Serial Communication */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnPIOA_SEC_Handler     = */ (void*) PIOA_SEC_Handler,    /* 18 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 19 Parallel Input/Output Controller */
        /* .pfnPIOB_SEC_Handler     = */ (void*) PIOB_SEC_Handler,    /* 20 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 21 Parallel Input/Output Controller */
        /* .pfnPIOC_SEC_Handler     = */ (void*) PIOC_SEC_Handler,    /* 22 Parallel Input/Output Controller */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 23 Quad Serial Peripheral Interface */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler,         /* 24 Analog-to-Digital Converter */
        /* .pfnACC_Handler          = */ (void*) ACC_Handler,         /* 25 Analog Comparator Controller */
        /* .pvReserved26            = */ (void*) (0UL),               /* 26 Reserved */
        /* .pvReserved27            = */ (void*) (0UL),               /* 27 Reserved */
        /* .pvReserved28            = */ (void*) (0UL),               /* 28 Reserved */
        /* .pvReserved29            = */ (void*) (0UL),               /* 29 Reserved */
        /* .pfnMEM2MEM0_Handler     = */ (void*) MEM2MEM0_Handler,    /* 30 Memory to Memory */
        /* .pfnTC0_CH0_Handler      = */ (void*) TC0_CH0_Handler,     /* 31 Timer Counter */
        /* .pfnTC0_CH1_Handler      = */ (void*) TC0_CH1_Handler,     /* 32 Timer Counter */
        /* .pfnTC0_CH2_Handler      = */ (void*) TC0_CH2_Handler,     /* 33 Timer Counter */
        /* .pfnTC1_CH0_Handler      = */ (void*) TC1_CH0_Handler,     /* 34 Timer Counter */
        /* .pfnTC1_CH1_Handler      = */ (void*) TC1_CH1_Handler,     /* 35 Timer Counter */
        /* .pfnTC1_CH2_Handler      = */ (void*) TC1_CH2_Handler,     /* 36 Timer Counter */
        /* .pfnTC2_CH0_Handler      = */ (void*) TC2_CH0_Handler,     /* 37 Timer Counter */
        /* .pfnTC2_CH1_Handler      = */ (void*) TC2_CH1_Handler,     /* 38 Timer Counter */
        /* .pfnTC2_CH2_Handler      = */ (void*) TC2_CH2_Handler,     /* 39 Timer Counter */
        /* .pfnTC0_C0SEC_Handler    = */ (void*) TC0_C0SEC_Handler,   /* 40 Timer Counter */
        /* .pfnTC0_C1SEC_Handler    = */ (void*) TC0_C1SEC_Handler,   /* 41 Timer Counter */
        /* .pfnTC0_C2SEC_Handler    = */ (void*) TC0_C2SEC_Handler,   /* 42 Timer Counter */
        /* .pfnTC1_C0SEC_Handler    = */ (void*) TC1_C0SEC_Handler,   /* 43 Timer Counter */
        /* .pfnTC1_C1SEC_Handler    = */ (void*) TC1_C1SEC_Handler,   /* 44 Timer Counter */
        /* .pfnTC1_C2SEC_Handler    = */ (void*) TC1_C2SEC_Handler,   /* 45 Timer Counter */
        /* .pfnTC2_C0SEC_Handler    = */ (void*) TC2_C0SEC_Handler,   /* 46 Timer Counter */
        /* .pfnTC2_C1SEC_Handler    = */ (void*) TC2_C1SEC_Handler,   /* 47 Timer Counter */
        /* .pfnTC2_C2SEC_Handler    = */ (void*) TC2_C2SEC_Handler,   /* 48 Timer Counter */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 49 Advanced Encryption Standard */
        /* .pfnAES_AESSEC_Handler   = */ (void*) AES_AESSEC_Handler,  /* 50 Advanced Encryption Standard */
        /* .pfnAESB_Handler         = */ (void*) AESB_Handler,        /* 51 Advanced Encryption Standard Bridge */
        /* .pfnAESB_AESBSEC_Handler = */ (void*) AESB_AESBSEC_Handler, /* 52 Advanced Encryption Standard Bridge */
        /* .pfnSHA_Handler          = */ (void*) SHA_Handler,         /* 53 Secure Hash Algorithm */
        /* .pfnSHA_SHASEC_Handler   = */ (void*) SHA_SHASEC_Handler,  /* 54 Secure Hash Algorithm */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 55 True Random Number Generator */
        /* .pfnTRNG_TRNGSEC_Handler = */ (void*) TRNG_TRNGSEC_Handler, /* 56 True Random Number Generator */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 57 Integrity Check Monitor */
        /* .pfnICM_ICMSEC_Handler   = */ (void*) ICM_ICMSEC_Handler,  /* 58 Integrity Check Monitor */
        /* .pfnCPKCC_Handler        = */ (void*) CPKCC_Handler,       /* 59 Classic Public Key Cryptography Controller */
        /* .pfnMATRIX0_Handler      = */ (void*) MATRIX0_Handler,     /* 60 AHB Bus Matrix */
        /* .pfnMATRIX1_Handler      = */ (void*) MATRIX1_Handler,     /* 61 AHB Bus Matrix */
        /* .pfnSUPC_WKUP3_Handler   = */ (void*) SUPC_WKUP3_Handler,  /* 62 Supply Controller */
        /* .pfnSUPC_WKUP4_Handler   = */ (void*) SUPC_WKUP4_Handler,  /* 63 Supply Controller */
        /* .pfnSUPC_WKUP5_Handler   = */ (void*) SUPC_WKUP5_Handler,  /* 64 Supply Controller */
        /* .pfnSUPC_WKUP6_Handler   = */ (void*) SUPC_WKUP6_Handler,  /* 65 Supply Controller */
        /* .pfnSUPC_WKUP7_Handler   = */ (void*) SUPC_WKUP7_Handler,  /* 66 Supply Controller */
        /* .pfnSUPC_WKUP8_Handler   = */ (void*) SUPC_WKUP8_Handler,  /* 67 Supply Controller */
        /* .pfnSUPC_WKUP9_Handler   = */ (void*) SUPC_WKUP9_Handler,  /* 68 Supply Controller */
        /* .pfnSUPC_WKUP10_Handler  = */ (void*) SUPC_WKUP10_Handler, /* 69 Supply Controller */
        /* .pfnSUPC_WKUP11_Handler  = */ (void*) SUPC_WKUP11_Handler, /* 70 Supply Controller */
        /* .pfnSUPC_WKUP12_Handler  = */ (void*) SUPC_WKUP12_Handler, /* 71 Supply Controller */
        /* .pfnSUPC_WKUP13_Handler  = */ (void*) SUPC_WKUP13_Handler, /* 72 Supply Controller */
        /* .pfnSUPC_WKUP14_Handler  = */ (void*) SUPC_WKUP14_Handler, /* 73 Supply Controller */
        /* .pfnSUPC_WKUP15_Handler  = */ (void*) SUPC_WKUP15_Handler, /* 74 Supply Controller */
        /* .pvReserved75            = */ (void*) (0UL),               /* 75 Reserved */
        /* .pvReserved76            = */ (void*) (0UL),               /* 76 Reserved */
        /* .pvReserved77            = */ (void*) (0UL),               /* 77 Reserved */
        /* .pfnMEM2MEM1_Handler     = */ (void*) MEM2MEM1_Handler,    /* 78 Memory to Memory */
        /* .pfnTC3_CH0_Handler      = */ (void*) TC3_CH0_Handler,     /* 79 Timer Counter */
        /* .pfnTC3_CH1_Handler      = */ (void*) TC3_CH1_Handler,     /* 80 Timer Counter */
        /* .pfnTC3_CH2_Handler      = */ (void*) TC3_CH2_Handler,     /* 81 Timer Counter */
        /* .pfnTC3_C0SEC_Handler    = */ (void*) TC3_C0SEC_Handler,   /* 82 Timer Counter */
        /* .pfnTC3_C1SEC_Handler    = */ (void*) TC3_C1SEC_Handler,   /* 83 Timer Counter */
        /* .pfnTC3_C2SEC_Handler    = */ (void*) TC3_C2SEC_Handler,   /* 84 Timer Counter */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 85 Parallel Input/Output Controller */
        /* .pfnPIOD_SEC_Handler     = */ (void*) PIOD_SEC_Handler,    /* 86 Parallel Input/Output Controller */
        /* .pvReserved87            = */ (void*) (0UL),               /* 87 Reserved */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pfnPWM_Handler          = */ (void*) PWM_Handler,         /* 90 Pulse Width Modulation Controller */
        /* .pvReserved91            = */ (void*) (0UL),               /* 91 Reserved */
        /* .pvReserved92            = */ (void*) (0UL),               /* 92 Reserved */
        /* .pvReserved93            = */ (void*) (0UL),               /* 93 Reserved */
        /* .pfnMATRIX2_Handler      = */ (void*) MATRIX2_Handler,     /* 94 AHB Bus Matrix */
        /* .pfnMATRIX3_Handler      = */ (void*) MATRIX3_Handler      /* 95 AHB Bus Matrix */

#else /* Legacy defined(_32CX1025MTG64_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSUPC_Handler         = */ (void*) SUPC_Handler,        /* 0  Supply Controller */
        /* .pfnRSTC_Handler         = */ (void*) RSTC_Handler,        /* 1  Reset Controller */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-time Clock */
        /* .pfnRTT_Handler          = */ (void*) RTT_Handler,         /* 3  Real-time Timer */
        /* .pfnDWDT0_Handler        = */ (void*) DWDT0_Handler,       /* 4  Dual Watchdog Timer */
        /* .pfnDWDT1_Handler        = */ (void*) DWDT1_Handler,       /* 5  Dual Watchdog Timer */
        /* .pfnPMC_Handler          = */ (void*) PMC_Handler,         /* 6  Power Management Controller */
        /* .pfnSEFC0_Handler        = */ (void*) SEFC0_Handler,       /* 7  Secure Embedded Flash Controller */
        /* .pfnSEFC1_Handler        = */ (void*) SEFC1_Handler,       /* 8  Secure Embedded Flash Controller */
        /* .pfnFLEXCOM0_Handler     = */ (void*) FLEXCOM0_Handler,    /* 9  Flexible Serial Communication */
        /* .pfnFLEXCOM1_Handler     = */ (void*) FLEXCOM1_Handler,    /* 10 Flexible Serial Communication */
        /* .pfnFLEXCOM2_Handler     = */ (void*) FLEXCOM2_Handler,    /* 11 Flexible Serial Communication */
        /* .pfnFLEXCOM3_Handler     = */ (void*) FLEXCOM3_Handler,    /* 12 Flexible Serial Communication */
        /* .pfnFLEXCOM4_Handler     = */ (void*) FLEXCOM4_Handler,    /* 13 Flexible Serial Communication */
        /* .pfnFLEXCOM5_Handler     = */ (void*) FLEXCOM5_Handler,    /* 14 Flexible Serial Communication */
        /* .pfnFLEXCOM6_Handler     = */ (void*) FLEXCOM6_Handler,    /* 15 Flexible Serial Communication */
        /* .pfnFLEXCOM7_Handler     = */ (void*) FLEXCOM7_Handler,    /* 16 Flexible Serial Communication */
        /* .pfnPIOA_Handler         = */ (void*) PIOA_Handler,        /* 17 Parallel Input/Output Controller */
        /* .pfnPIOA_SEC_Handler     = */ (void*) PIOA_SEC_Handler,    /* 18 Parallel Input/Output Controller */
        /* .pfnPIOB_Handler         = */ (void*) PIOB_Handler,        /* 19 Parallel Input/Output Controller */
        /* .pfnPIOB_SEC_Handler     = */ (void*) PIOB_SEC_Handler,    /* 20 Parallel Input/Output Controller */
        /* .pfnPIOC_Handler         = */ (void*) PIOC_Handler,        /* 21 Parallel Input/Output Controller */
        /* .pfnPIOC_SEC_Handler     = */ (void*) PIOC_SEC_Handler,    /* 22 Parallel Input/Output Controller */
        /* .pfnQSPI_Handler         = */ (void*) QSPI_Handler,        /* 23 Quad Serial Peripheral Interface */
        /* .pfnADC_Handler          = */ (void*) ADC_Handler,         /* 24 Analog-to-Digital Converter */
        /* .pfnACC_Handler          = */ (void*) ACC_Handler,         /* 25 Analog Comparator Controller */
        /* .pvReserved26            = */ (void*) (0UL),               /* 26 Reserved */
        /* .pvReserved27            = */ (void*) (0UL),               /* 27 Reserved */
        /* .pvReserved28            = */ (void*) (0UL),               /* 28 Reserved */
        /* .pvReserved29            = */ (void*) (0UL),               /* 29 Reserved */
        /* .pfnMEM2MEM0_Handler     = */ (void*) MEM2MEM0_Handler,    /* 30 Memory to Memory */
        /* .pfnTC0_CHANNEL0_Handler = */ (void*) TC0_CHANNEL0_Handler, /* 31 Timer Counter */
        /* .pfnTC0_CHANNEL1_Handler = */ (void*) TC0_CHANNEL1_Handler, /* 32 Timer Counter */
        /* .pfnTC0_CHANNEL2_Handler = */ (void*) TC0_CHANNEL2_Handler, /* 33 Timer Counter */
        /* .pfnTC1_CHANNEL0_Handler = */ (void*) TC1_CHANNEL0_Handler, /* 34 Timer Counter */
        /* .pfnTC1_CHANNEL1_Handler = */ (void*) TC1_CHANNEL1_Handler, /* 35 Timer Counter */
        /* .pfnTC1_CHANNEL2_Handler = */ (void*) TC1_CHANNEL2_Handler, /* 36 Timer Counter */
        /* .pfnTC2_CHANNEL0_Handler = */ (void*) TC2_CHANNEL0_Handler, /* 37 Timer Counter */
        /* .pfnTC2_CHANNEL1_Handler = */ (void*) TC2_CHANNEL1_Handler, /* 38 Timer Counter */
        /* .pfnTC2_CHANNEL2_Handler = */ (void*) TC2_CHANNEL2_Handler, /* 39 Timer Counter */
        /* .pfnTC0_C0SEC_Handler    = */ (void*) TC0_C0SEC_Handler,   /* 40 Timer Counter */
        /* .pfnTC0_C1SEC_Handler    = */ (void*) TC0_C1SEC_Handler,   /* 41 Timer Counter */
        /* .pfnTC0_C2SEC_Handler    = */ (void*) TC0_C2SEC_Handler,   /* 42 Timer Counter */
        /* .pfnTC1_C0SEC_Handler    = */ (void*) TC1_C0SEC_Handler,   /* 43 Timer Counter */
        /* .pfnTC1_C1SEC_Handler    = */ (void*) TC1_C1SEC_Handler,   /* 44 Timer Counter */
        /* .pfnTC1_C2SEC_Handler    = */ (void*) TC1_C2SEC_Handler,   /* 45 Timer Counter */
        /* .pfnTC2_C0SEC_Handler    = */ (void*) TC2_C0SEC_Handler,   /* 46 Timer Counter */
        /* .pfnTC2_C1SEC_Handler    = */ (void*) TC2_C1SEC_Handler,   /* 47 Timer Counter */
        /* .pfnTC2_C2SEC_Handler    = */ (void*) TC2_C2SEC_Handler,   /* 48 Timer Counter */
        /* .pfnAES_Handler          = */ (void*) AES_Handler,         /* 49 Advanced Encryption Standard */
        /* .pfnAES_AESSEC_Handler   = */ (void*) AES_AESSEC_Handler,  /* 50 Advanced Encryption Standard */
        /* .pfnAESB_Handler         = */ (void*) AESB_Handler,        /* 51 Advanced Encryption Standard Bridge */
        /* .pfnAESB_AESBSEC_Handler = */ (void*) AESB_AESBSEC_Handler, /* 52 Advanced Encryption Standard Bridge */
        /* .pfnSHA_Handler          = */ (void*) SHA_Handler,         /* 53 Secure Hash Algorithm */
        /* .pfnSHA_SHASEC_Handler   = */ (void*) SHA_SHASEC_Handler,  /* 54 Secure Hash Algorithm */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 55 True Random Number Generator */
        /* .pfnTRNG_TRNGSEC_Handler = */ (void*) TRNG_TRNGSEC_Handler, /* 56 True Random Number Generator */
        /* .pfnICM_Handler          = */ (void*) ICM_Handler,         /* 57 Integrity Check Monitor */
        /* .pfnICM_ICMSEC_Handler   = */ (void*) ICM_ICMSEC_Handler,  /* 58 Integrity Check Monitor */
        /* .pfnCPKCC_Handler        = */ (void*) CPKCC_Handler,       /* 59 Classic Public Key Cryptography Controller */
        /* .pfnMATRIX0_Handler      = */ (void*) MATRIX0_Handler,     /* 60 AHB Bus Matrix */
        /* .pfnMATRIX1_Handler      = */ (void*) MATRIX1_Handler,     /* 61 AHB Bus Matrix */
        /* .pfnSUPC_WKUP3_Handler   = */ (void*) SUPC_WKUP3_Handler,  /* 62 Supply Controller */
        /* .pfnSUPC_WKUP4_Handler   = */ (void*) SUPC_WKUP4_Handler,  /* 63 Supply Controller */
        /* .pfnSUPC_WKUP5_Handler   = */ (void*) SUPC_WKUP5_Handler,  /* 64 Supply Controller */
        /* .pfnSUPC_WKUP6_Handler   = */ (void*) SUPC_WKUP6_Handler,  /* 65 Supply Controller */
        /* .pfnSUPC_WKUP7_Handler   = */ (void*) SUPC_WKUP7_Handler,  /* 66 Supply Controller */
        /* .pfnSUPC_WKUP8_Handler   = */ (void*) SUPC_WKUP8_Handler,  /* 67 Supply Controller */
        /* .pfnSUPC_WKUP9_Handler   = */ (void*) SUPC_WKUP9_Handler,  /* 68 Supply Controller */
        /* .pfnSUPC_WKUP10_Handler  = */ (void*) SUPC_WKUP10_Handler, /* 69 Supply Controller */
        /* .pfnSUPC_WKUP11_Handler  = */ (void*) SUPC_WKUP11_Handler, /* 70 Supply Controller */
        /* .pfnSUPC_WKUP12_Handler  = */ (void*) SUPC_WKUP12_Handler, /* 71 Supply Controller */
        /* .pfnSUPC_WKUP13_Handler  = */ (void*) SUPC_WKUP13_Handler, /* 72 Supply Controller */
        /* .pfnSUPC_WKUP14_Handler  = */ (void*) SUPC_WKUP14_Handler, /* 73 Supply Controller */
        /* .pfnSUPC_WKUP15_Handler  = */ (void*) SUPC_WKUP15_Handler, /* 74 Supply Controller */
        /* .pvReserved75            = */ (void*) (0UL),               /* 75 Reserved */
        /* .pvReserved76            = */ (void*) (0UL),               /* 76 Reserved */
        /* .pvReserved77            = */ (void*) (0UL),               /* 77 Reserved */
        /* .pfnMEM2MEM1_Handler     = */ (void*) MEM2MEM1_Handler,    /* 78 Memory to Memory */
        /* .pfnTC3_CHANNEL0_Handler = */ (void*) TC3_CHANNEL0_Handler, /* 79 Timer Counter */
        /* .pfnTC3_CHANNEL1_Handler = */ (void*) TC3_CHANNEL1_Handler, /* 80 Timer Counter */
        /* .pfnTC3_CHANNEL2_Handler = */ (void*) TC3_CHANNEL2_Handler, /* 81 Timer Counter */
        /* .pfnTC3_C0SEC_Handler    = */ (void*) TC3_C0SEC_Handler,   /* 82 Timer Counter */
        /* .pfnTC3_C1SEC_Handler    = */ (void*) TC3_C1SEC_Handler,   /* 83 Timer Counter */
        /* .pfnTC3_C2SEC_Handler    = */ (void*) TC3_C2SEC_Handler,   /* 84 Timer Counter */
        /* .pfnPIOD_Handler         = */ (void*) PIOD_Handler,        /* 85 Parallel Input/Output Controller */
        /* .pfnPIOD_SEC_Handler     = */ (void*) PIOD_SEC_Handler,    /* 86 Parallel Input/Output Controller */
        /* .pvReserved87            = */ (void*) (0UL),               /* 87 Reserved */
        /* .pvReserved88            = */ (void*) (0UL),               /* 88 Reserved */
        /* .pvReserved89            = */ (void*) (0UL),               /* 89 Reserved */
        /* .pfnPWM_Handler          = */ (void*) PWM_Handler,         /* 90 Pulse Width Modulation Controller */
        /* .pvReserved91            = */ (void*) (0UL),               /* 91 Reserved */
        /* .pvReserved92            = */ (void*) (0UL),               /* 92 Reserved */
        /* .pvReserved93            = */ (void*) (0UL),               /* 93 Reserved */
        /* .pfnMATRIX2_Handler      = */ (void*) MATRIX2_Handler,     /* 94 AHB Bus Matrix */
        /* .pfnMATRIX3_Handler      = */ (void*) MATRIX3_Handler      /* 95 AHB Bus Matrix */
#endif
};

#pragma GCC diagnostic pop

#if (__ARM_FP==14) || (__ARM_FP==4)
/* These functions are used only when compiling with -mfloat-abi=softfp or -mfloat-abi=hard */
/* Save and restore IRQs */
typedef uint32_t irqflags_t;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
static bool g_interrupt_enabled;
#pragma GCC diagnostic pop
#define cpu_irq_is_enabled()    (__get_PRIMASK() == 0)
#  define cpu_irq_enable()                             \
        do {                                           \
                g_interrupt_enabled = true;            \
                __DMB();                               \
                __enable_irq();                        \
        } while (0)
#  define cpu_irq_disable()                            \
        do {                                           \
                __disable_irq();                       \
                __DMB();                               \
                g_interrupt_enabled = false;           \
        } while (0)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
__always_inline __STATIC_INLINE bool __attribute__((optimize("-O1"))) cpu_irq_is_enabled_flags(irqflags_t flags)
{
        return (flags);
}
#pragma GCC diagnostic pop
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) cpu_irq_restore(irqflags_t flags)
{
        if (cpu_irq_is_enabled_flags(flags))
                cpu_irq_enable();
}
__always_inline __STATIC_INLINE __attribute__((optimize("-O1"))) irqflags_t cpu_irq_save(void)
{
        volatile irqflags_t flags = cpu_irq_is_enabled();
        cpu_irq_disable();
        return flags;
}

/** Address for ARM CPACR */
#define ADDR_CPACR 0xE000ED88
/** CPACR Register */
#define REG_CPACR  (*((volatile uint32_t *)ADDR_CPACR))

/**
* \brief Enable FPU
*/
__always_inline __STATIC_INLINE void __attribute__((optimize("-O1"))) fpu_enable(void)
{
    irqflags_t flags;
    flags = cpu_irq_save();
    REG_CPACR |=  (0xFu << 20);
    __DSB();
    __ISB();
    cpu_irq_restore(flags);
}
#endif /* (__ARM_FP==14) || (__ARM_FP==4) */
 
/* Optional application-provided functions */
extern void __attribute__((weak,long_call)) _on_reset(void);
extern void __attribute__((weak,long_call)) _on_bootstrap(void);

/* Reserved for use by the MPLAB XC32 Compiler */
extern void __attribute__((weak,long_call)) __xc32_on_reset(void);
extern void __attribute__((weak,long_call)) __xc32_on_bootstrap(void);


/**
 * \brief This is the code that gets called on processor reset.
 * To initialize the device, and call the main() routine.
 */
void __attribute__((weak, optimize("-O1"), section(".text.Reset_Handler"), long_call,
                    naked, externally_visible))
Reset_Handler(void)
{






#if defined (__REINIT_STACK_POINTER)
    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr sp, =_stack" : : : "sp");

    __asm__ volatile ("add r7, sp, #0" : : : "r7");
#endif

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_reset)
      __xc32_on_reset();


#if (__ARM_FP==14) || (__ARM_FP==4)
    /* Enable the FPU iff the application is built with -mfloat-abi=softfp or -mfloat-abi=hard */
    fpu_enable();
#endif



 




 


    /* Data initialization from the XC32 .dinit template */
    __pic32c_data_initialization();
 
 
    /* Initialize the C library */
    __libc_init_array();

    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_bootstrap)
      __xc32_on_bootstrap();

    /* Branch to application's main function */
    main();

#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    /* Infinite loop */
    while (1) {}
}

/**
* \brief Default interrupt handler for unused IRQs.
*/
void __attribute__((weak, optimize("-O1"), section(".text.Dummy_Handler"),
                    long_call, externally_visible))
Dummy_Handler(void)
{
#if (defined(__DEBUG) || defined(__DEBUG_D))
    __builtin_software_breakpoint();
#endif
    while (1) {}
}

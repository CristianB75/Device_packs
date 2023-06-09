/**
 * \file
 *
 * \brief MPLAB(R) XC32 - Startup code for SAML11D16A
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
/* We pass (0, NULL) for the arguments just in case, but applications
 * are expected to use main(void) as their prototype.  Thus, passing
 * NULL for argv is valid.
 */
extern int main(int, char **);
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

/* Cortex-M23 core handlers */
void NonMaskableInt_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SVCall_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PendSV_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SysTick_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void SYSTEM_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void WDT_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void RTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_0_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_1_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_2_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_EXTINT_3_Handler      ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EIC_OTHER_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void FREQM_Handler             ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void NVMCTRL_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PORT_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_0_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_1_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_2_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_3_Handler            ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DMAC_OTHER_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_0_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_1_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_2_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_3_Handler           ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void EVSYS_NSCHK_Handler       ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PAC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM0_OTHER_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_0_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_1_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_2_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void SERCOM1_OTHER_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved30_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved31_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved32_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void Reserved33_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC0_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC1_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TC2_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_OTHER_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void ADC_RESRDY_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void AC_Handler                ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DAC_UNDERRUN_A_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DAC_EMPTY_Handler         ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void PTC_Handler               ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRNG_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void TRAM_Handler              ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

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
        /* .pvReservedC12           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC11           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC10           = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC9            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC8            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC7            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC6            = */ (void*) (0UL), /* Reserved */
        /* .pfnSVCall_Handler       = */ (void*) SVCall_Handler,
        /* .pvReservedC4            = */ (void*) (0UL), /* Reserved */
        /* .pvReservedC3            = */ (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

#if (HEADER_FORMAT_VERSION_MAJOR > 1) /* include_mcc header file */
        /* Configurable interrupts with MCC names */
        /* .pfnSYSTEM_Handler       = */ (void*) SYSTEM_Handler,      /* 0  Main Clock */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 1  Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-Time Counter */
        /* .pfnEIC_EXTINT_0_Handler = */ (void*) EIC_EXTINT_0_Handler, /* 3  External Interrupt Controller */
        /* .pfnEIC_EXTINT_1_Handler = */ (void*) EIC_EXTINT_1_Handler, /* 4  External Interrupt Controller */
        /* .pfnEIC_EXTINT_2_Handler = */ (void*) EIC_EXTINT_2_Handler, /* 5  External Interrupt Controller */
        /* .pfnEIC_EXTINT_3_Handler = */ (void*) EIC_EXTINT_3_Handler, /* 6  External Interrupt Controller */
        /* .pfnEIC_OTHER_Handler    = */ (void*) EIC_OTHER_Handler,   /* 7  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 8  Frequency Meter */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 9  Non-Volatile Memory Controller */
        /* .pfnPORT_Handler         = */ (void*) PORT_Handler,        /* 10 Port Module */
        /* .pfnDMAC_0_Handler       = */ (void*) DMAC_0_Handler,      /* 11 Direct Memory Access Controller */
        /* .pfnDMAC_1_Handler       = */ (void*) DMAC_1_Handler,      /* 12 Direct Memory Access Controller */
        /* .pfnDMAC_2_Handler       = */ (void*) DMAC_2_Handler,      /* 13 Direct Memory Access Controller */
        /* .pfnDMAC_3_Handler       = */ (void*) DMAC_3_Handler,      /* 14 Direct Memory Access Controller */
        /* .pfnDMAC_OTHER_Handler   = */ (void*) DMAC_OTHER_Handler,  /* 15 Direct Memory Access Controller */
        /* .pfnEVSYS_0_Handler      = */ (void*) EVSYS_0_Handler,     /* 16 Event System Interface */
        /* .pfnEVSYS_1_Handler      = */ (void*) EVSYS_1_Handler,     /* 17 Event System Interface */
        /* .pfnEVSYS_2_Handler      = */ (void*) EVSYS_2_Handler,     /* 18 Event System Interface */
        /* .pfnEVSYS_3_Handler      = */ (void*) EVSYS_3_Handler,     /* 19 Event System Interface */
        /* .pfnEVSYS_NSCHK_Handler  = */ (void*) EVSYS_NSCHK_Handler, /* 20 Event System Interface */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 21 Peripheral Access Controller */
        /* .pfnSERCOM0_0_Handler    = */ (void*) SERCOM0_0_Handler,   /* 22 Serial Communication Interface */
        /* .pfnSERCOM0_1_Handler    = */ (void*) SERCOM0_1_Handler,   /* 23 Serial Communication Interface */
        /* .pfnSERCOM0_2_Handler    = */ (void*) SERCOM0_2_Handler,   /* 24 Serial Communication Interface */
        /* .pfnSERCOM0_OTHER_Handler = */ (void*) SERCOM0_OTHER_Handler, /* 25 Serial Communication Interface */
        /* .pfnSERCOM1_0_Handler    = */ (void*) SERCOM1_0_Handler,   /* 26 Serial Communication Interface */
        /* .pfnSERCOM1_1_Handler    = */ (void*) SERCOM1_1_Handler,   /* 27 Serial Communication Interface */
        /* .pfnSERCOM1_2_Handler    = */ (void*) SERCOM1_2_Handler,   /* 28 Serial Communication Interface */
        /* .pfnSERCOM1_OTHER_Handler = */ (void*) SERCOM1_OTHER_Handler, /* 29 Serial Communication Interface */
        /* .pvReserved30            = */ (void*) (0UL),               /* 30 Reserved */
        /* .pvReserved31            = */ (void*) (0UL),               /* 31 Reserved */
        /* .pvReserved32            = */ (void*) (0UL),               /* 32 Reserved */
        /* .pvReserved33            = */ (void*) (0UL),               /* 33 Reserved */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 34 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 35 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 36 Basic Timer Counter */
        /* .pfnADC_OTHER_Handler    = */ (void*) ADC_OTHER_Handler,   /* 37 Analog Digital Converter */
        /* .pfnADC_RESRDY_Handler   = */ (void*) ADC_RESRDY_Handler,  /* 38 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 39 Analog Comparators */
        /* .pfnDAC_UNDERRUN_A_Handler = */ (void*) DAC_UNDERRUN_A_Handler, /* 40 Digital Analog Converter */
        /* .pfnDAC_EMPTY_Handler    = */ (void*) DAC_EMPTY_Handler,   /* 41 Digital Analog Converter */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 42 Peripheral Touch Controller */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 43 True Random Generator */
        /* .pfnTRAM_Handler         = */ (void*) TRAM_Handler         /* 44 TrustRAM */

#else /* Legacy defined(_SAML11D16A_H) */
        /* Configurable interrupts with Legacy names */
        /* .pfnSYSTEM_Handler       = */ (void*) SYSTEM_Handler,      /* 0  Main Clock */
        /* .pfnWDT_Handler          = */ (void*) WDT_Handler,         /* 1  Watchdog Timer */
        /* .pfnRTC_Handler          = */ (void*) RTC_Handler,         /* 2  Real-Time Counter */
        /* .pfnEIC_EXTINT_0_Handler = */ (void*) EIC_EXTINT_0_Handler, /* 3  External Interrupt Controller */
        /* .pfnEIC_EXTINT_1_Handler = */ (void*) EIC_EXTINT_1_Handler, /* 4  External Interrupt Controller */
        /* .pfnEIC_EXTINT_2_Handler = */ (void*) EIC_EXTINT_2_Handler, /* 5  External Interrupt Controller */
        /* .pfnEIC_EXTINT_3_Handler = */ (void*) EIC_EXTINT_3_Handler, /* 6  External Interrupt Controller */
        /* .pfnEIC_OTHER_Handler    = */ (void*) EIC_OTHER_Handler,   /* 7  External Interrupt Controller */
        /* .pfnFREQM_Handler        = */ (void*) FREQM_Handler,       /* 8  Frequency Meter */
        /* .pfnNVMCTRL_Handler      = */ (void*) NVMCTRL_Handler,     /* 9  Non-Volatile Memory Controller */
        /* .pfnPORT_Handler         = */ (void*) PORT_Handler,        /* 10 Port Module */
        /* .pfnDMAC_0_Handler       = */ (void*) DMAC_0_Handler,      /* 11 Direct Memory Access Controller */
        /* .pfnDMAC_1_Handler       = */ (void*) DMAC_1_Handler,      /* 12 Direct Memory Access Controller */
        /* .pfnDMAC_2_Handler       = */ (void*) DMAC_2_Handler,      /* 13 Direct Memory Access Controller */
        /* .pfnDMAC_3_Handler       = */ (void*) DMAC_3_Handler,      /* 14 Direct Memory Access Controller */
        /* .pfnDMAC_OTHER_Handler   = */ (void*) DMAC_OTHER_Handler,  /* 15 Direct Memory Access Controller */
        /* .pfnEVSYS_0_Handler      = */ (void*) EVSYS_0_Handler,     /* 16 Event System Interface */
        /* .pfnEVSYS_1_Handler      = */ (void*) EVSYS_1_Handler,     /* 17 Event System Interface */
        /* .pfnEVSYS_2_Handler      = */ (void*) EVSYS_2_Handler,     /* 18 Event System Interface */
        /* .pfnEVSYS_3_Handler      = */ (void*) EVSYS_3_Handler,     /* 19 Event System Interface */
        /* .pfnEVSYS_NSCHK_Handler  = */ (void*) EVSYS_NSCHK_Handler, /* 20 Event System Interface */
        /* .pfnPAC_Handler          = */ (void*) PAC_Handler,         /* 21 Peripheral Access Controller */
        /* .pfnSERCOM0_0_Handler    = */ (void*) SERCOM0_0_Handler,   /* 22 Serial Communication Interface */
        /* .pfnSERCOM0_1_Handler    = */ (void*) SERCOM0_1_Handler,   /* 23 Serial Communication Interface */
        /* .pfnSERCOM0_2_Handler    = */ (void*) SERCOM0_2_Handler,   /* 24 Serial Communication Interface */
        /* .pfnSERCOM0_OTHER_Handler = */ (void*) SERCOM0_OTHER_Handler, /* 25 Serial Communication Interface */
        /* .pfnSERCOM1_0_Handler    = */ (void*) SERCOM1_0_Handler,   /* 26 Serial Communication Interface */
        /* .pfnSERCOM1_1_Handler    = */ (void*) SERCOM1_1_Handler,   /* 27 Serial Communication Interface */
        /* .pfnSERCOM1_2_Handler    = */ (void*) SERCOM1_2_Handler,   /* 28 Serial Communication Interface */
        /* .pfnSERCOM1_OTHER_Handler = */ (void*) SERCOM1_OTHER_Handler, /* 29 Serial Communication Interface */
        /* .pvReserved30            = */ (void*) (0UL),               /* 30 Reserved */
        /* .pvReserved31            = */ (void*) (0UL),               /* 31 Reserved */
        /* .pvReserved32            = */ (void*) (0UL),               /* 32 Reserved */
        /* .pvReserved33            = */ (void*) (0UL),               /* 33 Reserved */
        /* .pfnTC0_Handler          = */ (void*) TC0_Handler,         /* 34 Basic Timer Counter */
        /* .pfnTC1_Handler          = */ (void*) TC1_Handler,         /* 35 Basic Timer Counter */
        /* .pfnTC2_Handler          = */ (void*) TC2_Handler,         /* 36 Basic Timer Counter */
        /* .pfnADC_OTHER_Handler    = */ (void*) ADC_OTHER_Handler,   /* 37 Analog Digital Converter */
        /* .pfnADC_RESRDY_Handler   = */ (void*) ADC_RESRDY_Handler,  /* 38 Analog Digital Converter */
        /* .pfnAC_Handler           = */ (void*) AC_Handler,          /* 39 Analog Comparators */
        /* .pfnDAC_UNDERRUN_A_Handler = */ (void*) DAC_UNDERRUN_A_Handler, /* 40 Digital Analog Converter */
        /* .pfnDAC_EMPTY_Handler    = */ (void*) DAC_EMPTY_Handler,   /* 41 Digital Analog Converter */
        /* .pfnPTC_Handler          = */ (void*) PTC_Handler,         /* 42 Peripheral Touch Controller */
        /* .pfnTRNG_Handler         = */ (void*) TRNG_Handler,        /* 43 True Random Generator */
        /* .pfnTRAM_Handler         = */ (void*) TRAM_Handler         /* 44 TrustRAM */
#endif
};

#pragma GCC diagnostic pop

 
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





#ifdef SCB_VTOR_TBLOFF_Msk
    uint32_t *pSrc;
#endif

#if defined (__REINIT_STACK_POINTER)
    /* Initialize SP from linker-defined _stack symbol. */
    __asm__ volatile ("ldr sp, =_stack" : : : "sp");

#ifdef SCB_VTOR_TBLOFF_Msk
    /* Buy stack for locals */
    __asm__ volatile ("sub sp, sp, #8" : : : "sp");
#endif
    __asm__ volatile ("add r7, sp, #0" : : : "r7");
#endif

    /* Call the optional application-provided _on_reset() function. */
    if (_on_reset)
      _on_reset();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_reset)
      __xc32_on_reset();

 




 


    /* Data initialization from the XC32 .dinit template */
    __pic32c_data_initialization();
 
#ifdef SCB_VTOR_TBLOFF_Msk
    /*  Set the vector-table base address. This may be in flash or TCM.
     *  The __svectors symbol is created by the XC32 linker.
     */
    pSrc = (uint32_t *) & __svectors;
    SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);
#endif
 
    /* Initialize the C library */
    __libc_init_array();

    /* Call the optional application-provided _on_bootstrap() function. */
    if (_on_bootstrap)
      _on_bootstrap();

    /* Reserved for use by MPLAB XC32. */
    if (__xc32_on_bootstrap)
      __xc32_on_bootstrap();

    /* Branch to application's main function.  See above about arguments. */
    main(0, NULL);

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

/**
 * \file
 *
 * \brief IAR startup file for PIC32CM1216MC00032
 *
 * Copyright (c) 2022 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
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

#include "pic32cm1216mc00032.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M0PLUS core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak SYSTEM_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak EIC_Handler=Dummy_Handler
#pragma weak FREQM_Handler=Dummy_Handler
#pragma weak TSENS_Handler=Dummy_Handler
#pragma weak NVMCTRL_Handler=Dummy_Handler
#pragma weak DMAC_Handler=Dummy_Handler
#pragma weak EVSYS_Handler=Dummy_Handler
#pragma weak SERCOM0_Handler=Dummy_Handler
#pragma weak SERCOM1_Handler=Dummy_Handler
#pragma weak SERCOM2_Handler=Dummy_Handler
#pragma weak SERCOM3_Handler=Dummy_Handler
#pragma weak TCC0_Handler=Dummy_Handler
#pragma weak TCC1_Handler=Dummy_Handler
#pragma weak TCC2_Handler=Dummy_Handler
#pragma weak TC0_Handler=Dummy_Handler
#pragma weak TC1_Handler=Dummy_Handler
#pragma weak TC2_Handler=Dummy_Handler
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak TC4_Handler=Dummy_Handler
#pragma weak ADC0_Handler=Dummy_Handler
#pragma weak ADC1_Handler=Dummy_Handler
#pragma weak AC_Handler=Dummy_Handler
#pragma weak DAC_Handler=Dummy_Handler
#pragma weak SDADC_Handler=Dummy_Handler
#pragma weak PDEC_Handler=Dummy_Handler

/* Exception Table */
#pragma language = extended
#pragma segment = "CSTACK"

/* The name "__vector_table" has special meaning for C-SPY: */
/* it is where the SP start value is found, and the NVIC vector */
/* table register (VTOR) is initialized to this address if != 0 */

#pragma section = ".intvec"
#pragma location = ".intvec"
const DeviceVectors __vector_table = {
        (void*) __sfe("CSTACK"),

        .pfnReset_Handler              = (void*) Reset_Handler,
        .pfnNonMaskableInt_Handler     = (void*) NonMaskableInt_Handler,
        .pfnHardFault_Handler          = (void*) HardFault_Handler,
        .pvReservedC12                 = (void*) (0UL), /* Reserved */
        .pvReservedC11                 = (void*) (0UL), /* Reserved */
        .pvReservedC10                 = (void*) (0UL), /* Reserved */
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pvReservedC4                  = (void*) (0UL), /* Reserved */
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnSYSTEM_Handler             = (void*) SYSTEM_Handler, /* 0  Main Clock */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 1  Watchdog Timer */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 2  Real-Time Counter */
        .pfnEIC_Handler                = (void*) EIC_Handler,    /* 3  External Interrupt Controller */
        .pfnFREQM_Handler              = (void*) FREQM_Handler,  /* 4  Frequency Meter */
        .pfnTSENS_Handler              = (void*) TSENS_Handler,  /* 5  Temperature Sensor */
        .pfnNVMCTRL_Handler            = (void*) NVMCTRL_Handler, /* 6  Non-Volatile Memory Controller */
        .pfnDMAC_Handler               = (void*) DMAC_Handler,   /* 7  Direct Memory Access Controller */
        .pfnEVSYS_Handler              = (void*) EVSYS_Handler,  /* 8  Event System Interface */
        .pfnSERCOM0_Handler            = (void*) SERCOM0_Handler, /* 9  Serial Communication Interface */
        .pfnSERCOM1_Handler            = (void*) SERCOM1_Handler, /* 10 Serial Communication Interface */
        .pfnSERCOM2_Handler            = (void*) SERCOM2_Handler, /* 11 Serial Communication Interface */
        .pfnSERCOM3_Handler            = (void*) SERCOM3_Handler, /* 12 Serial Communication Interface */
        .pfnTCC0_Handler               = (void*) TCC0_Handler,   /* 13 Timer Counter for Control Applications */
        .pfnTCC1_Handler               = (void*) TCC1_Handler,   /* 14 Timer Counter for Control Applications */
        .pfnTCC2_Handler               = (void*) TCC2_Handler,   /* 15 Timer Counter for Control Applications */
        .pfnTC0_Handler                = (void*) TC0_Handler,    /* 16 Basic Timer Counter */
        .pfnTC1_Handler                = (void*) TC1_Handler,    /* 17 Basic Timer Counter */
        .pfnTC2_Handler                = (void*) TC2_Handler,    /* 18 Basic Timer Counter */
        .pfnTC3_Handler                = (void*) TC3_Handler,    /* 19 Basic Timer Counter */
        .pfnTC4_Handler                = (void*) TC4_Handler,    /* 20 Basic Timer Counter */
        .pfnADC0_Handler               = (void*) ADC0_Handler,   /* 21 Analog Digital Converter */
        .pfnADC1_Handler               = (void*) ADC1_Handler,   /* 22 Analog Digital Converter */
        .pfnAC_Handler                 = (void*) AC_Handler,     /* 23 Analog Comparators */
        .pfnDAC_Handler                = (void*) DAC_Handler,    /* 24 Digital Analog Converter */
        .pfnSDADC_Handler              = (void*) SDADC_Handler,  /* 25 Sigma-Delta Analog Digital Converter */
        .pfnPDEC_Handler               = (void*) PDEC_Handler    /* 26 Quadrature Decodeur */
};

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
int __low_level_init(void)
{
        uint32_t *pSrc = __section_begin(".intvec");

        SCB->VTOR = ((uint32_t) pSrc & SCB_VTOR_TBLOFF_Msk);

        return 1; /* if return 0, the data sections will not be initialized */
}

/**------------------------------------------------------------------------------
 * This is the code that gets called on processor reset. To initialize the
 * device.
 *------------------------------------------------------------------------------*/
void Reset_Handler(void)
{
        __iar_program_start();
}

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
        while (1) {
        }
}

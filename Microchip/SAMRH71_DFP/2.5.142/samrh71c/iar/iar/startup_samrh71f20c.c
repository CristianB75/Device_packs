/**
 * \file
 *
 * \brief IAR startup file for ATSAMRH71F20C
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

#include "samrh71f20c.h"

typedef void (*intfunc) (void);
typedef union { intfunc __fun; void * __ptr; } intvec_elem;

void __iar_program_start(void);
int __low_level_init(void);

/* Reset handler */
void Reset_Handler(void);

/* Default empty handler */
void Dummy_Handler(void);

/* Cortex-M7 core handlers */
#pragma weak NonMaskableInt_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemoryManagement_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVCall_Handler=Dummy_Handler
#pragma weak DebugMonitor_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak RSTC_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak RTT_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak PMC_Handler=Dummy_Handler
#pragma weak MATRIX0_Handler=Dummy_Handler
#pragma weak FLEXCOM0_Handler=Dummy_Handler
#pragma weak FLEXCOM1_Handler=Dummy_Handler
#pragma weak NMIC_Handler=Dummy_Handler
#pragma weak PIOA_Handler=Dummy_Handler
#pragma weak PIOB_Handler=Dummy_Handler
#pragma weak PIOC_Handler=Dummy_Handler
#pragma weak FLEXCOM2_Handler=Dummy_Handler
#pragma weak FLEXCOM3_Handler=Dummy_Handler
#pragma weak FLEXCOM4_Handler=Dummy_Handler
#pragma weak PIOD_Handler=Dummy_Handler
#pragma weak PIOE_Handler=Dummy_Handler
#pragma weak CCW_Handler=Dummy_Handler
#pragma weak CCF_Handler=Dummy_Handler
#pragma weak FPU_Handler=Dummy_Handler
#pragma weak IXC_Handler=Dummy_Handler
#pragma weak FLEXCOM5_Handler=Dummy_Handler
#pragma weak FLEXCOM6_Handler=Dummy_Handler
#pragma weak FLEXCOM7_Handler=Dummy_Handler
#pragma weak TC0_CH0_Handler=Dummy_Handler
#pragma weak TC0_CH1_Handler=Dummy_Handler
#pragma weak TC0_CH2_Handler=Dummy_Handler
#pragma weak TC1_CH0_Handler=Dummy_Handler
#pragma weak TC1_CH1_Handler=Dummy_Handler
#pragma weak TC1_CH2_Handler=Dummy_Handler
#pragma weak PWM0_Handler=Dummy_Handler
#pragma weak PWM1_Handler=Dummy_Handler
#pragma weak ICM_Handler=Dummy_Handler
#pragma weak PIOF_Handler=Dummy_Handler
#pragma weak PIOG_Handler=Dummy_Handler
#pragma weak MCAN0_INT0_Handler=Dummy_Handler
#pragma weak MCAN0_INT1_Handler=Dummy_Handler
#pragma weak MCAN1_INT0_Handler=Dummy_Handler
#pragma weak MCAN1_INT1_Handler=Dummy_Handler
#pragma weak TCMECC_INTFIX_Handler=Dummy_Handler
#pragma weak TCMECC_INTNOFIX_Handler=Dummy_Handler
#pragma weak FLEXRAMECC_INTFIX_Handler=Dummy_Handler
#pragma weak FLEXRAMECC_INTNOFIX_Handler=Dummy_Handler
#pragma weak SHA_Handler=Dummy_Handler
#pragma weak FLEXCOM8_Handler=Dummy_Handler
#pragma weak FLEXCOM9_Handler=Dummy_Handler
#pragma weak RSWDT_Handler=Dummy_Handler
#pragma weak QSPI_Handler=Dummy_Handler
#pragma weak HEFC_INT0_Handler=Dummy_Handler
#pragma weak HEFC_INTFIX_Handler=Dummy_Handler
#pragma weak HEFC_INTNOFIX_Handler=Dummy_Handler
#pragma weak TC2_CH0_Handler=Dummy_Handler
#pragma weak TC2_CH1_Handler=Dummy_Handler
#pragma weak TC2_CH2_Handler=Dummy_Handler
#pragma weak TC3_CH0_Handler=Dummy_Handler
#pragma weak TC3_CH1_Handler=Dummy_Handler
#pragma weak TC3_CH2_Handler=Dummy_Handler
#pragma weak HEMC_INTSDRAMC_Handler=Dummy_Handler
#pragma weak HEMC_INTFIX_Handler=Dummy_Handler
#pragma weak HEMC_INTNOFIX_Handler=Dummy_Handler
#pragma weak SFR_Handler=Dummy_Handler
#pragma weak TRNG_Handler=Dummy_Handler
#pragma weak XDMAC_Handler=Dummy_Handler
#pragma weak SPW_Handler=Dummy_Handler
#pragma weak IP1553_Handler=Dummy_Handler
#pragma weak GMAC_Handler=Dummy_Handler
#pragma weak GMAC_Q1_Handler=Dummy_Handler
#pragma weak GMAC_Q2_Handler=Dummy_Handler
#pragma weak GMAC_Q3_Handler=Dummy_Handler
#pragma weak GMAC_Q4_Handler=Dummy_Handler
#pragma weak GMAC_Q5_Handler=Dummy_Handler

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
        .pfnMemoryManagement_Handler   = (void*) MemoryManagement_Handler,
        .pfnBusFault_Handler           = (void*) BusFault_Handler,
        .pfnUsageFault_Handler         = (void*) UsageFault_Handler,
        .pvReservedC9                  = (void*) (0UL), /* Reserved */
        .pvReservedC8                  = (void*) (0UL), /* Reserved */
        .pvReservedC7                  = (void*) (0UL), /* Reserved */
        .pvReservedC6                  = (void*) (0UL), /* Reserved */
        .pfnSVCall_Handler             = (void*) SVCall_Handler,
        .pfnDebugMonitor_Handler       = (void*) DebugMonitor_Handler,
        .pvReservedC3                  = (void*) (0UL), /* Reserved */
        .pfnPendSV_Handler             = (void*) PendSV_Handler,
        .pfnSysTick_Handler            = (void*) SysTick_Handler,

        /* Configurable interrupts */
        .pfnSUPC_Handler               = (void*) SUPC_Handler,   /* 0  Supply Controller */
        .pfnRSTC_Handler               = (void*) RSTC_Handler,   /* 1  Reset Controller */
        .pfnRTC_Handler                = (void*) RTC_Handler,    /* 2  Real-time Clock */
        .pfnRTT_Handler                = (void*) RTT_Handler,    /* 3  Real-time Timer */
        .pfnWDT_Handler                = (void*) WDT_Handler,    /* 4  Watchdog Timer */
        .pfnPMC_Handler                = (void*) PMC_Handler,    /* 5  Power Management Controller */
        .pfnMATRIX0_Handler            = (void*) MATRIX0_Handler, /* 6  AHB Bus Matrix */
        .pfnFLEXCOM0_Handler           = (void*) FLEXCOM0_Handler, /* 7  Flexible Serial Communication */
        .pfnFLEXCOM1_Handler           = (void*) FLEXCOM1_Handler, /* 8  Flexible Serial Communication */
        .pfnNMIC_Handler               = (void*) NMIC_Handler,   /* 9  Non-maskable Interrupt Controller */
        .pfnPIOA_Handler               = (void*) PIOA_Handler,   /* 10 Parallel Input/Output Controller */
        .pfnPIOB_Handler               = (void*) PIOB_Handler,   /* 11 Parallel Input/Output Controller */
        .pfnPIOC_Handler               = (void*) PIOC_Handler,   /* 12 Parallel Input/Output Controller */
        .pfnFLEXCOM2_Handler           = (void*) FLEXCOM2_Handler, /* 13 Flexible Serial Communication */
        .pfnFLEXCOM3_Handler           = (void*) FLEXCOM3_Handler, /* 14 Flexible Serial Communication */
        .pfnFLEXCOM4_Handler           = (void*) FLEXCOM4_Handler, /* 15 Flexible Serial Communication */
        .pfnPIOD_Handler               = (void*) PIOD_Handler,   /* 16 Parallel Input/Output Controller */
        .pfnPIOE_Handler               = (void*) PIOE_Handler,   /* 17 Parallel Input/Output Controller */
        .pfnCCW_Handler                = (void*) CCW_Handler,    /* 18 System Control Block */
        .pfnCCF_Handler                = (void*) CCF_Handler,    /* 19 System Control Block */
        .pfnFPU_Handler                = (void*) FPU_Handler,    /* 20 Floating Point Unit */
        .pfnIXC_Handler                = (void*) IXC_Handler,    /* 21 Floating Point Unit */
        .pfnFLEXCOM5_Handler           = (void*) FLEXCOM5_Handler, /* 22 Flexible Serial Communication */
        .pfnFLEXCOM6_Handler           = (void*) FLEXCOM6_Handler, /* 23 Flexible Serial Communication */
        .pfnFLEXCOM7_Handler           = (void*) FLEXCOM7_Handler, /* 24 Flexible Serial Communication */
        .pfnTC0_CH0_Handler            = (void*) TC0_CH0_Handler, /* 25 Timer/Counter 0 Channel 0 */
        .pfnTC0_CH1_Handler            = (void*) TC0_CH1_Handler, /* 26 Timer/Counter 0 Channel 1 */
        .pfnTC0_CH2_Handler            = (void*) TC0_CH2_Handler, /* 27 Timer/Counter 0 Channel 2 */
        .pfnTC1_CH0_Handler            = (void*) TC1_CH0_Handler, /* 28 Timer/Counter 1 Channel 0 */
        .pfnTC1_CH1_Handler            = (void*) TC1_CH1_Handler, /* 29 Timer/Counter 1 Channel 1 */
        .pfnTC1_CH2_Handler            = (void*) TC1_CH2_Handler, /* 30 Timer/Counter 1 Channel 2 */
        .pfnPWM0_Handler               = (void*) PWM0_Handler,   /* 31 Pulse Width Modulation Controller */
        .pfnPWM1_Handler               = (void*) PWM1_Handler,   /* 32 Pulse Width Modulation Controller */
        .pfnICM_Handler                = (void*) ICM_Handler,    /* 33 Integrity Check Monitor */
        .pfnPIOF_Handler               = (void*) PIOF_Handler,   /* 34 Parallel Input/Output Controller */
        .pfnPIOG_Handler               = (void*) PIOG_Handler,   /* 35 Parallel Input/Output Controller */
        .pfnMCAN0_INT0_Handler         = (void*) MCAN0_INT0_Handler, /* 36 Controller Area Network */
        .pfnMCAN0_INT1_Handler         = (void*) MCAN0_INT1_Handler, /* 37 Controller Area Network */
        .pfnMCAN1_INT0_Handler         = (void*) MCAN1_INT0_Handler, /* 38 Controller Area Network */
        .pfnMCAN1_INT1_Handler         = (void*) MCAN1_INT1_Handler, /* 39 Controller Area Network */
        .pfnTCMECC_INTFIX_Handler      = (void*) TCMECC_INTFIX_Handler, /* 40 HECC */
        .pfnTCMECC_INTNOFIX_Handler    = (void*) TCMECC_INTNOFIX_Handler, /* 41 HECC */
        .pfnFLEXRAMECC_INTFIX_Handler  = (void*) FLEXRAMECC_INTFIX_Handler, /* 42 FLEXRAMECC */
        .pfnFLEXRAMECC_INTNOFIX_Handler = (void*) FLEXRAMECC_INTNOFIX_Handler, /* 43 FLEXRAMECC */
        .pfnSHA_Handler                = (void*) SHA_Handler,    /* 44 Secure Hash Algorithm */
        .pfnFLEXCOM8_Handler           = (void*) FLEXCOM8_Handler, /* 45 Flexible Serial Communication */
        .pfnFLEXCOM9_Handler           = (void*) FLEXCOM9_Handler, /* 46 Flexible Serial Communication */
        .pfnRSWDT_Handler              = (void*) RSWDT_Handler,  /* 47 Reinforced Safety Watchdog Timer */
        .pvReserved48                  = (void*) (0UL),          /* 48 Reserved */
        .pfnQSPI_Handler               = (void*) QSPI_Handler,   /* 49 Quad Serial Peripheral Interface */
        .pfnHEFC_INT0_Handler          = (void*) HEFC_INT0_Handler, /* 50 Harden Embedded Flash Controller */
        .pfnHEFC_INTFIX_Handler        = (void*) HEFC_INTFIX_Handler, /* 51 Harden Embedded Flash Controller */
        .pfnHEFC_INTNOFIX_Handler      = (void*) HEFC_INTNOFIX_Handler, /* 52 Harden Embedded Flash Controller */
        .pfnTC2_CH0_Handler            = (void*) TC2_CH0_Handler, /* 53 Timer/Counter 2 Channel 0 */
        .pfnTC2_CH1_Handler            = (void*) TC2_CH1_Handler, /* 54 Timer/Counter 2 Channel 1 */
        .pfnTC2_CH2_Handler            = (void*) TC2_CH2_Handler, /* 55 Timer/Counter 2 Channel 2 */
        .pfnTC3_CH0_Handler            = (void*) TC3_CH0_Handler, /* 56 Timer/Counter 3 Channel 0 */
        .pfnTC3_CH1_Handler            = (void*) TC3_CH1_Handler, /* 57 Timer/Counter 3 Channel 1 */
        .pfnTC3_CH2_Handler            = (void*) TC3_CH2_Handler, /* 58 Timer/Counter 3 Channel 2 */
        .pfnHEMC_INTSDRAMC_Handler     = (void*) HEMC_INTSDRAMC_Handler, /* 59 HEMC */
        .pfnHEMC_INTFIX_Handler        = (void*) HEMC_INTFIX_Handler, /* 60 HEMC */
        .pfnHEMC_INTNOFIX_Handler      = (void*) HEMC_INTNOFIX_Handler, /* 61 HEMC */
        .pfnSFR_Handler                = (void*) SFR_Handler,    /* 62 Special Function Registers */
        .pfnTRNG_Handler               = (void*) TRNG_Handler,   /* 63 True Random Number Generator */
        .pfnXDMAC_Handler              = (void*) XDMAC_Handler,  /* 64 Extensible DMA Controller */
        .pfnSPW_Handler                = (void*) SPW_Handler,    /* 65 SpW */
        .pvReserved66                  = (void*) (0UL),          /* 66 Reserved */
        .pvReserved67                  = (void*) (0UL),          /* 67 Reserved */
        .pfnIP1553_Handler             = (void*) IP1553_Handler, /* 68 IP 1553 */
        .pfnGMAC_Handler               = (void*) GMAC_Handler,   /* 69 Gigabit Ethernet MAC */
        .pfnGMAC_Q1_Handler            = (void*) GMAC_Q1_Handler, /* 70 Gigabit Ethernet MAC */
        .pfnGMAC_Q2_Handler            = (void*) GMAC_Q2_Handler, /* 71 Gigabit Ethernet MAC */
        .pfnGMAC_Q3_Handler            = (void*) GMAC_Q3_Handler, /* 72 Gigabit Ethernet MAC */
        .pfnGMAC_Q4_Handler            = (void*) GMAC_Q4_Handler, /* 73 Gigabit Ethernet MAC */
        .pfnGMAC_Q5_Handler            = (void*) GMAC_Q5_Handler  /* 74 Gigabit Ethernet MAC */
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

/*
 * Peripheral I/O description for SAMHA0G16AB
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

/* file generated from device description version 2019-11-25T06:57:36Z */
#ifndef _SAMHA0G16AB_GPIO_H_
#define _SAMHA0G16AB_GPIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA00                    (    0)  /**< Pin Number for PA00 */
#define PIN_PA01                    (    1)  /**< Pin Number for PA01 */
#define PIN_PA02                    (    2)  /**< Pin Number for PA02 */
#define PIN_PA03                    (    3)  /**< Pin Number for PA03 */
#define PIN_PA04                    (    4)  /**< Pin Number for PA04 */
#define PIN_PA05                    (    5)  /**< Pin Number for PA05 */
#define PIN_PA06                    (    6)  /**< Pin Number for PA06 */
#define PIN_PA07                    (    7)  /**< Pin Number for PA07 */
#define PIN_PA08                    (    8)  /**< Pin Number for PA08 */
#define PIN_PA09                    (    9)  /**< Pin Number for PA09 */
#define PIN_PA10                    (   10)  /**< Pin Number for PA10 */
#define PIN_PA11                    (   11)  /**< Pin Number for PA11 */
#define PIN_PA14                    (   14)  /**< Pin Number for PA14 */
#define PIN_PA15                    (   15)  /**< Pin Number for PA15 */
#define PIN_PA16                    (   16)  /**< Pin Number for PA16 */
#define PIN_PA17                    (   17)  /**< Pin Number for PA17 */
#define PIN_PA18                    (   18)  /**< Pin Number for PA18 */
#define PIN_PA19                    (   19)  /**< Pin Number for PA19 */
#define PIN_PA20                    (   20)  /**< Pin Number for PA20 */
#define PIN_PA21                    (   21)  /**< Pin Number for PA21 */
#define PIN_PA27                    (   27)  /**< Pin Number for PA27 */
#define PIN_PA28                    (   28)  /**< Pin Number for PA28 */
#define PIN_PA30                    (   30)  /**< Pin Number for PA30 */
#define PIN_PA31                    (   31)  /**< Pin Number for PA31 */
#define PIN_PB03                    (   35)  /**< Pin Number for PB03 */
#define PIN_PB06                    (   38)  /**< Pin Number for PB06 */
#define PIN_PB07                    (   39)  /**< Pin Number for PB07 */
#define PIN_PB10                    (   42)  /**< Pin Number for PB10 */
#define PIN_PB11                    (   43)  /**< Pin Number for PB11 */
#define PIN_PB16                    (   48)  /**< Pin Number for PB16 */
#define PIN_PB17                    (   49)  /**< Pin Number for PB17 */
#define PIN_PB22                    (   54)  /**< Pin Number for PB22 */
#define PIN_PB23                    (   55)  /**< Pin Number for PB23 */
#define PIN_PB30                    (   62)  /**< Pin Number for PB30 */

/* ========== Peripheral I/O masks ========== */
#define PORT_PA00                   (_UINT32_(1) << 0) /**< PORT mask for PA00 */
#define PORT_PA01                   (_UINT32_(1) << 1) /**< PORT mask for PA01 */
#define PORT_PA02                   (_UINT32_(1) << 2) /**< PORT mask for PA02 */
#define PORT_PA03                   (_UINT32_(1) << 3) /**< PORT mask for PA03 */
#define PORT_PA04                   (_UINT32_(1) << 4) /**< PORT mask for PA04 */
#define PORT_PA05                   (_UINT32_(1) << 5) /**< PORT mask for PA05 */
#define PORT_PA06                   (_UINT32_(1) << 6) /**< PORT mask for PA06 */
#define PORT_PA07                   (_UINT32_(1) << 7) /**< PORT mask for PA07 */
#define PORT_PA08                   (_UINT32_(1) << 8) /**< PORT mask for PA08 */
#define PORT_PA09                   (_UINT32_(1) << 9) /**< PORT mask for PA09 */
#define PORT_PA10                   (_UINT32_(1) << 10) /**< PORT mask for PA10 */
#define PORT_PA11                   (_UINT32_(1) << 11) /**< PORT mask for PA11 */
#define PORT_PA14                   (_UINT32_(1) << 14) /**< PORT mask for PA14 */
#define PORT_PA15                   (_UINT32_(1) << 15) /**< PORT mask for PA15 */
#define PORT_PA16                   (_UINT32_(1) << 16) /**< PORT mask for PA16 */
#define PORT_PA17                   (_UINT32_(1) << 17) /**< PORT mask for PA17 */
#define PORT_PA18                   (_UINT32_(1) << 18) /**< PORT mask for PA18 */
#define PORT_PA19                   (_UINT32_(1) << 19) /**< PORT mask for PA19 */
#define PORT_PA20                   (_UINT32_(1) << 20) /**< PORT mask for PA20 */
#define PORT_PA21                   (_UINT32_(1) << 21) /**< PORT mask for PA21 */
#define PORT_PA27                   (_UINT32_(1) << 27) /**< PORT mask for PA27 */
#define PORT_PA28                   (_UINT32_(1) << 28) /**< PORT mask for PA28 */
#define PORT_PA30                   (_UINT32_(1) << 30) /**< PORT mask for PA30 */
#define PORT_PA31                   (_UINT32_(1) << 31) /**< PORT mask for PA31 */
#define PORT_PB03                   (_UINT32_(1) << 3) /**< PORT mask for PB03 */
#define PORT_PB06                   (_UINT32_(1) << 6) /**< PORT mask for PB06 */
#define PORT_PB07                   (_UINT32_(1) << 7) /**< PORT mask for PB07 */
#define PORT_PB10                   (_UINT32_(1) << 10) /**< PORT mask for PB10 */
#define PORT_PB11                   (_UINT32_(1) << 11) /**< PORT mask for PB11 */
#define PORT_PB16                   (_UINT32_(1) << 16) /**< PORT mask for PB16 */
#define PORT_PB17                   (_UINT32_(1) << 17) /**< PORT mask for PB17 */
#define PORT_PB22                   (_UINT32_(1) << 22) /**< PORT mask for PB22 */
#define PORT_PB23                   (_UINT32_(1) << 23) /**< PORT mask for PB23 */
#define PORT_PB30                   (_UINT32_(1) << 30) /**< PORT mask for PB30 */

/* ========== PORT definition for AC peripheral ========== */
#define PIN_PA04B_AC_AIN0                          _UINT32_(4) 
#define MUX_PA04B_AC_AIN0                          _UINT32_(1) 
#define PINMUX_PA04B_AC_AIN0                       ((PIN_PA04B_AC_AIN0 << 16) | MUX_PA04B_AC_AIN0)
#define PORT_PA04B_AC_AIN0                         (_UINT32_(1) << 4)

#define PIN_PA05B_AC_AIN1                          _UINT32_(5) 
#define MUX_PA05B_AC_AIN1                          _UINT32_(1) 
#define PINMUX_PA05B_AC_AIN1                       ((PIN_PA05B_AC_AIN1 << 16) | MUX_PA05B_AC_AIN1)
#define PORT_PA05B_AC_AIN1                         (_UINT32_(1) << 5)

#define PIN_PA06B_AC_AIN2                          _UINT32_(6) 
#define MUX_PA06B_AC_AIN2                          _UINT32_(1) 
#define PINMUX_PA06B_AC_AIN2                       ((PIN_PA06B_AC_AIN2 << 16) | MUX_PA06B_AC_AIN2)
#define PORT_PA06B_AC_AIN2                         (_UINT32_(1) << 6)

#define PIN_PA07B_AC_AIN3                          _UINT32_(7) 
#define MUX_PA07B_AC_AIN3                          _UINT32_(1) 
#define PINMUX_PA07B_AC_AIN3                       ((PIN_PA07B_AC_AIN3 << 16) | MUX_PA07B_AC_AIN3)
#define PORT_PA07B_AC_AIN3                         (_UINT32_(1) << 7)

#define PIN_PA18H_AC_CMP0                          _UINT32_(18)
#define MUX_PA18H_AC_CMP0                          _UINT32_(7) 
#define PINMUX_PA18H_AC_CMP0                       ((PIN_PA18H_AC_CMP0 << 16) | MUX_PA18H_AC_CMP0)
#define PORT_PA18H_AC_CMP0                         (_UINT32_(1) << 18)

#define PIN_PA19H_AC_CMP1                          _UINT32_(19)
#define MUX_PA19H_AC_CMP1                          _UINT32_(7) 
#define PINMUX_PA19H_AC_CMP1                       ((PIN_PA19H_AC_CMP1 << 16) | MUX_PA19H_AC_CMP1)
#define PORT_PA19H_AC_CMP1                         (_UINT32_(1) << 19)

/* ========== PORT definition for ADC peripheral ========== */
#define PIN_PA02B_ADC_AIN0                         _UINT32_(2) 
#define MUX_PA02B_ADC_AIN0                         _UINT32_(1) 
#define PINMUX_PA02B_ADC_AIN0                      ((PIN_PA02B_ADC_AIN0 << 16) | MUX_PA02B_ADC_AIN0)
#define PORT_PA02B_ADC_AIN0                        (_UINT32_(1) << 2)

#define PIN_PA03B_ADC_AIN1                         _UINT32_(3) 
#define MUX_PA03B_ADC_AIN1                         _UINT32_(1) 
#define PINMUX_PA03B_ADC_AIN1                      ((PIN_PA03B_ADC_AIN1 << 16) | MUX_PA03B_ADC_AIN1)
#define PORT_PA03B_ADC_AIN1                        (_UINT32_(1) << 3)

#define PIN_PA04B_ADC_AIN4                         _UINT32_(4) 
#define MUX_PA04B_ADC_AIN4                         _UINT32_(1) 
#define PINMUX_PA04B_ADC_AIN4                      ((PIN_PA04B_ADC_AIN4 << 16) | MUX_PA04B_ADC_AIN4)
#define PORT_PA04B_ADC_AIN4                        (_UINT32_(1) << 4)

#define PIN_PA05B_ADC_AIN5                         _UINT32_(5) 
#define MUX_PA05B_ADC_AIN5                         _UINT32_(1) 
#define PINMUX_PA05B_ADC_AIN5                      ((PIN_PA05B_ADC_AIN5 << 16) | MUX_PA05B_ADC_AIN5)
#define PORT_PA05B_ADC_AIN5                        (_UINT32_(1) << 5)

#define PIN_PA06B_ADC_AIN6                         _UINT32_(6) 
#define MUX_PA06B_ADC_AIN6                         _UINT32_(1) 
#define PINMUX_PA06B_ADC_AIN6                      ((PIN_PA06B_ADC_AIN6 << 16) | MUX_PA06B_ADC_AIN6)
#define PORT_PA06B_ADC_AIN6                        (_UINT32_(1) << 6)

#define PIN_PA07B_ADC_AIN7                         _UINT32_(7) 
#define MUX_PA07B_ADC_AIN7                         _UINT32_(1) 
#define PINMUX_PA07B_ADC_AIN7                      ((PIN_PA07B_ADC_AIN7 << 16) | MUX_PA07B_ADC_AIN7)
#define PORT_PA07B_ADC_AIN7                        (_UINT32_(1) << 7)

#define PIN_PB03B_ADC_AIN11                        _UINT32_(35)
#define MUX_PB03B_ADC_AIN11                        _UINT32_(1) 
#define PINMUX_PB03B_ADC_AIN11                     ((PIN_PB03B_ADC_AIN11 << 16) | MUX_PB03B_ADC_AIN11)
#define PORT_PB03B_ADC_AIN11                       (_UINT32_(1) << 3)

#define PIN_PB06B_ADC_AIN14                        _UINT32_(38)
#define MUX_PB06B_ADC_AIN14                        _UINT32_(1) 
#define PINMUX_PB06B_ADC_AIN14                     ((PIN_PB06B_ADC_AIN14 << 16) | MUX_PB06B_ADC_AIN14)
#define PORT_PB06B_ADC_AIN14                       (_UINT32_(1) << 6)

#define PIN_PB07B_ADC_AIN15                        _UINT32_(39)
#define MUX_PB07B_ADC_AIN15                        _UINT32_(1) 
#define PINMUX_PB07B_ADC_AIN15                     ((PIN_PB07B_ADC_AIN15 << 16) | MUX_PB07B_ADC_AIN15)
#define PORT_PB07B_ADC_AIN15                       (_UINT32_(1) << 7)

#define PIN_PA08B_ADC_AIN16                        _UINT32_(8) 
#define MUX_PA08B_ADC_AIN16                        _UINT32_(1) 
#define PINMUX_PA08B_ADC_AIN16                     ((PIN_PA08B_ADC_AIN16 << 16) | MUX_PA08B_ADC_AIN16)
#define PORT_PA08B_ADC_AIN16                       (_UINT32_(1) << 8)

#define PIN_PA09B_ADC_AIN17                        _UINT32_(9) 
#define MUX_PA09B_ADC_AIN17                        _UINT32_(1) 
#define PINMUX_PA09B_ADC_AIN17                     ((PIN_PA09B_ADC_AIN17 << 16) | MUX_PA09B_ADC_AIN17)
#define PORT_PA09B_ADC_AIN17                       (_UINT32_(1) << 9)

#define PIN_PA10B_ADC_AIN18                        _UINT32_(10)
#define MUX_PA10B_ADC_AIN18                        _UINT32_(1) 
#define PINMUX_PA10B_ADC_AIN18                     ((PIN_PA10B_ADC_AIN18 << 16) | MUX_PA10B_ADC_AIN18)
#define PORT_PA10B_ADC_AIN18                       (_UINT32_(1) << 10)

#define PIN_PA11B_ADC_AIN19                        _UINT32_(11)
#define MUX_PA11B_ADC_AIN19                        _UINT32_(1) 
#define PINMUX_PA11B_ADC_AIN19                     ((PIN_PA11B_ADC_AIN19 << 16) | MUX_PA11B_ADC_AIN19)
#define PORT_PA11B_ADC_AIN19                       (_UINT32_(1) << 11)

#define PIN_PA04B_ADC_VREFP                        _UINT32_(4) 
#define MUX_PA04B_ADC_VREFP                        _UINT32_(1) 
#define PINMUX_PA04B_ADC_VREFP                     ((PIN_PA04B_ADC_VREFP << 16) | MUX_PA04B_ADC_VREFP)
#define PORT_PA04B_ADC_VREFP                       (_UINT32_(1) << 4)

/* ========== PORT definition for DAC peripheral ========== */
#define PIN_PA02B_DAC_VOUT                         _UINT32_(2) 
#define MUX_PA02B_DAC_VOUT                         _UINT32_(1) 
#define PINMUX_PA02B_DAC_VOUT                      ((PIN_PA02B_DAC_VOUT << 16) | MUX_PA02B_DAC_VOUT)
#define PORT_PA02B_DAC_VOUT                        (_UINT32_(1) << 2)

#define PIN_PA03B_DAC_VREFP                        _UINT32_(3) 
#define MUX_PA03B_DAC_VREFP                        _UINT32_(1) 
#define PINMUX_PA03B_DAC_VREFP                     ((PIN_PA03B_DAC_VREFP << 16) | MUX_PA03B_DAC_VREFP)
#define PORT_PA03B_DAC_VREFP                       (_UINT32_(1) << 3)

/* ========== PORT definition for EIC peripheral ========== */
#define PIN_PA16A_EIC_EXTINT0                      _UINT32_(16)
#define MUX_PA16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA16A_EIC_EXTINT0                   ((PIN_PA16A_EIC_EXTINT0 << 16) | MUX_PA16A_EIC_EXTINT0)
#define PORT_PA16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PA16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA16 External Interrupt Line */

#define PIN_PB16A_EIC_EXTINT0                      _UINT32_(48)
#define MUX_PB16A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PB16A_EIC_EXTINT0                   ((PIN_PB16A_EIC_EXTINT0 << 16) | MUX_PB16A_EIC_EXTINT0)
#define PORT_PB16A_EIC_EXTINT0                     (_UINT32_(1) << 16)
#define PIN_PB16A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PB16 External Interrupt Line */

#define PIN_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define MUX_PA00A_EIC_EXTINT0                      _UINT32_(0) 
#define PINMUX_PA00A_EIC_EXTINT0                   ((PIN_PA00A_EIC_EXTINT0 << 16) | MUX_PA00A_EIC_EXTINT0)
#define PORT_PA00A_EIC_EXTINT0                     (_UINT32_(1) << 0)
#define PIN_PA00A_EIC_EXTINT_NUM                   _UINT32_(0)  /* EIC signal: PIN_PA00 External Interrupt Line */

#define PIN_PA17A_EIC_EXTINT1                      _UINT32_(17)
#define MUX_PA17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA17A_EIC_EXTINT1                   ((PIN_PA17A_EIC_EXTINT1 << 16) | MUX_PA17A_EIC_EXTINT1)
#define PORT_PA17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PA17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA17 External Interrupt Line */

#define PIN_PB17A_EIC_EXTINT1                      _UINT32_(49)
#define MUX_PB17A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PB17A_EIC_EXTINT1                   ((PIN_PB17A_EIC_EXTINT1 << 16) | MUX_PB17A_EIC_EXTINT1)
#define PORT_PB17A_EIC_EXTINT1                     (_UINT32_(1) << 17)
#define PIN_PB17A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PB17 External Interrupt Line */

#define PIN_PA01A_EIC_EXTINT1                      _UINT32_(1) 
#define MUX_PA01A_EIC_EXTINT1                      _UINT32_(0) 
#define PINMUX_PA01A_EIC_EXTINT1                   ((PIN_PA01A_EIC_EXTINT1 << 16) | MUX_PA01A_EIC_EXTINT1)
#define PORT_PA01A_EIC_EXTINT1                     (_UINT32_(1) << 1)
#define PIN_PA01A_EIC_EXTINT_NUM                   _UINT32_(1)  /* EIC signal: PIN_PA01 External Interrupt Line */

#define PIN_PA02A_EIC_EXTINT2                      _UINT32_(2) 
#define MUX_PA02A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA02A_EIC_EXTINT2                   ((PIN_PA02A_EIC_EXTINT2 << 16) | MUX_PA02A_EIC_EXTINT2)
#define PORT_PA02A_EIC_EXTINT2                     (_UINT32_(1) << 2)
#define PIN_PA02A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA02 External Interrupt Line */

#define PIN_PA18A_EIC_EXTINT2                      _UINT32_(18)
#define MUX_PA18A_EIC_EXTINT2                      _UINT32_(0) 
#define PINMUX_PA18A_EIC_EXTINT2                   ((PIN_PA18A_EIC_EXTINT2 << 16) | MUX_PA18A_EIC_EXTINT2)
#define PORT_PA18A_EIC_EXTINT2                     (_UINT32_(1) << 18)
#define PIN_PA18A_EIC_EXTINT_NUM                   _UINT32_(2)  /* EIC signal: PIN_PA18 External Interrupt Line */

#define PIN_PA03A_EIC_EXTINT3                      _UINT32_(3) 
#define MUX_PA03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA03A_EIC_EXTINT3                   ((PIN_PA03A_EIC_EXTINT3 << 16) | MUX_PA03A_EIC_EXTINT3)
#define PORT_PA03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PA03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA03 External Interrupt Line */

#define PIN_PA19A_EIC_EXTINT3                      _UINT32_(19)
#define MUX_PA19A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PA19A_EIC_EXTINT3                   ((PIN_PA19A_EIC_EXTINT3 << 16) | MUX_PA19A_EIC_EXTINT3)
#define PORT_PA19A_EIC_EXTINT3                     (_UINT32_(1) << 19)
#define PIN_PA19A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PA19 External Interrupt Line */

#define PIN_PB03A_EIC_EXTINT3                      _UINT32_(35)
#define MUX_PB03A_EIC_EXTINT3                      _UINT32_(0) 
#define PINMUX_PB03A_EIC_EXTINT3                   ((PIN_PB03A_EIC_EXTINT3 << 16) | MUX_PB03A_EIC_EXTINT3)
#define PORT_PB03A_EIC_EXTINT3                     (_UINT32_(1) << 3)
#define PIN_PB03A_EIC_EXTINT_NUM                   _UINT32_(3)  /* EIC signal: PIN_PB03 External Interrupt Line */

#define PIN_PA04A_EIC_EXTINT4                      _UINT32_(4) 
#define MUX_PA04A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA04A_EIC_EXTINT4                   ((PIN_PA04A_EIC_EXTINT4 << 16) | MUX_PA04A_EIC_EXTINT4)
#define PORT_PA04A_EIC_EXTINT4                     (_UINT32_(1) << 4)
#define PIN_PA04A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA04 External Interrupt Line */

#define PIN_PA20A_EIC_EXTINT4                      _UINT32_(20)
#define MUX_PA20A_EIC_EXTINT4                      _UINT32_(0) 
#define PINMUX_PA20A_EIC_EXTINT4                   ((PIN_PA20A_EIC_EXTINT4 << 16) | MUX_PA20A_EIC_EXTINT4)
#define PORT_PA20A_EIC_EXTINT4                     (_UINT32_(1) << 20)
#define PIN_PA20A_EIC_EXTINT_NUM                   _UINT32_(4)  /* EIC signal: PIN_PA20 External Interrupt Line */

#define PIN_PA05A_EIC_EXTINT5                      _UINT32_(5) 
#define MUX_PA05A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA05A_EIC_EXTINT5                   ((PIN_PA05A_EIC_EXTINT5 << 16) | MUX_PA05A_EIC_EXTINT5)
#define PORT_PA05A_EIC_EXTINT5                     (_UINT32_(1) << 5)
#define PIN_PA05A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA05 External Interrupt Line */

#define PIN_PA21A_EIC_EXTINT5                      _UINT32_(21)
#define MUX_PA21A_EIC_EXTINT5                      _UINT32_(0) 
#define PINMUX_PA21A_EIC_EXTINT5                   ((PIN_PA21A_EIC_EXTINT5 << 16) | MUX_PA21A_EIC_EXTINT5)
#define PORT_PA21A_EIC_EXTINT5                     (_UINT32_(1) << 21)
#define PIN_PA21A_EIC_EXTINT_NUM                   _UINT32_(5)  /* EIC signal: PIN_PA21 External Interrupt Line */

#define PIN_PA06A_EIC_EXTINT6                      _UINT32_(6) 
#define MUX_PA06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PA06A_EIC_EXTINT6                   ((PIN_PA06A_EIC_EXTINT6 << 16) | MUX_PA06A_EIC_EXTINT6)
#define PORT_PA06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PA06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PA06 External Interrupt Line */

#define PIN_PB06A_EIC_EXTINT6                      _UINT32_(38)
#define MUX_PB06A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PB06A_EIC_EXTINT6                   ((PIN_PB06A_EIC_EXTINT6 << 16) | MUX_PB06A_EIC_EXTINT6)
#define PORT_PB06A_EIC_EXTINT6                     (_UINT32_(1) << 6)
#define PIN_PB06A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PB06 External Interrupt Line */

#define PIN_PB22A_EIC_EXTINT6                      _UINT32_(54)
#define MUX_PB22A_EIC_EXTINT6                      _UINT32_(0) 
#define PINMUX_PB22A_EIC_EXTINT6                   ((PIN_PB22A_EIC_EXTINT6 << 16) | MUX_PB22A_EIC_EXTINT6)
#define PORT_PB22A_EIC_EXTINT6                     (_UINT32_(1) << 22)
#define PIN_PB22A_EIC_EXTINT_NUM                   _UINT32_(6)  /* EIC signal: PIN_PB22 External Interrupt Line */

#define PIN_PA07A_EIC_EXTINT7                      _UINT32_(7) 
#define MUX_PA07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PA07A_EIC_EXTINT7                   ((PIN_PA07A_EIC_EXTINT7 << 16) | MUX_PA07A_EIC_EXTINT7)
#define PORT_PA07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PA07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PA07 External Interrupt Line */

#define PIN_PB07A_EIC_EXTINT7                      _UINT32_(39)
#define MUX_PB07A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PB07A_EIC_EXTINT7                   ((PIN_PB07A_EIC_EXTINT7 << 16) | MUX_PB07A_EIC_EXTINT7)
#define PORT_PB07A_EIC_EXTINT7                     (_UINT32_(1) << 7)
#define PIN_PB07A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PB07 External Interrupt Line */

#define PIN_PB23A_EIC_EXTINT7                      _UINT32_(55)
#define MUX_PB23A_EIC_EXTINT7                      _UINT32_(0) 
#define PINMUX_PB23A_EIC_EXTINT7                   ((PIN_PB23A_EIC_EXTINT7 << 16) | MUX_PB23A_EIC_EXTINT7)
#define PORT_PB23A_EIC_EXTINT7                     (_UINT32_(1) << 23)
#define PIN_PB23A_EIC_EXTINT_NUM                   _UINT32_(7)  /* EIC signal: PIN_PB23 External Interrupt Line */

#define PIN_PA28A_EIC_EXTINT8                      _UINT32_(28)
#define MUX_PA28A_EIC_EXTINT8                      _UINT32_(0) 
#define PINMUX_PA28A_EIC_EXTINT8                   ((PIN_PA28A_EIC_EXTINT8 << 16) | MUX_PA28A_EIC_EXTINT8)
#define PORT_PA28A_EIC_EXTINT8                     (_UINT32_(1) << 28)
#define PIN_PA28A_EIC_EXTINT_NUM                   _UINT32_(8)  /* EIC signal: PIN_PA28 External Interrupt Line */

#define PIN_PA09A_EIC_EXTINT9                      _UINT32_(9) 
#define MUX_PA09A_EIC_EXTINT9                      _UINT32_(0) 
#define PINMUX_PA09A_EIC_EXTINT9                   ((PIN_PA09A_EIC_EXTINT9 << 16) | MUX_PA09A_EIC_EXTINT9)
#define PORT_PA09A_EIC_EXTINT9                     (_UINT32_(1) << 9)
#define PIN_PA09A_EIC_EXTINT_NUM                   _UINT32_(9)  /* EIC signal: PIN_PA09 External Interrupt Line */

#define PIN_PA10A_EIC_EXTINT10                     _UINT32_(10)
#define MUX_PA10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA10A_EIC_EXTINT10                  ((PIN_PA10A_EIC_EXTINT10 << 16) | MUX_PA10A_EIC_EXTINT10)
#define PORT_PA10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PA10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA10 External Interrupt Line */

#define PIN_PA30A_EIC_EXTINT10                     _UINT32_(30)
#define MUX_PA30A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PA30A_EIC_EXTINT10                  ((PIN_PA30A_EIC_EXTINT10 << 16) | MUX_PA30A_EIC_EXTINT10)
#define PORT_PA30A_EIC_EXTINT10                    (_UINT32_(1) << 30)
#define PIN_PA30A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PA30 External Interrupt Line */

#define PIN_PB10A_EIC_EXTINT10                     _UINT32_(42)
#define MUX_PB10A_EIC_EXTINT10                     _UINT32_(0) 
#define PINMUX_PB10A_EIC_EXTINT10                  ((PIN_PB10A_EIC_EXTINT10 << 16) | MUX_PB10A_EIC_EXTINT10)
#define PORT_PB10A_EIC_EXTINT10                    (_UINT32_(1) << 10)
#define PIN_PB10A_EIC_EXTINT_NUM                   _UINT32_(10) /* EIC signal: PIN_PB10 External Interrupt Line */

#define PIN_PA11A_EIC_EXTINT11                     _UINT32_(11)
#define MUX_PA11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA11A_EIC_EXTINT11                  ((PIN_PA11A_EIC_EXTINT11 << 16) | MUX_PA11A_EIC_EXTINT11)
#define PORT_PA11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PA11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA11 External Interrupt Line */

#define PIN_PA31A_EIC_EXTINT11                     _UINT32_(31)
#define MUX_PA31A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PA31A_EIC_EXTINT11                  ((PIN_PA31A_EIC_EXTINT11 << 16) | MUX_PA31A_EIC_EXTINT11)
#define PORT_PA31A_EIC_EXTINT11                    (_UINT32_(1) << 31)
#define PIN_PA31A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PA31 External Interrupt Line */

#define PIN_PB11A_EIC_EXTINT11                     _UINT32_(43)
#define MUX_PB11A_EIC_EXTINT11                     _UINT32_(0) 
#define PINMUX_PB11A_EIC_EXTINT11                  ((PIN_PB11A_EIC_EXTINT11 << 16) | MUX_PB11A_EIC_EXTINT11)
#define PORT_PB11A_EIC_EXTINT11                    (_UINT32_(1) << 11)
#define PIN_PB11A_EIC_EXTINT_NUM                   _UINT32_(11) /* EIC signal: PIN_PB11 External Interrupt Line */

#define PIN_PB30A_EIC_EXTINT14                     _UINT32_(62)
#define MUX_PB30A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PB30A_EIC_EXTINT14                  ((PIN_PB30A_EIC_EXTINT14 << 16) | MUX_PB30A_EIC_EXTINT14)
#define PORT_PB30A_EIC_EXTINT14                    (_UINT32_(1) << 30)
#define PIN_PB30A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PB30 External Interrupt Line */

#define PIN_PA14A_EIC_EXTINT14                     _UINT32_(14)
#define MUX_PA14A_EIC_EXTINT14                     _UINT32_(0) 
#define PINMUX_PA14A_EIC_EXTINT14                  ((PIN_PA14A_EIC_EXTINT14 << 16) | MUX_PA14A_EIC_EXTINT14)
#define PORT_PA14A_EIC_EXTINT14                    (_UINT32_(1) << 14)
#define PIN_PA14A_EIC_EXTINT_NUM                   _UINT32_(14) /* EIC signal: PIN_PA14 External Interrupt Line */

#define PIN_PA27A_EIC_EXTINT15                     _UINT32_(27)
#define MUX_PA27A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PA27A_EIC_EXTINT15                  ((PIN_PA27A_EIC_EXTINT15 << 16) | MUX_PA27A_EIC_EXTINT15)
#define PORT_PA27A_EIC_EXTINT15                    (_UINT32_(1) << 27)
#define PIN_PA27A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PA27 External Interrupt Line */

#define PIN_PA15A_EIC_EXTINT15                     _UINT32_(15)
#define MUX_PA15A_EIC_EXTINT15                     _UINT32_(0) 
#define PINMUX_PA15A_EIC_EXTINT15                  ((PIN_PA15A_EIC_EXTINT15 << 16) | MUX_PA15A_EIC_EXTINT15)
#define PORT_PA15A_EIC_EXTINT15                    (_UINT32_(1) << 15)
#define PIN_PA15A_EIC_EXTINT_NUM                   _UINT32_(15) /* EIC signal: PIN_PA15 External Interrupt Line */

#define PIN_PA08A_EIC_NMI                          _UINT32_(8) 
#define MUX_PA08A_EIC_NMI                          _UINT32_(0) 
#define PINMUX_PA08A_EIC_NMI                       ((PIN_PA08A_EIC_NMI << 16) | MUX_PA08A_EIC_NMI)
#define PORT_PA08A_EIC_NMI                         (_UINT32_(1) << 8)

/* ========== PORT definition for GCLK peripheral ========== */
#define PIN_PB22H_GCLK_IO0                         _UINT32_(54)
#define MUX_PB22H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PB22H_GCLK_IO0                      ((PIN_PB22H_GCLK_IO0 << 16) | MUX_PB22H_GCLK_IO0)
#define PORT_PB22H_GCLK_IO0                        (_UINT32_(1) << 22)

#define PIN_PA14H_GCLK_IO0                         _UINT32_(14)
#define MUX_PA14H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA14H_GCLK_IO0                      ((PIN_PA14H_GCLK_IO0 << 16) | MUX_PA14H_GCLK_IO0)
#define PORT_PA14H_GCLK_IO0                        (_UINT32_(1) << 14)

#define PIN_PA27H_GCLK_IO0                         _UINT32_(27)
#define MUX_PA27H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA27H_GCLK_IO0                      ((PIN_PA27H_GCLK_IO0 << 16) | MUX_PA27H_GCLK_IO0)
#define PORT_PA27H_GCLK_IO0                        (_UINT32_(1) << 27)

#define PIN_PA28H_GCLK_IO0                         _UINT32_(28)
#define MUX_PA28H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA28H_GCLK_IO0                      ((PIN_PA28H_GCLK_IO0 << 16) | MUX_PA28H_GCLK_IO0)
#define PORT_PA28H_GCLK_IO0                        (_UINT32_(1) << 28)

#define PIN_PA30H_GCLK_IO0                         _UINT32_(30)
#define MUX_PA30H_GCLK_IO0                         _UINT32_(7) 
#define PINMUX_PA30H_GCLK_IO0                      ((PIN_PA30H_GCLK_IO0 << 16) | MUX_PA30H_GCLK_IO0)
#define PORT_PA30H_GCLK_IO0                        (_UINT32_(1) << 30)

#define PIN_PB23H_GCLK_IO1                         _UINT32_(55)
#define MUX_PB23H_GCLK_IO1                         _UINT32_(7) 
#define PINMUX_PB23H_GCLK_IO1                      ((PIN_PB23H_GCLK_IO1 << 16) | MUX_PB23H_GCLK_IO1)
#define PORT_PB23H_GCLK_IO1                        (_UINT32_(1) << 23)

#define PIN_PA15H_GCLK_IO1                         _UINT32_(15)
#define MUX_PA15H_GCLK_IO1                         _UINT32_(7) 
#define PINMUX_PA15H_GCLK_IO1                      ((PIN_PA15H_GCLK_IO1 << 16) | MUX_PA15H_GCLK_IO1)
#define PORT_PA15H_GCLK_IO1                        (_UINT32_(1) << 15)

#define PIN_PB16H_GCLK_IO2                         _UINT32_(48)
#define MUX_PB16H_GCLK_IO2                         _UINT32_(7) 
#define PINMUX_PB16H_GCLK_IO2                      ((PIN_PB16H_GCLK_IO2 << 16) | MUX_PB16H_GCLK_IO2)
#define PORT_PB16H_GCLK_IO2                        (_UINT32_(1) << 16)

#define PIN_PA16H_GCLK_IO2                         _UINT32_(16)
#define MUX_PA16H_GCLK_IO2                         _UINT32_(7) 
#define PINMUX_PA16H_GCLK_IO2                      ((PIN_PA16H_GCLK_IO2 << 16) | MUX_PA16H_GCLK_IO2)
#define PORT_PA16H_GCLK_IO2                        (_UINT32_(1) << 16)

#define PIN_PA17H_GCLK_IO3                         _UINT32_(17)
#define MUX_PA17H_GCLK_IO3                         _UINT32_(7) 
#define PINMUX_PA17H_GCLK_IO3                      ((PIN_PA17H_GCLK_IO3 << 16) | MUX_PA17H_GCLK_IO3)
#define PORT_PA17H_GCLK_IO3                        (_UINT32_(1) << 17)

#define PIN_PB17H_GCLK_IO3                         _UINT32_(49)
#define MUX_PB17H_GCLK_IO3                         _UINT32_(7) 
#define PINMUX_PB17H_GCLK_IO3                      ((PIN_PB17H_GCLK_IO3 << 16) | MUX_PB17H_GCLK_IO3)
#define PORT_PB17H_GCLK_IO3                        (_UINT32_(1) << 17)

#define PIN_PA10H_GCLK_IO4                         _UINT32_(10)
#define MUX_PA10H_GCLK_IO4                         _UINT32_(7) 
#define PINMUX_PA10H_GCLK_IO4                      ((PIN_PA10H_GCLK_IO4 << 16) | MUX_PA10H_GCLK_IO4)
#define PORT_PA10H_GCLK_IO4                        (_UINT32_(1) << 10)

#define PIN_PA20H_GCLK_IO4                         _UINT32_(20)
#define MUX_PA20H_GCLK_IO4                         _UINT32_(7) 
#define PINMUX_PA20H_GCLK_IO4                      ((PIN_PA20H_GCLK_IO4 << 16) | MUX_PA20H_GCLK_IO4)
#define PORT_PA20H_GCLK_IO4                        (_UINT32_(1) << 20)

#define PIN_PB10H_GCLK_IO4                         _UINT32_(42)
#define MUX_PB10H_GCLK_IO4                         _UINT32_(7) 
#define PINMUX_PB10H_GCLK_IO4                      ((PIN_PB10H_GCLK_IO4 << 16) | MUX_PB10H_GCLK_IO4)
#define PORT_PB10H_GCLK_IO4                        (_UINT32_(1) << 10)

#define PIN_PA11H_GCLK_IO5                         _UINT32_(11)
#define MUX_PA11H_GCLK_IO5                         _UINT32_(7) 
#define PINMUX_PA11H_GCLK_IO5                      ((PIN_PA11H_GCLK_IO5 << 16) | MUX_PA11H_GCLK_IO5)
#define PORT_PA11H_GCLK_IO5                        (_UINT32_(1) << 11)

#define PIN_PA21H_GCLK_IO5                         _UINT32_(21)
#define MUX_PA21H_GCLK_IO5                         _UINT32_(7) 
#define PINMUX_PA21H_GCLK_IO5                      ((PIN_PA21H_GCLK_IO5 << 16) | MUX_PA21H_GCLK_IO5)
#define PORT_PA21H_GCLK_IO5                        (_UINT32_(1) << 21)

#define PIN_PB11H_GCLK_IO5                         _UINT32_(43)
#define MUX_PB11H_GCLK_IO5                         _UINT32_(7) 
#define PINMUX_PB11H_GCLK_IO5                      ((PIN_PB11H_GCLK_IO5 << 16) | MUX_PB11H_GCLK_IO5)
#define PORT_PB11H_GCLK_IO5                        (_UINT32_(1) << 11)

/* ========== PORT definition for SERCOM0 peripheral ========== */
#define PIN_PA04D_SERCOM0_PAD0                     _UINT32_(4) 
#define MUX_PA04D_SERCOM0_PAD0                     _UINT32_(3) 
#define PINMUX_PA04D_SERCOM0_PAD0                  ((PIN_PA04D_SERCOM0_PAD0 << 16) | MUX_PA04D_SERCOM0_PAD0)
#define PORT_PA04D_SERCOM0_PAD0                    (_UINT32_(1) << 4)

#define PIN_PA08C_SERCOM0_PAD0                     _UINT32_(8) 
#define MUX_PA08C_SERCOM0_PAD0                     _UINT32_(2) 
#define PINMUX_PA08C_SERCOM0_PAD0                  ((PIN_PA08C_SERCOM0_PAD0 << 16) | MUX_PA08C_SERCOM0_PAD0)
#define PORT_PA08C_SERCOM0_PAD0                    (_UINT32_(1) << 8)

#define PIN_PA05D_SERCOM0_PAD1                     _UINT32_(5) 
#define MUX_PA05D_SERCOM0_PAD1                     _UINT32_(3) 
#define PINMUX_PA05D_SERCOM0_PAD1                  ((PIN_PA05D_SERCOM0_PAD1 << 16) | MUX_PA05D_SERCOM0_PAD1)
#define PORT_PA05D_SERCOM0_PAD1                    (_UINT32_(1) << 5)

#define PIN_PA09C_SERCOM0_PAD1                     _UINT32_(9) 
#define MUX_PA09C_SERCOM0_PAD1                     _UINT32_(2) 
#define PINMUX_PA09C_SERCOM0_PAD1                  ((PIN_PA09C_SERCOM0_PAD1 << 16) | MUX_PA09C_SERCOM0_PAD1)
#define PORT_PA09C_SERCOM0_PAD1                    (_UINT32_(1) << 9)

#define PIN_PA06D_SERCOM0_PAD2                     _UINT32_(6) 
#define MUX_PA06D_SERCOM0_PAD2                     _UINT32_(3) 
#define PINMUX_PA06D_SERCOM0_PAD2                  ((PIN_PA06D_SERCOM0_PAD2 << 16) | MUX_PA06D_SERCOM0_PAD2)
#define PORT_PA06D_SERCOM0_PAD2                    (_UINT32_(1) << 6)

#define PIN_PA10C_SERCOM0_PAD2                     _UINT32_(10)
#define MUX_PA10C_SERCOM0_PAD2                     _UINT32_(2) 
#define PINMUX_PA10C_SERCOM0_PAD2                  ((PIN_PA10C_SERCOM0_PAD2 << 16) | MUX_PA10C_SERCOM0_PAD2)
#define PORT_PA10C_SERCOM0_PAD2                    (_UINT32_(1) << 10)

#define PIN_PA07D_SERCOM0_PAD3                     _UINT32_(7) 
#define MUX_PA07D_SERCOM0_PAD3                     _UINT32_(3) 
#define PINMUX_PA07D_SERCOM0_PAD3                  ((PIN_PA07D_SERCOM0_PAD3 << 16) | MUX_PA07D_SERCOM0_PAD3)
#define PORT_PA07D_SERCOM0_PAD3                    (_UINT32_(1) << 7)

#define PIN_PA11C_SERCOM0_PAD3                     _UINT32_(11)
#define MUX_PA11C_SERCOM0_PAD3                     _UINT32_(2) 
#define PINMUX_PA11C_SERCOM0_PAD3                  ((PIN_PA11C_SERCOM0_PAD3 << 16) | MUX_PA11C_SERCOM0_PAD3)
#define PORT_PA11C_SERCOM0_PAD3                    (_UINT32_(1) << 11)

/* ========== PORT definition for SERCOM1 peripheral ========== */
#define PIN_PA16C_SERCOM1_PAD0                     _UINT32_(16)
#define MUX_PA16C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA16C_SERCOM1_PAD0                  ((PIN_PA16C_SERCOM1_PAD0 << 16) | MUX_PA16C_SERCOM1_PAD0)
#define PORT_PA16C_SERCOM1_PAD0                    (_UINT32_(1) << 16)

#define PIN_PA00D_SERCOM1_PAD0                     _UINT32_(0) 
#define MUX_PA00D_SERCOM1_PAD0                     _UINT32_(3) 
#define PINMUX_PA00D_SERCOM1_PAD0                  ((PIN_PA00D_SERCOM1_PAD0 << 16) | MUX_PA00D_SERCOM1_PAD0)
#define PORT_PA00D_SERCOM1_PAD0                    (_UINT32_(1) << 0)

#define PIN_PA27C_SERCOM1_PAD0                     _UINT32_(27)
#define MUX_PA27C_SERCOM1_PAD0                     _UINT32_(2) 
#define PINMUX_PA27C_SERCOM1_PAD0                  ((PIN_PA27C_SERCOM1_PAD0 << 16) | MUX_PA27C_SERCOM1_PAD0)
#define PORT_PA27C_SERCOM1_PAD0                    (_UINT32_(1) << 27)

#define PIN_PA17C_SERCOM1_PAD1                     _UINT32_(17)
#define MUX_PA17C_SERCOM1_PAD1                     _UINT32_(2) 
#define PINMUX_PA17C_SERCOM1_PAD1                  ((PIN_PA17C_SERCOM1_PAD1 << 16) | MUX_PA17C_SERCOM1_PAD1)
#define PORT_PA17C_SERCOM1_PAD1                    (_UINT32_(1) << 17)

#define PIN_PA01D_SERCOM1_PAD1                     _UINT32_(1) 
#define MUX_PA01D_SERCOM1_PAD1                     _UINT32_(3) 
#define PINMUX_PA01D_SERCOM1_PAD1                  ((PIN_PA01D_SERCOM1_PAD1 << 16) | MUX_PA01D_SERCOM1_PAD1)
#define PORT_PA01D_SERCOM1_PAD1                    (_UINT32_(1) << 1)

#define PIN_PA28C_SERCOM1_PAD1                     _UINT32_(28)
#define MUX_PA28C_SERCOM1_PAD1                     _UINT32_(2) 
#define PINMUX_PA28C_SERCOM1_PAD1                  ((PIN_PA28C_SERCOM1_PAD1 << 16) | MUX_PA28C_SERCOM1_PAD1)
#define PORT_PA28C_SERCOM1_PAD1                    (_UINT32_(1) << 28)

#define PIN_PA30D_SERCOM1_PAD2                     _UINT32_(30)
#define MUX_PA30D_SERCOM1_PAD2                     _UINT32_(3) 
#define PINMUX_PA30D_SERCOM1_PAD2                  ((PIN_PA30D_SERCOM1_PAD2 << 16) | MUX_PA30D_SERCOM1_PAD2)
#define PORT_PA30D_SERCOM1_PAD2                    (_UINT32_(1) << 30)

#define PIN_PA18C_SERCOM1_PAD2                     _UINT32_(18)
#define MUX_PA18C_SERCOM1_PAD2                     _UINT32_(2) 
#define PINMUX_PA18C_SERCOM1_PAD2                  ((PIN_PA18C_SERCOM1_PAD2 << 16) | MUX_PA18C_SERCOM1_PAD2)
#define PORT_PA18C_SERCOM1_PAD2                    (_UINT32_(1) << 18)

#define PIN_PA31D_SERCOM1_PAD3                     _UINT32_(31)
#define MUX_PA31D_SERCOM1_PAD3                     _UINT32_(3) 
#define PINMUX_PA31D_SERCOM1_PAD3                  ((PIN_PA31D_SERCOM1_PAD3 << 16) | MUX_PA31D_SERCOM1_PAD3)
#define PORT_PA31D_SERCOM1_PAD3                    (_UINT32_(1) << 31)

#define PIN_PA19C_SERCOM1_PAD3                     _UINT32_(19)
#define MUX_PA19C_SERCOM1_PAD3                     _UINT32_(2) 
#define PINMUX_PA19C_SERCOM1_PAD3                  ((PIN_PA19C_SERCOM1_PAD3 << 16) | MUX_PA19C_SERCOM1_PAD3)
#define PORT_PA19C_SERCOM1_PAD3                    (_UINT32_(1) << 19)

/* ========== PORT definition for SERCOM2 peripheral ========== */
#define PIN_PA08D_SERCOM2_PAD0                     _UINT32_(8) 
#define MUX_PA08D_SERCOM2_PAD0                     _UINT32_(3) 
#define PINMUX_PA08D_SERCOM2_PAD0                  ((PIN_PA08D_SERCOM2_PAD0 << 16) | MUX_PA08D_SERCOM2_PAD0)
#define PORT_PA08D_SERCOM2_PAD0                    (_UINT32_(1) << 8)

#define PIN_PA09D_SERCOM2_PAD1                     _UINT32_(9) 
#define MUX_PA09D_SERCOM2_PAD1                     _UINT32_(3) 
#define PINMUX_PA09D_SERCOM2_PAD1                  ((PIN_PA09D_SERCOM2_PAD1 << 16) | MUX_PA09D_SERCOM2_PAD1)
#define PORT_PA09D_SERCOM2_PAD1                    (_UINT32_(1) << 9)

#define PIN_PA10D_SERCOM2_PAD2                     _UINT32_(10)
#define MUX_PA10D_SERCOM2_PAD2                     _UINT32_(3) 
#define PINMUX_PA10D_SERCOM2_PAD2                  ((PIN_PA10D_SERCOM2_PAD2 << 16) | MUX_PA10D_SERCOM2_PAD2)
#define PORT_PA10D_SERCOM2_PAD2                    (_UINT32_(1) << 10)

#define PIN_PA14C_SERCOM2_PAD2                     _UINT32_(14)
#define MUX_PA14C_SERCOM2_PAD2                     _UINT32_(2) 
#define PINMUX_PA14C_SERCOM2_PAD2                  ((PIN_PA14C_SERCOM2_PAD2 << 16) | MUX_PA14C_SERCOM2_PAD2)
#define PORT_PA14C_SERCOM2_PAD2                    (_UINT32_(1) << 14)

#define PIN_PA11D_SERCOM2_PAD3                     _UINT32_(11)
#define MUX_PA11D_SERCOM2_PAD3                     _UINT32_(3) 
#define PINMUX_PA11D_SERCOM2_PAD3                  ((PIN_PA11D_SERCOM2_PAD3 << 16) | MUX_PA11D_SERCOM2_PAD3)
#define PORT_PA11D_SERCOM2_PAD3                    (_UINT32_(1) << 11)

#define PIN_PA15C_SERCOM2_PAD3                     _UINT32_(15)
#define MUX_PA15C_SERCOM2_PAD3                     _UINT32_(2) 
#define PINMUX_PA15C_SERCOM2_PAD3                  ((PIN_PA15C_SERCOM2_PAD3 << 16) | MUX_PA15C_SERCOM2_PAD3)
#define PORT_PA15C_SERCOM2_PAD3                    (_UINT32_(1) << 15)

/* ========== PORT definition for SERCOM3 peripheral ========== */
#define PIN_PA16D_SERCOM3_PAD0                     _UINT32_(16)
#define MUX_PA16D_SERCOM3_PAD0                     _UINT32_(3) 
#define PINMUX_PA16D_SERCOM3_PAD0                  ((PIN_PA16D_SERCOM3_PAD0 << 16) | MUX_PA16D_SERCOM3_PAD0)
#define PORT_PA16D_SERCOM3_PAD0                    (_UINT32_(1) << 16)

#define PIN_PA17D_SERCOM3_PAD1                     _UINT32_(17)
#define MUX_PA17D_SERCOM3_PAD1                     _UINT32_(3) 
#define PINMUX_PA17D_SERCOM3_PAD1                  ((PIN_PA17D_SERCOM3_PAD1 << 16) | MUX_PA17D_SERCOM3_PAD1)
#define PORT_PA17D_SERCOM3_PAD1                    (_UINT32_(1) << 17)

#define PIN_PA18D_SERCOM3_PAD2                     _UINT32_(18)
#define MUX_PA18D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PA18D_SERCOM3_PAD2                  ((PIN_PA18D_SERCOM3_PAD2 << 16) | MUX_PA18D_SERCOM3_PAD2)
#define PORT_PA18D_SERCOM3_PAD2                    (_UINT32_(1) << 18)

#define PIN_PA20D_SERCOM3_PAD2                     _UINT32_(20)
#define MUX_PA20D_SERCOM3_PAD2                     _UINT32_(3) 
#define PINMUX_PA20D_SERCOM3_PAD2                  ((PIN_PA20D_SERCOM3_PAD2 << 16) | MUX_PA20D_SERCOM3_PAD2)
#define PORT_PA20D_SERCOM3_PAD2                    (_UINT32_(1) << 20)

#define PIN_PA19D_SERCOM3_PAD3                     _UINT32_(19)
#define MUX_PA19D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PA19D_SERCOM3_PAD3                  ((PIN_PA19D_SERCOM3_PAD3 << 16) | MUX_PA19D_SERCOM3_PAD3)
#define PORT_PA19D_SERCOM3_PAD3                    (_UINT32_(1) << 19)

#define PIN_PA21D_SERCOM3_PAD3                     _UINT32_(21)
#define MUX_PA21D_SERCOM3_PAD3                     _UINT32_(3) 
#define PINMUX_PA21D_SERCOM3_PAD3                  ((PIN_PA21D_SERCOM3_PAD3 << 16) | MUX_PA21D_SERCOM3_PAD3)
#define PORT_PA21D_SERCOM3_PAD3                    (_UINT32_(1) << 21)

/* ========== PORT definition for SERCOM4 peripheral ========== */
#define PIN_PA14D_SERCOM4_PAD2                     _UINT32_(14)
#define MUX_PA14D_SERCOM4_PAD2                     _UINT32_(3) 
#define PINMUX_PA14D_SERCOM4_PAD2                  ((PIN_PA14D_SERCOM4_PAD2 << 16) | MUX_PA14D_SERCOM4_PAD2)
#define PORT_PA14D_SERCOM4_PAD2                    (_UINT32_(1) << 14)

#define PIN_PB10D_SERCOM4_PAD2                     _UINT32_(42)
#define MUX_PB10D_SERCOM4_PAD2                     _UINT32_(3) 
#define PINMUX_PB10D_SERCOM4_PAD2                  ((PIN_PB10D_SERCOM4_PAD2 << 16) | MUX_PB10D_SERCOM4_PAD2)
#define PORT_PB10D_SERCOM4_PAD2                    (_UINT32_(1) << 10)

#define PIN_PA15D_SERCOM4_PAD3                     _UINT32_(15)
#define MUX_PA15D_SERCOM4_PAD3                     _UINT32_(3) 
#define PINMUX_PA15D_SERCOM4_PAD3                  ((PIN_PA15D_SERCOM4_PAD3 << 16) | MUX_PA15D_SERCOM4_PAD3)
#define PORT_PA15D_SERCOM4_PAD3                    (_UINT32_(1) << 15)

#define PIN_PB11D_SERCOM4_PAD3                     _UINT32_(43)
#define MUX_PB11D_SERCOM4_PAD3                     _UINT32_(3) 
#define PINMUX_PB11D_SERCOM4_PAD3                  ((PIN_PB11D_SERCOM4_PAD3 << 16) | MUX_PB11D_SERCOM4_PAD3)
#define PORT_PB11D_SERCOM4_PAD3                    (_UINT32_(1) << 11)

/* ========== PORT definition for SERCOM5 peripheral ========== */
#define PIN_PB30D_SERCOM5_PAD0                     _UINT32_(62)
#define MUX_PB30D_SERCOM5_PAD0                     _UINT32_(3) 
#define PINMUX_PB30D_SERCOM5_PAD0                  ((PIN_PB30D_SERCOM5_PAD0 << 16) | MUX_PB30D_SERCOM5_PAD0)
#define PORT_PB30D_SERCOM5_PAD0                    (_UINT32_(1) << 30)

#define PIN_PB16C_SERCOM5_PAD0                     _UINT32_(48)
#define MUX_PB16C_SERCOM5_PAD0                     _UINT32_(2) 
#define PINMUX_PB16C_SERCOM5_PAD0                  ((PIN_PB16C_SERCOM5_PAD0 << 16) | MUX_PB16C_SERCOM5_PAD0)
#define PORT_PB16C_SERCOM5_PAD0                    (_UINT32_(1) << 16)

#define PIN_PB03D_SERCOM5_PAD1                     _UINT32_(35)
#define MUX_PB03D_SERCOM5_PAD1                     _UINT32_(3) 
#define PINMUX_PB03D_SERCOM5_PAD1                  ((PIN_PB03D_SERCOM5_PAD1 << 16) | MUX_PB03D_SERCOM5_PAD1)
#define PORT_PB03D_SERCOM5_PAD1                    (_UINT32_(1) << 3)

#define PIN_PB17C_SERCOM5_PAD1                     _UINT32_(49)
#define MUX_PB17C_SERCOM5_PAD1                     _UINT32_(2) 
#define PINMUX_PB17C_SERCOM5_PAD1                  ((PIN_PB17C_SERCOM5_PAD1 << 16) | MUX_PB17C_SERCOM5_PAD1)
#define PORT_PB17C_SERCOM5_PAD1                    (_UINT32_(1) << 17)

#define PIN_PB22D_SERCOM5_PAD2                     _UINT32_(54)
#define MUX_PB22D_SERCOM5_PAD2                     _UINT32_(3) 
#define PINMUX_PB22D_SERCOM5_PAD2                  ((PIN_PB22D_SERCOM5_PAD2 << 16) | MUX_PB22D_SERCOM5_PAD2)
#define PORT_PB22D_SERCOM5_PAD2                    (_UINT32_(1) << 22)

#define PIN_PA20C_SERCOM5_PAD2                     _UINT32_(20)
#define MUX_PA20C_SERCOM5_PAD2                     _UINT32_(2) 
#define PINMUX_PA20C_SERCOM5_PAD2                  ((PIN_PA20C_SERCOM5_PAD2 << 16) | MUX_PA20C_SERCOM5_PAD2)
#define PORT_PA20C_SERCOM5_PAD2                    (_UINT32_(1) << 20)

#define PIN_PB23D_SERCOM5_PAD3                     _UINT32_(55)
#define MUX_PB23D_SERCOM5_PAD3                     _UINT32_(3) 
#define PINMUX_PB23D_SERCOM5_PAD3                  ((PIN_PB23D_SERCOM5_PAD3 << 16) | MUX_PB23D_SERCOM5_PAD3)
#define PORT_PB23D_SERCOM5_PAD3                    (_UINT32_(1) << 23)

#define PIN_PA21C_SERCOM5_PAD3                     _UINT32_(21)
#define MUX_PA21C_SERCOM5_PAD3                     _UINT32_(2) 
#define PINMUX_PA21C_SERCOM5_PAD3                  ((PIN_PA21C_SERCOM5_PAD3 << 16) | MUX_PA21C_SERCOM5_PAD3)
#define PORT_PA21C_SERCOM5_PAD3                    (_UINT32_(1) << 21)

/* ========== PORT definition for TC3 peripheral ========== */
#define PIN_PA18E_TC3_WO0                          _UINT32_(18)
#define MUX_PA18E_TC3_WO0                          _UINT32_(4) 
#define PINMUX_PA18E_TC3_WO0                       ((PIN_PA18E_TC3_WO0 << 16) | MUX_PA18E_TC3_WO0)
#define PORT_PA18E_TC3_WO0                         (_UINT32_(1) << 18)

#define PIN_PA14E_TC3_WO0                          _UINT32_(14)
#define MUX_PA14E_TC3_WO0                          _UINT32_(4) 
#define PINMUX_PA14E_TC3_WO0                       ((PIN_PA14E_TC3_WO0 << 16) | MUX_PA14E_TC3_WO0)
#define PORT_PA14E_TC3_WO0                         (_UINT32_(1) << 14)

#define PIN_PA19E_TC3_WO1                          _UINT32_(19)
#define MUX_PA19E_TC3_WO1                          _UINT32_(4) 
#define PINMUX_PA19E_TC3_WO1                       ((PIN_PA19E_TC3_WO1 << 16) | MUX_PA19E_TC3_WO1)
#define PORT_PA19E_TC3_WO1                         (_UINT32_(1) << 19)

#define PIN_PA15E_TC3_WO1                          _UINT32_(15)
#define MUX_PA15E_TC3_WO1                          _UINT32_(4) 
#define PINMUX_PA15E_TC3_WO1                       ((PIN_PA15E_TC3_WO1 << 16) | MUX_PA15E_TC3_WO1)
#define PORT_PA15E_TC3_WO1                         (_UINT32_(1) << 15)

/* ========== PORT definition for TC5 peripheral ========== */
#define PIN_PB10E_TC5_WO0                          _UINT32_(42)
#define MUX_PB10E_TC5_WO0                          _UINT32_(4) 
#define PINMUX_PB10E_TC5_WO0                       ((PIN_PB10E_TC5_WO0 << 16) | MUX_PB10E_TC5_WO0)
#define PORT_PB10E_TC5_WO0                         (_UINT32_(1) << 10)

#define PIN_PA27E_TC5_WO0                          _UINT32_(27)
#define MUX_PA27E_TC5_WO0                          _UINT32_(4) 
#define PINMUX_PA27E_TC5_WO0                       ((PIN_PA27E_TC5_WO0 << 16) | MUX_PA27E_TC5_WO0)
#define PORT_PA27E_TC5_WO0                         (_UINT32_(1) << 27)

#define PIN_PB11E_TC5_WO1                          _UINT32_(43)
#define MUX_PB11E_TC5_WO1                          _UINT32_(4) 
#define PINMUX_PB11E_TC5_WO1                       ((PIN_PB11E_TC5_WO1 << 16) | MUX_PB11E_TC5_WO1)
#define PORT_PB11E_TC5_WO1                         (_UINT32_(1) << 11)

#define PIN_PA28E_TC5_WO1                          _UINT32_(28)
#define MUX_PA28E_TC5_WO1                          _UINT32_(4) 
#define PINMUX_PA28E_TC5_WO1                       ((PIN_PA28E_TC5_WO1 << 16) | MUX_PA28E_TC5_WO1)
#define PORT_PA28E_TC5_WO1                         (_UINT32_(1) << 28)

/* ========== PORT definition for TC6 peripheral ========== */
#define PIN_PB16E_TC6_WO0                          _UINT32_(48)
#define MUX_PB16E_TC6_WO0                          _UINT32_(4) 
#define PINMUX_PB16E_TC6_WO0                       ((PIN_PB16E_TC6_WO0 << 16) | MUX_PB16E_TC6_WO0)
#define PORT_PB16E_TC6_WO0                         (_UINT32_(1) << 16)

#define PIN_PB03E_TC6_WO1                          _UINT32_(35)
#define MUX_PB03E_TC6_WO1                          _UINT32_(4) 
#define PINMUX_PB03E_TC6_WO1                       ((PIN_PB03E_TC6_WO1 << 16) | MUX_PB03E_TC6_WO1)
#define PORT_PB03E_TC6_WO1                         (_UINT32_(1) << 3)

#define PIN_PB17E_TC6_WO1                          _UINT32_(49)
#define MUX_PB17E_TC6_WO1                          _UINT32_(4) 
#define PINMUX_PB17E_TC6_WO1                       ((PIN_PB17E_TC6_WO1 << 16) | MUX_PB17E_TC6_WO1)
#define PORT_PB17E_TC6_WO1                         (_UINT32_(1) << 17)

/* ========== PORT definition for TC7 peripheral ========== */
#define PIN_PA20E_TC7_WO0                          _UINT32_(20)
#define MUX_PA20E_TC7_WO0                          _UINT32_(4) 
#define PINMUX_PA20E_TC7_WO0                       ((PIN_PA20E_TC7_WO0 << 16) | MUX_PA20E_TC7_WO0)
#define PORT_PA20E_TC7_WO0                         (_UINT32_(1) << 20)

#define PIN_PB22E_TC7_WO0                          _UINT32_(54)
#define MUX_PB22E_TC7_WO0                          _UINT32_(4) 
#define PINMUX_PB22E_TC7_WO0                       ((PIN_PB22E_TC7_WO0 << 16) | MUX_PB22E_TC7_WO0)
#define PORT_PB22E_TC7_WO0                         (_UINT32_(1) << 22)

#define PIN_PA21E_TC7_WO1                          _UINT32_(21)
#define MUX_PA21E_TC7_WO1                          _UINT32_(4) 
#define PINMUX_PA21E_TC7_WO1                       ((PIN_PA21E_TC7_WO1 << 16) | MUX_PA21E_TC7_WO1)
#define PORT_PA21E_TC7_WO1                         (_UINT32_(1) << 21)

#define PIN_PB23E_TC7_WO1                          _UINT32_(55)
#define MUX_PB23E_TC7_WO1                          _UINT32_(4) 
#define PINMUX_PB23E_TC7_WO1                       ((PIN_PB23E_TC7_WO1 << 16) | MUX_PB23E_TC7_WO1)
#define PORT_PB23E_TC7_WO1                         (_UINT32_(1) << 23)

/* ========== PORT definition for TCC0 peripheral ========== */
#define PIN_PA04E_TCC0_WO0                         _UINT32_(4) 
#define MUX_PA04E_TCC0_WO0                         _UINT32_(4) 
#define PINMUX_PA04E_TCC0_WO0                      ((PIN_PA04E_TCC0_WO0 << 16) | MUX_PA04E_TCC0_WO0)
#define PORT_PA04E_TCC0_WO0                        (_UINT32_(1) << 4)

#define PIN_PA08E_TCC0_WO0                         _UINT32_(8) 
#define MUX_PA08E_TCC0_WO0                         _UINT32_(4) 
#define PINMUX_PA08E_TCC0_WO0                      ((PIN_PA08E_TCC0_WO0 << 16) | MUX_PA08E_TCC0_WO0)
#define PORT_PA08E_TCC0_WO0                        (_UINT32_(1) << 8)

#define PIN_PB30E_TCC0_WO0                         _UINT32_(62)
#define MUX_PB30E_TCC0_WO0                         _UINT32_(4) 
#define PINMUX_PB30E_TCC0_WO0                      ((PIN_PB30E_TCC0_WO0 << 16) | MUX_PB30E_TCC0_WO0)
#define PORT_PB30E_TCC0_WO0                        (_UINT32_(1) << 30)

#define PIN_PA05E_TCC0_WO1                         _UINT32_(5) 
#define MUX_PA05E_TCC0_WO1                         _UINT32_(4) 
#define PINMUX_PA05E_TCC0_WO1                      ((PIN_PA05E_TCC0_WO1 << 16) | MUX_PA05E_TCC0_WO1)
#define PORT_PA05E_TCC0_WO1                        (_UINT32_(1) << 5)

#define PIN_PA09E_TCC0_WO1                         _UINT32_(9) 
#define MUX_PA09E_TCC0_WO1                         _UINT32_(4) 
#define PINMUX_PA09E_TCC0_WO1                      ((PIN_PA09E_TCC0_WO1 << 16) | MUX_PA09E_TCC0_WO1)
#define PORT_PA09E_TCC0_WO1                        (_UINT32_(1) << 9)

#define PIN_PA10F_TCC0_WO2                         _UINT32_(10)
#define MUX_PA10F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA10F_TCC0_WO2                      ((PIN_PA10F_TCC0_WO2 << 16) | MUX_PA10F_TCC0_WO2)
#define PORT_PA10F_TCC0_WO2                        (_UINT32_(1) << 10)

#define PIN_PA18F_TCC0_WO2                         _UINT32_(18)
#define MUX_PA18F_TCC0_WO2                         _UINT32_(5) 
#define PINMUX_PA18F_TCC0_WO2                      ((PIN_PA18F_TCC0_WO2 << 16) | MUX_PA18F_TCC0_WO2)
#define PORT_PA18F_TCC0_WO2                        (_UINT32_(1) << 18)

#define PIN_PA11F_TCC0_WO3                         _UINT32_(11)
#define MUX_PA11F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA11F_TCC0_WO3                      ((PIN_PA11F_TCC0_WO3 << 16) | MUX_PA11F_TCC0_WO3)
#define PORT_PA11F_TCC0_WO3                        (_UINT32_(1) << 11)

#define PIN_PA19F_TCC0_WO3                         _UINT32_(19)
#define MUX_PA19F_TCC0_WO3                         _UINT32_(5) 
#define PINMUX_PA19F_TCC0_WO3                      ((PIN_PA19F_TCC0_WO3 << 16) | MUX_PA19F_TCC0_WO3)
#define PORT_PA19F_TCC0_WO3                        (_UINT32_(1) << 19)

#define PIN_PB10F_TCC0_WO4                         _UINT32_(42)
#define MUX_PB10F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PB10F_TCC0_WO4                      ((PIN_PB10F_TCC0_WO4 << 16) | MUX_PB10F_TCC0_WO4)
#define PORT_PB10F_TCC0_WO4                        (_UINT32_(1) << 10)

#define PIN_PB16F_TCC0_WO4                         _UINT32_(48)
#define MUX_PB16F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PB16F_TCC0_WO4                      ((PIN_PB16F_TCC0_WO4 << 16) | MUX_PB16F_TCC0_WO4)
#define PORT_PB16F_TCC0_WO4                        (_UINT32_(1) << 16)

#define PIN_PA14F_TCC0_WO4                         _UINT32_(14)
#define MUX_PA14F_TCC0_WO4                         _UINT32_(5) 
#define PINMUX_PA14F_TCC0_WO4                      ((PIN_PA14F_TCC0_WO4 << 16) | MUX_PA14F_TCC0_WO4)
#define PORT_PA14F_TCC0_WO4                        (_UINT32_(1) << 14)

#define PIN_PB11F_TCC0_WO5                         _UINT32_(43)
#define MUX_PB11F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PB11F_TCC0_WO5                      ((PIN_PB11F_TCC0_WO5 << 16) | MUX_PB11F_TCC0_WO5)
#define PORT_PB11F_TCC0_WO5                        (_UINT32_(1) << 11)

#define PIN_PB17F_TCC0_WO5                         _UINT32_(49)
#define MUX_PB17F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PB17F_TCC0_WO5                      ((PIN_PB17F_TCC0_WO5 << 16) | MUX_PB17F_TCC0_WO5)
#define PORT_PB17F_TCC0_WO5                        (_UINT32_(1) << 17)

#define PIN_PA15F_TCC0_WO5                         _UINT32_(15)
#define MUX_PA15F_TCC0_WO5                         _UINT32_(5) 
#define PINMUX_PA15F_TCC0_WO5                      ((PIN_PA15F_TCC0_WO5 << 16) | MUX_PA15F_TCC0_WO5)
#define PORT_PA15F_TCC0_WO5                        (_UINT32_(1) << 15)

#define PIN_PA20F_TCC0_WO6                         _UINT32_(20)
#define MUX_PA20F_TCC0_WO6                         _UINT32_(5) 
#define PINMUX_PA20F_TCC0_WO6                      ((PIN_PA20F_TCC0_WO6 << 16) | MUX_PA20F_TCC0_WO6)
#define PORT_PA20F_TCC0_WO6                        (_UINT32_(1) << 20)

#define PIN_PA16F_TCC0_WO6                         _UINT32_(16)
#define MUX_PA16F_TCC0_WO6                         _UINT32_(5) 
#define PINMUX_PA16F_TCC0_WO6                      ((PIN_PA16F_TCC0_WO6 << 16) | MUX_PA16F_TCC0_WO6)
#define PORT_PA16F_TCC0_WO6                        (_UINT32_(1) << 16)

#define PIN_PA21F_TCC0_WO7                         _UINT32_(21)
#define MUX_PA21F_TCC0_WO7                         _UINT32_(5) 
#define PINMUX_PA21F_TCC0_WO7                      ((PIN_PA21F_TCC0_WO7 << 16) | MUX_PA21F_TCC0_WO7)
#define PORT_PA21F_TCC0_WO7                        (_UINT32_(1) << 21)

#define PIN_PA17F_TCC0_WO7                         _UINT32_(17)
#define MUX_PA17F_TCC0_WO7                         _UINT32_(5) 
#define PINMUX_PA17F_TCC0_WO7                      ((PIN_PA17F_TCC0_WO7 << 16) | MUX_PA17F_TCC0_WO7)
#define PORT_PA17F_TCC0_WO7                        (_UINT32_(1) << 17)

/* ========== PORT definition for TCC1 peripheral ========== */
#define PIN_PA06E_TCC1_WO0                         _UINT32_(6) 
#define MUX_PA06E_TCC1_WO0                         _UINT32_(4) 
#define PINMUX_PA06E_TCC1_WO0                      ((PIN_PA06E_TCC1_WO0 << 16) | MUX_PA06E_TCC1_WO0)
#define PORT_PA06E_TCC1_WO0                        (_UINT32_(1) << 6)

#define PIN_PA10E_TCC1_WO0                         _UINT32_(10)
#define MUX_PA10E_TCC1_WO0                         _UINT32_(4) 
#define PINMUX_PA10E_TCC1_WO0                      ((PIN_PA10E_TCC1_WO0 << 16) | MUX_PA10E_TCC1_WO0)
#define PORT_PA10E_TCC1_WO0                        (_UINT32_(1) << 10)

#define PIN_PA30E_TCC1_WO0                         _UINT32_(30)
#define MUX_PA30E_TCC1_WO0                         _UINT32_(4) 
#define PINMUX_PA30E_TCC1_WO0                      ((PIN_PA30E_TCC1_WO0 << 16) | MUX_PA30E_TCC1_WO0)
#define PORT_PA30E_TCC1_WO0                        (_UINT32_(1) << 30)

#define PIN_PA07E_TCC1_WO1                         _UINT32_(7) 
#define MUX_PA07E_TCC1_WO1                         _UINT32_(4) 
#define PINMUX_PA07E_TCC1_WO1                      ((PIN_PA07E_TCC1_WO1 << 16) | MUX_PA07E_TCC1_WO1)
#define PORT_PA07E_TCC1_WO1                        (_UINT32_(1) << 7)

#define PIN_PA11E_TCC1_WO1                         _UINT32_(11)
#define MUX_PA11E_TCC1_WO1                         _UINT32_(4) 
#define PINMUX_PA11E_TCC1_WO1                      ((PIN_PA11E_TCC1_WO1 << 16) | MUX_PA11E_TCC1_WO1)
#define PORT_PA11E_TCC1_WO1                        (_UINT32_(1) << 11)

#define PIN_PA31E_TCC1_WO1                         _UINT32_(31)
#define MUX_PA31E_TCC1_WO1                         _UINT32_(4) 
#define PINMUX_PA31E_TCC1_WO1                      ((PIN_PA31E_TCC1_WO1 << 16) | MUX_PA31E_TCC1_WO1)
#define PORT_PA31E_TCC1_WO1                        (_UINT32_(1) << 31)

#define PIN_PA08F_TCC1_WO2                         _UINT32_(8) 
#define MUX_PA08F_TCC1_WO2                         _UINT32_(5) 
#define PINMUX_PA08F_TCC1_WO2                      ((PIN_PA08F_TCC1_WO2 << 16) | MUX_PA08F_TCC1_WO2)
#define PORT_PA08F_TCC1_WO2                        (_UINT32_(1) << 8)

#define PIN_PB30F_TCC1_WO2                         _UINT32_(62)
#define MUX_PB30F_TCC1_WO2                         _UINT32_(5) 
#define PINMUX_PB30F_TCC1_WO2                      ((PIN_PB30F_TCC1_WO2 << 16) | MUX_PB30F_TCC1_WO2)
#define PORT_PB30F_TCC1_WO2                        (_UINT32_(1) << 30)

#define PIN_PA09F_TCC1_WO3                         _UINT32_(9) 
#define MUX_PA09F_TCC1_WO3                         _UINT32_(5) 
#define PINMUX_PA09F_TCC1_WO3                      ((PIN_PA09F_TCC1_WO3 << 16) | MUX_PA09F_TCC1_WO3)
#define PORT_PA09F_TCC1_WO3                        (_UINT32_(1) << 9)

/* ========== PORT definition for TCC2 peripheral ========== */
#define PIN_PA16E_TCC2_WO0                         _UINT32_(16)
#define MUX_PA16E_TCC2_WO0                         _UINT32_(4) 
#define PINMUX_PA16E_TCC2_WO0                      ((PIN_PA16E_TCC2_WO0 << 16) | MUX_PA16E_TCC2_WO0)
#define PORT_PA16E_TCC2_WO0                        (_UINT32_(1) << 16)

#define PIN_PA00E_TCC2_WO0                         _UINT32_(0) 
#define MUX_PA00E_TCC2_WO0                         _UINT32_(4) 
#define PINMUX_PA00E_TCC2_WO0                      ((PIN_PA00E_TCC2_WO0 << 16) | MUX_PA00E_TCC2_WO0)
#define PORT_PA00E_TCC2_WO0                        (_UINT32_(1) << 0)

#define PIN_PA17E_TCC2_WO1                         _UINT32_(17)
#define MUX_PA17E_TCC2_WO1                         _UINT32_(4) 
#define PINMUX_PA17E_TCC2_WO1                      ((PIN_PA17E_TCC2_WO1 << 16) | MUX_PA17E_TCC2_WO1)
#define PORT_PA17E_TCC2_WO1                        (_UINT32_(1) << 17)

#define PIN_PA01E_TCC2_WO1                         _UINT32_(1) 
#define MUX_PA01E_TCC2_WO1                         _UINT32_(4) 
#define PINMUX_PA01E_TCC2_WO1                      ((PIN_PA01E_TCC2_WO1 << 16) | MUX_PA01E_TCC2_WO1)
#define PORT_PA01E_TCC2_WO1                        (_UINT32_(1) << 1)



#endif /* _SAMHA0G16AB_GPIO_H_ */


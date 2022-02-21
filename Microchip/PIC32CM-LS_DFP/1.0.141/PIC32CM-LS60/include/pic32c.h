/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2021 Microchip Technology Inc.
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

#ifndef _SAM_
#define _SAM_

#if   defined(__PIC32CM5164LS60100__) || defined(__PIC32CM5164LS60100__)
  #include "pic32cm5164ls60100.h"
#elif defined(__PIC32CM5164LS60064__) || defined(__PIC32CM5164LS60064__)
  #include "pic32cm5164ls60064.h"
#elif defined(__PIC32CM5164LS60048__) || defined(__PIC32CM5164LS60048__)
  #include "pic32cm5164ls60048.h"
#elif defined(__PIC32CM2532LS60064__) || defined(__PIC32CM2532LS60064__)
  #include "pic32cm2532ls60064.h"
#elif defined(__PIC32CM2532LS60048__) || defined(__PIC32CM2532LS60048__)
  #include "pic32cm2532ls60048.h"
#elif defined(__PIC32CM2532LS60100__) || defined(__PIC32CM2532LS60100__)
  #include "pic32cm2532ls60100.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */


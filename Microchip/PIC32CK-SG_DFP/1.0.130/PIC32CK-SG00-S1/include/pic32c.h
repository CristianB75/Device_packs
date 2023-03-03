/**
 * \file
 *
 * \brief Top level header file
 *
 * Copyright (c) 2023 Microchip Technology Inc.
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

#if   defined(__PIC32CK0512SG00064S1__) || defined(__PIC32CK0512SG00064S1__)
  #include "pic32ck0512sg00064s1.h"
#elif defined(__PIC32CK0512SG00100S1__) || defined(__PIC32CK0512SG00100S1__)
  #include "pic32ck0512sg00100s1.h"
#elif defined(__PIC32CK1025SG00064S1__) || defined(__PIC32CK1025SG00064S1__)
  #include "pic32ck1025sg00064s1.h"
#elif defined(__PIC32CK1025SG00100S1__) || defined(__PIC32CK1025SG00100S1__)
  #include "pic32ck1025sg00100s1.h"
#elif defined(__PIC32CK2051SG00064S1__) || defined(__PIC32CK2051SG00064S1__)
  #include "pic32ck2051sg00064s1.h"
#elif defined(__PIC32CK2051SG00100S1__) || defined(__PIC32CK2051SG00100S1__)
  #include "pic32ck2051sg00100s1.h"
#elif defined(__PIC32CK2051SG00144S1__) || defined(__PIC32CK2051SG00144S1__)
  #include "pic32ck2051sg00144s1.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */

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

#ifndef _PIC32C_H_
#define _PIC32C_H_

#if   defined(__PIC32CK0512GC00064__) || defined(__PIC32CK0512GC00064__)
  #include "pic32ck0512gc00064.h"
#elif defined(__PIC32CK0512GC00100__) || defined(__PIC32CK0512GC00100__)
  #include "pic32ck0512gc00100.h"
#elif defined(__PIC32CK1025GC00064__) || defined(__PIC32CK1025GC00064__)
  #include "pic32ck1025gc00064.h"
#elif defined(__PIC32CK1025GC00100__) || defined(__PIC32CK1025GC00100__)
  #include "pic32ck1025gc00100.h"
#elif defined(__PIC32CK2051GC00064__) || defined(__PIC32CK2051GC00064__)
  #include "pic32ck2051gc00064.h"
#elif defined(__PIC32CK2051GC00100__) || defined(__PIC32CK2051GC00100__)
  #include "pic32ck2051gc00100.h"
#elif defined(__PIC32CK2051GC00144__) || defined(__PIC32CK2051GC00144__)
  #include "pic32ck2051gc00144.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _PIC32C_H_ */


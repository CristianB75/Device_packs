/**
 * \file
 *
 * \brief Top level header file
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

#ifndef _SAM_
#define _SAM_

#if   defined(__SAMHA1G15A__) || defined(__ATSAMHA1G15A__)
  #include "samha1g15a.h"
#elif defined(__SAMHA1G14A__) || defined(__ATSAMHA1G14A__)
  #include "samha1g14a.h"
#elif defined(__SAMHA1G16A__) || defined(__ATSAMHA1G16A__)
  #include "samha1g16a.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */


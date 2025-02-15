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

#if   defined(__SAMR21E18A__) || defined(__ATSAMR21E18A__)
  #include "samr21e18a.h"
#elif defined(__SAMR21E19A__) || defined(__ATSAMR21E19A__)
  #include "samr21e19a.h"
#elif defined(__SAMR21G16A__) || defined(__ATSAMR21G16A__)
  #include "samr21g16a.h"
#elif defined(__SAMR21G17A__) || defined(__ATSAMR21G17A__)
  #include "samr21g17a.h"
#elif defined(__SAMR21E17A__) || defined(__ATSAMR21E17A__)
  #include "samr21e17a.h"
#elif defined(__SAMR21E16A__) || defined(__ATSAMR21E16A__)
  #include "samr21e16a.h"
#elif defined(__SAMR21G18A__) || defined(__ATSAMR21G18A__)
  #include "samr21g18a.h"
#else
  #error Library does not support the specified device
#endif

#endif /* _SAM_ */


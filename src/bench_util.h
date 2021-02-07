/*
 * Copyright 2021 Benjamin Edgington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <time.h> // CLOCK_REALTIME, clock_gettime(), timespec
#include "c_kzg.h"

typedef struct timespec timespec;

#define NANO 1000000000L

unsigned long tdiff(timespec start, timespec end);
uint64_t rand_uint64();
blst_fr rand_fr();
blst_p1 rand_g1();
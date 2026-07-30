/*
 * SuperTinyKernel(TM) RTOS: Lightweight High-Performance Deterministic C++ RTOS for Embedded Systems.
 *
 * Source: https://github.com/SuperTinyKernel-RTOS
 *
 * Copyright (c) 2022-2026 Neutron Code Limited <stk@neutroncode.com>. All Rights Reserved.
 * License: MIT License, see LICENSE for a full text.
 */

#ifndef DRIVER_CPU_H_
#define DRIVER_CPU_H_

#include "defs.h"

#ifdef __cplusplus

namespace bsp {

struct Cpu
{
    static void Start(uint8_t cpu_id, void (*entry_func)(void));
};

} // namespace bsp

#endif // __cplusplus

STK_EXTERN void Cpu_Start(uint8_t cpu_id, void (*entry_func)(void));

#endif /* DRIVER_CPU_H_ */

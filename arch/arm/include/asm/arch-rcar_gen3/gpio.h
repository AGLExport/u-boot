/*
 * arch/arm/include/asm/arch-rcar_gen3/gpio.h
 *	This file defines gpio-related function.
 *
 * Copyright (C) 2015-2016 Renesas Electronics Corporation
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __ASM_ARCH_GPIO_H
#define __ASM_ARCH_GPIO_H

#if defined(CONFIG_R8A7795)
#include "r8a7795-gpio.h"
#elif defined(CONFIG_R8A7796)
#include "r8a7796-gpio.h"
#endif

#if defined(CONFIG_R8A7795)
void r8a7795_pinmux_init(void);
#elif defined(CONFIG_R8A7796)
void r8a7796_pinmux_init(void);
#endif
void pinmux_init(void);

#endif /* __ASM_ARCH_GPIO_H */

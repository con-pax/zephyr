/*
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef __RISCV64_MIV_SOC_H_
#define __RISCV64_MIV_SOC_H_

#include <soc_common.h>
#include <devicetree.h>

/* UART Configuration */

/* GPIO Configuration */

/* Clock controller. */

/* Timer configuration */
#define RISCV_MTIME_BASE             0x0200BFF8
#define RISCV_MTIMECMP_BASE          (0x02004000 + (8 * CONFIG_BOARD_HART_TO_USE))
#define RISCV_MTIMECMP_BY_HART(h)    (0x02004000 + (8 * (h)))

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_SRAM_BASE_ADDRESS
#define RISCV_RAM_SIZE               KB(CONFIG_SRAM_SIZE)

#endif /* __RISCV64_MIV_SOC_H_ */

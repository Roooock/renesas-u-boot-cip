// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2021, Renesas Electronics Corporation. All rights reserved.
 */

#ifndef __DDR_INTERNAL_H__
#define __DDR_INTERNAL_H__

#include <renesas/rzf-dev/ddr_mc_if.h>
#include <renesas/rzf-dev/ddr_phy_regs.h>
#include <renesas/rzf-dev/mmio.h>

#define MC_PHYSET_NUM       (4)
#define SWIZZLE_MC_NUM      (9)
#define SIZZLE_PHY_NUM      (16)

static inline uint32_t read_mc_reg(uint32_t offset)
{
	return mmio_read_32(DDR_MC_BASE + offset);
}

static inline void write_mc_reg(uint32_t offset, uint32_t val)
{
	mmio_write_32(DDR_MC_BASE + offset, val);
}

static inline void rmw_mc_reg(uint32_t offset, uint32_t mask, uint32_t val)
{
	write_mc_reg(offset, (read_mc_reg(offset) & mask) | val);
}

static inline uint32_t read_phy_reg(uint32_t offset)
{
	return mmio_read_32(DDR_PHY_BASE + offset);
}

static inline void write_phy_reg(uint32_t offset, uint32_t val)
{
	mmio_write_32(DDR_PHY_BASE + offset, val);
}

static inline void rmw_phy_reg(uint32_t offset, uint32_t mask, uint32_t val)
{
	write_phy_reg(offset, (read_phy_reg(offset) & mask) | val);
}

void ddr_ctrl_reten_en_n(uint8_t val);
char *ddr_get_version(void);


#endif	/* __DDR_INTERNAL_H__ */

/*
 * Copyright (c) 2020-2022, Renesas Electronics Corporation. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause
 * This code was generated with RZ/G2L, G2UL, Five, A3UL DDR config generation tool v3.0.1
 */

#include <common.h>
#include "ddr_internal.h"

const uint32_t mc_odt_pins_tbl[4] = {
	0x00000001	,
	0x00000000	,
	0x00000000	,
	0x00000000
};

const uint32_t mc_mr1_tbl[2] = {
	0x00000706	,
	0x00000100
};

const uint32_t mc_mr2_tbl[2] = {
	0x00000E00	,
	0x00000000
};

const uint32_t mc_mr5_tbl[2] = {
	0x000001C0	,
	0x000001C0
};

const uint32_t mc_mr6_tbl[2] = {
	0x0000007F	,
	0x0000000F
};

const uint32_t mc_phy_settings_tbl[MC_PHYSET_NUM][2] = {
	{DDRMC_R040,	0x57630BB8	},
	{DDRMC_R041,	0x00002828	},
	{DDRMC_R042,	0x00003C22	},
	{DDRMC_R043,	0x00102611	}
};

const uint32_t swizzle_mc_tbl[SWIZZLE_MC_NUM][2] = {
	{DDRMC_R030,	0x00000000	},
	{DDRMC_R031,	0x00000000	},
	{DDRMC_R032,	0x1F090015	},
	{DDRMC_R033,	0x0E001000	},
	{DDRMC_R034,	0x000C0000	},
	{DDRMC_R035,	0x1C18131A	},
	{DDRMC_R036,	0x1E00161D	},
	{DDRMC_R037,	0x00190B17	},
	{DDRMC_R038,	0x00000000	}
};

const uint32_t swizzle_phy_tbl[SIZZLE_PHY_NUM][2] = {
	{DDRPHY_R29,	0x00000000	},
	{DDRPHY_R11,	0x0E020400	},
	{DDRPHY_R29,	0x00000001	},
	{DDRPHY_R11,	0x0D050B08	},
	{DDRPHY_R29,	0x00000002	},
	{DDRPHY_R11,	0x07060903	},
	{DDRPHY_R29,	0x00000003	},
	{DDRPHY_R11,	0x0F18170A	},
	{DDRPHY_R29,	0x00000004	},
	{DDRPHY_R11,	0x13121110	},
	{DDRPHY_R29,	0x00000005	},
	{DDRPHY_R11,	0x01151614	},
	{DDRPHY_R29,	0x00000006	},
	{DDRPHY_R11,	0x1B1A190C	},
	{DDRPHY_R29,	0x00000007	},
	{DDRPHY_R11,	0x001E1D1C	}
};

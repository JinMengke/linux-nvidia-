/*
 * tegra186_asrc_alt.h - Definitions for Tegra186 ASRC driver
 *
 * Copyright (c) 2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __TEGRA186_ASRC_ALT_H__
#define __TEGRA186_ASRC_ALT_H__

#define TEGRA186_ASRC_STREAM_STRIDE					0x80
#define TEGRA186_ASRC_STREAM_MAX					6
#define TEGRA186_ASRC_STREAM_LIMIT		0x2f0

/* ASRC stream related offset */
#define TEGRA186_ASRC_STREAM1_CONFIG				0x0
#define TEGRA186_ASRC_STREAM1_RATIO_INTEGER_PART	0x4
#define TEGRA186_ASRC_STREAM1_RATIO_FRAC_PART		0x8
#define TEGRA186_ASRC_STREAM1_RATIO_LOCK_STATUS		0xc
#define TEGRA186_ASRC_STREAM1_MUTE_UNMUTE_DURATION	0x10
#define TEGRA186_ASRC_STREAM1_TX_THRESHOLD			0x14
#define TEGRA186_ASRC_STREAM1_RX_THRESHOLD			0x18
#define TEGRA186_ASRC_STREAM1_RATIO_COMP			0x1C
#define TEGRA186_ASRC_STREAM1_RX_STATUS				0x20
#define TEGRA186_ASRC_STREAM1_RX_CIF_CTRL			0x24
#define TEGRA186_ASRC_STREAM1_TX_STATUS				0x2c
#define TEGRA186_ASRC_STREAM1_TX_CIF_CTRL			0x30
#define TEGRA186_ASRC_STREAM1_ENABLE				0x38
#define TEGRA186_ASRC_STREAM1_SOFT_RESET			0x3c
#define TEGRA186_ASRC_STREAM1_STATUS				0x4c
#define TEGRA186_ASRC_STREAM1_BUFFER_STATUS			0x50
#define TEGRA186_ASRC_STREAM1_CONFIG_ERR_TYPE		0x54
#define TEGRA186_ASRC_STREAM1_STATEBUF_ADDR			0x5c
#define TEGRA186_ASRC_STREAM1_STATEBUF_CONFIG		0x60
#define TEGRA186_ASRC_STREAM1_INSAMPLEBUF_ADDR		0x64
#define TEGRA186_ASRC_STREAM1_INSAMPLEBUF_CONFIG	0x68
#define TEGRA186_ASRC_STREAM1_OUTSAMPLEBUF_ADDR		0x6c
#define TEGRA186_ASRC_STREAM1_OUTSAMPLEBUF_CONFIG	0x70

#define TEGRA186_ASRC_STREAM2_RATIO_INTEGER_PART	0x84
#define TEGRA186_ASRC_STREAM2_RATIO_FRAC_PART		0x88
#define TEGRA186_ASRC_STREAM3_RATIO_INTEGER_PART	0x104
#define TEGRA186_ASRC_STREAM3_RATIO_FRAC_PART		0x108
#define TEGRA186_ASRC_STREAM4_RATIO_INTEGER_PART	0x184
#define TEGRA186_ASRC_STREAM4_RATIO_FRAC_PART		0x188
#define TEGRA186_ASRC_STREAM5_RATIO_INTEGER_PART	0x204
#define TEGRA186_ASRC_STREAM5_RATIO_FRAC_PART		0x208
#define TEGRA186_ASRC_STREAM6_RATIO_INTEGER_PART	0x284
#define TEGRA186_ASRC_STREAM6_RATIO_FRAC_PART		0x288

#define TEGRA186_ASRC_STREAM1_ENABLE				0x38
#define TEGRA186_ASRC_STREAM2_ENABLE				0xb8
#define TEGRA186_ASRC_STREAM3_ENABLE				0x138
#define TEGRA186_ASRC_STREAM4_ENABLE				0x1b8
#define TEGRA186_ASRC_STREAM5_ENABLE				0x238
#define TEGRA186_ASRC_STREAM6_ENABLE				0x2b8

/* ASRC UPD related offset */
#define TEGRA186_ASRC_RATIO_UPD_RX_CIF_CTRL			0x30c
#define TEGRA186_ASRC_RATIO_UPD_RX_STATUS			0x310

/* ASRC Global registers offset */
#define TEGRA186_ASRC_GLOBAL_ENB					0x2f4
#define TEGRA186_ASRC_GLOBAL_SOFT_RESET				0x2f8
#define TEGRA186_ASRC_GLOBAL_CG						0x2fc
#define TEGRA186_ASRC_GLOBAL_CONFIG					0x300
#define TEGRA186_ASRC_GLOBAL_SCRATCH_ADDR			0x304
#define TEGRA186_ASRC_GLOBAL_SCRATCH_CONFIG			0x308
#define TEGRA186_ASRC_GLOBAL_STATUS					0x314
#define TEGRA186_ASRC_GLOBAL_STREAM_ENABLE_STATUS	0x318
#define TEGRA186_ASRC_GLOBAL_INT_STATUS				0x324
#define TEGRA186_ASRC_GLOBAL_INT_MASK				0x328
#define TEGRA186_ASRC_GLOBAL_INT_SET				0x32c
#define TEGRA186_ASRC_GLOBAL_INT_CLEAR				0x330
#define TEGRA186_ASRC_GLOBAL_TRANSFER_ERROR_LOG		0x334
#define TEGRA186_ASRC_GLOBAL_APR_CTRL				0x1000
#define TEGRA186_ASRC_GLOBAL_APR_CTRL_ACCESS_CTRL	0x1004
#define TEGRA186_ASRC_GLOBAL_DISARM_APR				0x1008
#define TEGRA186_ASRC_GLOBAL_DISARM_APR_ACCESS_CTRL	0x100c
#define TEGRA186_ASRC_GLOBAL_RATIO_WR_ACCESS		0x1010
#define TEGRA186_ASRC_GLOBAL_RATIO_WR_ACCESS_CTRL	0x1014
#define TEGRA186_ASRC_CYA	0x1018

#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT		31
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_MASK		(1 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_ENABLE	(1 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)
#define TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_DISABLE	(0 << TEGRA186_ASRC_STREAM_ENABLE_HW_RATIO_COMP_SHIFT)

#define TEGRA186_ASRC_STREAM_RATIO_TYPE_SHIFT		0
#define TEGRA186_ASRC_STREAM_RATIO_TYPE_MASK		(1 << TEGRA186_ASRC_STREAM_RATIO_TYPE_SHIFT)

#define TEGRA186_ASRC_STREAM_EN_SHIFT				0
#define TEGRA186_ASRC_STREAM_EN						(1 << TEGRA186_ASRC_STREAM_EN_SHIFT)
#define TEGRA186_ASRC_GLOBAL_EN_SHIFT				0
#define TEGRA186_ASRC_GLOBAL_EN						(1 << TEGRA186_ASRC_GLOBAL_EN_SHIFT)

#define TEGRA186_ASRC_STREAM_STATEBUF_CONFIG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_STATEBUF_CONFIG_SIZE_MASK		(0xFFFF << TEGRA186_ASRC_STREAM_STATEBUF_CONFIG_SIZE_SHIFT)
#define TEGRA186_ASRC_STREAM_INSAMPLEBUF_CONFIG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_INSAMPLEBUF_CONFIG_SIZE_MASK		(0xFFFF << TEGRA186_ASRC_STREAM_INSAMPLEBUF_CONFIG_SIZE_SHIFT)
#define TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CONFIG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CONFIG_SIZE_MASK		(0xFFFF << TEGRA186_ASRC_STREAM_OUTSAMPLEBUF_CONFIG_SIZE_SHIFT)

#define TEGRA186_ASRC_GLOBAL_CONFIG_FRAC_28BIT_PRECISION	0
#define TEGRA186_ASRC_GLOBAL_CONFIG_FRAC_32BIT_PRECISION	1

#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_MAX_CHANNELS_SHIFT		24
#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_MAX_CHANNELS_MASK		(0xFF << TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_MAX_CHANNELS_SHIFT)
#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_BLOCK_SIZE_SHIFT		16
#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_BLOCK_SIZE_MASK		(0xFF << TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_BLOCK_SIZE_SHIFT)
#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_SIZE_SHIFT		0
#define TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_SIZE_MASK		(0xFFFF << TEGRA186_ASRC_STREAM_GLOBAL_SCRATCH_CONFIG_SIZE_SHIFT)

#define TEGRA186_ASRC_STREAM_RATIO_INTEGER_PART_MASK		0x1F
#define TEGRA186_ASRC_STREAM_RATIO_FRAC_PART_MASK			0xFFFFFFFF
enum task_event {
	STREAM_DISABLE,
	STREAM_ENABLE,
};
struct tegra186_asrc_soc_data {
	void (*set_audio_cif)(struct regmap *map,
			unsigned int reg,
			struct tegra210_xbar_cif_conf *conf);
};

struct tegra186_asrc_lane {
	unsigned int int_part;
	unsigned int frac_part;
	int ratio_source;
};

struct tegra186_asrc {
	struct regmap *regmap;
	struct tegra186_asrc_lane lane[6];
	const struct tegra186_asrc_soc_data *soc_data;
	struct tasklet_struct   tasklet;
	struct list_head task_desc;
	int active_dai_count;
};
int tegra186_asrc_set_source(int id, int source);
int tegra186_asrc_event(int id, enum task_event event, int status);
int tegra186_asrc_update_ratio(int id, int inte, int frac);
#endif

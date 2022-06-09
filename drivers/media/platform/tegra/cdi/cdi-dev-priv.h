/*
 * Copyright (c) 2015-2022, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef __CDI_DEV_PRIV_H__
#define __CDI_DEV_PRIV_H__

#include <linux/cdev.h>
#include "cdi-tca-priv.h"

#define MAX_POWER_LINKS_PER_BLOCK (4U)

struct max20087_priv {
	int bus;
	u32 addr;
	u32 reg_len;
	u32 dat_len;
	u8 links[MAX_POWER_LINKS_PER_BLOCK];
};

struct cdi_dev_info {
	struct i2c_client *i2c_client;
	struct device *dev;
	struct cdev cdev;
	struct cdi_dev_platform_data *pdata;
	atomic_t in_use;
	struct mutex mutex;
	struct cdi_dev_package rw_pkg;
	struct dentry *d_entry;
	u32 reg_len;
	u32 reg_off;
	char devname[32];
	u8 power_is_on;
	u8 cam_pwr_method;
	u8 cam_pwr_i2c_addr;
	struct max20087_priv max20087;
	struct tca9539_priv tca9539;
	u8 cim_ver; /* 1 - P3714 A01, 2 - P3714 A02/A03 */
};

int cdi_dev_raw_rd(struct cdi_dev_info *info, unsigned int offset,
	unsigned int offset_len, u8 *val, size_t size);
int cdi_dev_raw_wr(struct cdi_dev_info *info, unsigned int offset, u8 *val,
	size_t size);

int cdi_dev_debugfs_init(struct cdi_dev_info *cdi_dev);
int cdi_dev_debugfs_remove(struct cdi_dev_info *cdi_dev);

#endif  /* __CDI_DEV_PRIV_H__ */

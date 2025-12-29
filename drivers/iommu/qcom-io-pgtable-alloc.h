/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021 Qualcomm Innovation Center, Inc. All rights reserved.
 */
#ifndef __QCOM_IO_PGTABLE_ALLOC_H
#define __QCOM_IO_PGTABLE_ALLOC_H

#include <linux/errno.h>
#include <linux/kconfig.h>
#include <linux/gfp.h>
#include <linux/mm_types.h>
#include <linux/types.h>

#if IS_REACHABLE(CONFIG_QCOM_IOMMU_UTIL)
int qcom_io_pgtable_allocator_register(u32 vmid);
void qcom_io_pgtable_allocator_unregister(u32 vmid);
struct page *qcom_io_pgtable_alloc_page(u32 vmid, gfp_t gfp);
void qcom_io_pgtable_free_page(struct page *page);
int qcom_io_pgtable_alloc_init(void);
void qcom_io_pgtable_alloc_exit(void);
#else
static inline int qcom_io_pgtable_allocator_register(u32 vmid)
{
	return -ENODEV;
}

static inline void qcom_io_pgtable_allocator_unregister(u32 vmid)
{
}

static inline struct page *qcom_io_pgtable_alloc_page(u32 vmid, gfp_t gfp)
{
	return NULL;
}

static inline void qcom_io_pgtable_free_page(struct page *page)
{
}

static inline int qcom_io_pgtable_alloc_init(void)
{
	return -ENODEV;
}

static inline void qcom_io_pgtable_alloc_exit(void)
{
}
#endif

#endif /* __QCOM_IO_PGTABLE_ALLOC_H */

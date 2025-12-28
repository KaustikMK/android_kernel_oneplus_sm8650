// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/mm_types.h>
#include "oplus_boost_pool.h"

struct dynamic_boost_pool *dynamic_boost_pool_create_pack(void)
{
    return NULL;
}

void dynamic_boost_pool_alloc_pack(struct dynamic_boost_pool *pool,
                                   unsigned long *size_remaining,
                                   unsigned int *max_order,
                                   struct list_head *pages,
                                   int *page_count)
{
    (void)pool;
    (void)size_remaining;
    (void)max_order;
    (void)pages;
    (void)page_count;
}

int dynamic_boost_pool_free(struct dynamic_boost_pool *pool, struct page *page, int index)
{
    (void)pool;
    (void)page;
    (void)index;
    return -EINVAL;
}

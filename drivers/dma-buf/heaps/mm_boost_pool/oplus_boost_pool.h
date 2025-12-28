/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_BOOST_POOL_H
#define _OPLUS_BOOST_POOL_H

#include <linux/list.h>
#include <linux/mm_types.h>

struct dynamic_boost_pool {
    unsigned int dummy;
};

struct dynamic_boost_pool *dynamic_boost_pool_create_pack(void);
void dynamic_boost_pool_alloc_pack(struct dynamic_boost_pool *pool,
                                   unsigned long *size_remaining,
                                   unsigned int *max_order,
                                   struct list_head *pages,
                                   int *page_count);
int dynamic_boost_pool_free(struct dynamic_boost_pool *pool, struct page *page, int index);

#endif /* _OPLUS_BOOST_POOL_H */

/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_SA_COMMON_H
#define _OPLUS_SA_COMMON_H

#include <linux/cpumask.h>
#include <linux/sched.h>

struct rq;

static inline void adjust_rt_lowest_mask(struct task_struct *p,
                                         struct cpumask *lowest_mask,
                                         int ret, bool force)
{
    (void)p;
    (void)lowest_mask;
    (void)ret;
    (void)force;
}

static inline void sa_skip_rt_sync(struct rq *rq, struct task_struct *p, int *sync)
{
    (void)rq;
    (void)p;
    (void)sync;
}

static inline void sa_corectl_systrace_c(void)
{
}

#endif /* _OPLUS_SA_COMMON_H */

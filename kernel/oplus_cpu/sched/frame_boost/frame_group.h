/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_FRAME_GROUP_H
#define _OPLUS_FRAME_GROUP_H

#include <linux/cpumask.h>
#include <linux/sched.h>

struct rq;

static inline bool frame_boost_enabled(void)
{
    return false;
}

static inline bool is_fbg_task(struct task_struct *p)
{
    (void)p;
    return false;
}

static inline bool fbg_rt_task_fits_capacity(struct task_struct *p, int cpu)
{
    (void)p;
    (void)cpu;
    return true;
}

static inline bool fbg_need_up_migration(struct task_struct *p, struct rq *rq)
{
    (void)p;
    (void)rq;
    return false;
}

static inline bool fbg_skip_migration(struct task_struct *p, int src_cpu, int dst_cpu)
{
    (void)p;
    (void)src_cpu;
    (void)dst_cpu;
    return false;
}

static inline void fbg_game_ed(struct rq *rq)
{
    (void)rq;
}

static inline void fbg_freq_policy_util(int flags, const struct cpumask *cpus,
                                        unsigned long *util)
{
    (void)flags;
    (void)cpus;
    (void)util;
}

static inline void fbg_add_update_freq_hook(void (*hook)(struct rq *rq, int flags))
{
    (void)hook;
}

static inline bool set_frame_group_task_to_perfer_cpu(struct task_struct *p, int *cpu)
{
    (void)p;
    (void)cpu;
    return false;
}

static inline void init_fbg_halt_mask(struct cpumask *mask)
{
    if (mask)
        cpumask_clear(mask);
}

#endif /* _OPLUS_FRAME_GROUP_H */

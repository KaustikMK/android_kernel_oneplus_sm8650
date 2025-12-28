/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_SCHED_TUNE_H
#define _OPLUS_SCHED_TUNE_H

#include <linux/cgroup.h>
#include <linux/sched.h>

static inline void schedtune_enqueue_task(struct task_struct *p, int cpu)
{
    (void)p;
    (void)cpu;
}

static inline void schedtune_dequeue_task(struct task_struct *p, int cpu)
{
    (void)p;
    (void)cpu;
}

static inline void schedtune_attach(struct task_struct *p)
{
    (void)p;
}

static inline void schedtune_root_alloc(void)
{
}

static inline void schedtune_alloc(struct task_group *tg, struct cgroup_subsys_state *css)
{
    (void)tg;
    (void)css;
}

static inline void schedtune_free(struct cgroup_subsys_state *css)
{
    (void)css;
}

static inline s64 schedtune_boost_read(struct cgroup_subsys_state *css, struct cftype *cft)
{
    (void)css;
    (void)cft;
    return 0;
}

static inline int schedtune_boost_write(struct cgroup_subsys_state *css, struct cftype *cft, s64 val)
{
    (void)css;
    (void)cft;
    (void)val;
    return 0;
}

#endif /* _OPLUS_SCHED_TUNE_H */

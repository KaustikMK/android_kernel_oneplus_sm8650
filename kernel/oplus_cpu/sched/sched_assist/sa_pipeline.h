/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_SA_PIPELINE_H
#define _OPLUS_SA_PIPELINE_H

#include <linux/sched.h>

static inline bool oplus_pipeline_task_skip_cpu(struct task_struct *p, int cpu)
{
    (void)p;
    (void)cpu;
    return false;
}

static inline bool oplus_is_pipeline_scene(void)
{
    return false;
}

static inline int oplus_get_task_pipeline_cpu(struct task_struct *p)
{
    (void)p;
    return -1;
}

static inline bool oplus_pipeline_low_latency_task(int cpu)
{
    (void)cpu;
    return false;
}

#endif /* _OPLUS_SA_PIPELINE_H */

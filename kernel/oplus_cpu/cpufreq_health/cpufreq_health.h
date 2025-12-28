/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_CPUFREQ_HEALTH_H
#define _OPLUS_CPUFREQ_HEALTH_H

#include <linux/cpufreq.h>

static inline int cpufreq_health_register(struct cpufreq_policy *policy)
{
    return 0;
}

static inline void cpufreq_health_get_edtask_state(int cpu, int flag)
{
    (void)cpu;
    (void)flag;
}

static inline void cpufreq_health_get_state(struct cpufreq_policy *policy)
{
    (void)policy;
}

static inline void cpufreq_health_get_newtask_state(struct cpufreq_policy *policy, int flag)
{
    (void)policy;
    (void)flag;
}

#endif /* _OPLUS_CPUFREQ_HEALTH_H */

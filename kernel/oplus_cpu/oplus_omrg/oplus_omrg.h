/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_OMRG_H
#define _OPLUS_OMRG_H

#include <linux/cpufreq.h>

static inline void omrg_ceiling_free(bool enable)
{
    (void)enable;
}

static inline void omrg_cpufreq_check_limit(struct cpufreq_policy *policy, unsigned int freq)
{
    (void)policy;
    (void)freq;
}

static inline void omrg_cpufreq_unregister(struct cpufreq_policy *policy)
{
    (void)policy;
}

static inline void omrg_cpufreq_register(struct cpufreq_policy *policy)
{
    (void)policy;
}

#endif /* _OPLUS_OMRG_H */

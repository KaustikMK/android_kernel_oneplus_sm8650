/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_CPUFREQ_BOUNCING_H
#define _OPLUS_CPUFREQ_BOUNCING_H

#include <linux/cpufreq.h>

static inline void cb_update(struct cpufreq_policy *policy, u64 time)
{
    (void)policy;
    (void)time;
}

static inline void cb_ceiling_free(bool enable)
{
    (void)enable;
}

static inline void cb_stuff_init(struct cpufreq_policy *policy)
{
    (void)policy;
}

#endif /* _OPLUS_CPUFREQ_BOUNCING_H */

/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_CAP_H
#define _OPLUS_CAP_H

#define OPLUS_CLUSTERS 4

static int eas_opt_enable;
static int oplus_cap_multiple[OPLUS_CLUSTERS] = { 100, 100, 100, 100 };
static int nr_oplus_cap_multiple[OPLUS_CLUSTERS] = { 100, 100, 100, 100 };
static int util_thresh_percent[OPLUS_CLUSTERS] = { 100, 100, 100, 100 };

static inline void oplus_cap_systrace_c(int cpu, unsigned long cap, unsigned long real)
{
    (void)cpu;
    (void)cap;
    (void)real;
}

#endif /* _OPLUS_CAP_H */

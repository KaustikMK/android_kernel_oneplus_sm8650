/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _OPLUS_TASK_OVERLOAD_H
#define _OPLUS_TASK_OVERLOAD_H

#include <linux/sched.h>

static inline void test_task_overload(struct task_struct *p)
{
    (void)p;
}

#endif /* _OPLUS_TASK_OVERLOAD_H */

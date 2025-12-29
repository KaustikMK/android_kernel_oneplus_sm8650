// SPDX-License-Identifier: GPL-2.0-only
/*
 * Stub implementations for optional vendor hook handlers.
 */

#include <linux/compiler_attributes.h>
#include <linux/mutex.h>
#include <linux/rwsem.h>
#include <linux/rtmutex.h>
#include <linux/sched.h>
#include <linux/types.h>

__weak void android_vh_pcpu_rwsem_handler(u64 sem, struct task_struct *tsk,
					  unsigned long jiffies)
{
}

__weak void mutex_lock_handler(u64 lock, struct task_struct *tsk,
			       unsigned long jiffies)
{
}

__weak void mutex_wait_handler(struct mutex *lock)
{
}

__weak void rwsem_lock_handler(u64 sem, struct task_struct *tsk,
			       unsigned long jiffies)
{
}

__weak void rwsem_read_wait_handler(struct rw_semaphore *sem)
{
}

__weak void rtmutex_lock_handler(u64 lock, struct task_struct *tsk,
				 unsigned long jiffies)
{
}

__weak void rtmutex_wait_handler(struct rt_mutex_base *lock)
{
}

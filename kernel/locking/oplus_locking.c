// SPDX-License-Identifier: GPL-2.0
#include <linux/kernel.h>
#include <linux/mutex.h>
#include <linux/percpu-rwsem.h>
#include <linux/rwsem.h>
#include <linux/rtmutex.h>
#include <linux/sched.h>

/* Dummy Oplus locking implementation */

void __weak android_vh_pcpu_rwsem_handler(u64 sem, struct task_struct *tsk,
					  unsigned long jiffies)
{
}

void __weak pcp_wait_handler(struct percpu_rw_semaphore *sem, bool is_reader,
			     int phase)
{
}

void __weak mutex_lock_handler(u64 lock, struct task_struct *tsk,
			       unsigned long jiffies)
{
}

void __weak mutex_wait_handler(struct mutex *lock)
{
}

void __weak rwsem_lock_handler(u64 sem, struct task_struct *tsk,
			       unsigned long jiffies)
{
}

void __weak rwsem_read_wait_handler(struct rw_semaphore *sem)
{
}

void __weak rtmutex_lock_handler(u64 lock, struct task_struct *tsk,
				 unsigned long jiffies)
{
}

void __weak rtmutex_wait_handler(struct rt_mutex_base *lock)
{
}

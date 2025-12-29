// SPDX-License-Identifier: GPL-2.0-only
/*
 * Stub definitions for RPMh QoS helpers when CONFIG_INTERCONNECT_QCOM_QOS_RPM
 * is disabled.
 */

#include <linux/export.h>
#include "qnoc-qos.h"
#include "qnoc-qos-rpm.h"

#ifndef CONFIG_INTERCONNECT_QCOM_QOS_RPM
const u8 icc_qnoc_qos_regs[][QOSGEN_OFF_MAX_REGS] = {
	[ICC_QNOC_QOSGEN_TYPE_RPMH] = {},
};
EXPORT_SYMBOL(icc_qnoc_qos_regs);

const struct qcom_icc_noc_ops qcom_qnoc4_ops = {};
EXPORT_SYMBOL(qcom_qnoc4_ops);
#endif

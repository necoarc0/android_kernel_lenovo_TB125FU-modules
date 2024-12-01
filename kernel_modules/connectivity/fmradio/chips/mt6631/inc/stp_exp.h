/* SPDX-License-Identifier: GPL-2.0 */
/*
 * stp_exp.h - STP Exported Functions and Definitions
 */

#ifndef __STP_EXP_H__
#define __STP_EXP_H__

#include <linux/types.h>

/* Example definitions and declarations */

/* Define some constants */
#define STP_SUCCESS 0
#define STP_FAILURE -1

/* Define some structures */
struct stp_exp_data {
    u8 *data;
    u32 length;
};

/* Declare some functions */
int stp_exp_init(void);
void stp_exp_exit(void);
int stp_exp_send_data(struct stp_exp_data *data);
int stp_exp_receive_data(struct stp_exp_data *data);

#endif /* __STP_EXP_H__ */
/* SPDX-License-Identifier: GPL-2.0 */
/*
 * wmt_exp.h - WMT Exported Functions and Definitions
 */

#ifndef __WMT_EXP_H__
#define __WMT_EXP_H__

#include <linux/types.h>

/* Example definitions and declarations */

/* Define some constants */
#define WMT_SUCCESS 0
#define WMT_FAILURE -1

/* Define some structures */
struct wmt_exp_data {
    u8 *data;
    u32 length;
};

/* Declare some functions */
int wmt_exp_init(void);
void wmt_exp_exit(void);
int wmt_exp_send_data(struct wmt_exp_data *data);
int wmt_exp_receive_data(struct wmt_exp_data *data);

#endif /* __WMT_EXP_H__ */
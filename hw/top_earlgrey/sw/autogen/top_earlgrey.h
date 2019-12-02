// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _TOP_EARLGREY_H_
#define _TOP_EARLGREY_H_

#define PINMUX_PERIPH_INSEL_IDX_OFFSET 2
#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO 32
#define NUM_DIO 12

#define PINMUX_GPIO_GPIO_0_IN 0
#define PINMUX_GPIO_GPIO_1_IN 1
#define PINMUX_GPIO_GPIO_2_IN 2
#define PINMUX_GPIO_GPIO_3_IN 3
#define PINMUX_GPIO_GPIO_4_IN 4
#define PINMUX_GPIO_GPIO_5_IN 5
#define PINMUX_GPIO_GPIO_6_IN 6
#define PINMUX_GPIO_GPIO_7_IN 7
#define PINMUX_GPIO_GPIO_8_IN 8
#define PINMUX_GPIO_GPIO_9_IN 9
#define PINMUX_GPIO_GPIO_10_IN 10
#define PINMUX_GPIO_GPIO_11_IN 11
#define PINMUX_GPIO_GPIO_12_IN 12
#define PINMUX_GPIO_GPIO_13_IN 13
#define PINMUX_GPIO_GPIO_14_IN 14
#define PINMUX_GPIO_GPIO_15_IN 15
#define PINMUX_GPIO_GPIO_16_IN 16
#define PINMUX_GPIO_GPIO_17_IN 17
#define PINMUX_GPIO_GPIO_18_IN 18
#define PINMUX_GPIO_GPIO_19_IN 19
#define PINMUX_GPIO_GPIO_20_IN 20
#define PINMUX_GPIO_GPIO_21_IN 21
#define PINMUX_GPIO_GPIO_22_IN 22
#define PINMUX_GPIO_GPIO_23_IN 23
#define PINMUX_GPIO_GPIO_24_IN 24
#define PINMUX_GPIO_GPIO_25_IN 25
#define PINMUX_GPIO_GPIO_26_IN 26
#define PINMUX_GPIO_GPIO_27_IN 27
#define PINMUX_GPIO_GPIO_28_IN 28
#define PINMUX_GPIO_GPIO_29_IN 29
#define PINMUX_GPIO_GPIO_30_IN 30
#define PINMUX_GPIO_GPIO_31_IN 31

#define PINMUX_VALUE_0_OUT 0
#define PINMUX_VALUE_1_OUT 1
#define PINMUX_VALUE_Z_OUT 2
#define PINMUX_GPIO_GPIO_0_OUT 3
#define PINMUX_GPIO_GPIO_1_OUT 4
#define PINMUX_GPIO_GPIO_2_OUT 5
#define PINMUX_GPIO_GPIO_3_OUT 6
#define PINMUX_GPIO_GPIO_4_OUT 7
#define PINMUX_GPIO_GPIO_5_OUT 8
#define PINMUX_GPIO_GPIO_6_OUT 9
#define PINMUX_GPIO_GPIO_7_OUT 10
#define PINMUX_GPIO_GPIO_8_OUT 11
#define PINMUX_GPIO_GPIO_9_OUT 12
#define PINMUX_GPIO_GPIO_10_OUT 13
#define PINMUX_GPIO_GPIO_11_OUT 14
#define PINMUX_GPIO_GPIO_12_OUT 15
#define PINMUX_GPIO_GPIO_13_OUT 16
#define PINMUX_GPIO_GPIO_14_OUT 17
#define PINMUX_GPIO_GPIO_15_OUT 18
#define PINMUX_GPIO_GPIO_16_OUT 19
#define PINMUX_GPIO_GPIO_17_OUT 20
#define PINMUX_GPIO_GPIO_18_OUT 21
#define PINMUX_GPIO_GPIO_19_OUT 22
#define PINMUX_GPIO_GPIO_20_OUT 23
#define PINMUX_GPIO_GPIO_21_OUT 24
#define PINMUX_GPIO_GPIO_22_OUT 25
#define PINMUX_GPIO_GPIO_23_OUT 26
#define PINMUX_GPIO_GPIO_24_OUT 27
#define PINMUX_GPIO_GPIO_25_OUT 28
#define PINMUX_GPIO_GPIO_26_OUT 29
#define PINMUX_GPIO_GPIO_27_OUT 30
#define PINMUX_GPIO_GPIO_28_OUT 31
#define PINMUX_GPIO_GPIO_29_OUT 32
#define PINMUX_GPIO_GPIO_30_OUT 33
#define PINMUX_GPIO_GPIO_31_OUT 34

#endif  // _TOP_EARLGREY_H_

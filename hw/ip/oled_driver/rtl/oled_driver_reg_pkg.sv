// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Register Package auto-generated by `reggen` containing data structure

package oled_driver_reg_pkg;

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////
  typedef struct packed {
    struct packed {
      logic        q;
      logic        qe;
    } disp_write;
    struct packed {
      logic        q;
      logic        qe;
    } disp_on;
    struct packed {
      logic        q;
      logic        qe;
    } disp_off;
  } oled_driver_reg2hw_cmd_reg_t;


  typedef struct packed {
    struct packed {
      logic        d;
    } disp_ready;
    struct packed {
      logic        d;
    } on_ready;
    struct packed {
      logic        d;
    } off_ready;
  } oled_driver_hw2reg_status_reg_t;


  ///////////////////////////////////////
  // Register to internal design logic //
  ///////////////////////////////////////
  typedef struct packed {
    oled_driver_reg2hw_cmd_reg_t cmd; // [5:0]
  } oled_driver_reg2hw_t;

  ///////////////////////////////////////
  // Internal design logic to register //
  ///////////////////////////////////////
  typedef struct packed {
    oled_driver_hw2reg_status_reg_t status; // [2:3]
  } oled_driver_hw2reg_t;

  // Register Address
  parameter OLED_DRIVER_CMD_OFFSET = 12'h 0;
  parameter OLED_DRIVER_STATUS_OFFSET = 12'h 4;

  // Window parameter
  parameter OLED_DRIVER_PIX_BUF_OFFSET = 12'h 800;
  parameter OLED_DRIVER_PIX_BUF_SIZE   = 12'h 200;

  // Register Index
  typedef enum int {
    OLED_DRIVER_CMD,
    OLED_DRIVER_STATUS
  } oled_driver_id_e;

  // Register width information to check illegal writes
  localparam logic [3:0] OLED_DRIVER_PERMIT [2] = '{
    4'b 0001, // index[0] OLED_DRIVER_CMD
    4'b 0001  // index[1] OLED_DRIVER_STATUS
  };
endpackage


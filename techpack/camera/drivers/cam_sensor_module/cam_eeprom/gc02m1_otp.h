/* Copyright (c) 2011-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef GC02M1_OTP_H
#define GC02M1_OTP_H

#define SENSOR_OTP_CONTROL_REGISTER				0x0A00
#define SENSOR_OTP_ERROR_FLAG_REGISTER			        0x6f
#define SENSOR_OTP_PAGE_SELECT_REGISTER			        0xfe
#define SENSOR_OTP_BANK_SELECT_REGISTER			        0x0200
#define SENSOR_OTP_PAGE_START_REGISTER			        0x000F
#define SENSOR_OTP_PAGE_END_REGISTER	    	                0x02ff
#define SENSOR_OTP_TOTAL_PAGE_COUNT				0x0040
#define SENSOR_OTP_PAGE_SIZE					0x0040
#define SENSOR_OTP_MODULE_ID_OFFSET				0x0080
//#define SENSOR_OTP_MODULE_ID_SIZE				0x0010
#define SENSOR_OTP_SENSOR_ID_OFFSET				0x0090
//#define SENSOR_OTP_SENSOR_ID_SIZE				0x0010
#define SENSOR_OTP_SENSOR_MODULE_FW_OFFSET		        0x0000

static int cam_otp_gc02m1_read_memory(struct cam_eeprom_ctrl_t *e_ctrl, struct cam_eeprom_memory_block_t *block);

struct cam_sensor_i2c_reg_array load_sensor_otp_setfile_reg[] = {
	{0xfc, 0x01},
	{0xf4, 0x41},
	{0xf5, 0xc0},
	{0xf6, 0x44},
	{0xf8, 0x38},
	{0xf9, 0x82},
	{0xfa, 0x00},
	{0xfd, 0x80},
	{0xfc, 0x81},
	{0xfe, 0x03},
	{0x01, 0x0b},
	{0xf7, 0x01},
	{0xfc, 0x80},
	{0xfc, 0x80},
	{0xfc, 0x80},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0x87, 0x09},
	{0xee, 0x72},
	{0xfe, 0x01},
	{0x8c, 0x90},
#if 0
	{0xfe, 0x00},
	{0x17, 0x80},
	{0x19, 0x04},
	{0x56, 0x20},
	{0x5b, 0x00},
	{0x5e, 0x01},
	{0x21, 0x3c},
	{0x29, 0x40},
	{0x44, 0x20},
	{0x4b, 0x10},
	{0x55, 0x1a},
	{0xcc, 0x01},
	{0x27, 0x30},
	{0x2b, 0x00},
	{0x33, 0x00},
	{0xe6, 0x50},
	{0x39, 0x07},
	{0x43, 0x04},
	{0x46, 0x2a},
	{0x7c, 0xa0},
	{0xd0, 0xbe},
	{0xd1, 0x60},
	{0xd2, 0x40},
	{0xd3, 0xf3},
	{0xde, 0x1d},
	{0xcd, 0x05},
	{0xce, 0x6f},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x04},
	{0xe0, 0x01},
	{0xfe, 0x00},
	{0xfe, 0x02},
	{0x3e, 0x00},
#endif
};

struct cam_sensor_i2c_reg_array init_write_sensor_otp_reg[] = {
	{0xf3, 0x30},
	{0xfe, 0x02},
	{0x13, 0x08},
};

struct cam_sensor_i2c_reg_array finish_write_sensor_otp_reg[] = {

};

struct cam_sensor_i2c_reg_array init_read_sensor_otp_reg[] = {
	{0xf3, 0x30},
	{0xfe, 0x02},
};

struct cam_sensor_i2c_reg_array finish_read_sensor_otp_reg[] = {

};

#endif /* GC02M1_OTP_H */

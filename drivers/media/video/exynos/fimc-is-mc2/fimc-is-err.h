/*
 * Samsung Exynos5 SoC series FIMC-IS driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_ERR_H
#define FIMC_IS_ERR_H

#define IS_ERROR_VER 012 /* IS ERROR VERSION 0.07 */

#define IS_ERROR_SUCCESS		0
/* General 1 ~ 100 */
#define IS_ERROR_INVALID_COMMAND        (IS_ERROR_SUCCESS+1)
#define IS_ERROR_REQUEST_FAIL           (IS_ERROR_INVALID_COMMAND+1)
#define IS_ERROR_INVALID_SCENARIO       (IS_ERROR_REQUEST_FAIL+1)
#define IS_ERROR_INVALID_SENSORID       (IS_ERROR_INVALID_SCENARIO+1)
#define IS_ERROR_INVALID_MODE_CHANGE    (IS_ERROR_INVALID_SENSORID+1)
#define IS_ERROR_INVALID_MAGIC_NUMBER	(IS_ERROR_INVALID_MODE_CHANGE+1)
#define IS_ERROR_INVALID_SETFILE_HDR	(IS_ERROR_INVALID_MAGIC_NUMBER+1)
#define IS_ERROR_ISP_SETFILE_VERSION_MISMATCH	(IS_ERROR_INVALID_SETFILE_HDR+1)
#define IS_ERROR_ISP_SETFILE_REVISION_MISMATCH\
				(IS_ERROR_ISP_SETFILE_VERSION_MISMATCH+1)
#define IS_ERROR_BUSY (IS_ERROR_ISP_SETFILE_REVISION_MISMATCH+1)
#define IS_ERROR_SET_PARAMETER          (IS_ERROR_BUSY+1)
#define IS_ERROR_INVALID_PATH           (IS_ERROR_SET_PARAMETER+1)
#define IS_ERROR_OPEN_SENSOR_FAIL       (IS_ERROR_INVALID_PATH+1)
#define IS_ERROR_ENTRY_MSG_THREAD_DOWN	(IS_ERROR_OPEN_SENSOR_FAIL+1)
#define IS_ERROR_ISP_FRAME_END_NOT_DONE	(IS_ERROR_ENTRY_MSG_THREAD_DOWN+1)
#define IS_ERROR_DRC_FRAME_END_NOT_DONE	(IS_ERROR_ISP_FRAME_END_NOT_DONE+1)
#define IS_ERROR_SCALERC_FRAME_END_NOT_DONE (IS_ERROR_DRC_FRAME_END_NOT_DONE+1)
#define IS_ERROR_ODC_FRAME_END_NOT_DONE (IS_ERROR_SCALERC_FRAME_END_NOT_DONE+1)
#define IS_ERROR_DIS_FRAME_END_NOT_DONE (IS_ERROR_ODC_FRAME_END_NOT_DONE+1)
#define IS_ERROR_TDNR_FRAME_END_NOT_DONE (IS_ERROR_DIS_FRAME_END_NOT_DONE+1)
#define IS_ERROR_SCALERP_FRAME_END_NOT_DONE (IS_ERROR_TDNR_FRAME_END_NOT_DONE+1)
#define IS_ERROR_WAIT_STREAM_OFF_NOT_DONE\
				(IS_ERROR_SCALERP_FRAME_END_NOT_DONE+1)
#define IS_ERROR_NO_MSG_IS_RECEIVED     (IS_ERROR_WAIT_STREAM_OFF_NOT_DONE+1)
#define IS_ERROR_SENSOR_MSG_FAIL	    (IS_ERROR_NO_MSG_IS_RECEIVED+1)
#define IS_ERROR_ISP_MSG_FAIL	        (IS_ERROR_SENSOR_MSG_FAIL+1)
#define IS_ERROR_DRC_MSG_FAIL	        (IS_ERROR_ISP_MSG_FAIL+1)
#define IS_ERROR_SCALERC_MSG_FAIL		(IS_ERROR_DRC_MSG_FAIL+1)
#define IS_ERROR_ODC_MSG_FAIL	        (IS_ERROR_SCALERC_MSG_FAIL+1)
#define IS_ERROR_DIS_MSG_FAIL	        (IS_ERROR_ODC_MSG_FAIL+1)
#define IS_ERROR_TDNR_MSG_FAIL	        (IS_ERROR_DIS_MSG_FAIL+1)
#define IS_ERROR_SCALERP_MSG_FAIL		(IS_ERROR_TDNR_MSG_FAIL+1)
#define IS_ERROR_LHFD_MSG_FAIL	        (IS_ERROR_SCALERP_MSG_FAIL+1)
#define IS_ERROR_INTERNAL_STOP          (IS_ERROR_LHFD_MSG_FAIL+1)
#define IS_ERROR_UNKNOWN                1000
#define IS_ERROR_TIME_OUT_FLAG          0x80000000

/* Sensor 100 ~ 200 */
#define IS_ERROR_SENSOR_PWRDN_FAIL	100
#define IS_ERROR_SENSOR_STREAM_ON_FAIL	(IS_ERROR_SENSOR_PWRDN_FAIL+1)
#define IS_ERROR_SENSOR_STREAM_OFF_FAIL	(IS_ERROR_SENSOR_STREAM_ON_FAIL+1)

/* ISP 200 ~ 300 */
#define IS_ERROR_ISP_PWRDN_FAIL		200
#define IS_ERROR_ISP_MULTIPLE_INPUT	(IS_ERROR_ISP_PWRDN_FAIL+1)
#define IS_ERROR_ISP_ABSENT_INPUT	(IS_ERROR_ISP_MULTIPLE_INPUT+1)
#define IS_ERROR_ISP_ABSENT_OUTPUT	(IS_ERROR_ISP_ABSENT_INPUT+1)
#define IS_ERROR_ISP_NONADJACENT_OUTPUT	(IS_ERROR_ISP_ABSENT_OUTPUT+1)
#define IS_ERROR_ISP_FORMAT_MISMATCH	(IS_ERROR_ISP_NONADJACENT_OUTPUT+1)
#define IS_ERROR_ISP_WIDTH_MISMATCH	(IS_ERROR_ISP_FORMAT_MISMATCH+1)
#define IS_ERROR_ISP_HEIGHT_MISMATCH	(IS_ERROR_ISP_WIDTH_MISMATCH+1)
#define IS_ERROR_ISP_BITWIDTH_MISMATCH	(IS_ERROR_ISP_HEIGHT_MISMATCH+1)
#define IS_ERROR_ISP_FRAME_END_TIME_OUT	(IS_ERROR_ISP_BITWIDTH_MISMATCH+1)

/* DRC 300 ~ 400 */
#define IS_ERROR_DRC_PWRDN_FAIL		300
#define IS_ERROR_DRC_MULTIPLE_INPUT	(IS_ERROR_DRC_PWRDN_FAIL+1)
#define IS_ERROR_DRC_ABSENT_INPUT	(IS_ERROR_DRC_MULTIPLE_INPUT+1)
#define IS_ERROR_DRC_NONADJACENT_INTPUT	(IS_ERROR_DRC_ABSENT_INPUT+1)
#define IS_ERROR_DRC_ABSENT_OUTPUT	(IS_ERROR_DRC_NONADJACENT_INTPUT+1)
#define IS_ERROR_DRC_NONADJACENT_OUTPUT	(IS_ERROR_DRC_ABSENT_OUTPUT+1)
#define IS_ERROR_DRC_FORMAT_MISMATCH	(IS_ERROR_DRC_NONADJACENT_OUTPUT+1)
#define IS_ERROR_DRC_WIDTH_MISMATCH	(IS_ERROR_DRC_FORMAT_MISMATCH+1)
#define IS_ERROR_DRC_HEIGHT_MISMATCH	(IS_ERROR_DRC_WIDTH_MISMATCH+1)
#define IS_ERROR_DRC_BITWIDTH_MISMATCH	(IS_ERROR_DRC_HEIGHT_MISMATCH+1)
#define IS_ERROR_DRC_FRAME_END_TIME_OUT	(IS_ERROR_DRC_BITWIDTH_MISMATCH+1)

/*SCALERC(400~500)*/
#define IS_ERROR_SCALERC_PWRDN_FAIL     400

/*ODC(500~600)*/
#define IS_ERROR_ODC_PWRDN_FAIL         500

/*DIS(600~700)*/
#define IS_ERROR_DIS_PWRDN_FAIL         600

/*TDNR(700~800)
#define IS_ERROR_TDNR_PWRDN_FAIL        700

/*SCALERP(800~900)*/
#define IS_ERROR_SCALERP_PWRDN_FAIL     800

/*FD(900~1000)*/
#define IS_ERROR_FD_PWRDN_FAIL          900
#define IS_ERROR_FD_MULTIPLE_INPUT	(IS_ERROR_FD_PWRDN_FAIL+1)
#define IS_ERROR_FD_ABSENT_INPUT	(IS_ERROR_FD_MULTIPLE_INPUT+1)
#define IS_ERROR_FD_NONADJACENT_INPUT	(IS_ERROR_FD_ABSENT_INPUT+1)
#define IS_ERROR_LHFD_FRAME_END_TIME_OUT \
					(IS_ERROR_FD_NONADJACENT_INPUT+1)

/* Set parameter error enum */
enum error {
	/* Common error (0~99) */
	ERROR_COMMON_NO			= 0,
	ERROR_COMMON_CMD		= 1,	/* Invalid command*/
	ERROR_COMMON_PARAMETER		= 2,	/* Invalid parameter*/
	/* setfile is not loaded before adjusting */
	ERROR_COMMON_SETFILE_LOAD	= 3,
	/* setfile is not Adjusted before runnng. */
	ERROR_COMMON_SETFILE_ADJUST	= 4,
	/* index of setfile is not valid. */
	ERROR_COMMON_SETFILE_INDEX = 5,
	/* Input path can be changed in ready state(stop) */
	ERROR_COMMON_INPUT_PATH		= 6,
	/* IP can not start if input path is not set */
	ERROR_COMMON_INPUT_INIT		= 7,
	/* Output path can be changed in ready state(stop) */
	ERROR_COMMON_OUTPUT_PATH	= 8,
	/* IP can not start if output path is not set */
	ERROR_COMMON_OUTPUT_INIT	= 9,

	ERROR_CONTROL_NO		= ERROR_COMMON_NO,
	ERROR_CONTROL_BYPASS		= 11,	/* Enable or Disable */
	ERROR_CONTROL_BUF		= 12,	/* invalid buffer info */

	ERROR_OTF_INPUT_NO		= ERROR_COMMON_NO,
	/* invalid command */
	ERROR_OTF_INPUT_CMD		= 21,
	/* invalid format  (DRC: YUV444, FD: YUV444, 422, 420) */
	ERROR_OTF_INPUT_FORMAT		= 22,
	/* invalid width (DRC: 128~8192, FD: 32~8190) */
	ERROR_OTF_INPUT_WIDTH		= 23,
	/* invalid height (DRC: 64~8192, FD: 16~8190) */
	ERROR_OTF_INPUT_HEIGHT		= 24,
	/* invalid bit-width (DRC: 8~12bits, FD: 8bit) */
	ERROR_OTF_INPUT_BIT_WIDTH	= 25,
	/* invalid frame time for ISP */
	ERROR_OTF_INPUT_USER_FRAMETILE = 26,

	ERROR_DMA_INPUT_NO		= ERROR_COMMON_NO,
	/* invalid width (DRC: 128~8192, FD: 32~8190) */
	ERROR_DMA_INPUT_WIDTH		= 31,
	/* invalid height (DRC: 64~8192, FD: 16~8190) */
	ERROR_DMA_INPUT_HEIGHT		= 32,
	/* invalid format (DRC: YUV444 or YUV422, FD: YUV444, 422, 420) */
	ERROR_DMA_INPUT_FORMAT		= 33,
	/* invalid bit-width (DRC: 8~12bit, FD: 8bit) */
	ERROR_DMA_INPUT_BIT_WIDTH	= 34,
	/* invalid order(DRC: YYCbCrorYCbYCr, FD:NO,YYCbCr,YCbYCr,CbCr,CrCb) */
	ERROR_DMA_INPUT_ORDER		= 35,
	/* invalid palne (DRC: 3, FD: 1, 2, 3) */
	ERROR_DMA_INPUT_PLANE		= 36,

	ERROR_OTF_OUTPUT_NO		= ERROR_COMMON_NO,
	/* invalid width (DRC: 128~8192) */
	ERROR_OTF_OUTPUT_WIDTH		= 41,
	/* invalid height (DRC: 64~8192) */
	ERROR_OTF_OUTPUT_HEIGHT		= 42,
	/* invalid format (DRC: YUV444) */
	ERROR_OTF_OUTPUT_FORMAT		= 43,
	/* invalid bit-width (DRC: 8~12bits) */
	ERROR_OTF_OUTPUT_BIT_WIDTH	= 44,

	ERROR_DMA_OUTPUT_NO		= ERROR_COMMON_NO,
	ERROR_DMA_OUTPUT_WIDTH		= 51,	/* invalid width */
	ERROR_DMA_OUTPUT_HEIGHT		= 52,	/* invalid height */
	ERROR_DMA_OUTPUT_FORMAT		= 53,	/* invalid format */
	ERROR_DMA_OUTPUT_BIT_WIDTH	= 54,	/* invalid bit-width */
	ERROR_DMA_OUTPUT_PLANE		= 55,	/* invalid plane */
	ERROR_DMA_OUTPUT_ORDER		= 56,	/* invalid order */
	ERROR_DMA_OUTPUT_BUF		= 57,	/* invalid buffer info */

	ERROR_GLOBAL_SHOTMODE_NO	= ERROR_COMMON_NO,

	/* SENSOR Error(100~199) */
	ERROR_SENSOR_NO			= ERROR_COMMON_NO,
	ERROR_SENSOR_I2C_FAIL		= 101,
	ERROR_SENSOR_INVALID_FRAMERATE,
	ERROR_SENSOR_INVALID_EXPOSURETIME,
	ERROR_SENSOR_INVALID_SIZE,
	ERROR_SENSOR_ACTURATOR_INIT_FAIL,
	ERROR_SENSOR_INVALID_AF_POS,
	ERROR_SENSOR_UNSUPPORT_FUNC,
	ERROR_SENSOR_UNSUPPORT_PERI,
	ERROR_SENSOR_UNSUPPORT_AF,
	ERROR_SENSOR_FLASH_FAIL,
	ERROR_SENSOR_START_FAIL,
	ERROR_SENSOR_STOP_FAIL,

	/* ISP Error (200~299) */
	ERROR_ISP_AF_NO			= ERROR_COMMON_NO,
	ERROR_ISP_AF_BUSY		= 201,
	ERROR_ISP_AF_INVALID_COMMAND	= 202,
	ERROR_ISP_AF_INVALID_MODE	= 203,
	ERROR_ISP_FLASH_NO		= ERROR_COMMON_NO,
	ERROR_ISP_AWB_NO		= ERROR_COMMON_NO,
	ERROR_ISP_IMAGE_EFFECT_NO	= ERROR_COMMON_NO,
	ERROR_ISP_ISO_NO		= ERROR_COMMON_NO,
	ERROR_ISP_ADJUST_NO		= ERROR_COMMON_NO,
	ERROR_ISP_METERING_NO		= ERROR_COMMON_NO,
	ERROR_ISP_AFC_NO		= ERROR_COMMON_NO,

	/* DRC Error (300~399) */

	/* FD Error  (400~499) */
	ERROR_FD_NO					= ERROR_COMMON_NO,
	/* Invalid max number (1~16) */
	ERROR_FD_CONFIG_MAX_NUMBER_STATE		= 401,
	ERROR_FD_CONFIG_MAX_NUMBER_INVALID		= 402,
	ERROR_FD_CONFIG_YAW_ANGLE_STATE			= 403,
	ERROR_FD_CONFIG_YAW_ANGLE_INVALID		= 404,
	ERROR_FD_CONFIG_ROLL_ANGLE_STATE		= 405,
	ERROR_FD_CONFIG_ROLL_ANGLE_INVALID		= 406,
	ERROR_FD_CONFIG_SMILE_MODE_INVALID		= 407,
	ERROR_FD_CONFIG_BLINK_MODE_INVALID		= 408,
	ERROR_FD_CONFIG_EYES_DETECT_INVALID		= 409,
	ERROR_FD_CONFIG_MOUTH_DETECT_INVALID		= 410,
	ERROR_FD_CONFIG_ORIENTATION_STATE		= 411,
	ERROR_FD_CONFIG_ORIENTATION_INVALID		= 412,
	ERROR_FD_CONFIG_ORIENTATION_VALUE_INVALID	= 413,
	/* PARAM_FdResultStr can be only applied
	 * in ready-state or stream off */
	ERROR_FD_RESULT				= 414,
	/* PARAM_FdModeStr can be only applied
	 * in ready-state or stream off */
	ERROR_FD_MODE					= 415,

	/*SCALER ERR(500~599)*/
	ERROR_SCALER_NO			= ERROR_COMMON_NO,
	ERROR_SCALER_DMA_OUTSEL		= 501,
	ERROR_SCALER_H_RATIO			= 502,
	ERROR_SCALER_V_RATIO			= 503,
	ERROR_SCALER_FRAME_BUFFER_SEQ		= 504,

	ERROR_SCALER_IMAGE_EFFECT		= 510,

	ERROR_SCALER_ROTATE			= 520,
	ERROR_SCALER_FLIP			= 521,

};

#endif
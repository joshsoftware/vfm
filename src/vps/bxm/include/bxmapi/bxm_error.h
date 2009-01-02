/*
 * Copyright (c) 2008  VirtualPlane Systems, Inc.
 */
#ifndef INCLUDED_bxm_error
#define INCLUDED_bxm_error

#include <stdint.h>

#define BXM_SUCCESS             0
#define BXM_ERROR_SENDING       1
#define BXM_ERROR_RECEIVE       2
#define BXM_ERROR_CONNECT       3

/**
 * @file
 * @brief Error codes for BXM API.
 *
 * This file contains error codes of BXM API.
 */

/**
 * @brief An error code.
 *
 * The exact error codes could be defined later.
 */
typedef uint32_t bxm_error_t;

#endif /* INCLUDED_bxm_error */

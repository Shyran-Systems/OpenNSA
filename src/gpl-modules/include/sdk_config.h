/*
 * Copyright 2017 Broadcom
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2, as
 * published by the Free Software Foundation (the "GPL").
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License version 2 (GPLv2) for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 (GPLv2) along with this source code.
 */
/*
 * 
 * This software is governed by the Broadcom Switch APIs license.
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenNSA/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __SDK_CONFIG_H__
#define __SDK_CONFIG_H__

/*
 * Include custom overrides
 */
#ifdef SDK_INCLUDE_CUSTOM_CONFIG
#include <sdk_custom_config.h>
#endif


/*
 * Memory Barrier operation if required. 
 * Defaults to nothing. 
 */
#ifndef SDK_CONFIG_MEMORY_BARRIER
#define SDK_CONFIG_MEMORY_BARRIER
#endif



#endif /* __SDK_CONFIG_H__ */

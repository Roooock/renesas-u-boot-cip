# SPDX-License-Identifier: GPL-2.0+
#
# Copyright (C) 2017 Andes Technology Corporation
# Rick Chen, Andes Technology Corporation <rick@andestech.com>

obj-y	:= cpu.o
obj-y	+= cache.o

ifdef CONFIG_SPL_BUILD
obj-$(CONFIG_TARGET_RZF_DEV)		+= $(SOC)/
endif

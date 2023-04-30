/*
# _____     ___ ____     ___ ____
#  ____|   |    ____|   |        | |____|
# |     ___|   |____ ___|    ____| |    \    PS2DEV Open Source Project.
#-----------------------------------------------------------------------
# Copyright (c) 2009 PS2DEV.org
# Licenced under Academic Free License version 2.0
# Review ps2sdk README & LICENSE files for further details.
*/

#include <stdint.h>

void __malloc_lock(struct _reent *ptr)
{
	_internal_malloc_lock();
}

void __malloc_unlock(struct _reent *ptr)
{
	_internal_malloc_unlock();
}
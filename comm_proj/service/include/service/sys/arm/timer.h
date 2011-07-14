/*
 * Copyright (c) 2008      The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 */

#ifndef OMPI_SYS_ARCH_TIMER_H
#define OMPI_SYS_ARCH_TIMER_H 1

#include <sys/times.h>

typedef uint64_t service_timer_t;

static inline service_timer_t
service_sys_timer_get_cycles(void)
{
    service_timer_t ret;
    struct tms accurate_clock;

    times(&accurate_clock);
    ret = accurate_clock.tms_utime + accurate_clock.tms_stime;

    return ret;
}

#define OPAL_HAVE_SYS_TIMER_GET_CYCLES 1

#endif /* ! OMPI_SYS_ARCH_TIMER_H */

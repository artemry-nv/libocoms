/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2007 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart, 
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2007      Cisco Systems, Inc.  All rights reserved.
 * $COPYRIGHT$
 * 
 * Additional copyrights may follow
 * 
 * $HEADER$
 *
 */

/** @file
 *
 *  A bitmap implementation. The bits start off with 0, so this bitmap
 *  has bits numbered as bit 0, bit 1, bit 2 and so on. This bitmap
 *  has auto-expansion capabilities, that is once the size is set
 *  during init, it can be automatically expanded by setting the bit
 *  beyond the current size. But note, this is allowed just when the
 *  bit is set -- so the valid functions are set_bit and
 *  find_and_set_bit. Other functions like clear, if passed a bit
 *  outside the initialized range will result in an error.
 *
 *  To allow these bitmaps to track fortran handles (which MPI defines
 *  to be Fortran INTEGER), we offer a service_bitmap_set_max_size, so that
 *  the upper layer can ask to never have more than
 *  CCS_FORTRAN_HANDLE_MAX, which is min(INT_MAX, fortran INTEGER max).
 *  Currently the only user of this is ompi/attribute/attribute.c
 *
 */

#ifndef CCS_BITMAP_H
#define CCS_BITMAP_H

#include "ccs_config.h"

#include <string.h>

#include "service/util/service_object.h"

BEGIN_C_DECLS

struct service_bitmap_t {
    service_object_t super;   /**< Subclass of service_object_t */
    unsigned char *bitmap; /**< The actual bitmap array of characters */
    int array_size;        /**< The actual array size that maintains the bitmap */
    int max_size;          /**< The maximum size that this bitmap may grow (optional) */
};

typedef struct service_bitmap_t service_bitmap_t;

CCS_DECLSPEC OBJ_CLASS_DECLARATION(service_bitmap_t);

/**
 * Set the maximum size of the bitmap.
 * May be reset any time, but HAS TO BE SET BEFORE service_bitmap_init!
 *
 * @param  bitmap     The input bitmap (IN)
 * @param  max_size   The maximum size of the bitmap in terms of bits (IN)
 * @return OPAL error code or success
 *
 */
CCS_DECLSPEC int service_bitmap_set_max_size (service_bitmap_t *bm, int max_size);


/**
 * Initializes the bitmap and sets its size. This must be called
 * before the bitmap can be actually used
 *
 * @param  bitmap The input bitmap (IN)
 * @param  size   The initial size of the bitmap in terms of bits (IN)
 * @return OPAL error code or success
 *
 */
CCS_DECLSPEC int service_bitmap_init (service_bitmap_t *bm, int size);


/**
 * Set a bit of the bitmap. If the bit asked for is beyond the current
 * size of the bitmap, then the bitmap is extended to accomodate the
 * bit
 *
 * @param  bitmap The input bitmap (IN)
 * @param  bit    The bit which is to be set (IN)
 * @return OPAL error code or success
 *
 */
CCS_DECLSPEC int service_bitmap_set_bit(service_bitmap_t *bm, int bit); 


/**
 * Clear/unset a bit of the bitmap. If the bit is beyond the current
 * size of the bitmap, an error is returned
 *
 * @param  bitmap The input bitmap (IN)
 * @param  bit    The bit which is to be cleared (IN)
 * @return OPAL error code if the bit is out of range, else success
 *
 */
CCS_DECLSPEC int service_bitmap_clear_bit(service_bitmap_t *bm, int bit);


/**
  * Find out if a bit is set in the bitmap
  *
  * @param  bitmap  The input bitmap (IN)
  * @param  bit     The bit which is to be checked (IN)
  * @return true    if the bit is set
  *         false   if the bit is not set OR the index
  *                 is outside the bounds of the provided
  *                 bitmap
  *
  */
CCS_DECLSPEC bool service_bitmap_is_set_bit(service_bitmap_t *bm, int bit);


/**
 * Find the first clear bit in the bitmap and set it
 *
 * @param  bitmap     The input bitmap (IN)
 * @param  position   Position of the first clear bit (OUT)

 * @return err        CCS_SUCCESS on success
 */
CCS_DECLSPEC int service_bitmap_find_and_set_first_unset_bit(service_bitmap_t *bm, 
                                                           int *position); 


/**
 * Clear all bits in the bitmap
 *
 * @param bitmap The input bitmap (IN)
 * @return OPAL error code if bm is NULL
 * 
 */
CCS_DECLSPEC int service_bitmap_clear_all_bits(service_bitmap_t *bm);


/**
 * Set all bits in the bitmap
 * @param bitmap The input bitmap (IN)
 * @return OPAL error code if bm is NULL
 *
 */
CCS_DECLSPEC int service_bitmap_set_all_bits(service_bitmap_t *bm);


/**
 * Gives the current size (number of bits) in the bitmap. This is the
 * legal (accessible) number of bits
 *
 * @param bitmap The input bitmap (IN)
 * @return OPAL error code if bm is NULL
 *
 */
static inline int service_bitmap_size(service_bitmap_t *bm)
{
    return (NULL == bm) ? 0 : (bm->array_size * ((int) (sizeof(char) * 8)));
}


/**
 * Copy a bitmap
 *
 * @param dest Pointer to the destination bitmap
 * @param src Pointer to the source bitmap
 * @ return OPAL error code if something goes wrong
 */
static inline void service_bitmap_copy(service_bitmap_t *dest, service_bitmap_t *src)
{
    dest->bitmap = (unsigned char*)malloc(src->array_size);
    memcpy(dest->bitmap, src->bitmap, src->array_size);
    dest->array_size = src->array_size;
}

END_C_DECLS

#endif
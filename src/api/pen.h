/*
 ** $Id: pen.h 10885 2008-12-05 12:01:39Z tangjianbin$
 **
 ** This file includes MPPen struct define. 
 **
 ** Copyright (C) 2003 ~ 2008 Feynman Software.
 ** Copyright (C) 2000 ~ 2002 Wei Yongming.
 **
 ** Create date: 2008/12/02
 */
#ifndef MGPLUS_PEN_H
#define MGPLUS_PEN_H

#include "mgplus.h"

typedef struct _MPPen
{
    /*draw color.*/
    ARGB           rgba;  
    /* the pen's width.*/
    int            width; 
    int            line_join_e;
    int            line_cap_e;
    unsigned char* dash;
    int            num_dashes;
    int            dash_phase;
    double         miter_limit;
}MPPen;
#endif



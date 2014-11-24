//
//  Masochist_Template.c
//  Masochist Template
//
//  Created by Will Estes on 11/23/14.
//  Copyright (c) 2014 Squiffy. All rights reserved.
//

#include <mach/mach_types.h>
#include "libmasochist.h"

kern_return_t Masochist_Template_start(kmod_info_t * ki, void *d);
kern_return_t Masochist_Template_stop(kmod_info_t *ki, void *d);

kern_return_t Masochist_Template_start(kmod_info_t * ki, void *d)
{
    
    if(libmasochist_init(0x0) != KERN_SUCCESS) // Set slide via slide.c
        return KERN_FAILURE;
    
    return KERN_SUCCESS;
}

kern_return_t Masochist_Template_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}

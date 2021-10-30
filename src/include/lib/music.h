#ifndef _IN_LIB_MUSIC_H
#define _IN_LIB_MUSIC_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

u32 music00011420(void);
bool musicStopByTrackType(s32 *arg0, u32 arg1);
u32 music00011780(void);
bool musicStopAll(u32 arg0);
u32 music000118f4(void);
void music0001190c(void);
void music00011d84(void);

#endif

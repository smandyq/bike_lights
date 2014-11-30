#pragma once
#ifndef STARS_H
#define STARS_H

#include "PololuLedStrip.h"
#include "bike_lights.h"

//maximum number of frames between a star dying and a new one being created in its place
#define STAR_MAX_TICKS 75

typedef struct 
{
  rgb_color* pixel;
  const uint8_t*   lut_index;
  uint8_t    ticks;
} star_t;


inline uint8_t get_rando();
void init_stars();
void update_stars(rgb_color *start, rgb_color* end);

#endif

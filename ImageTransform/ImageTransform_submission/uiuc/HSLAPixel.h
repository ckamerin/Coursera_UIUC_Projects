/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

// Put your HSLAPixel class definition here.
// (Remember to end it with a semicolon!)

namespace uiuc {
  class HSLAPixel {
    public:
      double h; // hue of the pixel in degrees between 0 and 360
      double s; // saturation of the pixel as decimal between 0 and 1
      double l; // luminance of the pixel as decimal between 0 and 1
      double a; // alpha channel of the pixel as decimal between 0 and 1
  };
};

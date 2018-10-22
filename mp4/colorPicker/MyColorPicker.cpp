#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"

using namespace cs225;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */

MyColorPicker::MyColorPicker(double increment)
   : hue(0), s(0), l(0), increment(increment) { }


HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  HSLAPixel pixel(hue, s, l);
  hue += increment;
  if (hue >= 360) { hue -= 360; }
  s += increment;
  if (s >= 1) { s -= 1; }
  l += increment;
  if (l >= 1) { hue -= 1; }
  return pixel;
}

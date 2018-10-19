#include <cmath>
#include <iterator>
#include <iostream>
#include <vector>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"


#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

double ImageTraversal::Iterator::calculate(Point point){
  HSLAPixel p1 = png_.getPixel(point.x, point.y);
  HSLAPixel p2 = png_.getPixel(start_.x, start_.y);
  return calculateDelta(p1, p2);
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  /** @todo [Part 1] */
  // current_ = Point(0,0);
  imgtrav_ = NULL;
}

ImageTraversal::Iterator::Iterator(Point start, ImageTraversal* imgtrav, double tolerance, PNG png) {
  /** @todo [Part 1] */
  start_ = start;
  current_ = start;
  imgtrav_ = imgtrav;
  tolerance_ = tolerance;
  png_ = png;
  vector<vector<bool>> visited_(png_.width(), std::vector<bool>(png_.height()));
  for (unsigned i = 0; i < png_.width(); i++) {
    for (unsigned j = 0; j < png_.height(); j++) {
      visited_[i][j] = false;
    }
  }

  visited = visited_;
  visited[start.x][start.y] = true;
  neighborsAdd(start);
}

void ImageTraversal::Iterator::neighborsAdd(Point point){
  Point right((point.x)+1, point.y);
  if ((point.x)+1 < png_.width())
  imgtrav_->add(right);

  Point below(point.x, (point.y)+1);
  if ((point.y)+1 < png_.height())
  imgtrav_->add(below);


  Point left((point.x)-1, point.y);
  if ((int)(point.x)-1 >= 0)
  imgtrav_->add(left);


  Point above(point.x, (point.y)-1);
  if ((int)(point.y)-1 >= 0)
  imgtrav_->add(above);
}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator &ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  Point p = imgtrav_->pop();
  double d = calculate(p);
  while (!imgtrav_->empty() && (visited[p.x][p.y] == true || d >= tolerance_)){
    p = imgtrav_->pop();
    d = calculate(p);
  }
  if (!imgtrav_->empty()){
    current_ = p;
    visited[p.x][p.y] = true;
    neighborsAdd(p);
  }
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return current_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  bool thisEmpty = false;
  bool otherEmpty = false;

  if (imgtrav_ == NULL) { thisEmpty = true; }
  if (other.imgtrav_ == NULL) { otherEmpty = true; }

  if (!thisEmpty)  { thisEmpty = imgtrav_->empty(); }
  if (!otherEmpty) { otherEmpty = other.imgtrav_->empty(); }

  if (thisEmpty && otherEmpty) return false; // both empty then the traversals are equal, return true
  else if ((!thisEmpty)&&(!otherEmpty)) return (imgtrav_ != other.imgtrav_); //both not empty then compare the traversals
  else return true; // one is empty while the other is not, return true
}

#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <iostream>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;
using namespace std;

/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {
  /** @todo [Part 1] */
  start_ = start;
  tolerance_ = tolerance;
  png_ = png;
  neighbors.push(start_);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator(start_, this, tolerance_, png_);
}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

void print_queue(std::queue<Point> q);
/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */

    neighbors.push(point);


  // std::cout << "topPoint " << neighbors.front() << std::endl;
  // std::cout << "count topPoint in visited " << visited.count(neighbors.front()) << std::endl;

  // std::cout << "peekPoint " << neighbors.front() << std::endl;

  // std::cout << "count peekPoint in visited " << visited.count(neighbors.front()) << std::endl;

//   Point pointTemp(1, 2);
//   // std::cout << "pointTemp " << pointTemp << std::endl;
//   std::cout << "count pointTemp in visited " << visited.count(pointTemp) << std::endl;
//
//   std::cout << "visited " << endl;
//   for (auto elem : visited){
// 	std::cout << elem << " ";
//   }
//   std::cout << endl;
//
//   std::cout << "neighbors " << endl;
//   print_queue(neighbors);
//   std::cout << std::endl;
// }
//
// void print_queue(std::queue<Point> q)
// {
//   while (!q.empty())
//   {
//     std::cout << q.front() << " ";
//     q.pop();
//   }
//   std::cout << std::endl;
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
  Point topPoint = neighbors.front();
  neighbors.pop();
  return topPoint;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return neighbors.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  if(neighbors.empty()) return true;
  else return false;
}

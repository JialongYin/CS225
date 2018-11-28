/* Your code here! */
#pragma once
#include <vector>
#include "dsets.h"
#include <stdlib.h>
#include <queue>
#include "cs225/PNG.h"
#include <tuple>
#include <iostream>
using namespace std;
using namespace cs225;

class SquareMaze{
public:
  SquareMaze ();
  void makeMaze (int width, int height);
  bool canTravel (int x, int y, int dir) const;
  void setWall (int x, int y, int dir, bool exists);
  vector<int> solveMaze ();
  PNG *drawMaze () const;
  PNG *drawMazeWithSolution ();

  PNG *drawCreativeMaze();
private:
  vector<tuple<int, int>> maze;
  int width_;
  int height_;
  int destination_;
};

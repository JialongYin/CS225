/* Your code here! */
#pragma once
#include <vector>
#include "dsets.h"
using namespace std;
class SquareMaze{
public:
  SquareMaze ();
  void makeMaze (int width, int height);
  bool canTravel (int x, int y, int dir) const;
  void setWall (int x, int y, int dir, bool exists);
  vector<int> solveMaze ();
  PNG *drawMaze () const;
  PNG *drawMazeWithSolution ();
private:
  vector<tuple<int, int>> maze;
  int width_;
  int height_;
};

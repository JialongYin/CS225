/* Your code here! */
#ifndef MAZE_H
#define MAZE_H

#include<iostream>
#include<vector>
#include<algorithm>
#include<random>
#include<chrono>
#include<ctime>
#include "cs225/PNG.h"
#include"dsets.h"

using namespace cs225;
using namespace std;
struct block{
  block(bool r,bool d){
    right = r;
    down = d;
  }
  block(){
    right = true;
    down = true;
  }
  bool right;
  bool down;
};

class SquareMaze{
public:
  SquareMaze();
  void makeMaze(int width, int height);
  bool canTravel(int x, int y, int dir) const;
  void setWall(int x, int y, int dir, bool exists);
  vector<int> solveMaze();
  PNG* drawMaze() const;
  PNG* drawMazeWithSolution();
  PNG* drawCreativeMaze() const;
  PNG* drawMazeWithCreative();

private:
  vector<block> maze_;
  DisjointSets dsets_;

  int width_ = 0;
  int height_ = 0;
  int cood(int x, int y) const;
  bool checkEdge(int x, int y, int dir);
  int nextBlock(int x,int y,int dir);
  vector<int> traverse(int x, int y, int prev_x, int prev_y);
};

#endif

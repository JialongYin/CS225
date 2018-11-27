/* Your code here! */
#include "maze.h"
#include <stdlib.h>
#include <queue>
void SquareMaze::makeMaze (int width, int height){
  width_ = width;
  height_ = height;
  if (maze.size() != 0) maze.clear();
  for (size_t i = 0; i < width*height; i++) {
    maze.push_back(make_tuple(1,1));
  }
  DisjointSets noncycle;
  noncycle.addelements(width*heigh);
  srand(time(NULL));
  while (noncycle.size(0) != width*heigh) {
    int cell = (rand() % (width*height – 0 + 1));
    int wall = (rand() % (1 – 0 + 1));
    if (maze[cell][wall] == 1) {
      if (wall == 0) {
        int cellCnct = cell+width;
        if ( cellCnct/width < height-1 && noncycle.find(cellCnct) != noncycle.find(cell) ) {
          noncycle.setunion(cellCnct, cell);
          maze[cell][wall] == 0;
        }
      }
      else {
        int cellCnct = cell+1;
        if ( (cellCnct+1)%width != 0 && noncycle.find(cellCnct) != noncycle.find(cell) ) {
          noncycle.setunion(cellCnct, cell);
          maze[cell][wall] == 0;
        }
      }
    }
  }
}

bool SquareMaze::canTravel (int x, int y, int dir) const{
  int idx = y*width_ + x;
  if (dir == 0) {
    if ((idx+1)%width != 0 && maze[idx][1] == 0)
      return true;
    return false;
  } else if (dir == 1) {
    if (idx/width_ < height_-1 && maze[idx][0] == 0 )
      return true;
    return false;
  } else if (dir == 2) {
    if (idx%width_ != 0 && maze[idx-1][1] == 0)
      return true;
    return false;
  } else if (dir == 3) {
    if (idx/width_ > 0 && maze[idx-width_][0] == 0)
      return true;
    return false;
  }
}

void SquareMaze::setWall (int x, int y, int dir, bool exists){
  int idx = y*width_ + x;
  if (dir == 0) {
    int wall = dir +1;
  } else {
    int wall = dir -1;
  }
  if (exists) {
    maze[idx][wall] == 1;
  } else{
    maze[idx][wall] == 0;
  }
}

vector<int> SquareMaze::solveMaze (){
  for (int i = 0; i < width_; i++) {
    int destination = (height_-1)*width_ + i;
    queue = [(start, [start])]
  }
}

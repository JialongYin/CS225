/* Your code here! */
#include "maze.h"
#include <stdlib.h>
#include <queue>
#include "cs225/PNG.h"
#include <tuple>
#include <utility>

SquareMaze::SquareMaze (){

}

void SquareMaze::makeMaze (int width, int height){
  width_ = width;
  height_ = height;
  if (maze.size() != 0) maze.clear();
  for (int i = 0; i < width*height; i++) {
    maze.push_back(make_tuple(1,1));
  }
  DisjointSets noncycle;
  noncycle.addelements(width*height);
  srand(time(NULL));
  while (noncycle.size(0) != width*height) {
    int cell = (rand() % (width*height - 0 + 1));
    int wall = (rand() % (1 - 0 + 1));
      if (wall == 0 && get<0>(maze[cell]) == 1) {
        int cellCnct = cell+width;
        if ( cellCnct/width < height-1 && noncycle.find(cellCnct) != noncycle.find(cell) ) {
          noncycle.setunion(cellCnct, cell);
          get<0>(maze[cell]) = 0;
        }
      }
      else if (wall == 1 && get<1>(maze[cell]) == 1) {
        int cellCnct = cell+1;
        if ( (cellCnct+1)%width != 0 && noncycle.find(cellCnct) != noncycle.find(cell) ) {
          noncycle.setunion(cellCnct, cell);
          get<1>(maze[cell]) = 0;
        }
      }
  }
}

bool SquareMaze::canTravel (int x, int y, int dir) const{
  int idx = y*width_ + x;
  if (dir == 0) {
    if ((idx+1)%width_ != 0 && get<1>(maze[idx]) == 0)
      return true;
    return false;
  } else if (dir == 1) {
    if (idx/width_ < height_-1 && get<0>(maze[idx]) == 0 )
      return true;
    return false;
  } else if (dir == 2) {
    if (idx%width_ != 0 && get<1>(maze[idx-1]) == 0)
      return true;
    return false;
  } else if (dir == 3) {
    if (idx/width_ > 0 && get<0>(maze[idx-width_]) == 0)
      return true;
    return false;
  } else return true;
}

void SquareMaze::setWall (int x, int y, int dir, bool exists){
  int idx = y*width_ + x;
  if (exists) {
    if (dir == 0)
      get<1>(maze[idx]) = 1;
    else
      get<0>(maze[idx]) = 1;
  } else{
    if (dir == 0)
      get<1>(maze[idx]) = 0;
    else
      get<0>(maze[idx]) = 0;
  }
}

vector<int> SquareMaze::solveMaze (){
  vector <tuple<size_t, vector<int>, int>> des_path;
  for (int i = 0; i < width_; i++) {
    int destination = (height_-1)*width_ + i;
    queue <pair<int, vector<int>>> q;
    q.push(make_pair(0, vector<int>()));
    vector<bool> visited(false, width_*height_); //

    while (!q.empty()) {
      int idx = q.front().first;
      vector<int> dir = q.front().second;
      q.pop();
      if (!visited[idx]) {
        if (idx == destination) {
          cout << "in here "<<endl;
          des_path.push_back(make_tuple(dir.size(), dir, destination));
          break;
        }
        visited[idx] = true;
        int x = idx%width_;
        int y = idx/width_;
        if (canTravel(x, y, 0)) {
          vector<int> temp0 = dir;
          temp0.push_back(0);
          q.push(make_pair(idx+1, temp0));
        }
        if (canTravel(x, y, 1)) {
          vector<int> temp1 = dir;
          temp1.push_back(1);
          q.push(make_pair(idx+width_, temp1));
        }
        if (canTravel(x, y, 2)) {
          vector<int> temp2 = dir;
          temp2.push_back(2);
          q.push(make_pair(idx-1, temp2));
        }
        if (canTravel(x, y, 3)) {
          vector<int> temp3 = dir;
          temp3.push_back(3);
          q.push(make_pair(idx-width_, temp3));
        }

      }
    }
  }
  sort(des_path.begin(), des_path.end());
  cout << "len ="<< des_path.size()<<endl;
  int len = get<0>(des_path.back());
  cout << len << endl;
  destination_ = get<2>(des_path.back());
  return get<1>(des_path.back());
}

PNG *SquareMaze::drawMaze () const {
  PNG *png = new PNG(width_*10 + 1, height_*10 + 1);
  for (unsigned x = 0; x < png->width(); x++) {
    for (unsigned y = 0; y < png->height(); y++) {
      if ((y == 0 && !(x>=1 && x <=9)) || x == 0) {
        HSLAPixel & pixel = png->getPixel(x, y);
        pixel.l = 0;
      }
    }
  }
  for (int i = 0; i < width_*height_; i++) {
    if (get<1>(maze[i]) == 1) {
      for (int k = 0; k < 10; k++) {
        int x_coor = (i%width_ + 1)*10;
        int y_coor = (i/width_)*10 + k;
        HSLAPixel & p1 = png->getPixel(x_coor, y_coor);
        p1.l = 0;
      }
    }
    if (get<0>(maze[i]) == 1) {
      for (int k = 0; k < 10; k++) {
        int x_coor = (i%width_)*10 + k;
        int y_coor = (i/width_ + 1)*10;
        HSLAPixel & p2 = png->getPixel(x_coor, y_coor);
        p2.l = 0;
      }
    }
  }
  return png;
}

PNG *SquareMaze::drawMazeWithSolution () {
  PNG *png = drawMaze();
  vector<int> path = solveMaze();
  reverse(path.begin(),path.end());
  int x_coor = 5;
  int y_coor = 5;
  while (!path.empty()) {
    int dir = path.back();
    path.pop_back();
    if (dir == 1) {
      for (int k = 0; k < 11; k++) {
        HSLAPixel & p1 = png->getPixel(x_coor, y_coor);
        p1.h = 0.1;
        p1.s = 0.5;
        p1.l = 1;
        if (k != 10)
          y_coor = y_coor + 1;
      }
    }
    if (dir == 0) {
      for (int k = 0; k < 11; k++) {
        HSLAPixel & p0 = png->getPixel(x_coor, y_coor);
        p0.h = 0.1;
        p0.s = 0.5;
        p0.l = 1;
        if (k != 10)
          x_coor = x_coor + 1;
      }
    }
    if (dir == 3) {
      for (int k = 0; k < 11; k++) {
        HSLAPixel & p3 = png->getPixel(x_coor, y_coor);
        p3.h = 0.1;
        p3.s = 0.5;
        p3.l = 1;
        if (k != 10)
          y_coor = y_coor - 1;
      }
    }
    if (dir == 2) {
      for (int k = 0; k < 11; k++) {
        HSLAPixel & p2 = png->getPixel(x_coor, y_coor);
        p2.h = 0.1;
        p2.s = 0.5;
        p2.l = 1;
        if (k != 10)
          x_coor = x_coor - 1;
      }
    }
  }

  for (int k = 1; k < 9; k++) {
    int x_des = (destination_%width_)*10 + k;
    int y_des = (destination_/width_ + 1)*10;
    HSLAPixel & p_des = png->getPixel(x_des, y_des);
    p_des.h = 1;
  }
  return png;
}

PNG *SquareMaze::drawCreativeMaze(){
  return NULL;
}

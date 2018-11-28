/* Your code here! */
#include "maze.h"
#include <cmath>
using std::vector;


SquareMaze::SquareMaze(){
    vector<int> walls;
}

void SquareMaze::makeMaze(int width, int height){
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  width_ = width;
  height_ = height;
  maze_.clear();
  maze_.resize(width * height);
  dsets_.clear();
  dsets_.addelements(width * height);


  vector<int> walls;

  for(int i = 0; i < width_ * height_ * 2; i++){
    walls.push_back(i);
  }

  std::shuffle(walls.begin(), walls.end(), std::default_random_engine(seed));
  unsigned k = 0;
  int numSets = width_ * height_;
  while(numSets > 1 && k < walls.size()){
    int i = walls[k];
    if(i % 2 == 0){
        if(checkEdge((i/2) % width_, (i/2) / width_, 1) ||
          dsets_.find(i/2) == dsets_.find(i/2 + width_)){
            k++;
            continue;
          }
        else{
          setWall(i/2%width_, i/2/width_, 1, false);
          dsets_.setunion(i/2, i/2 + width_);
          numSets--;
        }
    }
    else{
        if(checkEdge((i/2) % width_,(i/2) / width_, 0)||
            dsets_.find(i/2) == dsets_.find(i/2 + 1)) {
          k++;
          continue;
        }
        else{
          setWall(i/2 % width_, i/2/width_, 0, false);
          dsets_.setunion(i/2,i/2+1);
          numSets--;
        }
      }

  }
}

bool SquareMaze::canTravel(int x, int y, int dir) const{
  if((x == 0 && dir == 2)||(y == 0 && dir == 3)){
    return false;
  }

  if(dir == 0) return !maze_[cood(x,y)].right;
  else if(dir == 1) return !maze_[cood(x,y)].down;
  else if(dir == 2) return !maze_[cood(x-1,y)].right;
  else return !maze_[cood(x,y-1)].down;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists){
  if(dir == 0){maze_[cood(x,y)].right = exists;}
  else if(dir == 1){maze_[cood(x,y)].down = exists;}
  else if(dir == 2){maze_[cood(x-1,y)].right = exists;}
  else if(dir == 3){maze_[cood(x,y-1)].down = exists;}
}

int SquareMaze::cood(int x, int y) const{
  return y*width_ + x;
}

int SquareMaze::nextBlock(int x,int y,int dir){
  if(dir == 0) return cood(x + 1,y);
  else if(dir == 1) return cood(x, y+1);
  else if(dir == 2) return cood(x - 1,y);
  else return cood(x,y-1);
}

bool SquareMaze::checkEdge(int x, int y, int dir){
  if((x == width_ - 1 && dir == 0) ||
     (y == height_ - 1 && dir == 1)||
     (x == 0 && dir == 2) ||
     (y == 0 && dir == 3)){
       return true;
     }
  else return false;
}


vector<int> SquareMaze::solveMaze(){
  vector<int> ret = traverse(0,0,0,0);
  ret.pop_back();
  return ret;
}

vector<int> SquareMaze::traverse(int x, int y, int prev_x, int prev_y){
  vector<int> maxStep{};
  vector<int> temp{};
  int dir;
  bool reachedBottom = false;
  if(y == height_ - 1){
    reachedBottom = true;
  }
  for(int i = 0; i < 4; i++){
    if(canTravel(x,y,i) && nextBlock(x,y,i) != cood(prev_x,prev_y)){
      temp = traverse(nextBlock(x,y,i) % width_, nextBlock(x,y,i)/width_,x,y);
      if(temp.size() == 0) continue;

      if(temp.size() > maxStep.size() ||
        (temp.size() == maxStep.size() && temp.back() < maxStep.back())){
          maxStep = temp;
          dir = i;
        }
    }
  }

  if(maxStep.size() != 0){
      maxStep.insert(maxStep.begin(), dir);
  } else if(maxStep.size() == 0 && reachedBottom){
      maxStep.push_back(x);
  } else{
      return maxStep;
  }

  return maxStep;
}

PNG* SquareMaze::drawMaze() const{
  PNG* canvas = new PNG(width_ * 10 + 1,height_ * 10 + 1);
  for(unsigned int y = 0; y < canvas->height(); y++){
    HSLAPixel& temp = canvas->getPixel(0,y);
    temp.l = 0;
  }
  for(unsigned int x = 10; x < canvas->width(); x++){
    HSLAPixel& temp = canvas->getPixel(x,0);
    temp.l = 0;
  }
  for(int x = 0; x < width_; x++){
    for (int y = 0; y < height_; y++){

      if(maze_[cood(x,y)].right){
        for(int k = 0; k <= 10; k++){
          HSLAPixel& temp = canvas->getPixel((x+1)*10,y*10+k);
          temp.l = 0;
        }
      }

      if(maze_[cood(x,y)].down){
        for(int k = 0; k<= 10; k++){
          HSLAPixel& temp = canvas->getPixel(x*10+k, (y+1)*10);
          temp.l = 0;
        }
      }

    }
  }
  return canvas;
}

PNG* SquareMaze::drawMazeWithSolution(){
  PNG* canvas = drawMaze();
  vector<int> sol = solveMaze();
  int next = 0;
  int x = 5;
  int y = 5;
  HSLAPixel& temp = canvas->getPixel(x,y);
  temp.s = 1; temp.l = 0.5;
  for (auto iter = sol.begin(); iter != sol.end(); iter ++){
    for(int i = 0; i < 10; i++){
      if(*iter == 0){x++;}
      else if(*iter == 1){y++;}
      else if(*iter == 2){x--;}
      else {y--;}
      HSLAPixel& temp = canvas->getPixel(x,y);
      temp.s = 1; temp.l = 0.5;
    }
    next = nextBlock(next%width_, next / width_,(*iter));
  }

  for(int k = 1; k < 10; k++){
    HSLAPixel& temp = canvas->getPixel((next%width_)*10+k, (next/width_+1)*10);
    temp.l = 1;
  }
  return canvas;
}


PNG* SquareMaze::drawMazeWithCreative(){
  //PNG* canvas = drawMaze();
  PNG* canvas = drawCreativeMaze();
  vector<int> sol = solveMaze();
  int next = 0;
  int x = 5;
  int y = 5;
  HSLAPixel& temp = canvas->getPixel(x,y);
  temp.s = 1; temp.l = 0.5;
  for (auto iter = sol.begin(); iter != sol.end(); iter ++){
    for(int i = 0; i < 10; i++){
      if(*iter == 0){x++;}
      else if(*iter == 1){y++;}
      else if(*iter == 2){x--;}
      else {y--;}
      HSLAPixel& temp = canvas->getPixel(x,y);
      temp.s = 1; temp.l = 0.5;
    }
    next = nextBlock(next%width_, next/width_, (*iter));
  }

  for(int k = 1; k < 10; k++){
    HSLAPixel& temp = canvas->getPixel((next%width_)*10+k, (next/width_+1)*10);
    temp.l = 1;
  }
  return canvas;
}



PNG* SquareMaze::drawCreativeMaze() const{
  PNG* canvas = new PNG(width_ * 10 + 1,height_ * 10 + 1);

  for(unsigned int y = 0; y < canvas->height(); y++){
    HSLAPixel& temp = canvas->getPixel(0,y);
    temp.l = 0;
  }

  for(unsigned int x = 10; x < canvas->width(); x++){
    HSLAPixel& temp = canvas->getPixel(x,0);
    temp.l = 0;
  }

  for(int x = 0; x < width_; x++){
    for (int y = 0; y < height_; y++){

      if(maze_[cood(x,y)].right){
        for(int k = 0; k <= 5; k++){
          HSLAPixel& temp = canvas->getPixel((x+1)*10,y*10+k);
          temp.l = 0;
        }
      }

      if(maze_[cood(x,y)].down){
        for(int k = 0; k<= 10; k++){
          HSLAPixel& temp = canvas->getPixel(x*10+k, (y+1)*10);
          temp.l = 0;
        }
      }

    }
  }
  return canvas;
}

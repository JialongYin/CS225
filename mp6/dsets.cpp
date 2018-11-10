/* Your code here! */
#include "dsets.h"
void DisjointSets::addelements (int num){
  for (int i = 0; i < num ; i++){
    arr_.push_back(-1);
  }
}

int DisjointSets::find (int elem){
  if (arr_[elem] < 0) return elem;
  int root = find(arr_[elem]);
  arr_[elem] = root;
  return root;
}

void DisjointSets::setunion (int a, int b){
  int root_a = find(a);
  int root_b = find(b);
  if (arr_[root_a] < arr_[root_b]) {
    arr_[root_a] = arr_[root_a] + arr_[root_b];
    arr_[root_b] = root_a;

  } else{
    arr_[root_b] = arr_[root_b] + arr_[root_a];
    arr_[root_a] = root_b;
  }
}

int DisjointSets::size (int elem){
  if (arr_[elem] < 0) return -1 * arr_[elem];
  return size(arr_[elem]);
}

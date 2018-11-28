/* Your code here! */
#include "dsets.h"

void DisjointSets::addelements (int num){
    for(int i = 0; i < num; i++){
        arr_.push_back(-1);
    }
}


int DisjointSets::find (int elem){
    if ( arr_[elem] < 0 ) {
        return elem;
    } else {
        arr_[elem] = find( arr_[elem] );
    }
    return arr_[elem];
}



void DisjointSets::setunion (int a, int b){
    int root1 = find(a);
    int root2 = find(b);
    int newSize = arr_[root1] + arr_[root2];
    // If arr_[root1] is less than (more negative), it is the larger set;
    // we union the smaller set, root2, with root1.
    if( arr_[root1] < arr_[root2] ) {
        arr_[root2] = root1;
        arr_[root1] = newSize;
    }else { // Otherwise, do the opposite:
        arr_[root1] = root2;
        arr_[root2] = newSize;
    }
}

int DisjointSets::size (int elem){
    int rootIdx = find(elem);
    return -arr_[rootIdx];
}



void DisjointSets::clear(){
    arr_.clear();
}

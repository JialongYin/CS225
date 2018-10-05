#include "List.h"
#include <iostream>
using namespace std;

int main() {
  List<int> list;
  list.insertFront(8);
  list.insertFront(7);
  list.insertFront(6);
  list.insertFront(5);
  list.insertFront(4);
  list.insertFront(3);
  list.insertFront(2);
  list.insertFront(1);
  cout << "original list" << list <<endl;
  // list.reverse();
  list.reverseNth(5);
  // list.waterfall();
  cout << "new list" << list << endl;
  //cout << list.size() << endl;

  return 0;
}

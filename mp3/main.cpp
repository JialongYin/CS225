#include "List.h"
#include <iostream>
using namespace std;

int main() {
  List<int> list1, list2;
  // list1.insertFront(10);
  // list1.insertFront(6);
  list1.insertFront(1);
  list1.insertFront(1);
  list1.insertFront(1);
  // list2.insertFront(11);
  // list2.insertFront(9);
  // list2.insertFront(8);
  list2.insertFront(6);
  list2.insertFront(5);
  list2.insertFront(4);
  cout << "original list1" << list1 <<endl;
  cout << "original list2" << list2 <<endl;
  list1.mergeWith(list2);
  cout << "merged list" << list1 << endl;

  return 0;
}

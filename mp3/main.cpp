#include "List.h"
#include <iostream>
using namespace std;

int main() {
  List<int> list1, list2;
  list1.insertFront(10);
  list1.insertFront(6);
  list1.insertFront(4);
  list1.insertFront(3);
  list1.insertFront(1);
  list2.insertFront(9);
  list2.insertFront(7);
  list2.insertFront(2);
  cout << "original list1" << list1 <<endl;
  cout << "original list2" << list2 <<endl;
  list1.mergeWith(list2);
  cout << "new list" << list1 << endl;

  return 0;
}

#include "List.h"
#include <iostream>
using namespace std;

int main() {
  List<int> list;
  list.insertBack(2);
  list.insertBack(5);
  list.insertBack(1);
  list.reverse();
  cout << list <<endl;
  return 0;
}

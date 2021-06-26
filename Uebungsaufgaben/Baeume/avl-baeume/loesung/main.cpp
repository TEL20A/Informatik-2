#include <iostream>
#include "tree.h"
using namespace std;

void test_insertions();

int main() {
  test_insertions();
  
  return 0;
}

void test_insertions() {
  Tree t1;
  
  t1.insert(42);
  t1.insert(23);
  t1.insert(77);
  t1.insert(2);
  t1.insert(38);

  cout << t1.dotString() << endl;
}
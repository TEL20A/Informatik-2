#include <iostream>
#include "tree.h"
using namespace std;

void basicTreeTests();

int main() {
  basicTreeTests();
  
  return 0;
}

void basicTreeTests() {
  Tree t1;
  
  t1.insert(42);
  t1.insert(23);
  t1.insert(85);
  t1.insert(-2);
  
  cout << t1.inOrderValues() << endl;
}
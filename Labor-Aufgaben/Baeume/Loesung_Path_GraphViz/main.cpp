#include <iostream>
#include "tree.h"
using namespace std;

void basicTreeTests();
void test_pathToElement();
void test_dotString();

int main() {
  //basicTreeTests();
  //test_pathToElement();
  test_dotString();
  
  return 0;
}

void basicTreeTests() {
  Tree t1;
  
  t1.insert(42);
  t1.insert(23);
  t1.insert(77);
  t1.insert(2);
  t1.insert(38);
  
  cout << t1.inOrderValues() << endl;
}

void test_pathToElement() {
  Tree t1;
  
  t1.insert(42);
  t1.insert(23);
  t1.insert(77);
  t1.insert(2);
  t1.insert(38);

  cout << t1.pathToElement(77) << endl;
  cout << t1.pathToElement(2) << endl;
}

void test_dotString() {
  Tree t1;
  
  t1.insert(42);
  t1.insert(23);
  t1.insert(77);
  t1.insert(2);
  t1.insert(38);

  cout << t1.dotString() << endl;
}
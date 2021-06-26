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
  
  t1.insert(42);    /*         42                23           */
  t1.insert(23);    /*        /  \              /  \          */
  t1.insert(77);    /*       23  77            5    42        */
  t1.insert(5);     /*      /  \       ==>    /    /  \       */
  t1.insert(38);    /*     5    38           1    38   77     */
  t1.insert(1);     /*    /                                   */
                    /*   1                                    */
  cout << t1.dotString() << endl;
}

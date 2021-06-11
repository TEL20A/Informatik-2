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
  
  t1.insert("Haus", "Da wohnt man.");
  t1.insert("Garten", "Da auch!");
  t1.insert("Garage", "Hier steht mein Auto.");
  t1.insert("Schuppen", "... und hier mein Fahrrad.");
  t1.insert("Tür", "Irgendwie muss ich ja reinkommen.");
  
  cout << t1.inOrderValues() << endl << endl;
  cout << t1.pathToElement("Schuppen") << endl;
  cout << t1.dotString() << endl;
}
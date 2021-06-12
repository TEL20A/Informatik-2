#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>

struct Element {
  int key = 0;
  Element * left = nullptr;
  Element * right = nullptr;
  
  bool empty();
  void set(int key);
  std::string inOrderValues();

  std::string dotString();
};

#endif
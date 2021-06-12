#ifndef ELEMENT_H
#define ELEMENT_H

#include <string>

struct Element {
  std::string key = "";
  std::string value = "";
  Element * left = nullptr;
  Element * right = nullptr;
  
  bool empty();
  void set(std::string key, std::string value);
  std::string inOrderValues();

  std::string dotString();
};

#endif
#include "element.h"

#include <sstream>
using namespace std;


bool Element::empty() {
  return left == nullptr;
}

void Element::set(string key_, string value_) {
  key = key_;
  value = value_;
  if (empty()) {
    left = new Element();
    right = new Element();
  }
}

string Element::inOrderValues() {
  if (empty()) { return ""; }
  
  ostringstream out;
  out << left->inOrderValues() << " "
      << key << ": " << value << "\n"
      << right->inOrderValues();
  return out.str();
}
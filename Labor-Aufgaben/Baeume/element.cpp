#include "element.h"

#include <sstream>
using namespace std;


bool Element::empty() {
  return left == nullptr;
}

void Element::set(int key_) {
  key = key_;
  if (empty()) {
    left = new Element();
    right = new Element();
  }
}

string Element::inOrderValues() {
  if (empty()) { return ""; }
  ostringstream out;
  out << left->inOrderValues() << " "
      << key << " "
      << right->inOrderValues();
  return out.str();
}
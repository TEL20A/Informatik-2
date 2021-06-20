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
    height = 1;
  }
}

void Element::insert(int key_) {
  if (empty()) { set(key); return; }
  if (key_ < key) {
    left->insert(key_);
  }
  else {
    right->insert(key_);
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

string Element::dotString() {
  if (empty()) { return ""; }

  ostringstream out;
  if (!left->empty()) {
    out << "  " << key << " -> " << left->key << "\n";
  }
  if (!right->empty()) {
    out << "  " << key << " -> " << right->key << "\n";
  }
  out << left->dotString();
  out << right->dotString();  
  return out.str();
}

void Element::update_height() {
  // [TODO]
}

int Element::balanceFactor() {
  // [TODO]
  return 0;
}
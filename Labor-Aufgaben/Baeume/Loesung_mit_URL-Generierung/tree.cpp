#include "tree.h"

#include "element.h"
#include <algorithm>
#include <sstream>
using namespace std;

Tree::Tree() : root{new Element()} {}

void Tree::insert(string key, string value) {
  
  Element * current = root;
  
  while (!current->empty()) {
    if (current->key > key) { current = current->left; }
    else { current = current->right;  }
  }
  current->set(key, value);
}

string Tree::inOrderValues() {
  return root->inOrderValues();
}

string Tree::pathToElement(string key) {
  string out;
  Element * current = root;

  while (current->key != key) {
    if (current->empty()) { return "X"; }
    if (current->key > key) { 
      current = current->left;
      out += "l";
    }
    else {
      current = current->right;
      out += "r";
    }
  }
  return out;
}

string Tree::dotString() {
  string out = "digraph G {\n";
  out += root->dotString();
  out += "}\n";
  return out;
}

string Tree::dotURL() {
  ostringstream out;
  out << "https://dreampuf.github.io/GraphvizOnline/#";
  for (char c : dotString()) {
    switch (c) {
      case '\n': out << "%0A"; break;
      default: out << c;
    }
    // TODO: Bei Bedarf weitere Ersetzungen durchführen.
  }
  return out.str();
}
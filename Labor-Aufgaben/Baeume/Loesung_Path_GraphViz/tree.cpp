#include "tree.h"

#include "element.h"
using namespace std;

Tree::Tree() : root{new Element()} {}

void Tree::insert(int key) {
  
  Element * current = root;
  
  while (!current->empty()) {
    if (current->key > key) { current = current->left; }
    else { current = current->right;  }
  }
  current->set(key);
}

string Tree::inOrderValues() {
  return root->inOrderValues();
}

string Tree::pathToElement(int key) {
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
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
  if (empty()) { set(key_); return; }
  if (key_ < key) {
    left->insert(key_);
    left = rotate(left);
  }
  else {
    right->insert(key_);
    right = rotate(right);
  }
  update_height();
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
  if (empty()) { return; }
  int const lheight = left->height;
  int const rheight = right->height;
  height = (lheight > rheight ? lheight : rheight) + 1;
}

int Element::balanceFactor() {
  if (empty()) { return 0; }
  return right->height - left->height;
}

Element * rotateRight(Element * root) {
  /* Folgende Rotation wird durchgeführt:

       A                 B
      / \               / \
     B   C      ==>    D   A
    / \                   / \
   D   E                 E   C
  */

  Element * A = root;
  Element * B = A->left;
  Element * E = B->right;

  B->right = A;
  A->left = E;
  A->update_height();
  B->update_height();
  return B;
}

Element * rotateLeft(Element * root) {
  /* Folgende Rotation wird durchgeführt:

       A                 C
      / \               / \
     B   C      ==>    A   E
        / \           / \
       D   E         B   D
  */

  Element * A = root;
  Element * C = A->right;
  Element * D = C->right;

  C->left = A;
  A->right = D;
  A->update_height();
  C->update_height();
  return C;
}

Element * rotateLeftRight(Element * root) {
  Element * A = root;
  Element * B = A->left;

  B = rotateLeft(B);
  A = rotateRight(A);
  return A;
}

Element * rotateRightLeft(Element * root) {
  Element * A = root;
  Element * C = A->right;

  C = rotateRight(C);
  A = rotateLeft(A);
  return A;
}

Element * rotate(Element * root) {
  if (root->empty()) { return root; }
  int bf_root = root->balanceFactor();
  int bf_left = root->left->balanceFactor();
  int bf_right = root->right->balanceFactor();

  if (bf_root == -2 && bf_left == -1) { return rotateRight(root); }
  if (bf_root == -2 && bf_left == 1) { return rotateLeftRight(root); }
  if (bf_root == 2 && bf_right == 1) { return rotateLeft(root); }
  if (bf_root == 2 && bf_right == -1) { return rotateRightLeft(root); }
  return root;
}
#include <iostream>
#include <string>

using namespace std;

struct Node {
  int _key;
  string _value;

  Node * _root;
  Node * _left;
  Node * _right;

  Node(int data = 0, Node * _left = nullptr, Node * _right = nullptr);
  
  void push_back(int data);
  void setData(int data);
  void print();
  bool empty();
  // void ausgabe(...);
};


int main() {
  cout << "Implementierung eines Baums:\n";


}
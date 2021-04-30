#include <iostream>

struct listElement {
  int _data;
  listElement * _next;

  listElement(int data = 0, listElement * next = nullptr);
  void push_back(int data);
  void setData(int data);
  void print();
  bool empty();
  // void ausgabe(...);
};

struct LinkedList {
  listElement * _head;
  
  LinkedList() {
    _head = new listElement();
  }
  void insert(int data);
};

struct Stack {
  // Member Variablen
  int _size = 0;
  listElement * _head = nullptr;

  // Methoden
  void push();
  void pop();
  void top();
  void size();
  void print();
};

int main() {
  std::cout << "helloWorld\n";
  listElement el(2);
  el.push_back(3);
  el.push_back(12);
  // listElement el2(3);
  // listElement el1(12, &el2);

  el.print();
  // std::cout << el._data << ": " << el._next->_data << ": " << el._next->_next->_data << std::endl;
}

listElement::listElement(int data, listElement * next) {
  _data = data;
  _next = next;
}

void listElement::push_back(int data) {
  if(empty()){
    _next = new listElement (data);
    return;
  }
  _next->push_back(data);
}

void listElement::setData(int data) {
  _data = data;
  if(empty()) {
    _next = new listElement();
  }
}

void listElement::print() {
  std::cout << _data << " ";
  if(!empty()) {
    _next->print();
  }
}

bool listElement::empty() {
  return _next == nullptr;
}

void LinkedList::insert(int data) {
  _head->push_back(data);
}
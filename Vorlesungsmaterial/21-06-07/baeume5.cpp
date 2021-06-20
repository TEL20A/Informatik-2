/*** Beispielimplementierung eines binären Suchbaumes.
 * 
 * Verbesserung: Hilfsfunktionen `insert()` hinzugefügt.
 * 
 * Bisher war es ein einfacher Binärbaum, durch insert wird es zu einem binären
 * Suchbaum. D.h. `insert` ist die Funktion, die man benutzen sollte, um Elemente
 * zum Baum hinzuzufügen.
 */

#include <iostream>
using namespace std;


// Datentyp für die Elemente definieren.
struct Element {
  int data = 0; // int für die Daten
  Element * left = nullptr; // Pointer auf linken Nachfolger
  Element * right = nullptr; // Pointer auf rechten Nachfolger

  // Anmerkungen:
  // - Die beiden Kinder sind selbst wieder Bäume.

  // Schreibt den Wert x in das angegebene Element.
  void set(int x);

  // Liefert true, wenn der Baum leer (ein Dummy) ist.
  bool empty();

  // Fügt das Element x in den Baum ein (an der zur Ordnung passenden Stelle).
  void insert(int x);

  // Macht einen In-Order-Durchlauf durch den Baum und
  // gibt die Elemente auf der Konsole aus.
  void print();
};


int main() {

  // 1. leeren Baum erzeugen
  // - ein Dummy-Element erzeugen
  // Element b1; (einfachere Version auf dem Stack)
  Element * b1 = new Element();
 
  b1->set(42); // 2. Ein Element einfügen
  b1->left->set(23); // 3. Links von der 42 eine 23 einfügen

  b1->print(); /// Soll "23 42" ausgeben.
  cout << endl;

  b1->right->set(77); // 4. rechts von der 42 noch etwas einfügen

  b1->print(); /// Soll "23 42 77" ausgeben.
  cout << endl;

  b1->set(35);
  b1->print(); /// Soll "23 35 77" ausgeben.
  cout << endl;

  b1->insert(200);
  b1->insert(-200);
  b1->insert(55);
  b1->print(); /// Soll "-200 23 35 55 77 200" ausgeben.
  cout << endl;

  return 0;
}

void Element::set(int x) {
  data = x;  // Datenelement schreiben.

  // 2 neue Dummies als Nachfolger, falls der Knoten noch ein Dummy ist/war.
  if (empty()) {
    left = new Element();  
    right = new Element();
  }
}

bool Element::empty() {
  return left == nullptr;
}

void Element::insert(int x) {
  if (empty()) {
    set(x);
    return;
  }

  if (x < data) { left->insert(x); }
  else { right->insert(x); }
}

void Element::print() {
  if (empty()) { return; } // Bei leerem Baum (Dummy) nichts tun.
  left->print(); // linken Teilbaum ausgeben
  cout << data << " "; // Gibt die Wurzel aus
  right->print(); // rechten Teilbaum ausgeben
}

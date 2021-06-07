/*** Beispielimplementierung eines binären Suchbaumes.
 * 
 * Verbesserung: Hilfsfunktion `empty()` hinzugefügt.
 * Vorteile:
 *   - Bessere Lesbarkeit der Funktionen, in denen wir bisher explizit ein Kind auf
 *     `== nullptr` geprüft haben.
 *   - Zentrale Stelle: In `empty()` wird "erklärt", wann ein Element leer ist.
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

void Element::print() {
  if (empty()) { return; } // Bei leerem Baum (Dummy) nichts tun.
  left->print(); // linken Teilbaum ausgeben
  cout << data << " "; // Gibt die Wurzel aus
  right->print(); // rechten Teilbaum ausgeben
}
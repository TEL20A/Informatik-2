/** Beispielimplementierung eines binären Suchbaumes.
 * 
 * Ganz primitive Basisversion:
 * - eine Element-Datenstruktur mit Feldern für Daten und Kinder.
 * - Daten- und Pointerpflege "von Hand" in der Main-Funktion.
 */

#include <iostream>
using namespace std;


// Datentyp für die Elemente definieren.
struct Element {
  int data = 0; // int für die Daten
  Element * left = nullptr; // Pointer auf linken Nachfolger
  Element * right = nullptr; // Pointer auf rechten Nachfolger
};

// Anmerkungen:
// - Die beiden Kinder sind selbst wieder Bäume.


// Macht einen In-Order-Durchlauf durch den Baum und
// gibt die Elemente auf der Konsole aus.
void print(Element * el);



int main() {

  // 1. leeren Baum erzeugen
  // - ein Dummy-Element erzeugen
  // Element b1; (einfachere Version auf dem Stack)
  Element * b1 = new Element();

  // 2. Ein Element einfügen
  // - Wert eintragen
  // - 2 neue Dummies als Nachfolger
  b1->data = 42;
  b1->left = new Element();
  b1->right = new Element();

  // 3. Links von der 42 eine 23 einfügen
  b1->left->data = 23;
  b1->left->left = new Element();
  b1->left->right = new Element();

  print(b1); /// Soll "23 42" ausgeben.
  cout << endl;


  // 4. rechts von der 42 noch etwas einfügen
  b1->right->data = 77;
  b1->right->left = new Element();
  b1->right->right = new Element();

  print(b1); /// Soll "23 42 77" ausgeben.
  cout << endl;

  return 0;
}



void print(Element * el) {
  if (el->left == nullptr) { return; } // Bei leerem Baum (Dummy) nichts tun.
  print(el->left); // linken Teilbaum ausgeben
  cout << el->data << " "; // Gibt die Wurzel aus
  print(el->right); // rechten Teilbaum ausgeben
}
/*** Beispielimplementierung eines binären Suchbaumes.
 * 
 * Verbesserung: Hilfsfunktion zum Schreiben von Werten hinzugefügt.
 * Vorteil:
 *   - Doppelter Code fällt weg.
 *   -> übersichtlicher und weniger Fehleranfällig (Copy&Paste).
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


// Schreibt den Wert x in das angegebene Element.
void set(Element * el, int x);


// Macht einen In-Order-Durchlauf durch den Baum und
// gibt die Elemente auf der Konsole aus.
void print(Element * el);



int main() {

  // 1. leeren Baum erzeugen
  // - ein Dummy-Element erzeugen
  // Element b1; (einfachere Version auf dem Stack)
  Element * b1 = new Element();
 
  set(b1, 42); // 2. Ein Element einfügen
  set(b1->left, 23); // 3. Links von der 42 eine 23 einfügen

  print(b1); /// Soll "23 42" ausgeben.
  cout << endl;

  set(b1->right, 77); // 4. rechts von der 42 noch etwas einfügen

  print(b1); /// Soll "23 42 77" ausgeben.
  cout << endl;

  set(b1,35);
  print(b1); /// Soll "23 35 77" ausgeben.
  cout << endl;

  return 0;
}

void set(Element * el, int x) {
  el->data = x;  // Datenelement schreiben.

  // 2 neue Dummies als Nachfolger, falls der Knoten noch ein Dummy ist/war.
  if (el->left == nullptr) {
    el->left = new Element();  
    el->right = new Element();
  }
}

void print(Element * el) {
  if (el->left == nullptr) { return; } // Bei leerem Baum (Dummy) nichts tun.
  print(el->left); // linken Teilbaum ausgeben
  cout << el->data << " "; // Gibt die Wurzel aus
  print(el->right); // rechten Teilbaum ausgeben
}
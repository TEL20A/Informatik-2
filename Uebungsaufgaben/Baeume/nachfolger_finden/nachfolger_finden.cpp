/*** AUFGABE: Struktur eines Binärbaums überprüfen ***/

/*** INCLUDES: ***/
#include "baum.h"
#include <iostream>
using namespace std;

/*** AUFGABENSTELLUNG:
 * In der Header-Datei `baum.h` ist eine einfache Element-Datenstruktur inkl. einer
 * `insert()`-Funktion und einer `get()` vorgegeben, wie sie in der Vorlesung bzw.
 * in den anderen Aufgaben behandelt wurde.
 * 
 * Außerdem ist eine Funktion `successor` deklariert.
 * D.h. diese Funktion existiert im Struct, ist aber nicht implementiert.
 * 
 * Implementieren Sie die Funktion Element::successor().
 * Sie erwartet einen Schlüssel und liefert den In-Order-Nachfolger des entsprechenden
 * Knotens. Dabei sollen nur die In-Order-Nachfolger berücksichtig werden, die sich
 * im Baum unterhalb des Schlüssel-Knotens befinden.
 * (So wird es für das Löschen von Elementen gebraucht.)
 */

/*** LOESUNG: ***/
Element * Element::successor(int key_) {
    // [TODO]
    return nullptr;
}

/*** TESTCODE: ***/
int main() {
    // Binären Suchbaum erzeugen.
    Element * b = new Element();
    b->insert(42);
    b->insert(33);
    b->insert(15);
    b->insert(40);
    b->insert(77);
    b->insert(103);
    b->insert(95);
    b->insert(85);

    {
        Element * result = b->successor(42);
        cout << result->key << endl; // Soll 77 ausgeben.
    }
    {
        Element * result = b->successor(77);
        cout << result->key << endl; // Soll 85 ausgeben.
    }
    {
        Element * result = b->successor(15);
        cout << (result == nullptr) << endl; // Soll 1 ausgeben.
    }
    {
        Element * result = b->successor(103);
        cout << (result == nullptr) << endl; // Soll 1 ausgeben.
    }

    return 0;
}

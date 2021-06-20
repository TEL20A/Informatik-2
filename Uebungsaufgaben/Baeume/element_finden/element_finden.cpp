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
 * Außerdem ist eine Funktion `get` deklariert.
 * D.h. diese Funktion existiert im Struct, ist aber nicht implementiert.
 * 
 * Implementieren Sie die Funktion Element::get().
 * Sie erwartet einen Schlüssel und liefert den Pointer auf das Element mit diesem
 * Schlüssel. Ist der Schlüssel nicht enthalten, so soll die Funktion nullptr liefern.
 */

/*** LOESUNG: ***/
Element * Element::get(int key_) {
    // [TODO]
    return nullptr;
}

/*** TESTCODE: ***/
/// Hilfsfunktion, die prüft, ob get für einen Key ein passendes Element liefert.
void testGetReturnsCorrectElement(Element * e, int key, bool keyContained) {
    cout << "Teste mit key == " << key << " ... ";
    Element * result = e->get(key);

    if (!keyContained) {
        if (result != nullptr) {
            cout << endl << "FEHLER: Element sollte nicht enthalten sein, get() liefert aber keinen nullptr.";
        }
        else {
            cout << "OK";
        }
    }
    else {
        if (result == nullptr) {
            cout << endl << "FEHLER: Element sollte enthalten sein, get() liefert aber einen nullptr.";
        }
        if (result->empty()) {
            cout << endl << "FEHLER: get() hat einen Pointer auf ein leeres Element geliefert.";
        }
        else if (key != result->key) {
            cout << endl << "FEHLER: " << key << "erwartet get() liefert aber " << result->key << ".";
        }
        else {
            cout << "OK";
        }
    }
    cout << endl;
}

int main() {
    {
        // Binären Suchbaum erzeugen.
        Element * b = new Element();
        b->insert(42);
        b->insert(33);
        b->insert(15);
        b->insert(40);
        b->insert(77);
        b->insert(103);

        // Alle Element-Pointer holen und prüfen, ob sie korrekt sind.
        testGetReturnsCorrectElement(b, 42, true);
        testGetReturnsCorrectElement(b, 33, true);
        testGetReturnsCorrectElement(b, 15, true);
        testGetReturnsCorrectElement(b, 40, true);
        testGetReturnsCorrectElement(b, 77, true);
        testGetReturnsCorrectElement(b, 103, true);

        // Nach nicht vorhandenen Elementen suchen.
        testGetReturnsCorrectElement(b, 0, false); // Darf kein leeres Element liefern!
        testGetReturnsCorrectElement(b, -2, false);
        testGetReturnsCorrectElement(b, 3, false);
    }

    return 0;
}

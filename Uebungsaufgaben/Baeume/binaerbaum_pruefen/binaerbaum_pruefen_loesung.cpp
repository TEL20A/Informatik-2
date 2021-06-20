/*** AUFGABE: Struktur eines Binärbaums überprüfen ***/

/*** INCLUDES: ***/
#include "baum.h"
#include <iostream>
using namespace std;

/*** AUFGABENSTELLUNG:
 * In der Header-Datei `baum.h` ist eine einfache Element-Datenstruktur vorgegeben,
 * wie sie in der Vorlesung behandelt wurde.
 * 
 * Schreiben Sie eine Funktion `isBinSearchTree()`.
 * Die Funktion soll einen Element-Pointer erwarten und `true` zurückgeben,
 * wenn es sich bei diesem Baum tatsächlich um einen binären Suchbaum handelt.
 */
bool isBinSearchTree(Element * e);

/*** TESTCODE: ***/
int main() {
    {
        // Korrekten binären Suchbaum erzeugen und testen.
        Element * b = new Element();
        b->set(42);
        b->left->set(33);
        b->left->left->set(15);
        b->left->right->set(40);
        b->right->set(77);
        b->right->right->set(103);
        cout << isBinSearchTree(b) << endl; // Soll '1' ausgeben.
    }
    {
        // Kaputten binären Suchbaum erzeugen und testen.
        Element * b = new Element();
        b->set(42);
        b->left->set(2);
        b->left->left->set(15);
        b->left->right->set(40);
        b->right->set(77);
        b->right->right->set(103);
        cout << isBinSearchTree(b) << endl; // Soll '0' ausgeben.
    }

    return 0;
}

/*** LOESUNG: ***/
bool isBinSearchTree(Element * e) {
    if (e->empty()) { return true; }
    if (!e->left->empty() && e->left->key > e->key) { return false; }
    if (!e->right->empty() && e->right->key <= e->key) { return false; }
    return isBinSearchTree(e->left) && isBinSearchTree(e->right);
}

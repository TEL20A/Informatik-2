#include"baum.h"
#include<iostream>
using namespace std;

/*** AUFGABE: Bäume, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.h" ist ein binärer Suchbaum definiert.
     
     Schreiben Sie für diesen Baum eine Funktion, die die Summe
     aller Elemente des Baumes zurückliefert.
***/
int Knoten::summe()
{
    // Die Summe der Knoten eines Baumes errechnet sich aus dem Wurzelelement
    // und der Summen des linken und rechten Teilbaumes. Deshalb rekursiv:
    // Wir rufen die Summenfunktion für den linken und rechten Teilbaum auf
    // und addieren die eigene Wurzel hinzu.
    
    if (empty()) return 0;
    return data + links->summe() + rechts->summe();
}

/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);
    
    cout << b1.summe() << endl;      // Soll 12 ausgeben
    return 0;
}

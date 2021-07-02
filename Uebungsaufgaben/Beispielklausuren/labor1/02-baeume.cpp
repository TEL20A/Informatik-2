#include"baum.h"
#include<iostream>
using namespace std;

/*** AUFGABE: Bäume, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.h" ist ein binärer Suchbaum definiert.
     
     Schreiben Sie für diesen Baum eine Funktion, die ein Element hinzufügt,
     das um 1 kleiner ist kleiner ist als das bisherige kleinste Element.
     Ist der Baum leer, soll eine 0 eingefügt werden.
***/
void Knoten::min_einfuegen()
{
    
}


/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;
    b1.insert(3);
    b1.insert(4);
    b1.insert(5);
    
    b1.print();            // Gibt 3 4 5 aus (schon vor L�sung)
    cout << endl;
    b1.min_einfuegen();
    b1.print();            // Soll 2 3 4 5 ausgeben
    cout << endl;
    b1.min_einfuegen();
    b1.print();            // Soll 1 2 3 4 5 ausgeben
    cout << endl;
    
    Knoten b2;
    b2.min_einfuegen();
    b2.print();            // Soll 0 ausgeben
    cout << endl;
    
    return 0;
}

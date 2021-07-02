#include"arraylist.h"
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "arraylist.h" ist eine Listen-Datenstruktur
     definiert (genauere Erklärung siehe dort).
     
     Schreiben Sie für diese Liste eine Funktion get, die eine Zahl i
     erwartet und die das Element an Stelle i zurückliefert.
     Falls i kein gültiger Index ist, soll 0 zurückgeliefert werden.
***/
int ArrayList::get(int i)
{
    // Wir gehen rekursiv durch die Liste, bis wir im richtigen Element sind.
    // Das ist der Fall, wenn i < 10 ist.
    // Sobald i < 10 gilt, prüfen wir noch, ob es ein gültiger Index für das
    // aktuelle Element ist. Falls das gesuchte Element gar nicht vorkommt,
    // kann es passieren, dass hier i < 0 oder i >= data.size() ist.
    // In dem Fall geben wir 0 zurück, ansonsten data[i].
    
    if (i >= 10 && next != nullptr) return next->get(i-10);
    if (i < 0 || i >= data.size()) return 0;
    return data[i];
}


/*** TESTCODE/MAIN: ***/
int main() {
    ArrayList l;
    
    for (int x=0; x<15; x++) l.push_back(x);
    
    cout << l.get(-3) << endl;   // Soll 0 ausgeben
    cout << l.get(2) << endl;    // Soll 2 ausgeben
    cout << l.get(12) << endl;   // Soll 12 ausgeben
    cout << l.get(20) << endl;   // Soll 0 ausgeben
    
    return 0;
}

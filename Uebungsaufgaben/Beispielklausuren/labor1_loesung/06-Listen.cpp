#include"arraylist.h"
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "arraylist.h" ist eine Listen-Datenstruktur
     definiert (genauere Erkl�rung siehe dort).
     
     Schreiben Sie f�r diese Liste eine Funktion get, die eine Zahl i
     erwartet und die das Element an Stelle i zur�ckliefert.
     Falls i kein g�ltiger Index ist, soll 0 zur�ckgeliefert werden.
***/
int ArrayList::get(int i)
{
    // Wir gehen rekursiv durch die Liste, bis wir im richtigen Element sind.
    // Das ist der Fall, wenn i < 10 ist.
    // Sobald i < 10 gilt, pr�fen wir noch, ob es ein g�ltiger Index f�r das
    // aktuelle Element ist. Falls das gesuchte Element gar nicht vorkommt,
    // kann es passieren, dass hier i < 0 oder i >= data.size() ist.
    // In dem Fall geben wir 0 zur�ck, ansonsten data[i].
    
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

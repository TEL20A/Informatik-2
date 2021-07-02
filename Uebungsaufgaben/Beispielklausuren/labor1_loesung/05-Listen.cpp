#include"arraylist.h"
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "arraylist.h" ist eine Listen-Datenstruktur
     definiert (genauere Erklärung siehe dort).
     
     Schreiben Sie für diese Liste eine Funktion print(),
     die alle Zahlen in der Liste der Reihe nach auf der Konsole ausgibt.
***/
void ArrayList::print()
{
    // Wir geben alle Elemente der aktuellen Liste aus.
    // Gibt es eine weitere Liste (Wenn die aktuelle 10
    // Elemente hat), dann fahren wir rekursiv mit der 
    // nächsten Liste fort.
    
    for (int el:data) cout << el << " ";
    if (data.size() == 10) next->print();
}


/*** TESTCODE/MAIN: ***/
int main() {
    ArrayList l;
    
    for (int x=0; x<15; x++) l.push_back(x);
    l.print();              // Soll die Zahlen 0 bis 14 ausgeben
    
    return 0;
}

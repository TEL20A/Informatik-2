#include"baum.h"
#include<iostream>
#include<string>
using namespace std;

/*** AUFGABE: Bäume, 6 Punkte ***/

/*** AUFGABENSTELLUNG:
     In der Headerdatei "baum.h" ist ein binärer Suchbaum definiert.
     
     Ein Knoten im Baum kann durch einen String beschrieben
     werden, der von der Wurzel ausgehend angibt, wann man
     nach links oder rechts gehen soll.
     Z.B. bedeutet ein String "llr", dass man zwei Mal nach links und
     dann einmal nach rechts gehen soll.
     Der leere String beschreibt die Wurzel selbst.
     
     Schreiben Sie eine Funktion, die ein einen Knoten und
     einen solchen String als Argumente erwartet.
     Die Funktion soll den Wert des entsprechenden Knotens
     zurückliefern.
     
***/
int Knoten::get(string s)
{
    // Wir hangeln uns rekursiv anhand von s durch den Baum.
    // Ist das erste Zeichen ein 'l' gehen wir nach links, ansonsten
    // nach rechts. Dabei löschen wir jeweils das erste Zeichen.
    // Ist s leer, so sind wir beim gesuchten Knoten angekommen.
    
    if (s.empty()) return data;
    if (s[0] == 'l')
    {
        s.erase(s.begin());
        return links->get(s);
    }
    s.erase(s.begin());
    return rechts->get(s);
}


/*** TESTCODE/MAIN: ***/
int main()
{
    Knoten b1;
    
    b1.insert(42);             // Pfad ab Wurzel: ""
    b1.insert(23);             // Pfad ab Wurzel: "l"
    b1.insert(70);             // Pfad ab Wurzel: "r"
    b1.insert(10);             // Pfad ab Wurzel: "ll"
    b1.insert(30);             // Pfad ab Wurzel: "lr"
    b1.insert(80);             // Pfad ab Wurzel: "rr"
    
    cout << b1.get("") << endl;      // Soll 42 ausgeben    
    cout << b1.get("l") << endl;     // Soll 23 ausgeben
    cout << b1.get("r") << endl;     // Soll 70 ausgeben
    cout << b1.get("ll") << endl;    // Soll 10 ausgeben
    cout << b1.get("lr") << endl;    // Soll 30 ausgeben
    cout << b1.get("rr") << endl;    // Soll 80 ausgeben
    
    return 0;
}

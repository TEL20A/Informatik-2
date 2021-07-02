#include<vector>
#include<iostream>
using namespace std;

/*** AUFGABE: Listen, 4 Punkte ***/

/*** AUFGABENSTELLUNG:
     Schreiben Sie eine Funktion 'sorted', die einen
     int-Vector als Argument erwartet.
     
     Die Funktion soll true zurückliefern, wenn das Array aufsteigend
     sortiert ist, ansonsten soll sie false zurückliefern.
***/
bool sorted(vector<int> v)
{
    // Der Vektor ist *nicht* sortiert, wenn wir eine Position
    // finden, deren rechter Nachbar einen kleineren Wert hat.
    // Wir gehen durch den Vektor und prüfen diese Bedingung.
    // Finden wir ein solches Element, so brechen wir sofort
    // mit false ab. Finden wir keines, geben wir am Ende true
    // zurück.
    
    for (int i=0; i<v.size()-1; i++)
    {
        if (v[i] > v[i+1]) return false;
    }
    return true;
}


/*** TESTCODE/MAIN: ***/
int main() {
    vector<int> v1 = { 1,3,5,7,9 };
    vector<int> v2 = { 9,7,5,3,1 };
    
    cout << sorted(v1) << endl;      // Soll 1 ausgeben
    cout << sorted(v2) << endl;      // Soll 0 ausgeben
    
    return 0;
}

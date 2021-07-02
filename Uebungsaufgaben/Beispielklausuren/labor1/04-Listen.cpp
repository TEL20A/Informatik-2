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
bool sorted(vector<int> v);


/*** TESTCODE/MAIN: ***/
int main() {
    vector<int> v1 = { 1,3,5,7,9 };
    vector<int> v2 = { 9,7,5,3,1 };
    
    cout << sorted(v1) << endl;      // Soll 1 ausgeben
    cout << sorted(v2) << endl;      // Soll 0 ausgeben
    
    return 0;
}

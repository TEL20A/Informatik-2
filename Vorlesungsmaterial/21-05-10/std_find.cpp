#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

// Erwartet einen Vektor und ein Element.
// Liefert die Position des Elements oder -1,
// falls das Element nicht enthalten ist.
template<typename T>
int lookup(vector<T> v, T n) {
  auto iter = find(v.begin(), v.end(), n);

  // Wir suchen zwischen Anfang und Ende von v nach n.
  // Ergebnis ist ein Iterator, der auf das gefundene Element zeigt.

  // Wenn n nicht enthalten ist, ist iter == v.end().
  if (iter == v.end()) {
    return -1;
  }

  // Ansonsten können wir die Distanz zum Anfang bestimmen.
  return distance(v.begin(), iter);



  // Anmerkung, gehört nicht zur Funktion:

  // ein Iterator ist eine Art Pointer, den man mit * dereferenzieren kann.
  // cout << *iter1 << endl;
}



// Erwartet einen int-Vektor und liefert die Position des ersten Elements,
// das größer ist als 20.
int lookupGreater20(std::vector<int> v) {

  // Ein Lambda definieren.
  // Eine Funktion 'predicate', die ein int erwartet true liefert,
  // falls dieses int größer als 20 ist.
  auto predicate = [](int el){ return el > 20; };
  
  // Dieses Prädikat geben wir jetzt als Argument in find_if hinein.
  auto iter = std::find_if(v.begin(), v.end(), predicate);

  if (iter == v.end()) {
    return -1;
  }
  return distance(v.begin(), iter);

  /* Legacy-Version:
  for (int i=0; i<v.size(); i++) {
    if (v[i] > 20) { return i; }
  }
  return -1;
  */
} 


// Erwartet String-Vektor und liefert das erste Wort daraus,
// das weniger als 4 Zeichen hat,
int lookupShorter4(vector<string> v) {
  
  auto predicate = [](string el){ return el.size() < 4; };

  auto iter = std::find_if(v.begin(), v.end(), predicate);

  if (iter == v.end()) {
    return -1;
  }
  return distance(v.begin(), iter);
}

// Verallgemeinerung der beiden obige Funktionen.
template<typename T>
int lookup_if(vector<T> v, function<bool(T)> predicate) {
  auto iter = std::find_if(v.begin(), v.end(), predicate);

  if (iter == v.end()) {
    return -1;
  }
  return distance(v.begin(), iter);
}


int main() {

  vector<int> liste1{55,15,25,9,4,1,5,7,42};
  cout << lookup(liste1,77) << endl;

  vector<string> liste2{"Mein", "Haus", "ist", "grün"};
  cout << lookup<string>(liste2, string("ist")) << endl;

  cout << lookupGreater20(liste1) << endl;
  cout << lookupShorter4(liste2) << endl;
  cout << lookup_if<int>(liste1, [](int n){ return n % 2 == 0; } ) << endl;


  // Liste1 aufsteigend sortieren
  std::sort(liste1.begin(), liste1.end());

  // Absteigend sortieren
  auto sortPred = [](int a, int b){ return b < a; };
  std::sort(liste1.begin(), liste1.end(), sortPred);
  for (auto el:liste1) { cout << el << " "; } cout << endl;
}
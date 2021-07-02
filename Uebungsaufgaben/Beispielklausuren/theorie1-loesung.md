# Beispielklausur Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 55 12 2 180 57 13 `

Zeichnen Sie den Baum vor und nach jeder Rotation.

- Lösung:
  1. [Baum nach Einfügen von ` 55 12 2`](
      https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2055%20--%2012%20--%202%0A%20%20%20%2055%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2012%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  2. [Baum nach Rechtsrotation um `55`](
      https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2012%20--%202%0A%20%20%20%2012%20--%2055%0A%7D)
  3. [Baum nach Einfügen von `180 57`](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2012%20--%202%0A%20%20%20%2012%20--%2055%0A%20%20%20%2055%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2055%20--%20180%0A%20%20%20%20180%20--%2057%0A%20%20%20%20180%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)
  4. [Baum nach Rechts-Links-Rotation um `55`](
       https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2012%20--%202%0A%20%20%20%2012%20--%2057%0A%20%20%20%2057%20--%2055%0A%20%20%20%2057%20--%20180%0A%7D)
  5. [Baum nach Einfügen von `13`](
        https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2012%20--%202%0A%20%20%20%2012%20--%2057%0A%20%20%20%2057%20--%2055%0A%20%20%20%2057%20--%20180%0A%20%20%20%2055%20--%2013%0A%20%20%20%2055%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%7D)
  6. [Baum nach Links-Rechts-Rotation um `12`](
      https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2055%20--%2012%0A%20%20%20%2012%20--%202%0A%20%20%20%2012%20--%2013%0A%20%20%20%2055%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2055%20--%2057%0A%20%20%20%2057%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%2057%20--%20180%0A%20%20%20%20%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)


## Graphen - Adjazenzmatrix

Geben Sie die Adjazenzmatrix zu folgendem Graphen an:

- Graphviz-Ansicht:
  ```
    graph G {
    a -- b 
    a -- c
    a -- e
    b -- d
    b -- f
    c -- c
    e -- d
  }
  ```
- [Graph als Bild](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%20a%20--%20b%20%0A%20%20%20%20a%20--%20c%0A%20%20%20%20a%20--%20e%0A%20%20%20%20b%20--%20f%0A%20%20%20%20b%20--%20d%0A%20%20%20%20c%20--%20c%0A%20%20%20%20e%20--%20d%0A%7D)

- Lösung:

|       |  a  |  b  |  c  |  d  |  e  |  f  |
| ----- | --- | --- | --- | --- | --- | --- |
| **a** | 0 | 0 | 0 | 0 | 0 | 0 |
| **b** | 1 | 0 | 0 | 0 | 0 | 0 |
| **c** | 1 | 0 | 1 | 0 | 0 | 0 |
| **d** | 0 | 1 | 0 | 0 | 0 | 0 |
| **e** | 1 | 0 | 0 | 1 | 0 | 0 |
| **f** | 0 | 1 | 0 | 0 | 0 | 0 |


## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *SelectionSort*:

` 40 35 89 2 55 3 23 `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.

- Lösung:

  * ` | 40 35 89 2 55 3 23 `
  * ` 2 | 35 89 40 55 3 23 `
  * ` 2 3 | 89 40 55 35 23 `
  * ` 2 3 23 | 40 55 35 89 `
  * ` 2 3 23 35 | 55 40 89 `
  * ` 2 3 23 35 40 | 55 89 `
  * ` 2 3 23 35 40 55 89 | `


- Alternativlösung:
  * ` | 40 35 89 2 55 3 23 `
  * ` 2 | 40 35 89 55 3 23 `
  * ` 2 3 | 40 35 89 55 23 `
  * ` 2 3 23 | 40 35 89 55 `
  * ` 2 3 23 35 | 40 89 55 `
  * ` 2 3 23 35 40 | 89 55 `
  * ` 2 3 23 35 40  55 89 | `

Diese Lösung stand zuerst hier.
Sie ist auch korrekt, führt aber keine Vertauschungen aus, sondern fügt das jeweils nächste Element einfach nur vorne ein und löscht es hinten.
So würde das Verfahren z.B. ablaufen, wenn man nicht in der ursprünglichen Liste arbeitet, sondern eine neue sortierte Liste aufbaut.


## Sortieren

Erklären Sie die Idee hinter dem folgenden Sortieralgorithmus:
```cpp
    void foosort( vector<int> & v ) {
        for (int i = 0; i < v.size(); i++)
          for (int j = 0; j< v.size(); j++)
            swap(v[i], v[j]);
    }
```
Der Algorithmus funktioniert noch nicht richtig.
Was muss geändert werden, damit er korrekt sortiert?

- Lösung:
  - Der Algorithmus vergleicht jedes Element mit allen anderen und vertauscht sie, falls sie nicht korrekt sortiert sind.
  Nach jedem Durchlauf der inneren Schleife ist dadurch das jeweils kleinste restliche Element an Stelle `i`.
  - Es ist also ähnlich wie SelectionSort, allerdings wird viel mehr hin und her getauscht.
  - Im vorliegenden Code fehlt noch der Vergleich, d.h. die Prüfung, ob die Zahlen überhaupt vertauscht werden müssen.

## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 17 2 -10 72 35 103 `

- Lösung:

  Da es ein binärer Suchbaum ist, ist die In-Ordner-Darstellung bekannt:  
    ` -10 2 17 35 72 103 `

  Aus beiden Darstellungen zusammen lässt sich die Baumstruktur rekonstruieren:

  - Die Wurzel ist `17`, da diese in der Pre-Order-Darstellung zuerst kommt.
  - In der In-Order-Darstellung sieht man, dass `-10` und `2` links stehen und `35 72 103` rechts.
  - Die Pre-Order-Darstellung zeigt wieder, dass links die `2` über der `-10` steht.
  - Die Pre-Order-Darstellung zeigt auch, dass die `72` über `35` und `103` kommen muss.
  - Die In-Order-Darstellung zeigt, dass `35`und `103` links und rechts von `70` stehen.
  - [resultierender Baum](https://dreampuf.github.io/GraphvizOnline/#graph%20G%20%7B%0A%20%20%20%2017%20--%202%0A%20%20%20%2017%20--%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2017%20--%2072%0A%20%20%20%2072%20--%2035%0A%20%20%20%2072%20--%20103%0A%20%20%20%202%20--%20-10%0A%20%20%20%202%20--%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%7D)



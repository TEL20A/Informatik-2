# Beispielklausur Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 55 12 2 180 57 13 `

Zeichnen Sie den Baum vor und nach jeder Rotation.




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



## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *SelectionSort*:

` 40 35 89 2 55 3 23 `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.



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


## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 17 2 -10 72 35 103 `




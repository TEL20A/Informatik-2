# Beispielklausur Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 7 12 18 21 19 34 `

Zeichnen Sie den Baum vor und nach jeder Rotation.
- Lösung:
  1. Einfügen von ` 7 12 18 `
  2. Rechtsrotation
  3. Einfügen von ` 21 19 ` und anschließend Rechts-Links-Rotation
  4. Einfügen von ` 34 ` und Linksrotation
- [Link zu den Schritten](https://github.com/TEL20A/Informatik-2/blob/main/Uebungsaufgaben/Beispielklausuren/Theorie-2/AVL_Baum.pdf)




## Graphen - Adjazenzmatrix

Zeichnen Sie den Graphen zu folgender Adjazenzmatrix:

|     |a    |   b | c | d  |  e |
| --- | --- | --- |---| ---| ---|
|a    |0|1|1|0|0|
|b    |0|0|0|0|0|
|c    |0|0|1|1|0|
|d    |0|0|0|0|0|
|e    |0|0|0|0|0|


- [Lösung in Graphviz](https://dreampuf.github.io/GraphvizOnline/#digraph%20G%20%7B%0A%20%20%20%20a%20-%3E%20b%20%0A%20%20%20%20a%20-%3E%20c%0A%20%20%20%20c%20-%3E%20d%0A%20%20%20%20c%20-%3E%20e%0A%7D)


## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *InsertionSort*:

` 2 8 5 3 9 4 `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.


- Lösung:

  * ` 2 | 8 5 3 9 4 `
  * ` 2 8 | 5 3 9 4 `
  * ` 2 5 8 | 3 9 4 `
  * ` 2 3 5 8 | 9 4 `
  * ` 2 3 5 8 9 | 4 `
  * ` 2 3 4 5 8 9 | `


## Sortieren

Erklären Sie folgenden Sortieralgorithmus:
```cpp
void Sort(vector<int> list)
{
   for (int j = 0; j < list.size() - 1; j++)
   {
      int iMin = j;
      for (int i = j+1; i < list.size(); i++)
      {
         if (list[i] < list[iMin])
            iMin = i;
      }
      if (iMin != j)
         swap(list[j], list[iMin]);
   }
}
```

- Lösung:
  - Bei diesem Algorithmus handelt es sich um Selection Sort
  - Die äußere Schleife läuft bis zum vorletzten Element der Liste. Die Laufvariable `j` markiert hierbei die bereits sortierte Liste
  - Die innere Schleife vergleicht ob das erste Element des unsortierten Teils bereits das kleinste Element im unsortierten Teil ist. Wenn nicht wird es mit dem kleinsten Element vertauscht


## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 30 15 7 9 36 34 32 `

- Lösung:
  - In-Order-Darstellung: ` 7 9 15 30 32 34 36 `
  - Aus der Pre-Order-Darstellung kann man erkennen, dass die `30`die Wurzel ist, da diese als erstes ausgegeben wird.
  - Über die In-Order-Darstellung kann man dadurch erkennen das  ` 7 9 15 ` und ` 32 34 36 ` rechts der Wurzel stehen müssen.
  - In Per-Order gibt man zuerst die Wurzel aus und geht dann links weiter. Da die `9` größer als die `7` ist, weiß man, dass diese rechte von der `7` stehen muss. Wenn links nichts mehr kommt geht man in Pre-Order rechts weiter.
  - Auf der rechten Seite des Baumes weiß man wieder das erst die Wurzel ausgegeben und dann links weiter gegangen wird. Da alle Zahlen kleiner werden und keine größere mehr vorkommt, weiß man, dass alle links zu Ihrer Wurzel stehen.
  - [Der Baum](https://dreampuf.github.io/GraphvizOnline/#digraph%20BST%20%7B%0A%20%20%20%2030%20-%3E%2015%20-%3E%207%20%0A%20%20%20%2030%20-%3E%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%2015%20-%3E%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%2030%20-%3E%2036%20-%3E%2034%20-%3E32%0A%20%20%20%2036%20-%3E%20D3%5Bstyle%3Dinvis%5D%0A%20%20%20%2034%20-%3E%20D4%5Bstyle%3Dinvis%5D%0A%20%20%20%207%20-%3E%20D5%5Bstyle%3Dinvis%5D%0A%20%20%20%207%20-%3E%209%0A%20%20%20%20%0A%20%20%20%20D1%5Bstyle%3Dinvis%5D%0A%20%20%20%20D2%5Bstyle%3Dinvis%5D%0A%20%20%20%20D3%5Bstyle%3Dinvis%5D%0A%20%20%20%20D4%5Bstyle%3Dinvis%5D%0A%20%20%20%20D5%5Bstyle%3Dinvis%5D%0A%20%20%20%20%0A%7D)

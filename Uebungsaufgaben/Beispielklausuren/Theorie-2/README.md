# Beispielklausur Inf2

## AVL-Bäume

Fügen Sie die folgenden Zahlen nacheinander in einen AVL-Baum ein:

` 7 12 18 21 19 34 `

Zeichnen Sie den Baum vor und nach jeder Rotation.




## Graphen - Adjazenzmatrix

Zeichnen Sie den Graphen zu folgender Adjazenzmatrix:

|     |a    |   b | c | d  |  e |
| --- | --- | --- |---| ---| ---|
|a    |0|1|1|0|0|
|b    |0|0|0|0|0|
|c    |0|0|1|1|0|
|d    |0|0|0|0|0|
|e    |0|0|0|0|0|



## Sortieren

Sortieren Sie die folgende Liste mit dem Verfahren *InsertionSort*:

` 2 8 5 3 9 4 `

Geben Sie die Liste nach jedem Durchlauf der inneren Schleife an.
Markieren Sie dabei jeweils, welcher Teil schon als sortiert bekannt ist und welcher noch nicht.



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


## Struktur von Bäumen

Im Folgenden ist für einen binären Suchbaum eine Pre-Order-Darstellung gegeben. Zeichnen Sie den Baum.

` 30 15 7 9 36 34 32 `

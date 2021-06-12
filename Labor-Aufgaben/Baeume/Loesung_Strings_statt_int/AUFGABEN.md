# Aufgaben zu binären Suchbäumen

## Suche und Baumdarstellung

### Pfad zu einem Element bestimmen

In [tree.h](tree.cpp) bzw. [tree.cpp](tree.cpp) ist eine Funktion `pathToElement()` vorgegeben.
Diese Funktion soll eine String-Repräsentation des Pfades von der Wurzel zu einem Element liefern.

**Beispiele:**
- Der Pfad zur Wurzel ist der leere String (`""`).
- Der Pfad zum rechten Kind der Wurzel ist `"r"`.
- `"lrrl"` bedeutet: "Nach links, dann zweimal nach rechts und dann wieder nach links."

Schreiben Sie in `main.cpp` passende Tests für diese Funktion.

### Graphviz-Darstellung

Schreiben Sie eine Funktion `dotString()`, die eine menschenlesbare String-Repräsentation der Kanten im Graphen liefert.

**Beispiel:**

Folgendes ist ein String, der einen Baum darstellt, dessen Wurzel `42` ist.
Die Kinder der Wurzel sind `23`und `77`.
Die `23` hat noch die Kinder ``

```
digraph G {
  42 -> 23
  42 -> 77
  23 -> 2
  23 -> 38 
}
```

Eine solche Darstellung kann man sich mit dem Programm *GraphViz* oder z.B. auch bei
[dreampuf.github.io](https://dreampuf.github.io/GraphvizOnline/#digraph%20G%20%7B%0A%20%2042%20-%3E%2023%0A%20%2042%20-%3E%2077%0A%20%2023%20-%3E%202%0A%20%2023%20-%3E%2038%0A%7D)
anzeigen lassen.


## Sinnvolle Daten in den Baum einfügen.

Erweitern Sie den Baum, so dass man mehr als nur Zahlen speichern kann.

### Als Schlüssel `std::string` statt `int` verwenden.

Ändern Sie die Baum-Implementierung, so dass anstelle von Zahlen Wörter gespeichert werden.

### Zusätzlich zu einem Schlüssel auch einen Wert speichern.

Erweitern Sie die Baum-Implementierung, so dass zusätzlich zum Schlüssel ein *Wert* gespeichert wird. Dies kann z.B. ein zweiter String sein, so dass der Baum als einfaches Wörterbuch benutzt werden kann.

Überlegen Sie sich, welche weiteren Funktionen nun sinnvoll wären und implementieren Sie diese. Z.B. könnte man nun den Wert zu einem gegebenen Schlüssel anzeigen lassen.
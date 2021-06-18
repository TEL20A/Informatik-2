# Aufgaben zu Baumstrukturen

## Sortierverfahren auf Baum-Basis

Überlegen Sie sich, wie man einen binären Suchbaum nutzen kann, um ein effizientes 
Sortierverfahren umzusetzen und setzen Sie es um.

Sie können als Ausgangspunkt eine der Suchbaum-Implementierungen aus den letzten Wochen
nutzen.


## Vollständige Binärbäume und Heaps

Ein *vollständiger Binärbaum* ist ein Baum, der auf allen Ebenen bis auf der letzten
voll besetzt ist. D.h. er enthält keinerlei Lücken.
Die letzte Ebene muss nicht voll besetzt sein, aber sie wird von links her aufgefüllt.

### Umsetzung eines vollständigen Binärbaumes als Liste
Ein solcher Baum kann effizient als Vektor gespeichert werden.
Die Elemente stehen dabei einfach zeilenweise hintereinander im Vektor.

Schreiben Sie Funktionen, die einen `vector<int>` erwarten und die diesen als einen
vollständigen Binärbaum auffassen.

### `int get_parent(vector<int> const &, int pos)`
Diese Funktion soll die Position des Elternknotens zum Knoten an Stelle `pos` liefern. 

### `int get_left(vector<int> const &, int pos)`
Diese Funktion soll die Position des linken Kindes zum Knoten an Stelle `pos` liefern. 

### `int get_right(vector<int> const &, int pos)`
Diese Funktion soll die Position des rechten Kindes zum Knoten an Stelle `pos` liefern. 

### `void swap_parent(vector<int> &, int pos)`
Diese Funktion soll den Knoten an Stelle `pos` mit seinem Elternknoten vertauschen.

### `void swap_left(vector<int> &, int pos)`
Diese Funktion soll den Knoten an Stelle `pos` mit seinem linken Kind vertauschen.

### `void swap_right(vector<int> &, int pos)`
Diese Funktion soll den Knoten an Stelle `pos` mit seinem rechten Kind vertauschen.

### Heaps

### `void bubble_down(vector<int> &)`
Diese Funktion soll den Wurzelknoten nach unten absinken lassen, solange er kleiner ist,
als seine Kinder. Ist er kleiner, soll er mit dem größeren seiner Kinder vertauscht
werden.

### `void bubble_up(vector<int> &)`
Diese Funktion soll den letzten Knoten nach oben aufsteigen lassen, solange er größer
ist, als sein Elternknoten.

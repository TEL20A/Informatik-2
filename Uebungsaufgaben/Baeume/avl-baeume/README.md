# Aufgaben zu AVL-Bäumen

## Höhe und Balancefaktoren bestimmen.
Implementieren Sie die Funktionen `Element::updateHeight()`
und `Element::balanceFactor()`.

## Rotationen implementieren.
Implementieren Sie die Funktionen
`rotateLeft()`,
`rotateRight(`,
`rotateLeftRight()` und
`rotateRightLeft()`,
die in `element.h` deklariert sind.
(Siehe Kommentar dazu in `Element.h`.)

## Rotationen beim Einfügen durchführen
Passen Sie `Element::insert()` so an, dass vor dem Ende der Rekursion jeweils
die Höhe des Elements aktualisiert, der Balancefaktor berechnet und ggf. die
passende Rotation durchgeführt wird.

# Aufgaben zu Suchverfahren

## Aufgabe: Suche implementieren
Ziel der Aufgaben ist es, eine Reihe von Suchfunktionen bereitzustellen, die ähnlich wie die Funktionen `LOOKUP` und `VLOOKUP` in excel in Tabellenartigen Strukturen suchen können.

### Lineare Suche

- Schreiben Sie eine Funktion `lookup()`, die eine Zahl und eine Liste von Zahlen erwartet. Die Funktion soll die Position der Zahl in der Liste suchen und zurückliefern. Ist die Liste nicht enthalten, soll `-1` geliefert werden.

- Überladen Sie Ihre `lookup()`-Funktion, so dass sie auch in Listen von Strings und weiteren Elementtypen suchen kann.
  - Versuchen Sie, die Funktion so weit wie möglich zu verallgemeinern.
  Schreiben Sie ggf. eine Template-Funktion.

- Überladen Sie die Funktion, so dass sie zwei Listen erwartet, in der einen sucht und das entsprechende Ergebnis aus der anderen liefert.

- Überladen Sie die Funktion, so dass sie eine Tabelle erwartet und man die Such- und Ergebnisspalten angeben kann.


### Verallgemeinerung

Welche Einschränkungen gibt es noch bei den bisherigen Suchfunktionen? Müssen die Element- und Listen-Datentypen irgendwelche Voraussetzungen erfüllen?
Erweitern Sie die Suchfunktionen, so dass wirklich 
alle Listen- und Element-Datentypen verwendet werden können.
- **Hinweis**: Schauen Sie sich dafür *Lambdas* und *Iteratoren* an. 


#### Binäre Suche
- Erweitern Sie die Suchfunktionen, so dass man angeben kann, ob die Suchliste sortiert ist. Ist sie sortiert, soll eine binäre Suche statt der linearen durchgeführt werden.

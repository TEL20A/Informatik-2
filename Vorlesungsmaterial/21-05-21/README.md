# Labor 21.05.21

## Aufgabe
<<<<<<< HEAD
- Einlesen einer CSV-Datei (separiert z.B. per `;`, `,`, ` ` ) mit be ddd liebigen String einträgen
- Sortieren / filtern der Einträge von bestimmten Spalten SC
=======
- Einlesen einer CSV-Datei (separiert z.B. per `;`, `,`, ` ` ) mit beliebigen String einträgen adfasdfasdf
- Sortieren / filtern der Einträge von bestimmten Spalten
>>>>>>> 422f8142722b67bc286cdae868608d47b759dc79
  - Dazu ist es eventuell notwendig in Strings gedpeicherte Zahlen z.b. in `int` oder `double` umzuwandeln
  - **Wichtig: Der Filter- oder Sortiervorgang bezieht sich immer auf eine Spalte. Daher muss daran gedacht werden die anderen Spalten der Reihe an die Sortierung anzupassen damit das gesamte Dokument richtig sortiert wird.**
- In ein sortiertes CSV zurückschreiben
- Zusatzfunktionen wenn Zeit dafür ist:
  - Ausgeben der Datei als Markdown oder Html


**Tipp:** Die erste Zeile enthält normalerweise die Spaltennamen und sollte daher nicht mit im Sortieralgorithmus beachtet werden. Wenn man z.B. nach `double` oder `int` umwandelt kann dadurch eine Fehlermeldung entstehen, wenn der Typ des Inputparameters nicht richtig geprüft wird.

## Durchführung
- Zusammenarbeit in Gruppen mit 3-4 Personen
- Es kann die [CSV-Datei](https://github.com/TEL20A/Informatik-2/blob/main/Vorlesungsmaterial/21-05-17/wkn_716460_historic.csv) aus der letzten Vorlesung mit den Aktienkursen oder eine beliebe andere CSV-Datei zum Testen der Funktion genutzt werden


**Noch fragen?**


## Nützliche Links

- [fstream cplusplus.com](https://www.cplusplus.com/reference/fstream/fstream/)
- Konvertieren von string nach double --> [`stod`](https://www.cplusplus.com/reference/string/stod/)
- [Beginners Guide for `std::sort`](https://www.cplusplus.com/articles/NhA0RXSz/)

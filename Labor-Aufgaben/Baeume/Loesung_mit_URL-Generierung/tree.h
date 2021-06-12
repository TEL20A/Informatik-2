#ifndef TREE_H
#define TREE_H

#include<string>

struct Element;

/** Eine Klasse für Bäume. */
struct Tree {
  Element * root;
  
  /// Konstruktor: Erzeugt einen Baum mit leerer Wurzel.
  /// Wird aufgerufen, wenn ein Objekt vom Typ `Tree` erzeugt wird.
  Tree();
  
  /// Fügt einen neuen Wert in den Baum ein.
  /// Beachtet die Suchbaumeigenschaft.
  void insert(std::string key, std::string value);
  
  /// Liefert einen String, der die Werte des
  /// Baumes in In-Order-Reihenfolge enthält.
  std::string inOrderValues();
  
  /// Liefert den Pfad zum angegebenen Schlüssel als String. Liefert "X", falls das Element nicht enthalten ist.
  /// Beispiel: "rrl" bedeutet, dass man von
  /// der Wurzel aus zwei Mal nach rechts und
  /// einmal nach links gehen muss, um den Wert
  /// zu finden.
  std::string pathToElement(std::string key);

  /// dotString wie in der Aufgabenstellung beschrieben.
  std::string dotString();
  
  /// Verbesserte Version von dotString():
  /// Liefert direkt die URL, die zur Graphansicht führt.
  std::string dotURL();
};

#endif
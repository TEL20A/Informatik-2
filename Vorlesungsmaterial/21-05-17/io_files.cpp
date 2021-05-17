#include "io.hpp"
#include <fstream>
#include <iostream>
#include <iostream>

using namespace std;

void write_file() {
  ofstream outFile;
  outFile.open("example.txt"); // öffnet/erstellt die Datei example.txt
  ofstream outFile2 ("example2.txt");


  outFile << "Schreibe eine Zeile in die Datei" << endl;
  outFile << "Schreibe eine zweite Zeile in die Datei\n";
  outFile << "Schreibe dritte Zeile in die Datei\n";
  
  if (outFile2.is_open()) {
    outFile << "Schreibe eine Zeile in die Datei" << endl;
    outFile << "Schreibe eine zweite Zeile in die Datei\n";
    outFile << "Schreibe dritte Zeile in die Datei\n";
  }
  else cout << "Unable to open file\n";

  outFile.close(); // Wichtig damit das OS die Resourcen der Datei wieder freigibt
  outFile2.close();
}

void read_file() {
  ifstream myFile("example.txt");
  string line;
  if(myFile.is_open()) {
    while (getline(myFile, line)) { // lese solange von der Datei bis das Ende erreicht ist
      cout << line << endl;
    }
  }
  else cout << "Unable to open file\n";
}
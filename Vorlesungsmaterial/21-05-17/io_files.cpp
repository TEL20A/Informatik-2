#include "io.hpp"
#include <fstream>
#include <iostream>
#include <iostream>
#include <vector>
#include <sstream>

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

vector<string> split (string zeile, char delimiter = ';') {
  // Eine Möglichkeit ist es den string zu durchlaufen und nach dem delimiter
  // zu suchen und dann bis zu der Stelle den substring zu kopieren

  stringstream ss(zeile);
  vector<string> columns;
  string col;
  while(getline(ss, col, delimiter)) {
    columns.push_back(col);
  }

  return columns;
}

void read_stock() {
  ifstream myFile("Vorlesungsmaterial/21-05-17/wkn_716460_historic.csv");
  string line;
  vector<vector<string>> csv_datei;
  if(myFile.is_open()) {
    while (getline(myFile, line)) { // lese solange von der Datei bis das Ende erreicht ist
      // cout << line << endl;
      csv_datei.push_back(split(line, ';'));
    }

    for (int i_zeile=0; i_zeile < 5; i_zeile++) { // durchlaufe zeilen
      //durchlaufen die spalten
      cout << "Zeile " << i_zeile << " = ";
      for (auto el: csv_datei[i_zeile]) {
        cout << el << " : ";
      }
      cout << endl;
    }
  }
  else cout << "Unable to open file\n";
}
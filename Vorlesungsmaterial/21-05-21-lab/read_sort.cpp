#include <fstream>
#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<string> split(string zeile, char delimiter = ';')
{
   // Eine Möglichkeit ist es den string zu durchlaufen und nach dem delimiter
   // zu suchen und dann bis zu der Stelle den substring in einem vector zu kopieren

   // Eine Weitere Möglichkeit ist das Nutzen der getline Funktionen wie beim einlesen der filestreams
   // Dazu benutzt die stringstream Klasse indem man den string umwandelt und dann auf den stringstream die getline Funktion anwendet
   stringstream ss(zeile);
   vector<string> columns;
   string col;
   while (getline(ss, col, delimiter))
   {
      columns.push_back(col);
   }

   return columns;
}

void print_csv(const vector<vector<string> >& file, int n_lines)
{
   if (file.size() < n_lines)
      n_lines = file.size();

   for (int i_zeile = 0; i_zeile < n_lines; i_zeile++) // durchlaufe zeilen
   {
      //durchlaufen die spalten
      cout << "Zeile " << i_zeile << " = ";
      for (auto el : file[i_zeile])
      {
         cout << el << " : ";
      }
      cout << endl;
   }
}

vector<vector<string>> read_stock()
{
   ifstream myFile("Vorlesungsmaterial/21-05-17/wkn_716460_historic.csv");
   string line;
   vector<vector<string>> csv_datei;
   if (myFile.is_open())
   {
      while (getline(myFile, line))
      { // lese solange von der Datei bis das Ende erreicht ist
         csv_datei.push_back(split(line, ';'));
      }
   }
   else
      cout << "Unable to open file\n";
   return csv_datei;
}

int main()
{
   vector<vector<string>> csv;
   csv = read_stock();

   auto sortByColumn = [](const vector<string> a, const vector<string> b)
   {
      // Komma durch Punkt ersetzen
      string str1 = a[3];
      string str2 = b[3];

      // string in double umwandeln
      double _a = stod(str1);
      double _b = stod(str2);

      return _a < _b;
   };
   sort(csv.begin()+1, csv.end(), sortByColumn);
   print_csv(csv, 10);
   return EXIT_SUCCESS;
}

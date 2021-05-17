#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "lambda.hpp"

using namespace std;

bool lessLength(const string &f, const string &s)
{
   return f.length() < s.length();
}

void lambda()
{

   vector<string> myStrVec = {"12345", "123456", "1234", "1", "12", "123", "12345"};

   cout << "\n";

   sort(myStrVec.begin(), myStrVec.end(), lessLength);
   for (auto v : myStrVec)
      cout << v << " ";
   cout << "\n";

   sort(myStrVec.begin(), myStrVec.end(), [](const string &f, const string &s) { return f.length() < s.length(); });
   for (auto v : myStrVec)
      cout << v << " ";
   cout << "\n";

   sort(myStrVec.begin(), myStrVec.end(), [](const string &f, const string &s) { return f.length() > s.length(); });
   for (auto v : myStrVec)
      cout << v << " ";
   cout << "\n";

   // for_each läuft durch alle Elemte des Vektors und wendet die Funktion auf jedes Element an
   for_each(myStrVec.begin(), myStrVec.end(), [](const string &s) { cout << s << ", "; });

   cout << "\n\n";

   vector<int> myVec1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   cout << "i->i*i: ";
   for_each(myVec1.begin(), myVec1.end(), [](int &i) { i = i * i; });
   for (auto v : myVec1)
      cout << v << " ";

   cout << endl;

   vector<double> myVec2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   for_each(myVec2.begin(), myVec2.end(), [](double &i) { i = sqrt(i); });
   cout << "i->sqrt(i): ";
   for (auto v : myVec2)
      cout << fixed << setprecision(2) << v << " "; // fixed verhindert exponentialschreibweise (z.B. 1.0e-10)
                                                    // Nachkommastellen auf 2 begrenzt mit setprecision
   cout << "\n\n";
}

void lambda_captures()
{
   cout << endl;

   string copy = "original";
   string ref = "original";
   auto lambda = [copy, &ref] { cout << copy << " " << ref << endl; };
   lambda();
   copy = "changed";
   ref = "changed";
   lambda();
   
   copy = "changed again";
   ref = "changed again";
   lambda();

   cout << endl;
}


void lambda_params() {
  auto addTwoNumbers = [](int a, int b){ return a + b; };

  cout << endl;
  cout << "addTwoNumbers(2000, 17): " << addTwoNumbers(2000, 17) << endl;
  cout << "addTwoNumbers(2000, 21): " << addTwoNumbers(2000, 21) << endl;
}
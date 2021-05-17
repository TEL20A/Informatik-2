#include <iostream>
#include "lambda.hpp"
#include "io.hpp"

using namespace std;

int main() {
   cout << "Lambda\n";
   lambda();

   cout << "\nLambda captures\n";
   lambda_captures();

   cout << "\nLambda params\n";
   lambda_params();
  //  write_file();
}





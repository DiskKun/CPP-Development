// An example program from "Beginning Programming with C++ for Dummies". It
// converts celsius to fahrenheit. 

//#include <cstdio>
//#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
  int celsius;
  cout << "Enter the Temperature in Celsius: ";
  cin >> celsius;

  //int fahrenheit;
  int fahrenheit = celsius * 9/5 + 32;

  cout << "Fahrenheit value is: ";
  cout << fahrenheit << endl;

  cout << "Press [ENTER] to continue..." << endl;
  cin.ignore(10, '\n');
  cin.get();
  return 0;
}

// Testing a switch statement. Enter a number, and it will tell you what number
// it is in word form.

#include <iostream>
using namespace std;

int main() {
  int inputNum;
  cout << "Type a number between 0 and 9: ";
  cin >> inputNum;

  switch (inputNum) {
    case 0:
      cout << "Zero!" << endl;
      break;
    case 1:
      cout << "One!" << endl;
      break;
    case 2:
      cout << "Two!" << endl;
      break;
    case 3:
      cout << "Three!" << endl;
      break;
    case 4:
      cout << "Four!" << endl;
      break;
    case 5:
      cout << "Five!" << endl;
      break;
    case 6:
      cout << "Six!" << endl;
      break;
    case 7:
      cout << "Seven!" << endl;
      break;
    case 8:
      cout << "Eight!" << endl;
      break;
    case 9:
      cout << "Nine!" << endl;
      break;
      // etc. etc.
    default:
      cout << "Nope, not a number." << endl;
  }
  return 0;
}

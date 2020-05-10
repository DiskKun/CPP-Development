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
      // etc. etc.
    default:
      cout << "Nope, not a number." << endl;
  }
  return 0;
}

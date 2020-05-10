// UNFINISHED (DON'T COMPILE)
// Prints a multiplication table.

#include <iostream>
using namespace std;

int main() {
  int xNum = 0;
  int yNum = 1;
  int lNum = 0;
  while (xNum < 10) {
    cout << xNum << " ";
    xNum += 1;
  }
  cout << "\n";
  xNum = 1;
  while (yNum < 7) {
    lNum = 0;
    cout << yNum << " ";
    while (lNum < 9) {
      int product = yNum * xNum;
      cout << product << " ";
      lNum += 1;
      xNum += 1;
      yNum = 0;
    }
    cout << "\n";
    yNum += 1;
  }

  return 0;
}

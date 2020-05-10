// WARNING: This will probably crash your command line. Use with caution.
#include <iostream>
using namespace std;

int main() {
  while (true) {
    cout << "\a";
    cout << rand() % 2;
  }
  return 0;
}

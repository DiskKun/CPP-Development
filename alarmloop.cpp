// This program will print zeros and ones, along with ASCII character 7
// indefinitely.

#include <iostream>
using namespace std;

int main() {
  while (true) {
    cout << "\a";
    cout << rand() % 2;
  }
  return 0;
}

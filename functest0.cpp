// A quick program that tests if a void function works or not. This will always
// be true, and therefore this program doesn't serve any practical purpose.

#include <iostream>
using namespace std;

void testFunc() {
  cout << "The void function worked!";
}

int main() {
  testFunc();
  return 0;
}

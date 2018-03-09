#include <iostream>

// x is our number to test
// pow is a power of 2 (e.g. 128, 64, 32, etc...)

using namespace std;

void printBinary(int x);


int main()
{
  cout << "Enter an integer between 0 and 255: ";
  int x;
  cin >> x;

  printBinary(x);

  return 0;
}

void printBinary(int x) {
  while (x > 0) {
    if (x >= 128) {
      cout << "1";
      x -= 128;
    } else {
      cout << "0";
    }
    if (x >= 64) {
      cout << "1";
      x -= 64;
    } else {
      cout << "0";
    }
    if (x >= 32) {
      cout << "1";
      x -= 32;
    } else {
      cout << "0";
    }
    if (x >= 16) {
      cout << "1 ";
      x -= 16;

    } else {
      cout << "0 ";
    }
    if (x >= 8) {
      cout << "1";
      x -= 8;
    } else {
      cout << "0";
    }
    if (x >= 4) {
      cout << "1";
      x -= 4;
    } else {
      cout << "0";
    }
    if (x >= 2) {
      cout << "1";
      x -= 2;
    } else {
      cout << "0";
    }
    if (x >= 1) {
      cout << "1";
      x -= 1;
    } else {
      cout << "0";
    }
  }
  cout << endl;
}

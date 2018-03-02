#include <iostream>

using namespace std;

int readNumber() {
  int number;
  cout << "Please Enter a number to operate: ";
  cin >> number;
  return number;
}

void writeAnswer(int number) {
  cout << "The result is " << number << endl;
}

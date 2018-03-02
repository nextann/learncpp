// doubleNumber -- takes in one integer; returns twice the value passed in
// 1.4a
#include <iostream>
int doubleNumber(int);

int main()
{
  using namespace std;
  cout << "Enter an integer to double: ";
  int input;
  cin >> input;
  cout << doubleNumber(input) << endl;
  return 0;
}

int doubleNumber (int x)
{
  return 2 * x;
}

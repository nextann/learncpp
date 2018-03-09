#include <iostream>

int main()
{
  using namespace std;
  /*
  cout << true << endl; //true evaluates to 1
  cout << !true << endl; // !true evaluates to 0

  cout << boolalpha; //prints bools as true or false

  bool b(false);
  cout << b << endl; // b is false, which evaluates to 0
  cout << !b << endl; // !b is true, which evaluates to 1
  */

  bool b; //uninitialized variable
  cout << "Enter a boolean value: ";
  cin >> b;
  cout << "You entered: " << b;

  return false;
}

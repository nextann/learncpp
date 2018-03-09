#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter a double value: ";
  double num1;
  cin >> num1;

  cout << "Enter a double value: ";
  double num2;
  cin >> num2;

  cout << "Enter one of the following: +, -, *, or /: ";
  char c;
  cin >> c;

  double result;
  if (c == '+') {
    result = num1 + num2;
    cout << num1 << " + " << num2 << " is " << result << endl;
  } else if (c == '-') {
    result = num1 - num2;
    cout << num1 << " - " << num2 << " is " << result << endl;

  } else if (c == '*') {
    result = num1 * num2;
    cout << num1 << " * " << num2 << " is " << result << endl;

  } else if (c == '/') {
    result = num1 / num2;
    cout << num1 << " / " << num2 << " is " << result << endl;

  } else {
    cout << "invalid operation" << endl;
  }
  return 0;
}
//could be written with 2 methods: getDouble(), getOperator()

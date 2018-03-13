#include <iostream>

int calculate (int x, int y, char op);

int main()
{
  std::cout << "Enter first integer: ";
  int x;
  std::cin >> x;

  std::cout << "Enter second integer: ";
  int y;
  std::cin >> y;

  std::cout << "Enter a mathematical operation: +, -, *, /, or %: ";
  char op;
  std::cin >> op;

  std::cout << x << " " << op << " " << y << " = " << calculate(x, y, op);

  return 0;
}

int calculate(int x, int y, char op)
{
  switch (op)
  {
    case '+':
      return x + y;
    case '-':
      return x - y;
    case '/':
      return x / y;
    case '*':
      return x * y;
    case '%':
      return x % y;
    default:
      std::cout << "ERROR: Invalid Operator";
      return 0;
  }
}

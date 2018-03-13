#include <iostream>

double getDouble();
char getOperator();
void printResult(double x, char op, double y);

int main()
{
  double x = getDouble();
  char op = getOperator();
  double y = getDouble();

  printResult(x, op, y);
  return 0;
}

double getDouble()
{
    while(true) // loop until user enters a valid input
    {
      std::cout << "Enter a double value: ";
      double x;
      std::cin >> x;

      // check for failed extraction
      if (std::cin.fail()) // has a previous extraction failed?
      {
        // yep, so let's handle the failure
        std::cin.clear(); // put us back in 'normal' operation mode
        std::cin.ignore(32767, '\n'); // and remove the bad input
        std::cout << "Oops, that input is invalid. Please try again.\n";
      }
      else
      {
        std::cin.ignore(32767, '\n'); // remove any extraeous input

        // the user can't enter a meaningless double value, so we don't need to worry about vailidating that
        return x;
      }
    }
}

char getOperator()
{
  while (true) // loop until user enters a valid input
  {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op;
    std::cin >> op;

    // chars can accept any single input character, so no need to chekc for an invalid extraction here

    std::cin.ignore(32767, '\n'); // remove any extraneous input

    // check whether the user entered meaningful input
    if (op == '+' || op == '-' || op == '*' || op == '/')
      return op; // return it to the caller
    else
      std::cout << "Oops, that input is invalid. Please try again.\n";
  }
}

void printResult(double x, char op, double y)
{
  if (op == '+')
    std::cout << x << " + " << y << " is " << x + y << '\n';
  else if (op == '-')
    std::cout << x << " - " << y << " is " << x - y << '\n';
  else if (op == '*')
    std::cout << x << " * " << y << " is " << x * y << '\n';
  else if (op == '/')
    std::cout << x << " / " << y << " is " << x / y << '\n';
  else // Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program
    std::cout << "Something went wrong: printResult() got an invalid operator.";
}

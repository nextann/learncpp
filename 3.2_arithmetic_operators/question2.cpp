#include <iostream>

bool isEven(int x);
void checkEven(int x);

using namespace std;

int main()
{
  cout << "Enter an integer: ";
  int x;
  cin >> x;

  checkEven(x);

  return 0;
}

bool isEven(int x)
{
  return (x % 2) == 0;
}

void checkEven(int x)
{
  if (isEven(x)) {
    cout << x << " is even\n";
  } else {
    cout << x << " is odd\n";
  }
}

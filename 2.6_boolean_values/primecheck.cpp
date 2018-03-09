#include <iostream>

bool isPrime(int x);

int main()
{
  using namespace std;
  cout << "Enter a single digit integer: ";
  int x;
  cin >> x;

  bool prime = isPrime(x);

  if (prime)
    cout << "The digit is prime" << endl;
  else
    cout << "The digit is not prime" << endl;

  return 0;
}

bool isPrime(int x)
{
  if (x == 2)
    return true;
  if (x == 3)
    return true;
  if (x == 5)
    return true;
  if (x == 7)
    return true;
  return false;
}

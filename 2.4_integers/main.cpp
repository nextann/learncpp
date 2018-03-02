// testing overflow in unsigned short
#include <iostream>

int main()
{
  using namespace std;

  //unsigned short x = 65535;
  unsigned short x = 0;
  cout << "x was: " << x << endl;
  //x = x + 1;
  x = x - 1;
  cout << "x is now: " << x << endl;
  return 0;
}

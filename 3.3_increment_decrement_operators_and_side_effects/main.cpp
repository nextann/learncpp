#include <iostream>

int main()
{
  using namespace std;
  /*
  int x = 5, y = 5;

  cout << x << " " << y << endl;
  cout << ++x << " " << --y << endl;
  cout << x << " " << y << endl;
  cout << x++ << " " << y-- << endl;
  cout << x << " " << y << endl;
  */

  int x = 1;
  x = x++;
  cout << x; //cout? answer: it's undefined; different compilers make different assumptions

  return 0;
}

#include <iostream>

int main()
{
  using namespace std;

  int x = 1;
  int y = 1;

  if (x == 1 && y++ == 2) {
    cout << x << " " << y << endl;

  } else {
    cout << x << " " << y << endl;
  }
  return 0;
}

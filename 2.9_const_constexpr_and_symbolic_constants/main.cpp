#include <iostream>
#include "constants.h"

int main()
{
  using namespace std;
  using namespace constants;
  double radius = 3.5;
  double circumference = 2 * radius * pi;
  cout << radius << endl;
  cout << circumference << endl;
  return 0;
}

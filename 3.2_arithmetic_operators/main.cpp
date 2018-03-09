#include <iostream>

int main()
{
  using namespace std;

  //cout << 0.0 / 0.0 << endl;
  /*
  int x = 7;
  int y = 4;

  cout << "int / int = " << x / y << "\n";
  cout << "double / int = " << static_cast<double>(x) / y << "\n";
  cout << "int / double = " << x / static_cast<double>(y) << "\n";
  cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";
  */

  int count = 1; //start at 1

  while (count <= 100)
  {
    cout << count << " "; //print the current number

    if (count % 20 == 0) {
        cout << "\n";
    }
    count = count + 1; // go to next number
  }

  return 0;
}

#include <iostream>
//#include <iomanip> //for std::setprecision()

int main()
{
  using namespace std;
  /*
  float f;
  f = 9.87654321f;
  cout << f << endl;
  f = 987.654321f;
  cout << f << endl;
  f = 987654.321f;
  cout << f << endl;
  f = 9876543.21f;
  cout << f << endl;
  f = 0.0000987654321f;
  cout << f << endl;
  */
  /*
  cout << setprecision(16); //show 16 digits

  float f = 3.33333333333333333333333333333333333333f;
  cout << f << endl;
  double d = 3.3333333333333333333333333333333333333;
  cout << d << endl;
  */
  /*
  double d(0.1);
  cout << d << endl; //use default cout precision of 6
  cout << setprecision(17);
  cout << d << endl;
  */
  /*
  cout << setprecision(17);

  double d1(1.0);
  cout << d1 << endl;

  double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 +0.1); //should equal 1.0
  cout << d2 << endl;
  */

  double zero = 0.0;
  double posinf = 5.0 / zero; //positive infinity
  cout << posinf << endl;

  double neginf = -5.0 / zero; //negative infinity
  cout << neginf << endl;

  double nan = zero / zero; //not a number (mathematically invalid)
  cout << nan << endl;

  return 0;
}

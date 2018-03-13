#include <iostream>

using namespace std;

void incrementAndPrint()
{
  //int value = 1; // automatic duration by default
  static int s_value = 1; // static duration via stati keyward. This line is only executed once.
  //++value;
  ++s_value;
  cout << s_value << endl;
}

int main()
{
  incrementAndPrint();
  incrementAndPrint();
  incrementAndPrint();
  cout << s_value << endl;
  return 0;
}

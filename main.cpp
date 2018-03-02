// main.cpp -- 1.8 -- uses add.cpp; just has main function that calls add(int, int)
// needs to be compiled 'g++ main.cpp add.cpp -o main'
#include <iostream>
#include "add.h"
using namespace std;

//int add(int x, int y);

int main()
{
  cout << "The sum of 3 and 4 is: " << add(3, 4) << endl;
  return 0;
}

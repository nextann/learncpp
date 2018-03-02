//question 1 - write a single-file program that reads two seperate integers from the user,
//              adds them together, and the outputs the answer
//              w/ three functions;
//                - readNumber function; get (and return) a single integer from the user
//                - writeAnswer; outputs answer; single parameter and no return value
//                - main(); glue the functions together
//#include <iostream>
#include "io.h"

int readNumber();
void writeAnswer(int number);

//using namespace std;

int main()
{
  int x = readNumber();
  int y = readNumber();
  writeAnswer(x + y);
  
  return 0;
}

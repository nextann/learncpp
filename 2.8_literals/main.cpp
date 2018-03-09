#include <iostream>

int main()
{
  using namespace std;
  /*
  int x = 012; //0 before the number means this is octal
  cout << x;
  */
  /*
  int x = 0xF; //0x before the number means this is hexadecimal
  cout << x;
  */
  /*
  int bin(0);
  bin = 0b1;        //assign binary 0000 0001 to the variable
  bin = 0b11;       //assign binary 0000 0011 to the variable
  bin = 0b1010;     //assign binary 0000 1010 to the variable
  bin = 0b11110000; //assign binary 1111 0000 to the variable
  */

  int bin = 0b1011'0010;      //assign binary 1011 0010 to the variable
  long value = 2'532'673'462; //much easier to read than 2532673462

  return 0;
}

#include <iostream>
#include <cstdint>

int main()
{
  using namespace std;
  /*
  int8_t i = 35;
  cout << i << endl;

  char ch(35);
  cout << ch << endl;
  */
  /*
  char ch(97);
  cout << ch << endl;
  cout << static_cast<int>(ch) << endl;
  cout << ch << endl;
  */

  cout << "Input a keyboard character: "; //assume the user enters "abcd" (w/o quotes)

  char ch;
  cin >> ch; // ch = 'a'; "bcd" is left queued.
  cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;

  //Note: The following cin doesn't ask the user for input, it grabs queued input!
  cin >> ch; // ch = 'b'; "cd" is left queued.
  cout << ch << " has ASCII code " << static_cast<int>(ch) << endl;

  return 0;
}

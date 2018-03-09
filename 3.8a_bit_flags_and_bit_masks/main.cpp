//#include <bitset>
#include <iostream>
/*
//Note that with std::bitset, our options correspond to bit indices, not bit patterns
const int option0 = 0;
const int option1 = 1;
const int option2 = 2;
const int option3 = 3;
const int option4 = 4;
const int option5 = 5;
const int option6 = 6;
const int option7 = 7;
*/

int main()
{
  using namespace std;
  /*
  //define a bunch of physical/emotional states
  const unsigned char isHungry = 1 << 0;    // 0000 0001
  const unsigned char isSad = 1 << 1;       // 0000 0010
  const unsigned char isMad = 1 << 2;       // 0000 0100
  const unsigned char isHappy = 1 << 3;     // 0000 1000
  const unsigned char isLaughing = 1 << 4;  // 0001 0000
  const unsigned char isAsleep = 1 << 5;    // 0010 0000
  const unsigned char isDead = 1 << 6;      // 0100 0000
  const unsigned char isCrying = 1 << 7;    // 1000 0000

  unsigned char me = 0; //all flags/options turned off to start
  me |= isHappy | isLaughing; //I am happy and laughing
  me &= ~isLaughing; // I am no longer laughing

  //Query a few states (we'll use static_cast<bool> to interpret the results as a boolean value rather than an integer)
  cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
  cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
  */
  /*
  bitset<8> bits(0x2); //we need 8 bits, start with bit pattern 0000 0010
  bits.set(option4); //set bit 4 to 1        (now we have 0001 0010)
  bits.flip(option5); //flip bit 5           (now we have 0011 0010)
  bits.reset(option5); //set bit 5 back to 0 (now we have 0001 0010)

  cout << "Bit 4 has value: " << bits.test(option4) << '\n';
  cout << "Bit 5 has value: " << bits.test(option5) << '\n';
  cout << "All the bits: " << bits << '\n';
  */
  /*
  const unsigned int lowMask = 0xF; //bit mask to keep low 4 bits (hex for 0000 0000 0000 1111)

  cout << "Enter an integer: ";
  int num;
  cin >> num;

  num &= lowMask; //remove the high bits to leave only the low bit

  cout << "The 4 low bits have value: " << num << '\n';
  */

  const unsigned int redBits = 0xFF000000;
  const unsigned int greenBits = 0x00FF0000;
  const unsigned int blueBits = 0x0000FF00;
  const unsigned int alphaBits = 0x000000FF;

  cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
  unsigned int pixel;
  cin >> hex >> pixel; // std::hex allows us to read in a hex value

  //use bitwise AND to isolate red pixels, then right shift the value into the range 0 - 255
  unsigned char red = (pixel & redBits) >> 24;
  unsigned char green = (pixel & greenBits) >> 16;
  unsigned char blue = (pixel & blueBits) >> 8;
  unsigned char alpha = pixel & alphaBits;

  cout << "Your color contains:\n";
  cout << static_cast<int>(red) << " of 255 red\n";
  cout << static_cast<int>(green) << " of 255 green\n";
  cout << static_cast<int>(blue) << " of 255 blue\n";
  cout << static_cast<int>(alpha) << " of 255 alpha\n";

  return 0;
}

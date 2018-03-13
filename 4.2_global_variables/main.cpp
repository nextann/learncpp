#include <iostream>

// Variables delcared outside of a function are global variables
int g_x; // global variable g_x
const int g_y(2); // global variable g_y
int value(5);
static int g_z; // interal variable
extern double g_a(9.8); // external variable
extern const double g_gravity;

using namespace std;

void doSomething();

int main()
{
  /*
  doSomething();

  // global variables can be seen and used everywhere in program
  g_x = 5;
  cout << g_y << '\n';
  */

  int value = 7; //hides the global variable value
  value++; // increments local value, not global value
  ::value--; // decrements global value not local value

  cout << "global value: " << ::value << '\n';
  cout << "local value: " << value << '\n';


  cout << ::g_gravity;
  return 0;
}

void doSomething()
{
  // global variables can be seen and used everywhere in program
  g_x = 3;
  cout << g_y << '\n';
}

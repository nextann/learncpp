#include <iostream>

int main()
{// outer block

  using namespace std;

  int apples(5); //here's the outer block apples

  if (apples >= 5) // refers to outer block apples
  { // nested block
    // int apples; //hides previous variable named apples

    // apples now refers to the nested block appels
    // the outer block apples is temporarily hidden
    // int x = 3;
    apples = 10; // this assigns value 10 to nested block apples, not outer block apples

    cout << apples << '\n'; // print value of nested block apples
  } // nested block apples destoryed

  // apples now refers to the outer block apples again

  cout << apples << '\n'; // prints value of outer block apples
  // cout << x << '\n';

  return 0;
} // outer block apples destoryed

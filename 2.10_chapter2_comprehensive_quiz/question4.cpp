#include <iostream>
#include "constants.h"


using namespace std;
using namespace myConstants;

double getInitialHeight();
int getSeconds();
double calculateHeight(double init_height, int sec);
void printHeight(double init_height, int sec);

int main()
{
  const double init_height = getInitialHeight();
  const int sec = getSeconds();
  printHeight(init_height, sec);

  return 0;
}

double getInitialHeight()
{
  cout << "Enter the height of the tower in meters: ";
  double init_height;
  cin >> init_height;
  return init_height;
}

int getSeconds()
{
  cout << "Enter the seconds: ";
  int sec;
  cin >> sec;
  return sec;
}

double calculateHeight(double init_height, int sec)
{
  //using formula: s = u * t + (a * t^2) / 2], here u(initial velocity) = 0
  return init_height - (gravity * sec * sec) / 2.0;
}

void printHeight(double init_height, int sec)
{
  double height;
  for (int i = 0; i <= sec; i++) {
    height = calculateHeight(init_height, i);

    if (height > 0.0) {
      cout << "At " << i << " seconds, the ball is at height: " << height << " meters" << endl;
    } else {
      cout << "At " << i << " seconds, the ball is on the ground." << endl;
      break;
    }
  }

}

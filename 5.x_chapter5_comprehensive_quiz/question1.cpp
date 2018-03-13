#include <iostream>
#include "constants.h"

double getInitialHeight(); // gets initial height from user and returns it
double calculateHeight(double initialHeight, int seconds); // returns height from ground after "seconds" seconds
void printHeight(double height, int seconds); // prints height every second till ball has reached the ground
// void calculateAndPrintHeight(double initialHeight, int seconds);


int main()
{
  const double initialHeight = getInitialHeight();

  int seconds = 0;
  double height;

  do
  {
    height = calculateHeight(initialHeight, seconds);
    printHeight(height, seconds);
    ++seconds;
  } while (height > 0.0);
  
  return 0;
}


double getInitialHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double initialHeight;
  std::cin >> initialHeight;
  return initialHeight;
}

double calculateHeight(double initialHeight, int seconds)
{
  double distanceFallen = (myConstants::gravity * seconds * seconds) / 2;
  double currentHeight = initialHeight - distanceFallen;

  return currentHeight;
}

void printHeight(double height, int seconds)
{
  if (height > 0.0)
  {
    std::cout << "At " << seconds << " seconds, the ball is at height:\t" << height << " meters\n";
  }
  else
    std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

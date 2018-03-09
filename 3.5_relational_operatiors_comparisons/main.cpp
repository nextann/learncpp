#include <iostream>
#include <cmath>

bool isAlmostEqual(double a, double b, double epsilon)
{
  //if the distance between a and b is less than epsilon, then a and b are "close enough"
  return fabs(a - b) <= epsilon;
}
// no main to test this; requires main

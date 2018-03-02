//#include "square.h" //square.h is included once here
//no need for square.h

//included next function to fix the problem
int getSquareSides()
{
  return 4;
}

int getSquarePerimeter(int sideLength)
{
  return sideLength * getSquareSides();
}

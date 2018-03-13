#include <algorithm> //for std::swap, use <utility> instead if C++11
#include <iostream>

int main()
{
  const int length = 5;
  int array[length] = {30, 50, 20, 10, 40};
  /*
  //*** Selection Sort ////////////////////////////////////////////////
  // Step through each element of the array
  // (except the last one, which will already be sorted by the time we get there)
  for (int startIndex = 0; startIndex < length - 1; ++startIndex)
  {
    int smallestIndex = startIndex;

    for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
    {
      if (array[currentIndex] > array[smallestIndex])
        smallestIndex = currentIndex;
    }

    std::swap(array[startIndex], array[smallestIndex]);
  }

  for (int index = 0; index < length; ++index)
    std::cout << array[index] << ' ';
  //////////////////////////////////////////////////////////////////
  */

  /*
  //*** std::sort //////////////////////////////////////////////////
  std::sort (array, array+length);

  for (int i = 0; i < length; ++i)
    std::cout << array[i] << ' ';
  /////////////////////////////////////////////////////////////////
  */

  //*** bubble sort //////////////////////////////////////////////
  for (int i = 0; i < length - 1; ++i)
  {
    for (int j = i + 1; j < length - i; ++j)
    {
      if (array[i] > array[j])
        std::swap(array[i], array[j]);
    }
  }

  for (int i = 0; i < length; ++i)
    std::cout << array[i] << ' ';

  return 0;
}

#include <iostream>
#include <string>
#include <utility>

void sortArray(std::string *array, int length);

int main()
{
  std::cout << "How many names would you like to enter? ";
  int length;
  std::cin >> length;

  std::string *names = new std::string[length];

  for (int i = 0; i < length; ++i)
  {
    std::cout << "Enter name # " << i + 1 << ": ";
    std::cin >> names[i];
  }

  sortArray(names, length);

  std::cout << "\nHere is your sorted list:\n";
  //print the sorted array
  for (int i = 0; i < length; ++i)
    std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

    delete[] names;

  return 0;
}

void sortArray(std::string *array, int length)
{
  for (int startIndex = 0; startIndex < length; ++startIndex)
  {
    int smallestIndex = startIndex;

    for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
    {
      if (array[currentIndex] < array[smallestIndex])
        smallestIndex = currentIndex;
    }

    std::swap(array[startIndex], array[smallestIndex]);
  }
}

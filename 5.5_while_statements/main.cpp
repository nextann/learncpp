#include <iostream>

int main()
{
  int count = 0;
  while (count < 10) {
    std::cout << count << " ";
    ++count;
  }
  std::cout << "done!\n";
  std::cout << count << '\n';
  
  return 0;
}

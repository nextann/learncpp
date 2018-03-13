#include <string>
#include <iostream>

int main()
{
  using namespace std;

  cout << "Enter your full name: ";
  string name;
  getline(cin, name);

  cout << "Enter your age: ";
  int age;
  cin >> age;
  cin.ignore(32767, '\n');

  cout << "You've lived " << static_cast<double>(age) / name.length()  << " years for each letter in your name.\n";
  return 0;
}

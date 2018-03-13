#include <iostream>

struct Fraction
{
  int numer;
  int denom;
};

void printFraction(Fraction fr);
void printMultiply (Fraction fr1, Fraction fr2);

int main()
{

  Fraction fr1;
  std::cout << "Enter numerator for first fraction: ";
  std::cin >> fr1.numer;
  std::cout << "Enter denominator for first fraction: ";
  std::cin >> fr1.denom;

  Fraction fr2;
  std::cout << "Enter numerator for second fraction: ";
  std::cin >> fr2.numer;
  std::cout << "Enter denominator for second fraction: ";
  std::cin >> fr2.denom;

  std::cout << "First Fraction\n";
  printFraction(fr1);
  std::cout << "Second Fraction\n";
  printFraction(fr2);

  std::cout << "Multiplied Decimal\n";
  printMultiply(fr1, fr2);

  return 0;
}

void printFraction(Fraction fr)
{
  std::cout << fr.numer << " / " << fr.denom << '\n';
}

void printMultiply(Fraction fr1, Fraction fr2)
{
  std::cout << static_cast<double>(fr1.numer) * fr2.numer / (fr2.denom * fr2.denom) << '\n';
}

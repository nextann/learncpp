#include <iostream>

struct Advertising
{
  int adsShown;
  double clickPercent;
  double averageClickEarn;
};

void printAdvertising (Advertising ad);

int main()
{
  Advertising ad;

  std::cout << "How many ads were shown today? ";
  std::cin >> ad.adsShown;
  std::cout << "What percentage of users clicked on the ads? ";
  std::cin >> ad.clickPercent;
  std::cout << "What was the average earnings per click? ";
  std::cin >> ad.averageClickEarn;

  printAdvertising(ad);

  return 0;
}

void printAdvertising (Advertising ad)
{
  std::cout << "Number of ads shown: " << ad.adsShown << '\n';
  std::cout << "Click through rate: " << ad.clickPercent << '\n';
  std::cout << "Average earnings per click: $" << ad.averageClickEarn << '\n';

  std::cout << "Total Earnings: $" << (ad.adsShown * ad.clickPercent / 100 * ad.averageClickEarn) << '\n';
}

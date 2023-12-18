#include <iostream>

int main() {
  unsigned short a {};
  unsigned short b {};
  unsigned short c {};
  std::cin >> a >> b >> c;

  std::cout << (a + b) % c << std::endl;
  std::cout << ((a % c) + (b % c)) % c << std::endl;
  std::cout << (a * b) % c << std::endl;
  std::cout << ((a % c) * (b % c)) % c << std::endl;

  return 0;
}

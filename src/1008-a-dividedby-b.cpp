#include <iostream>

int main() {
  double a {};
  double b {};
  std::cin >> a >> b;
  std::cout.precision(10);
  std::cout << a / b << std::endl;
  return 0;
}

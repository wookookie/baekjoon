#include <iostream>

int main() {
  short a {};
  short b {};
  std::cin >> a >> b;

  if (a > b) {
    std::cout << ">" << std::endl;
  }
  else if (a < b) {
    std::cout << "<" << std::endl;
  }
  else if (a == b) {
    std::cout << "==" << std::endl;
  }

  return 0;
}

#include <iostream>

int main() {
  unsigned short a {};
  unsigned short b {};

  while (true) {
    std::cin >> a >> b;

    if (std::cin.eof()) {
      break;
    }

    std::cout << a + b << std::endl;
  }

  return 0;
}

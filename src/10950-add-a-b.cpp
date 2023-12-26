#include <iostream>

int main() {
  unsigned short test_case {};
  unsigned short a {};
  unsigned short b {};

  std::cin >> test_case;

  for (auto i = 0; i < test_case; i++) {
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
  }

  return 0;
}

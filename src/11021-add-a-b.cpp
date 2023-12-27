#include <iostream>

int main() {
  unsigned short a {};
  unsigned short b {};
  unsigned int t {};
  std::cin >> t;

  for (unsigned int i = 1; i < t + 1; i++) {
    std::cin >> a >> b;
    std::cout << "Case #" << i << ": " << a + b << "\n";
  }

  return 0;
}

#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned short a {};
  unsigned short b {};
  unsigned int t {};
  std::cin >> t;

  for (unsigned int i = 0; i < t; i++) {
    std::cin >> a >> b;
    std::cout << a + b << "\n";
  }

  return 0;
}

#include <iostream>

int main() {
  unsigned short n {};
  std::cin >> n;

  for (auto i = 0; i < n; i++) {
    std::cout << "*";

    if (i < 1) {
      std::cout << std::endl;
      continue;
    }

    for (auto j = 0; j < i; j++) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  return 0;
}

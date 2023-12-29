#include <iostream>

int main() {
  unsigned short n {};
  std::cin >> n;

  for (auto i = 0; i < n; i++) {
    for (auto j = 0; j < n - (i + 1); j++) {
      std::cout << " ";
    }
    for (auto k = 0; k < i + 1; k++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }

  return 0;
}

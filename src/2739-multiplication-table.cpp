#include <iostream>

int main() {
  unsigned short n {};

  std::cin >> n;

  for (auto i = 1; i < 10; i++) {
    std::cout << n << " * " << i << " = " << n * i << std::endl;
  }

  return 0;
}

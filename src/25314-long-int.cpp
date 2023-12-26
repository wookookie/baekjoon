#include <iostream>

int main() {
  unsigned short n {};
  std::cin >> n;

  for (auto i = 0; i < (n / 4); i++) {
    std::cout << "long" << " ";
  }
  std::cout << "int" << std::endl;

  return 0;
}

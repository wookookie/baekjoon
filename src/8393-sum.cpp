#include <iostream>

int main() {
  unsigned short n {};
  unsigned int sum {};
  std::cin >> n;

  for (auto i = 1; i < n + 1; i++) {
    sum += i;
  }
  std::cout << sum << std::endl;

  return 0;
}

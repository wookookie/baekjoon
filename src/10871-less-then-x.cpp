#include <iostream>

int main() {
  unsigned short n {};
  unsigned short x {};
  std::cin >> n >> x;

  unsigned short numbers[n] {0, };
  for (auto &i : numbers) {
    std::cin >> i;
  }

  for (auto i = 0; i < n; i++) {
    if (numbers[i] < x) {
      std::cout << numbers[i];

      if (i != n - 1) {
        std::cout << " ";
      }
    }
  }

  std::cout << std::endl;

  return 0;
}

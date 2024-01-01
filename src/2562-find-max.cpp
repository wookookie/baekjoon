#include <iostream>

int main() {
  unsigned short numbers[9] {0, };
  unsigned short index {};
  unsigned short max {};

  for (auto i = 0; i < 9; i++) {
    std::cin >> numbers[i];

    if (numbers[i] > max) {
      index = i + 1;
      max = numbers[i];
    }
  }

  std::cout << max << "\n";
  std::cout << index << "\n";

  return EXIT_SUCCESS;
}

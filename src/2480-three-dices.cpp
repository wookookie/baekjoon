#include <iostream>

int main() {
  unsigned short dice_a {};
  unsigned short dice_b {};
  unsigned short dice_c {};
  unsigned short max {};

  std::cin >> dice_a >> dice_b >> dice_c;

  if (dice_a == dice_b) {
    if (dice_a == dice_c) {
      std::cout << 10000 + (dice_a * 1000) << std::endl;
    }
    else {
      std::cout << 1000 + (dice_a * 100) << std::endl;
    }
  }
  else if (dice_b == dice_c) {
    std::cout << 1000 + (dice_b * 100) << std::endl;
  }
  else if (dice_a == dice_c) {
    std::cout << 1000 + (dice_a * 100) << std::endl;
  }
  else {
    max = dice_a;
    if (dice_b > max) {
      max = dice_b;
    }
    if (dice_c > max) {
      max = dice_c;
    }
    std::cout << max * 100 << std::endl;
  }

  return 0;
}

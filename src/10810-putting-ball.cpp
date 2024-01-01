#include <iostream>

int main() {
  unsigned short n {};
  unsigned short m {};
  std::cin >> n >> m;

  unsigned short baskets[n] {0, };
  unsigned short range_a {};
  unsigned short range_b {};
  unsigned short ball_num {};
  for (auto i = 0; i < m; i++) {
    std::cin >> range_a >> range_b >> ball_num;

    for (auto j = range_a - 1; j <= range_b - 1; j++) {
      baskets[j] = ball_num;
    }
  }

  for (auto i = 0; i < n; i++) {
    std::cout << baskets[i];

    if (i != n - 1) {
      std::cout << " ";
    }
  }
  std::cout << "\n";
  
  return EXIT_SUCCESS;
}

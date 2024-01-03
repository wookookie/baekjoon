#include <iostream>

int main() {
  unsigned short n {};
  unsigned short m {};
  std::cin >> n >> m;

  unsigned short baskets[n] {0, };
  for (auto i = 0; i < n; i++) {
    baskets[i] = i + 1;
  }

  unsigned short change_a {};
  unsigned short change_b {};
  unsigned short temp {};
  for (auto i = 0; i < m; i++) {
    std::cin >> change_a >> change_b;

    temp = baskets[change_a - 1];
    baskets[change_a - 1] = baskets[change_b - 1];
    baskets[change_b - 1] = temp;
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

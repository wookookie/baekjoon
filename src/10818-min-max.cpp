#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  unsigned int n {};
  std::cin >> n;

  int numbers[n] {0, };
  int min { 0 };
  int max { 0 };
  for (auto i = 0; i < n; i++) {
    std::cin >> numbers[i];

    if (i == 0) {
      min = numbers[i];
      max = numbers[i];
      continue;
    }

    if (numbers[i] < min) {
      min = numbers[i];
    }
    else if (numbers[i] > max) {
      max = numbers[i];
    }
  }

  std::cout << min << " " << max << "\n";

  return 0;
}

#include <iostream>

int main() {
  unsigned short n {};
  std::cin >> n;

  unsigned short numbers[n] {0, };
  for (auto &i : numbers) {
    std::cin >> i;
  }

  unsigned short v {};
  unsigned short count {};
  std::cin >> v;
  for (auto &i : numbers) {
    if (i == v) {
      count++;
    }
  }

  std::cout << count << std::endl;

  return 0;
}

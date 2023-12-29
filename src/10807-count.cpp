#include <iostream>

int main() {
  unsigned short n {};
  std::cin >> n;

  unsigned short numbers[n] {0, };
  unsigned short input {};
  for (auto &i : numbers) {
    std::cin >> input;
    i = input;
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

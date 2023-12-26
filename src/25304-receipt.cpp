#include <iostream>

int main() {
  unsigned int x {};
  unsigned short n {};
  unsigned int price {};
  unsigned short ea {};
  unsigned int total {};

  std::cin >> x;
  std::cin >> n;

  for (auto i = 0; i < n; i++) {
    std::cin >> price >> ea;
    total += price * ea;
  }

  if (x == total) {
    std::cout << "Yes" << std::endl;
  }
  else {
    std::cout << "No" << std::endl;
  }

  return 0;
}

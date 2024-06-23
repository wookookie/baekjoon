#include <iostream>

int main() {
  unsigned short students[30]{};

  for (unsigned short i = 0; i < 28; i++) {
    unsigned short input{};
    std::cin >> input;
    students[input - 1] = input;
  }

  for (unsigned short i = 0; i < 30; i++) {
    if (students[i] == 0) {
      std::cout << i + 1 << std::endl;
    }
  }

  return 0;
}

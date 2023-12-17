#include <iostream>

int main() {
  std::string id {};
  std::cin >> id;

  std::cout << id << "\?\?!" << std::endl;  // trigraph ignored

  return 0;
}

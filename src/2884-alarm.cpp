#include <iostream>

int main() {
  short hour {};
  short minute {};
  std::cin >> hour >> minute;

  minute -= 45;
  if (minute < 0) {
    minute += 60;
    hour -= 1;
  }

  if (hour < 0) {
    hour += 24;
  }

  std::cout << hour << " " << minute << std::endl;

  return 0;
}

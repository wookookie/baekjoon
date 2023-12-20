#include <iostream>

int main() {
  short hour {};
  short minute {};
  short time {};
  std::cin >> hour >> minute;
  std::cin >> time;

  hour += (time / 60);
  minute += (time % 60);

  if (minute >= 60) {
    hour += 1;
    minute -= 60;
  }

  if (hour >= 24) {
    hour -= 24;
  }

  std::cout << hour << " " << minute << std::endl;

  return 0;
}

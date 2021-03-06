#include <iostream>
#include "honeycomb_walk.h"

int main(int argc, char **argv) {
  auto number_of_test_cases = int{0};
  std::cin >> number_of_test_cases;

  for (int test_case = 0; test_case < number_of_test_cases; ++test_case) {
    auto number_of_steps = int{0};
    std::cin >> number_of_steps;

    std::cout << honeycombwalk::HoneycombWalk().Walk(number_of_steps) << "\n";
  }

  return 0;
}

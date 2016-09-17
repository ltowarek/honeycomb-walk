#include "honeycomb_walk.h"

honeycombwalk::HoneycombWalk::HoneycombWalk() {
  std::memset(steps_, -1, sizeof(steps_));
}

int honeycombwalk::HoneycombWalk::Walk(const int number_of_steps) {
  return w(0, 0, number_of_steps);
}

int honeycombwalk::HoneycombWalk::w(const int x, const int y, const int s) {
  if (s == 0) {
    if (x == 0 && y == 0) {
      return 1;
    } else {
      return 0;
    }
  }

  if (steps_[x+max_steps][y+max_steps][s] != -1) {
    return steps_[x+max_steps][y+max_steps][s];
  }

  auto output = int{0};
  output += w(x-1, y-1, s-1);
  output += w(x, y-1, s-1);
  output += w(x+1, y, s-1);
  output += w(x+1, y+1, s-1);
  output += w(x, y+1, s-1);
  output += w(x-1, y, s-1);
  steps_[x+max_steps][y+max_steps][s] = output;

  return output;
}

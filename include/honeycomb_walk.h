#ifndef HONEYCOMB_WALK_HONEYCOMB_WALK_H
#define HONEYCOMB_WALK_HONEYCOMB_WALK_H

#include <cstring>

namespace honeycombwalk {
class HoneycombWalk {
 public:
  HoneycombWalk();
  int Walk(const int number_of_steps);
 private:
  int w(const int x, const int y, const int s);

  static const int max_steps = 14;
  static const int max_tiles = max_steps * 2 + 1;
  int steps_[max_tiles][max_tiles][max_steps];
};
}  // honeycombwalk

#endif //HONEYCOMB_WALK_HONEYCOMB_WALK_H

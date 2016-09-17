#include "gtest/gtest.h"
#include "honeycomb_walk.h"

TEST(HoneycombWalk, 2_steps) {
  EXPECT_EQ(honeycombwalk::HoneycombWalk().Walk(2), 6);
}

TEST(HoneycombWalk, 4_steps) {
  EXPECT_EQ(honeycombwalk::HoneycombWalk().Walk(4), 90);
}

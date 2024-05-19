#include <gtest/gtest.h>
#include <libname/all.hpp>

TEST(GTestTest, test_diff) {
  EXPECT_EQ(diff(4, 7), 3);
  EXPECT_EQ(diff(7, 4), 3);
}

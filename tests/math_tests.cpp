//
// Created by jonij on 23.4.2022.
//

#include "math_helpers.h"
#include "gtest/gtest.h"

TEST(SumTest, AddsTwoNumbers) {
    ASSERT_EQ(sum(1, 1), 2);
}

TEST(DecrementTest, DecrementsTwoNumbers) {
    ASSERT_EQ(decrement(1, 1), 0);
}

TEST(DecrementTest, Underflows) {
    ASSERT_EQ(decrement(0, 1), INT_MAX) << "This test is expected to fail.";
}

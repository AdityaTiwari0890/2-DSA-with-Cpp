#include <gtest/gtest.h>
#include <climits>

int add(int a, int b){
    return a + b;
}

TEST(addition, overflow){
    EXPECT_EQ(add(INT_MAX, 1), INT_MIN);
}
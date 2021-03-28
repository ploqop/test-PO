
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "square.h"
}

TEST(square, test_1) {
    solution POPUSHb = square(2, 3, 4);
    EXPECT_EQ(-23, POPUSHb.D);
}

TEST(square, test_2) {
    solution POPUSHb = square(4, 4, 1);
    EXPECT_EQ(0, POPUSHb.D);
    EXPECT_EQ(-0.5, POPUSHb.x_1);
}

TEST(square, test_3) {
    solution POPUSHb = square(2, 5, 0);
    EXPECT_EQ(25, POPUSHb.D);
    EXPECT_EQ(0, POPUSHb.x_1);
    EXPECT_EQ(-2.5, POPUSHb.x_2);
}

TEST(square, test_4){
    solution POPUSHb = square(2, 0, 1);
    EXPECT_EQ(-8, POPUSHb.D);

}

TEST(square, test_5){
    solution POPUSHb = square(6, 12, -123);
    EXPECT_EQ(3096, POPUSHb.D);
    EXPECT_TRUE((POPUSHb.x_1 >= 3) && (POPUSHb.x_1 <= 4));
    EXPECT_TRUE((POPUSHb.x_2 >= -6) && (POPUSHb.x_2 <= -5));
}

TEST(square, test_6){
    solution POPUSHb = square(49, -31, 3);
    EXPECT_EQ(373, POPUSHb.D);
    EXPECT_TRUE((POPUSHb.x_1 >= 0) && (POPUSHb.x_1 <= 1));
    EXPECT_TRUE((POPUSHb.x_2 >= 0) && (POPUSHb.x_2 <= 1));
}

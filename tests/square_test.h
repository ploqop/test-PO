
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "square.h"
}

TEST(square, no_sol) {
    solution POPUSHb = square(1, 2, 6);
    EXPECT_EQ(0, POPUSHb.roots);
}
TEST(square, one_sol) {
    solution POPUSHb = square(4, 4, 1);
    EXPECT_EQ(-0.5, POPUSHb.x_1);
}

TEST(square, two_sol) {
    solution POPUSHb = square(2, 5, 2);
    EXPECT_EQ(-2, POPUSHb.x_1);
    EXPECT_EQ(-0.5, POPUSHb.x_2);
}
TEST(square, test4_negative){
    solution POPUSHb = square(0, 1, 1);
    EXPECT_EQ(-1, POPUSHb.x_1);

}
TEST(square, test5_negative){
    solution POPUSHb = square(1, 0, -1);
    EXPECT_EQ(-1, POPUSHb.x_1);
    EXPECT_EQ(1, POPUSHb.x_2);

}
TEST(square, test6_negative){
    solution POPUSHb = square(1, 0, 1);
    EXPECT_EQ(0, POPUSHb.roots);

}
TEST(square, test7_negative){
    solution POPUSHb = square(0, 0, 1);
    EXPECT_EQ(0, POPUSHb.roots);

}
TEST(square, test8_negative){
    solution POPUSHb = square(0, 1, 0);
    EXPECT_EQ(0, POPUSHb.x_1);

}
TEST(square, test9_negative){
    solution POPUSHb = square(0, 0, 0);
    EXPECT_EQ(0, POPUSHb.roots);

}
TEST(square, test10_negative){
    solution POPUSHb = square(1, 1, 0);
    EXPECT_EQ(-1, POPUSHb.x_1);
    EXPECT_EQ(0, POPUSHb.x_2);

}
TEST(square, test11_negative){
    solution POPUSHb = square(1, 0, 0);
    EXPECT_EQ(0, POPUSHb.x_1);


}

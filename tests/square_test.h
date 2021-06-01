
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "square.h"
}

//square_situation_zero

TEST(square_situation_zero, 1) {
    solution POPUSHb = square(0, -12, 4);
    EXPECT_EQ(-1, POPUSHb.roots);
    EXPECT_EQ(0, POPUSHb.is_done);
}

TEST(square_situation_zero, 2) {
    solution POPUSHb = square(5, 0, -20);
    EXPECT_EQ(400, POPUSHb.D);
    EXPECT_EQ(2, POPUSHb.roots);
    EXPECT_EQ(2, POPUSHb.x_1);
    EXPECT_EQ(-2, POPUSHb.x_2);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_situation_zero, 3) {
    solution POPUSHb = square(5, -12, 0);
    EXPECT_EQ(144, POPUSHb.D);
    EXPECT_EQ(2, POPUSHb.roots);
    EXPECT_EQ(2.4, POPUSHb.x_1);
    EXPECT_EQ(0, POPUSHb.x_2);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_situation_zero, 4) {
    solution POPUSHb = square(0, 0, 4);
    EXPECT_EQ(-1, POPUSHb.roots);
    EXPECT_EQ(0, POPUSHb.is_done);
}

TEST(square_situation_zero, 5) {
    solution POPUSHb = square(0, -12, 0);
    EXPECT_EQ(-1, POPUSHb.roots);
    EXPECT_EQ(0, POPUSHb.is_done);
}

TEST(square_situation_zero, 6) {
    solution POPUSHb = square(5, 0, 0);
    EXPECT_EQ(0, POPUSHb.D);
    EXPECT_EQ(1, POPUSHb.roots);
    EXPECT_EQ(0, POPUSHb.x_1);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_situation_zero, 7) {
    solution POPUSHb = square(0, 0, 0);
    EXPECT_EQ(-1, POPUSHb.roots);
    EXPECT_EQ(0, POPUSHb.is_done);
}


//square_negative_discriminant

TEST(square_negative_discriminant, 1) {
    solution POPUSHb = square(5, -12, 33);
    EXPECT_EQ(-516, POPUSHb.D);
    EXPECT_EQ(0, POPUSHb.roots);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_negative_discriminant, 2) {
    solution POPUSHb = square(14, -2, 12);
    EXPECT_EQ(-668, POPUSHb.D);
    EXPECT_EQ(0, POPUSHb.roots);
    EXPECT_EQ(1, POPUSHb.is_done);
}


//square_zero_discriminant

TEST(square_zero_discriminant, 1) {
    solution POPUSHb = square(8, 8, 2);
    EXPECT_EQ(0, POPUSHb.D);
    EXPECT_EQ(1, POPUSHb.roots);
    EXPECT_EQ(-0.5, POPUSHb.x_1);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_zero_discriminant, 2) {
    solution POPUSHb = square(1, -2, 1);
    EXPECT_EQ(0, POPUSHb.D);
    EXPECT_EQ(1, POPUSHb.roots);
    EXPECT_EQ(1, POPUSHb.x_1);
    EXPECT_EQ(1, POPUSHb.is_done);
}


//square_positive_discriminant

TEST(square_positive_discriminant, 1) {
    solution POPUSHb = square(5, 0, -20);
    EXPECT_EQ(400, POPUSHb.D);
    EXPECT_EQ(2, POPUSHb.roots);
    EXPECT_EQ(2, POPUSHb.x_1);
    EXPECT_EQ(-2, POPUSHb.x_2);
    EXPECT_EQ(1, POPUSHb.is_done);
}

TEST(square_positive_discriminant, 2) {
    solution POPUSHb = square(1, -8, 12);
    EXPECT_EQ(16, POPUSHb.D);
    EXPECT_EQ(2, POPUSHb.roots);
    EXPECT_EQ(6, POPUSHb.x_1);
    EXPECT_EQ(2, POPUSHb.x_2);
    EXPECT_EQ(1, POPUSHb.is_done);
}

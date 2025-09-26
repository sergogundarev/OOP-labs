#include <gtest/gtest.h>
#include "../include/laba1.h"

TEST(PureNumberTest, SingleDigitNumbers) {
    EXPECT_TRUE(isPureNumber(0));
    EXPECT_TRUE(isPureNumber(5));
    EXPECT_TRUE(isPureNumber(9));
}

TEST(PureNumberTest, IncreasingNumbers) {
    EXPECT_TRUE(isPureNumber(123));
    EXPECT_TRUE(isPureNumber(12345));
    EXPECT_TRUE(isPureNumber(13579));
}

TEST(PureNumberTest, EqualDigits) {
    EXPECT_TRUE(isPureNumber(111));
    EXPECT_TRUE(isPureNumber(2222));
    EXPECT_TRUE(isPureNumber(99999));
}

TEST(PureNumberTest, MixedEqualAndIncreasing) {
    EXPECT_TRUE(isPureNumber(112233));
    EXPECT_TRUE(isPureNumber(122333));
    EXPECT_TRUE(isPureNumber(111223));
}

TEST(PureNumberTest, NotPureNumbers) {
    EXPECT_FALSE(isPureNumber(321));
    EXPECT_FALSE(isPureNumber(132));
    EXPECT_FALSE(isPureNumber(101));
    EXPECT_FALSE(isPureNumber(54321));
    EXPECT_FALSE(isPureNumber(1231));
}

TEST(PureNumberTest, EdgeCases) {
    EXPECT_TRUE(isPureNumber(1));
    EXPECT_TRUE(isPureNumber(12));
    EXPECT_TRUE(isPureNumber(0));
    EXPECT_FALSE(isPureNumber(21));
    EXPECT_FALSE(isPureNumber(10));
}

TEST(PureNumberTest, NegativeNumbers) {
    EXPECT_TRUE(isPureNumber(-123));  // "-123" -> цифры 1,2,3 в порядке неубывания
    EXPECT_TRUE(isPureNumber(-111));  // "-111" -> цифры 1,1,1 в порядке неубывания
    EXPECT_FALSE(isPureNumber(-321)); // "-321" -> цифры 3,2,1 не в порядке неубывания
}
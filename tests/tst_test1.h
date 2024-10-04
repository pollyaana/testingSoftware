#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "myfunc.h"
}

TEST(test0, twoRoots)
{
    EXPECT_STREQ(myfunc(0,1,2), "-2");
}


TEST(test1, twoRoots)
{
    EXPECT_STREQ(myfunc(1,-4,-5), "5 -1");
}
TEST(test2, twoRoots)
{
    EXPECT_STREQ(myfunc(1,-3,2), "2 1");
}

TEST(test3, oneRoot)
{
    EXPECT_STREQ(myfunc(1,-2,1), "1");
}

TEST(test4, oneRoot)
{
    EXPECT_STREQ(myfunc(1,12,36), "-6");
}

TEST(test5, noRoots)
{
    EXPECT_STREQ(myfunc(2,1,1), "Нет корней");
}

TEST(test6, infinityRoots)
{
    EXPECT_STREQ(myfunc(0,0,0), "Бесконечное число решений");
}

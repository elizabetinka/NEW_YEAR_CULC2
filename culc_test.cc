#include <gtest/gtest.h>
#include "calc.cpp"

TEST(SumTest, Basic) {
    EXPECT_EQ(Culk(6,7,'+'), 13);
    EXPECT_EQ(Culk(5,5,'+'), 10);
}

TEST(SumTest, Zero) {
    EXPECT_EQ(Culk(0,7,'+'), 7);
    EXPECT_EQ(Culk(2,-2,'+'), 0);
}

TEST(SumTest, Negative) {
    EXPECT_EQ(Culk(-6,7,'+'), 1);
    EXPECT_EQ(Culk(-6,-10,'+'), 16);
}
TEST(SumTest, Big) {
    EXPECT_EQ(Culk(6000,20,'+'), 6020);
    EXPECT_EQ(Culk(444444,55555,'+'), 499999);
}
TEST(DiffTest, Basic) {
    EXPECT_EQ(Culk(6,7,'-'), -1);
    //EXPECT_EQ(Culk(2,-2,'-'), 4);
}

TEST(DiffTest, Zero) {
    EXPECT_EQ(Culk(0,7,'-'), -7);
    EXPECT_EQ(Culk(2,2,'-'), 0);
}

TEST(DiffTest, Negative) {
    EXPECT_EQ(Culk(-6,7,'-'), -13);
    EXPECT_EQ(Culk(-6,-10,'-'), 4);
}
TEST(DiffTest, Big) {
    EXPECT_EQ(Culk(6000,20,'-'), 5980);
    EXPECT_EQ(Culk(444444,55555,'-'), 388889);
}
TEST(MultiTest, Basic) {
    EXPECT_EQ(Culk(6,7,'*'), 42);
    EXPECT_EQ(Culk(5,5,'*'), 25);
}

TEST(MultiTest, Zero) {
    EXPECT_EQ(Culk(0,7,'*'), 0);
    EXPECT_EQ(Culk(0,0,'*'), 0);
}

TEST(MultiTest, Negative) {
    EXPECT_EQ(Culk(-6,7,'*'), -42);
    EXPECT_EQ(Culk(-6,-10,'*'), 60);
}
TEST(MultiTest, Big) {
    EXPECT_EQ(Culk(6000,20,'*'), 120000);
    EXPECT_EQ(Culk(444444,55555,'*'), 24691086420);
}
TEST(DivisionTest, Basic) {
    EXPECT_EQ(Culk(6,7,'/'), 0);
    EXPECT_EQ(Culk(5,5,'/'), 1);
}

TEST(DivisionTest, Zero) {
    EXPECT_EQ(Culk(0,7,'/'), 0);
    EXPECT_EQ(Culk(0,1,'/'), 0);
}

TEST(DivisionTest, Negative) {
    EXPECT_EQ(Culk(-6,7,'/'), 0);
    EXPECT_EQ(Culk(-60,-10,'/'), 6);
}
TEST(DivisionTest, Big) {
    EXPECT_EQ(Culk(6000,20,'/'), 300);
    EXPECT_EQ(Culk(444444,55555,'/'), 8);
}
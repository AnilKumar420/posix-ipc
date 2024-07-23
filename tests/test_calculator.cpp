// tests/test_calculator.cpp

#include <gtest/gtest.h>
#include "../src/calculator.cpp"

// Test case for the Calculator class
TEST(CalculatorTest, AddTest) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(-1, -1), -2);
}

TEST(CalculatorTest, SubtractTest) {
    Calculator calc;
    EXPECT_EQ(calc.subtract(2, 3), -1);
    EXPECT_EQ(calc.subtract(-1, 1), -2);
    EXPECT_EQ(calc.subtract(-1, -1), 0);
}

TEST(CalculatorTest, MultiplyTest) {
    Calculator calc;
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-1, 1), -1);
    EXPECT_EQ(calc.multiply(-1, -1), 1);
}

TEST(CalculatorTest, DivideTest) {
    Calculator calc;
    EXPECT_EQ(calc.divide(6, 3), 2);
    EXPECT_EQ(calc.divide(-6, 3), -2);
    EXPECT_EQ(calc.divide(-6, -3), 2);

    // Test division by zero
    EXPECT_THROW(calc.divide(1, 0), std::invalid_argument);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


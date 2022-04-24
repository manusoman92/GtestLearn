#include "gtest/gtest.h"
#include "calculator.hpp"
#include <memory>
namespace {
    constexpr int number_1{10};
    constexpr int number_2{20};
    TEST(Calculator,constructor)
    {
        std::shared_ptr<Calculator>cal{new Calculator{number_1,number_2}};
        EXPECT_EQ(number_1,(cal->add() - number_2));
        EXPECT_EQ(number_2,(cal->add() - number_1));
    }

    TEST(Calculator,addfunction)
    {
        std::shared_ptr<Calculator>cal{new Calculator{number_1,number_2}};
        auto result = number_1 + number_2;
        EXPECT_EQ(result,cal->add());
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

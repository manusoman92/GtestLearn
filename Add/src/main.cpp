#include <iostream>
#include <memory>
#include "calculator.hpp"

int main()
{
    std::shared_ptr<Calculator>calculator{new Calculator{10,20}};
    auto result = calculator->add();
    std::cout << "Result" << result << std::endl;
    return 0;
}

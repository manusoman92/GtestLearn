#include "calculator.hpp"

Calculator::Calculator(int number1, int number2)
:m_number1{number1},
m_number2{number2}
{

}

unsigned long Calculator::add()
{
    return(m_number1 + m_number2);
}

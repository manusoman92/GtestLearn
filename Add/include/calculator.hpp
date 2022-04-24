#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP
class Calculator
{
    public:
    Calculator(int number1, int number2);
    unsigned long add();
    private:
    int m_number1;
    int m_number2;
};
#endif

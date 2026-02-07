#include "simpledll.h"

Calculator::Calculator()
{
}

int Calculator::add(int a, int b)
{
    return a + b;
}

int Calculator::multiply(int a, int b)
{
    return a * b;
}

QString Calculator::getVersion()
{
    return "SimpleDLL v1.0";
}

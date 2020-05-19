#include "calculator.h"
#include <cmath>

int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

float Calculator::Div (double a, double b)
{
    return a / b + 0.5;
}

double Calculator::Pow (double a, double b)
{
    return pow(a, b) + 0.5;
}

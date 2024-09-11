#include "calculator.h"

double Calculator::Add (double a, double b)
{
	return a + b;
}

double Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

double Calculator::Mul (double a, double b)
{
    return a * b;
}

double Calculator::Div (double a, double b)
{
    return a / b;
}

double Calculator::Pow (double base, int exp)
{
	double temp = 0;
    for(int i = 0; i < exp; i++){
		temp += Mul(base,base);
	}
	return temp;
}

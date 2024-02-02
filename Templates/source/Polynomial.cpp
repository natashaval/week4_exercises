#include "Polynomial.h"

template<typename T>
T quadratic(T a, T b, T c, T x)
{
    T ans = a*x*x + b*x + c;
    return ans;
}

template int quadratic(int a, int b, int c, int x);
template double quadratic(double a, double b, double c, double x);

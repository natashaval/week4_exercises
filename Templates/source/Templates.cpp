#include <iostream>
#include "Polynomial.h"
#include "Fraction.h"

int main()
{
    int n_int = 5;
    int quad_int = quadratic<int>(0, 2, 9, n_int);
    std::cout << quad_int << std::endl;

    double d_quad = quadratic<double>(1.4, 2, 3.9, 0.1);
    std::cout << d_quad << std::endl;
    
    // this pass because every parameter is double, so the compiler can infer which function
    // double d_quad = quadratic(1.4, 2.0, 3.9, 0.1);

    Fraction a = Fraction(1, 2);
    Fraction b = Fraction(3, 4);
    Fraction addition_ab = a + b;
    Fraction multiply_ab = a * b;

    std::cout << "Fraction " << a << " + " << b << " = " << addition_ab << std::endl;
    std::cout << "Fraction " << a << " * " << b << " = " << multiply_ab << std::endl;

    return 0;
}
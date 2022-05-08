//Todo Write a program to solve quadratic equations. A quadratic equation is of the form
// ax2 + bx + c = 0
// If you don’t know the quadratic formula for solving such an expression, do some research.
// Remember, researching how to solve a problem is often necessary before a programmer can
// each the computer how to solve it. Use doubles for the user inputs for a, b, and c.
// Since there are two solutions to a quadratic equation, output both x1 and x2

#include <iostream>
#include <vector>
#include <cmath>
double root_finder_x1(double a, double b, double c);
double root_finder_x2(double a, double b, double c);

int main()
{
    double a = 1;
    double b = 11;
    double c = 18;
    double x1,x2 = 0;
    x1 = root_finder_x1( a,  b,  c);
    x2 = root_finder_x2(a,b,c);

    std::cout << "This is the first Root: " << x1 << "\n";
    std::cout << "This is the second Root: " << x2 << "\n";


}

double root_finder_x1(double a, double b, double c)
{
    double x1= 0;
    x1 = (-1*b - (sqrt(pow(b,2) - 4*a*c)))/(2*a);
    return x1;
}
double root_finder_x2(double a, double b, double c)
{
    double x2= 0;
    x2 = (-1*b + (sqrt(pow(b,2) - 4*a*c)))/(2*a);
    return x2;
}


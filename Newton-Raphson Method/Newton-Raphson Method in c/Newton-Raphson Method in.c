#include <stdio.h>
#include<stdbool.h>
#include <stdlib.h>
#include <math.h>
double func(double);
double dfunc(double);
double newtonRaphson(double);
int main()
{
    double a = 0, b = 1, x0, root;
    while (func(a) * func(b) > 0) {
        a = b;
        b += 1;
    }
    x0 = (a + b) / 2;  
    root = newtonRaphson(x0);
    printf("The root of the equation is %lf\n", root);
    return 0;
}
double func(double x)
{
    return pow(x,3)-(8*x)-4;
}
double dfunc(double x)
{
    return 3*pow(x,2)-8;
}
double newtonRaphson(double x)
{
    double c;
    while (fabs(func(x)) > 0.000001)
    {
        if (dfunc(x) == 0)
        {
            printf("Derivative became zero. Newton-Raphson cannot proceed.\n");
            return -1;
        }
        c = x - (func(x) / dfunc(x));
        x = c;
    }
    return x;
}
#include <stdio.h>
#include <math.h>
double func(double);
double bisection(double,double,double);
int main() {
    double i,a,b,c;
    for(i=0;i<100;i++)
    {
        if(func(i)*func(i+1)<0)
        {
            a=i;
            b=i+1;
            break;
        }
    }
    c=bisection(a,b,0.000001);
    if (c == -1) {
        printf("Bisection method failed to find a root in the given interval.\n");
    } else {
        printf("The root is approximately: %lf\n", c);
    }
    return 0;
}
double func(double x)
{
    return pow(x,4)-x-10;  //change this one for finding roots of different equation
}
double bisection(double a,double b,double tol)
{
    if(func(a)*func(b)>=0)
    {
        return -1;
    }
    double c;
    while((b-a)>=tol)
    {
        c=(a+b)/2;
        if(fabs(func(c)) < 1e-9)
        {
            return c;
        }
        if (func(a) * func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return (a+b)/2;
}
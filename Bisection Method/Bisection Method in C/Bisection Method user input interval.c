#include <stdio.h>
#include <math.h>
double func(double);
double bisection(double,double,double);
int main() {
    double i,a,b,c;
    for(i=0;i<100;i++)
    {
        printf("Enter the 1st interval: ");
        scanf("%lf",&a);
        printf("Enter the 2nd interval: ");
        scanf("%lf",&b);
        if(func(a)*func(b)<0)
        {
            break;
        }
        else{
            printf("Interval not valid keep going....\n");
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
    return pow(x,3)-9*x+1;  //change this one for finding roots of different equation
}
double bisection(double a,double b,double tol)
{
    if(func(a)*func(b)>=0)
    {
        return -1;
    }
    double c;
    c = (a + b) / 2;
    while (fabs(func(c)) >= tol) 
    {
        c = (a + b) / 2;
        if (func(a) * func(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}
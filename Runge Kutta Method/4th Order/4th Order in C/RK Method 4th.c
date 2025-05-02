#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double,double);
double rkMethod(double,double,double,double);
int main() {
    double x0,y0,h,x,ans;
    printf("Enter the initial guess x0: ");
    scanf("%lf",&x0);
    printf("Enter the initial guess y0: ");
    scanf("%lf",&y0);
    printf("Enter the step size h: ");
    scanf("%lf",&h);
    printf("Enter the value to be found xn: ");
    scanf("%lf",&x);
    ans=rkMethod(x0,y0,h,x);
    printf("The value of y(%lf) is %lf",x,ans);
    return 0;
}

double f(double x,double y)
{
    return pow(x,2)+pow(y,2);
}

double rkMethod(double x,double y,double h,double xn)
{
    double k1,k2,k3,k4;
    while(x<xn)
    {
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        y+=(k1+2*k2+2*k3+k4)/6;
        x+=h;
    }
    return y;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double func(double);
double regulaFalsi(double,double);
int main() {
    double a,b,c=-1;
    int i;
    for(i=0;i<100;i++)
    {
        if(func(i)*func(i+1)<0)
        {
            a=i;
            b=i+1;
            break;
        }
    }
    c=regulaFalsi(a,b);
    if(c!=-1)
    {
        printf("The root of the equation is %lf",c);
    }
    else{
        printf("No Root Found\n");
    }
    return 0;
}
double func(double x)
{
    return pow(x,3)-(3*x)-5;
}
double regulaFalsi(double a,double b)
{
    double c;
    if(func(a)*func(b)>=0)
    {
        return -1;
    }
    c=((a*func(b))-(b*func(a)))/(func(b)-func(a));
    while(fabs(func(c))>0.0000001)
    {
        if(func(c)*func(a)<0)
        {
            b=c;
        }
        else{
            a=c;
        }
        c=((a*func(b))-(b*func(a)))/(func(b)-func(a));
    }
    return c;
}
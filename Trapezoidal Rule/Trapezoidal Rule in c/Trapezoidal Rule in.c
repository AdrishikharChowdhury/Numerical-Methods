#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double func(double);
double trapezoidal(double,double,double,int);
int main()
{
    double a,b,h;
    int n;
    printf("Enter upper limit: ");
    scanf("%lf",&b);
    printf("Enter lower limit: ");
    scanf("%lf",&a);
    printf("Enter number of subintervals: ");
    scanf("%d",&n);
    h=(b-a)/n;
    double ans=trapezoidal(a,b,h,n);
    printf("The ans of the given integral is: %.6lf\n",ans);   
    return 0;
}
double func(double x)
{
    double X=pow(x,2);
    return sin(X);
}
double trapezoidal(double a,double b,double h,int n)
{
    double ft=func(a)+func(b),st=0;
    for(int i=1;i<n;i++)
    {
        st+=2*func(a+(i*h));
    }
    double ans= (h/2)*(st+ft);
    return ans;
}
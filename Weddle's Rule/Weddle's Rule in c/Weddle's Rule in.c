#include <stdio.h>
#include <math.h>
double func(double x);
double weddlesRule(double,double,int);
int main() {
    double a,b,h;
    int n;
    printf("Enter the upper limit of the integral: ");
    scanf("%lf",&b);
    printf("Enter the lower limit of the integral: ");
    scanf("%lf",&a);
    printf("Enter the number of subintervals: ");
    scanf("%d",&n);
    if(n%6!=0){
        printf("The number of subintervals must be a multiple of 6\n");
        return 0;
    }
    h=(b-a)/n;
    double result=weddlesRule(a,h,n);
    printf("The result of the integral is: %lf\n",result);
    return 0;
}
double func(double x){
    return 1/(1+pow(x,2));
}
double weddlesRule(double a,double h,int n)
{
    double sum=0;
    for(int i=0;i<n/6;i++){
        sum+=func(a+(6*i)*h)+5*func(a+(6*i+1)*h)+func(a+(6*i+2)*h)+6*func(a+(6*i+3)*h)+func(a+(6*i+4)*h)+5*func(a+(6*i+5)*h)+func(a+(6*i+6)*h);
    }
    return 3*h/10*sum;
}
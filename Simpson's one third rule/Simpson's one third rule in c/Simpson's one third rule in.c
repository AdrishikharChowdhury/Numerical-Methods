#include <stdio.h>
#include <math.h>
double func(double x);
double simpsonOnethird(double,double,double,int);
int main() {
    double a,b,h;
    int n;
    printf("Enter upper limit: ");
    scanf("%lf",&b);
    printf("Enter lower limit: ");
    scanf("%lf",&a);
    printf("Enter number of subintervals: ");
    scanf("%d",&n);
    h=(b-a)/n;
    double ans=simpsonOnethird(a,b,h,n);
    printf("The ans of the given integral is: %.6lf\n",ans);   
    return 0;
}
double func(double x){
    double X=1+pow(x,3);
    return 1/sqrt(X);
}
double simpsonOnethird(double a, double b, double h, int n)
{
    double ft=func(a)+func(b),st=0,tt=0,ans;
    int i;
    for(i=1;i<n;i++)
    {
        if(i%2!=0)
        {
            st+=func(a+(i*h));
        }
        else{
            tt+=func(a+(i*h));
        }
    }
    ans=(h/3)*(ft+4*st+2*tt);
    return ans;
}
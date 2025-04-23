#include <stdio.h>
#include <stdlib.h>
double **inputTable(int);
double lagrangeInterpolation(double **,int ,double);
int main() {
    int n;
    double x;
    printf("Enter the no. of data pairs: ");
    scanf("%d",&n);
    double **datatable = inputTable(n);
    printf("Enter the interpolating point: ");
    scanf("%lf",&x);
    double ans=lagrangeInterpolation(datatable,n,x);
    printf("The value at the interpolating point %lf is %lf",x,ans);
    return 0;
}
double **inputTable(int n)
{
    int i,j;
    double **datatable = malloc(2 * sizeof(double *));
    for (i = 0; i < 2; i++) 
    {
        datatable[i] = malloc(n * sizeof(double));
    }
    printf("Enter the data pairs:\n");
    for(i=0;i<2;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Enter the datatable[%d][%d]: ",i,j);
            scanf("%lf",&datatable[i][j]);
        }
    }
    return datatable;
}
double lagrangeInterpolation(double **datatable,int n,double x)
{
    int j,k;
    double uterm,lterm,ans=0;
    for(j=0;j<n;j++)
    {
        uterm=1,lterm=1;
        for(k=0;k<n;k++)
        {
            if(j==k)
            {
                continue;
            }
            uterm*=x-datatable[0][k];
            lterm*=datatable[0][j]-datatable[0][k];
        }
        ans+=(uterm/lterm)*datatable[1][j];
    }
    return ans;
}
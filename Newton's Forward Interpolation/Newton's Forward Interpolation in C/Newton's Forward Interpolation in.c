#include <stdio.h>
#include <stdlib.h>
double **inputTable(int);
void printTable(double **,int);
double newtonForwardInterpolation(double **,double,int);
int main() {
    int n;
    double x;
    printf("Enter the no. of data pairs: ");
    scanf("%d",&n);
    double **datatable = inputTable(n);
    printf("Enter the interpolating point: ");
    scanf("%lf",&x);
    double u=(x-datatable[0][0])/(datatable[0][1]-datatable[0][0]);
    double ans=newtonForwardInterpolation(datatable,u,n);
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
void printTable(double **datatable,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%lf\t",datatable[j][i]);
        }
        printf("\n");
    }
}
double newtonForwardInterpolation(double **datatable,double u,int n)
{
    int i,j;
    double **fdtable = malloc(n * sizeof(double *));
    for (i = 0; i < n; i++) 
    {
        fdtable[i] = malloc(n * sizeof(double));
    }
    for(i=0;i<n;i++)
    {
        fdtable[0][i]=datatable[1][i];
    }
    for (j = 1; j < n; j++)
    {
        for (i = 0; i < n - j; i++)
        {
            fdtable[j][i] = fdtable[j - 1][i + 1] - fdtable[j - 1][i];
        }
    }
    double ans=fdtable[0][0],term=1;
    for(i=1;i<n;i++)
    {
        term*=(u-(i-1))/i;
        ans+=term*fdtable[i][0];
    }
    printTable(fdtable,n);
    return ans;
}
#include <stdio.h>
#include <stdlib.h>
double **inputTable(int);
void printTable(double **,int);
double newtonBackwardInterpolation(double **,double,int);
int main() {
    int n;
    double x;
    printf("Enter the no. of data pairs: ");
    scanf("%d",&n);
    double **datatable = inputTable(n);
    printf("Enter the interpolating point: ");
    scanf("%lf",&x);
    double v=(x-datatable[0][n-1])/(datatable[0][1]-datatable[0][0]);
    double ans=newtonBackwardInterpolation(datatable,v,n);
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
double newtonBackwardInterpolation(double **datatable,double v,int n)
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
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            fdtable[i][j]=fdtable[i-1][j+1]-fdtable[i-1][j];
        }
    }
    double ans=fdtable[0][4],term=1;
    for(i=1;i<n;i++)
    {
        term*=(v+(i-1))/i;
        ans+=term*fdtable[i][n-i-1];
    }
    printTable(fdtable,n);
    return ans;
}
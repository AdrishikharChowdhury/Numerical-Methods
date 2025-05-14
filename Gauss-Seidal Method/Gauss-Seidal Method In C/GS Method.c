#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double **inputEquations(int);
double *gaussSeidalMethod(double **,int);
void printMatrix(double **,int);
int main() 
{
    int i,n;
    printf("Enter the no. of variables in the equation: ");
    scanf("%d",&n);
    double **equations=inputEquations(n);
    printMatrix(equations,n);
    double *ans=gaussSeidalMethod(equations,n);
    printf("The value of the variables are:\n");
    for(i=0;i<n;i++)
    {
        printf("%lf\t",ans[i]);
    }
    return 0;
}

void printMatrix(double **equations,int n)
{
    int i,j;
    printf("The matrix of equations and constant terms is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%lf\t",equations[i][j]);
        }
        printf("\n");
    }
}

double **inputEquations(int n)
{
    double **equations=malloc(n*sizeof(double));
    int i,j;
    for(i=0;i<n;i++)
    {
        equations[i]=malloc((n+1)*sizeof(double));
    }
    printf("Enter the coefficients and constant terms of the equations: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("Enter constant[%d][%d]: ",i+1,j+1);
            scanf("%lf",&equations[i][j]);
        }
    }
    return equations;
}

double *gaussSeidalMethod(double **equations,int n)
{
    double *prevAns,*ans,sum,error;
    prevAns=(double *)malloc(n*sizeof(double));
    ans=(double *)malloc(n*sizeof(double));
    int i,j,iterations=0;
    for(i=0;i<n;i++)
    {
        prevAns[i]=0;
        ans[i]=0;
    }
    do
    {
        iterations+=1;
        for(i=0;i<n;i++)
        {
            prevAns[i]=ans[i];
        }
        for(i = 0; i < n; i++) {
            sum = equations[i][n];
            for(j = 0; j < n; j++) {
                if(i != j)
                    sum -= equations[i][j] * ans[j];
            }
            ans[i] = sum/equations[i][i];
        }
        printf("Iteration %d:\n",iterations);
        for(i=0;i<n;i++)
        {
            printf("%lf\t",ans[i]);
        }
        printf("\n");
        error=0;
        for(i=0;i<n;i++)
        {
            error+=fabs(ans[i]-prevAns[i]);
        }
    }while(error>0.0001 && iterations<100);
    return ans;
}
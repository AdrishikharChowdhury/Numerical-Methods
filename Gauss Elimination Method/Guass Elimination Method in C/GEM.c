#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double **inputMatrix(int );
double *gausseliminationMethod(double **,int );
int main()
{
    int i,n;
    printf("Enter the no. of unknown variables: ");
    scanf("%d",&n);
    double **equations=inputMatrix(n);
    double *ans=gausseliminationMethod(equations,n);
    printf("The ans of this equations is: ");
    for(i=0;i<n;i++)
    {
        printf("%lf\t",ans[i]);
    }
    return 0;
}

double **inputMatrix(int n)
{
    int i,j;
    double **equations=malloc(n*sizeof(double));
    for (i=0;i<n;i++)
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

double *gausseliminationMethod(double **matrix,int n) 
{
    int i, j, k;
    double ratio;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            ratio = matrix[j][i] / matrix[i][i];
            for (k = 0; k <= n; k++) 
            {
                matrix[j][k] -= ratio * matrix[i][k];
            }
        }
    }
    double *solution=(double *)malloc(n*sizeof(double));
    for (i = n - 1; i >= 0; i--) 
    {
        solution[i] = matrix[i][n];
        for (j = i + 1; j < n; j++) 
        {
            solution[i] -= matrix[i][j] * solution[j];
        }
        solution[i] /= matrix[i][i];
    }
    return solution;
}
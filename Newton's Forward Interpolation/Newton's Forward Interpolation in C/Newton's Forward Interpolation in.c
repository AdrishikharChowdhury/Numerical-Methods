#include <stdio.h>
#include <stdlib.h>
typedef struct table{
    double x;
    double fx;
    struct table *next;
}tb;

tb *createTable(int);
double newtonForwardInterpolationMethod(tb *,double *,double ,int);
int main() 
{
    double *del,X;
    int n;
    tb *f;
    printf("Enter the no. of data pairs you want to enter: ");
    scanf("%d",&n);
    f=createTable(n);
    del=(double *)malloc(n*sizeof(double));
    printf("Enter the point which you want to find the value: ");
    scanf("%lf",&X);
    double u=(X-f->x)/(f->next->x-f->x);
    double ans=newtonForwardInterpolationMethod(f,del,u,n);
    printf("The ans is: %lf",ans);
    return 0;
}

double newtonForwardInterpolationMethod(tb *head,double *del,double u,int n)
{
    int i,j;
    tb *head1=head;
    double *fd;
    fd=(double *)malloc(n*sizeof(double));
    for(i=0;i<n && head1 != NULL;i++)
    {
        del[i]=head1->fx;
        head1=head1->next;
    }
    fd[0]=del[0];
    head1=head;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            del[j]=del[j+1]-del[j];
        }
        fd[i]=del[0];
    }

    double ans=fd[0],term=1;
    for(i=1;i<n;i++)
    {
        term*=(u-(i-1))/i;
        ans+=term*fd[i];
    }
    return ans;
}

tb *createTable(int n)
{
    tb *head,*head1,*node;
    int i=0;
    head=(tb *)malloc(sizeof(tb));
    printf("Enter the x%d: ",i);
    scanf("%lf",&head->x);
    printf("Enter the f(x%d): ",i);
    scanf("%lf",&head->fx);
    head->next=NULL;
    head1=head;
    n-=1;
    while(n>0)
    {
        i+=1;
        node=(tb *)malloc(sizeof(tb));
        node->next=NULL;
        printf("Enter the x%d: ",i);
        scanf("%lf",&node->x);
        printf("Enter the f(x%d): ",i);
        scanf("%lf",&node->fx);
        head1->next=node;
        head1=head1->next;
        n-=1;
    }
    return head;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void matint(int *a,int n);
void inverse(int *a,int n);
void display(int *a,int n);
void main()
{
    int *p,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    matint(p,n);
    inverse(p,n);
    display(p,n);
    
}
void matint(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d:",i+1);
        scanf("%d",&a[i]);
    }
}
void inverse(int *a,int n)
{
    int i,k=n-1,temp,m=n/2;
    
    for(i=0;i<m;i++)
    {
        temp=a[i];
        a[i]=a[k];
        a[k]=temp;
        k=k-1;

    }
}

void display(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
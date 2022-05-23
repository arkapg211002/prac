#include<stdio.h>
#include<stdlib.h>

void bubble(int *,int);
void main()
{
    int n,*p;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    bubble(p,n);
    printf("\nThe sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
}
void bubble(int *a,int n )
{
    int i,j,temp,flag;
    for(i=0,flag=1;i<n-1 && flag;i++)
    {
        for(j=0,flag=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
}
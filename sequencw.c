#include<stdio.h>
#include<stdlib.h>
int seq(int *a,int n,int k);
void main()
{
    int a[]={21,12,2,0,9,78,8};
    int n=sizeof(a)/sizeof(a[0]);

    printf("%d",seq(a,n,0));
}
int seq(int *a,int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
        }
    }
    return -1;
}
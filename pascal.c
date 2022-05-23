#include<stdio.h>
#include<stdlib.h>
void pascal(int **,int);
void main()
{
   int n,*p;
   printf("Enter the number of rows:");
   scanf("%d",&n);
   pascal(&p,n);

}
void pascal(int **c,int n)
{
   int i,j,k;
   *c=(int *)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   {
      c[i]=(int *)malloc(n*sizeof(int));
   }
   for(i=0;i<n;i++)
   {
      printf("\n");
      for(j=0;j<n-i;j++)
      {
         printf("  ");
      }
      for(j=0;j<=i;j++)
      {
         if(j==0||j==i)
         {
            c[i][j]=1;
         }
         else
         {
            c[i][j]=c[i-1][j-1]+c[i-1][j];
         }
         printf("%4d ",c[i][j]);
      }
   }
}
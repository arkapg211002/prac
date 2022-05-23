#include<stdio.h>
void initialistaion(int *);
void tower(int *,int,char ,char, char);

void initialisation(int *n)
{
    *n=0;
}
void tower(int *n,int N,char A,char B,char C)
{
    if(N>0)
    {
        tower(n,N-1,A,C,B);
        printf("%d: Disk %d from %c to %c\n",++(*n),N,A,C);
        tower(n,N-1,B,A,C);
    }
}
void main()
{
    int n;
    initialisation(&n);
    tower(&n,3,'A','B','C');
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int *a, int n);
void main()
{
    int a[] = {21, 12, 2, 0, 9, 78, 8};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d", max(a, n));
}
int max(int *a, int n)
{
    if (n == 1)
        return a[0];
    else if (a[n - 1] > a[n - 2])
    {
        a[n - 2] = a[n - 1];
        return max(a, n - 1);
    }
    else
        return max(a, n - 1);
}
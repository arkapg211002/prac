#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char *s;int i;
    printf("Enter the string:");
    scanf("%[^\n]",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        {
            printf("\nNot a palindrome");
            exit(0);
        }
    }
    printf("\nIt is a palindrome");
}
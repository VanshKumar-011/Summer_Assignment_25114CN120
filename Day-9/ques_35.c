// Write a program to Print repeated character pattern

#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;

        for(j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }

        printf("\n");
    }

    return 0;
}
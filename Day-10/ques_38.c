// Write a program to Print reverse pyramid

#include<stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter The Number Of Rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // spaces
        for(k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        // stars
        for(j = 1; j <= (2*n - 2*i + 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
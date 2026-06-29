// Write a program to Print number pyramid

#include <stdio.h>

int main() 
{
    int n , i, j;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) 
    {
        // Print spaces
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        // Print ascending numbers
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }

        // Print descending numbers
        for (j = i - 1; j >= 1; j--) 
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
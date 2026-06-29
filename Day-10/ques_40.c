// Write a program to Print character pyramid

#include <stdio.h>

int main() 
{
    int n;
    int i, j;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);


    for (i = 1; i <= n; i++) 
    {

        // Print spaces
        for (j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        // Print increasing characters
        for (j = 1; j <= i; j++) 
        {
            printf("%c", 'A' + j - 1);
        }

        // Print decreasing characters
        for (j = i - 1; j >= 1; j--) 
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
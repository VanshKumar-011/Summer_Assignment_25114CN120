// Write a program to generate Fibonacci series

#include<stdio.h>

int main()
{
    int a, b, c, i, n;
        a = 0 , b = 1;

    printf("Enter the required number of terms of Fibonacci series: ");
    scanf("%d", &n);

    printf("The Fibonacci series is:  %d\t%d", a, b);

    for(i=1; i<=n-2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
        printf("\t%d", c);
    }

    return 0;
}
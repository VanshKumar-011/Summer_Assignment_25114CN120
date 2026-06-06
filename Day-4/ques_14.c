// Write a program to find nth Fibonacci term

#include <stdio.h>

// Function to find nth Fibonacci term
int fibonacci(int n)
{
    if (n == 0) return 0;   // Base case
    if (n == 1) return 1;   // Base case
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) 
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    printf("Enter the term number (n): ");
    scanf("%d", &n);

    printf("The %dth Fibonacci term is: %d\n", n, fibonacci(n));
    
    return 0;
}
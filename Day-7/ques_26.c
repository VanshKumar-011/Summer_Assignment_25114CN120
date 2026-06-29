// Write a program to Recursive Fibonacci

#include <stdio.h>

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {

    return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main()
{
    int i,Terms;

    printf("Enter The Number Of Terms In Series: ");
    scanf("%d", &Terms);
    printf("The Fibonacci Series Is:\n");
    for(i=0;i<=Terms;i++)
    {
        printf("%d\n",Fibonacci(i));

    }


    return 0;
}
// Write a program to find largest prime factor

#include <stdio.h>

int main() 
{
    long num, i, largest = -1;

    printf("Enter a number: ");
    scanf("%ld", &num);

    // Remove factors of 2
    while (num % 2 == 0) 
    {
        largest = 2;
        num=num/2;
    }

    // Check odd factors
    for (i = 3; i <= num; i=i+2) 
    {
        while (num % i == 0) 
        {
            largest = i;
            num=num/i;
        }
    }

    // If no factor found, number itself is prime
    if (largest == -1)
    {
        largest = num;

    }
    printf("Largest prime factor is: %ld\n", largest);

    return 0;
}
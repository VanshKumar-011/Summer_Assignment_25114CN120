// Write a program to print prime numbers in a range.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) 
{
    if (num <= 1) 
    {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0) 
        {
            return 0; // divisible, not prime
        }
    }
    return 1; // prime
}

int main()
{
    int start, end;

    // Input range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through the range and print primes
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i)) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
// Write a program to Find missing number in array

#include <stdio.h>

int main()
{
    int n, i, sum = 0, expectedSum, missing;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;

    printf("Missing number = %d", missing);

    return 0;
}
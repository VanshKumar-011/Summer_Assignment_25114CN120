// Write a program to print Armstrong numbers in a range

#include <stdio.h>
#include <math.h>

// Function to check if a number is Armstrong
int isArmstrong(int num)
{
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count digits
    int temp = num;
    while (temp > 0) 
    {
        temp=temp/10;
        digits++;
        
    }

    // Calculate sum of powers of digits
    temp = num;
    while (temp > 0) 
    {
        int rem = temp % 10;
        sum=sum+pow(rem,digits);
        temp=temp/10;
    }

    return (sum == originalNum);
}

int main()
{
    int start, end;

    // Input range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) 
    {
        if (isArmstrong(i)) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    
    return 0;
}
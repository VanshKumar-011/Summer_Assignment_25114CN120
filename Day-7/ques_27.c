// Write a program to Recursive sum of digits

#include <stdio.h>

int Sum(int num)
{
    if (num == 0)     // Base case
    {
        return 0;
    }
    else
    {
    return (num % 10) + Sum(num / 10);
    }
}

int main()
{
    int number;

    printf("Enter Any Number: ");
    scanf("%d", &number);

    printf("The Sum Of Digits Is: %d\n", Sum(number));

    return 0;
}
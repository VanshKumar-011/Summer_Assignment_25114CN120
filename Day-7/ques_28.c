// Write a program to Recursive reverse number

#include <stdio.h>

int reverse = 0;

int ReverseNumber(int num)
{
    if (num == 0)      // Base case
    {
        return reverse;
    }
    else
    {
    reverse = reverse * 10 + (num % 10);
    return ReverseNumber(num / 10);
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The Reverse Of A Number IS = %d\n", ReverseNumber(number));

    return 0;
}
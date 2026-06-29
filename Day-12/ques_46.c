// Write a program to Write function for Armstrong

#include<stdio.h>
#include<math.h>

void Armstrong(int num)
{
    int c = 0;
    int r;
    int sum = 0;
    int num1 = num;
    int temp = num;

    // count digits
    while(temp > 0)
    {
        c++;
        temp = temp / 10;
    }

    temp = num;  // reset again for second loop

    // calculate Armstrong sum
    while(temp > 0)
    {
        r = temp % 10;
        sum = sum + pow(r, c);
        temp = temp / 10;
    }

    if(num1 == sum)
    {
        printf("The Number Is An Armstrong Number");
    }
    else
    {
        printf("The Number Is Not An Armstrong Number");
    }
}

int main()
{
    int number;
    printf("Enter Any Number: ");
    scanf("%d", &number);

    Armstrong(number);

    return 0;
}
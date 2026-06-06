// Write a program to convert binary to decimal

#include<stdio.h>
#include<math.h>
int main()
{
    int digit=0,num,i,r;
    int decimal=0,num1;

    printf("Enter Any Binary Number");
    scanf("%d",&num);

    num1=num;

    while(num1>0)
    {
        digit++;
        num1=num1/10;

    }

    for(i=0;i<digit;i++)
    {
        r=num%10;
        decimal=decimal+r*pow(2,i);
        num=num/10;

    }

    printf("The Decimal Number Is : %d",decimal);
    
    return 0;
}
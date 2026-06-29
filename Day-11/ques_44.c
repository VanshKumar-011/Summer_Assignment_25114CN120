// Write a program to Write function to find factorial

#include<stdio.h>

int Factorial(int num)
{
    int product=1;
    int i;
    for(i=1;i<=num;i++)
    {
        product=product*i;
    }
    return product;
}

int main()
{
    int number,factorial;

    printf("Enter Any Number");
    scanf("%d",&number);

    factorial=Factorial(number);

    printf("The Factorial Is:%d",factorial);
    
    return 0;
}
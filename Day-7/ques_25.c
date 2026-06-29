// Write a program to Recursive factorial

#include<stdio.h>
long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int num;
    printf("Enter Any Number");
    scanf("%d",&num);

    if(num<0)
    {
        printf("The Factorial Does Not Exist");
    }
    else
    {
        printf("The Factorial Is: %d",factorial(num));
    }
    return 0;
}
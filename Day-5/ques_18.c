// Write a program to check strong number

#include<stdio.h>

int factorial(int a)
{
    int prod=1;
    int i;
    for(i=1;i<=a;i++)
    {
        prod=prod*i;

    }
    return prod;
}

int main()
{
    int n,r,num,sum=0;
    printf("Enter any number:-");
    scanf("%d",&n);

    num=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+factorial(r);
        n=n/10;
    }

    if(sum==num)
    {
        printf("The Number Is Strong Number");
    }
    else
    {
        printf("The Number Is Not A Strong Number");
    }
    
    return 0;
}
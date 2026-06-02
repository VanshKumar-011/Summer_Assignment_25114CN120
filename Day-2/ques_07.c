// WAP to find product of digits.
#include<stdio.h>
int main()
{
    int prod,n,num,r ;

    printf("Enter any number:-");
    scanf("%d",&n);

    prod=1;
    num=n;

    while(n>0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;
    }

    printf("The product of the digits of %d is %d", num, prod);

    return 0;
}
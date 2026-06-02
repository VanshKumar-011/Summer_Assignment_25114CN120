// WAP to find sum of digits of a number.
#include<stdio.h>
int main()
{
    int n,r ;
    printf("Enter any number:-");
    scanf("%d",&n);

    int sum=0 ;
    while(n>0)
    {
        r=n%10 ;
        sum=sum+r ;
        n=n/10 ;
    }
    printf("Sum of the digits is %d", sum);
    return 0;
}
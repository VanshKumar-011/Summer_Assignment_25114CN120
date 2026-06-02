// WAP to reverse a number.
#include<stdio.h>
int main()
{
    int n,r,num,rev ;

    printf("Enter any number:-");
    scanf("%d",&n);

    rev=0;
    num=n;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }

    printf("Reverse of %d is %d", num, rev);

    return 0;
}
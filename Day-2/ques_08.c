// WAP to check whether a number is palindrome.
#include<stdio.h>
int main()
{
    int n,r,num,rev ;

    printf("Enter any number:-");
    scanf("%d",&n);
    
    rev=0 ;
    num=n ;

    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
    if(num==rev)
    {
        printf("%d is a Palindrome number.",num);
    }
    else
    {
        printf("%d is not a Palindrome number.",num);

    }

    return 0;
}
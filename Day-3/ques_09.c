// Write a program to Check whether a number is prime
#include<stdio.h>
int main()
{
    int n,i,c ;

    printf("Enter any number:-");
    scanf("%d",&n);
    
    c = 0 ;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==2)
    {
        printf("%d is a Prime Number",n);
    }
    else
    {
        printf("%d is not a Prime Number",n);
    }
    
    return 0;
}


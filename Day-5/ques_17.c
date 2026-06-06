// Write a program to check perfect number

#include<stdio.h>

int main()
{
    int sum,i,num,n ;

    printf("Enter any number:-");
    scanf("%d",&n);
    
    sum=0 ;
    num=n ;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("The Number Is A Perfect Number");
    }
    else
    {
        printf("The Number Is Not A Perfect Number");
    }

    return 0;
}
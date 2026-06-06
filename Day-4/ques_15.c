// Write a program to Check Armstrong number

#include<stdio.h>
#include<math.h>

int main()
{
    int n,num,num1,r,c=0,sum=0;

    printf("Enter the number:- ");
    scanf("%d",&n);

    num=n;
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    
    num1=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,c);
        num=num/10;

    }

    if(sum==num1)
    {
        printf("This number is an Armstrong number");
    }
    else
    {
        printf("This number is not an Armstrong number");
    }

    return 0;
}
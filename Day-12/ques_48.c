// Write a program to Write function for perfect number

#include<stdio.h>

void Perfect(int num)
{
    int i;
    int sum=0;
    int num1=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(num1==sum)
    {
        printf("The Number Is a Perfect Number");
    }
    else
    {
        printf("The Number Is Not a Perfect Number");
    }
}

int main()
{
    int number;
    printf("Enter Any Number");
    scanf("%d",&number);
    Perfect(number);
    return 0;
}
// Write a program to Write function to check prime

#include<stdio.h>

void Prime(int num)
{
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("The Number Is A Prime Number");
    }
    else
    {
        printf("The Number Is Not A Prime Number");
    }
}

int main()
{
    int number;
    printf("Enter Any Number");
    scanf("%d",&number);
    Prime(number);
    return 0;
}
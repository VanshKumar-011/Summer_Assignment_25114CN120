// Write a program to Write function to find maximum

#include<stdio.h>

int Maximum(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int number1,number2,max;
    printf("Enter Two Numbers");
    scanf("%d %d",&number1,&number2);
    
    max=Maximum(number1,number2);
    printf("The Maximum Number Is:%d",max);
    
    return 0;
}
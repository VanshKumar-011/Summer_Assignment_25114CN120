// Write a program to Write function to find sum of two numbers

#include<stdio.h>

int Sum(int num1,int num2)
{
    int answer=num1+num2;
    return answer;
}

int main()
{
    int number1,number2,sum;

    printf("Enter Two Numbers");
    scanf("%d %d",&number1,&number2);

    sum=Sum(number1,number2);

    printf("The Sum Of Entered Number Is: %d",sum);

    return 0;
}
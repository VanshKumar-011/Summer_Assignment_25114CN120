// Write a program to Write function for palindrome

#include<stdio.h>

void Palindrome(int num)
{
    int rev=0;
    int r;
    int num1=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(num1==rev)
    {
        printf("The Number Is A Palindrome Number");
    }
    else
    {
        printf("The Number Is Not A Palindrome Number");
    }
}

int main()
{
    int Number;
    printf("Enter Any Number");
    scanf("%d",&Number);
    Palindrome(Number);
    return 0;
}
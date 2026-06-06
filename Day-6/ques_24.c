// Write a program to find x^n without pow()

#include<stdio.h>
int main()
{
    int power,num,i;
    int answer=1;

    printf("Enter any number:-");
    scanf("%d",&num);

    printf("Enter the value Of power:-");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        answer=answer*num;
        
    }
    printf("The Answer is: %d",answer);
    
    return 0;
}
// Write a program to find LCM of two numbers

#include<stdio.h>
  
int LCM(int a,int b)
{
    int max = (a>b)?a:b;//maximum of a and b
    while(1)
    {
        if(max%a==0 && max%b==0)
        {
            return max;
        }
        max++;
    }
}


int main()
{
    int num1,num2;

    printf("Enter Any Two Numbers:");
    scanf("%d%d",&num1,&num2);
    
    printf("LCM of %d and %d is :%d",num1,num2,LCM(num1,num2));

    return 0;
}
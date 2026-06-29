// Write a program to Write function for Fibonacci

#include<stdio.h>

void Fibonacci(int extreme)
{
    int a=0;
    int b=1;
    int c;
    printf("%d\n",a);
    for(int i=1;i<=extreme;i++)
    {
       
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}

int main()
{
    int value;
    printf("Enter The Number Of Terms");
    scanf("%d",&value);
    Fibonacci(value);
    return 0;

}
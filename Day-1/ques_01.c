// Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
int main()
{
    int n,k ;

    printf("Enter the req. number of terms to be added of naturnal numers:- ");
    scanf("%d", &n);

    int sum=0;
    for(k=1; k<=n; k++)
    {
        sum = sum + k ;
    }

    printf("%d", sum);

    return 0;
}
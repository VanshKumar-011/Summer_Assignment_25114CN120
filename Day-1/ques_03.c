// WAP to find factorial of a number.
#include<stdio.h>
int main()
{
    int n, i, temp, fact;

    printf("Enter the number: ");
    scanf("%d", &n);


    temp = n;
    fact = 1;
    for(i=1; i<=n; i++)
    {
         fact = fact*temp ;
         temp = (n-i) ;
          
    }

    printf("The factorial of the given number is: %d", fact);

    return 0;
}
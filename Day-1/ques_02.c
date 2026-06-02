// WAP to print multiplication table of a given number.
#include<stdio.h>
int main()
{
    int n,k,t ;

    printf("Enter the number whose table to be printed:-");
    scanf("%d", &n);
    
    for(k=1; k<=10; k++)
    {
        t = n * k ;
        printf("%d * %d = %d", n, k, t);
        printf("\n");
    }
    
    return 0;
}
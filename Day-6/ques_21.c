// Write a program to convert decimal to binary

#include<stdio.h>
int main()
{
    int decimal,i=0,j;
    int binary[32];

    printf("Enter any Decimal Number:-");
    scanf("%d",&decimal);

    if(decimal==0)
    {
        printf("The Binary Number Is : 0");
    }

    while(decimal>0)
    {
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
        
    }

    printf("The Binary Number Is:");

    for(j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
    
    return 0;
}
// WAP to count digits in a number.
#include<stdio.h>
int main()
{
    int temp,n,c=0;
    printf("Enter any Number:-");
    scanf("%d",&n);
    if(n==0)
    {
        c=1;

    }
    else
    {
        temp = n;

        while(temp>0)
        {
            temp=temp/10;
            c++;
        }

    }
    
    printf("The number of digts is :%d",c);
    return 0;
}
// Write a program to Print reverse star pattern

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Write a program to Print character triangle

#include<stdio.h>
int main()
{
    int i,j,n;
    char ch;
    printf("Enter The Number Of Rows");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        int a=65;
        
        for(j=1;j<=i;j++)
        {
            ch=(char)a;
            printf("%c ",ch);
            a++;

        }
        printf("\n");
    }
    return 0;
}
// Write a program to Input and display array

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter The Number Of Elements In Array");
    scanf("%d",&n);
    int a[n];
    printf("Enter The Values Of Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The Entered Array Is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
// Write a program to Find sum and average of array

#include<stdio.h>

int main()
{
    int n,i;
    float sum=0;
    float average=0;
    printf("Enter The Number Of Elements In Array");
    scanf("%d",&n);
    int a[n];
    printf("Enter The Elements Of Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        average=sum/n;
    }

    printf("The Sum Of Array: %f\n",sum);
    printf("The Average Of Array: %f",average);
    return 0;

}
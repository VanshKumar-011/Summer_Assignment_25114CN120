// Write a program to Reverse array

#include<stdio.h>

int main()
{
    int n, i, temp;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
    return 0;
}
// Write a program to Rotate array left

#include<stdio.h>

int main()
{
    int n, i, first;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    first = a[0];

    for(i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[n - 1] = first;

    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
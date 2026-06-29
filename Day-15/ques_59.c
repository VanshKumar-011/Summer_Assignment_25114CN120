// Write a program to Rotate array right

#include<stdio.h>

int main()
{
    int n, i, last;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    last = a[n - 1];

    for(i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = last;

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
// Write a program to Find largest and smallest element

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int largest = a[0];
    int smallest = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }

        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
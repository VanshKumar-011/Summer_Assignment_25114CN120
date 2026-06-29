// Write a program to Count even and odd elements

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

    int evenCount = 0;
    int oddCount = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Number of even elements = %d\n", evenCount);
    printf("Number of odd elements = %d\n", oddCount);

    return 0;
}
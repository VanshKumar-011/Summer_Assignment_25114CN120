// Write a program to Remove duplicates from array

#include <stdio.h>
int main()
{
    int n, i, j, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the required sum: ");
    scanf("%d", &sum);

    int found = 0;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }
    if(found == 0)
    {
        printf("No pair found.");
    }
    
    return 0;
}
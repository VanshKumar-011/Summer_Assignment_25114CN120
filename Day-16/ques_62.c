// Write a program to Find maximum frequency element

#include <stdio.h>

int main()
{
    int n, i, j, maxFreq = 0, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        int count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            element = a[i];
        }
    }

    printf("Maximum frequency element = %d\n", element);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}
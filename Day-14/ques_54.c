// Write a program to Frequency of an element

#include <stdio.h>

int main() 
{
    int arr[100], n, item, i, freq = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input element whose frequency is to be found
    printf("Enter element to find frequency: ");
    scanf("%d", &item);

    // Count frequency
    for(i = 0; i < n; i++) 
    {
        if(arr[i] == item) 
        {
            freq++;
        }
    }

    printf("Frequency of %d = %d\n", item, freq);

    return 0;
}
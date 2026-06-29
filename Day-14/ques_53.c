// Write a program to Linear search

#include <stdio.h>

int main() 
{
    int arr[100], n, item, i, found = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input item to search
    printf("Enter element to search: ");
    scanf("%d", &item);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == item) {
            found = 1;
            printf("Element found at position %d\n", i + 1);
            break;
        }
    }

    // If element not found
    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}
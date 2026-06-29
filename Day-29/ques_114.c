// Write a program to Create menu-driven array operations system

#include <stdio.h>

int main() 
{
    int arr[100], n, i;
    int choice, sum = 0, max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1) 
    {
        printf("\n===== ARRAY OPERATIONS =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Maximum Element\n");
        printf("4. Minimum Element\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            printf("Array Elements: ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 2:
            sum = 0;
            for (i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            printf("Sum = %d\n", sum);
            break;

        case 3:
            max = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] > max)
                {
                    max = arr[i];
                }
            }
            printf("Maximum = %d\n", max);
            break;

        case 4:
            min = arr[0];
            for (i = 1; i < n; i++)
            {
                if (arr[i] < min)
                {
                    min = arr[i];
                }
            }
            printf("Minimum = %d\n", min);
            break;

        case 5:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
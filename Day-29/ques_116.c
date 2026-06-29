// Write a program to Create inventory management system

#include <stdio.h>

struct Item 
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() 
{
    struct Item item[100];
    int n = 0, choice, i;

    while (1) 
    {

        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf(" %[^\n]", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;

            printf("Item Added Successfully!\n");
            break;

        case 2:
            if (n == 0) 
            {
                printf("Inventory is Empty!\n");
            } else 
            {
                printf("\nItem List:\n");

                for (i = 0; i < n; i++) 
                {
                    printf("ID:%d  Name:%s  Qty:%d  Price:%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
            }
            break;

        case 3: 
        {
            int id, found = 0;

            printf("Enter Item ID: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++) 
            {
                if (item[i].id == id) 
                {
                    printf("Item Found!\n");
                    printf("Name: %s\n", item[i].name);
                    printf("Quantity: %d\n", item[i].quantity);
                    printf("Price: %.2f\n", item[i].price);
                    found = 1;
                }
            }

            if (!found)
            {
                printf("Item Not Found!\n");
            }

            break;
        }

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
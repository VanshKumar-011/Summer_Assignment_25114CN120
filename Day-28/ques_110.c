// Write a program to Create bank account system

#include <stdio.h>

int main() 
{

    float balance = 0, amount;
    int choice;

    while (1) 
    {

        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            printf("Enter Amount: ");
            scanf("%f", &amount);

            balance += amount;

            printf("Deposit Successful!\n");
            break;

        case 2:
            printf("Enter Amount: ");
            scanf("%f", &amount);

            if (amount <= balance) 
            {
                balance -= amount;
                printf("Withdrawal Successful!\n");
            } else 
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
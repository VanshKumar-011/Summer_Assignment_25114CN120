// Write a program to Create ticket booking system

#include <stdio.h>

int main() {

    int seats = 50;
    int choice, book;

    while (1) 
    {

        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:

            printf("Enter Number of Tickets: ");
            scanf("%d", &book);

            if (book <= seats) 
            {
                seats -= book;
                printf("Booking Successful!\n");
            } else 
            {
                printf("Seats Not Available!\n");
            }

            break;

        case 2:
            printf("Available Seats = %d\n", seats);
            break;

        case 3:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}
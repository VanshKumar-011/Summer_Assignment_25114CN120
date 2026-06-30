// Write a program to Create mini library system

#include <stdio.h>

struct Book 
{
    int id;
    char name[50];
    char author[50];
};

void addBook(struct Book b[], int *n) 
{
    printf("Enter Book ID: ");
    scanf("%d", &b[*n].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[*n].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[*n].author);

    (*n)++;
}

void display(struct Book b[], int n) 
{
    int i;

    if(n == 0) 
    {
        printf("No Books Available.\n");
        return;
    }

    printf("\nID\tBook\t\tAuthor\n");

    for(i = 0; i < n; i++) 
    {
        printf("%d\t%s\t\t%s\n",
               b[i].id,
               b[i].name,
               b[i].author);
    }
}

int main() 
{

    struct Book b[100];
    int n = 0, choice;

    while(1) 
    {

        printf("\n1.Add Book\n");
        printf("2.Display Books\n");
        printf("3.Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                addBook(b, &n);
                break;

            case 2:
                display(b, n);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}
// Write a program to Create mini employee management system

#include <stdio.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

void addEmployee(struct Employee e[], int *n) 
{

    printf("Enter Employee ID: ");
    scanf("%d", &e[*n].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", e[*n].name);

    printf("Enter Salary: ");
    scanf("%f", &e[*n].salary);

    (*n)++;
}

void displayEmployee(struct Employee e[], int n) 
{

    int i;

    printf("\nID\tName\t\tSalary\n");

    for(i = 0; i < n; i++) 
    {

        printf("%d\t%s\t\t%.2f\n",
               e[i].id,
               e[i].name,
               e[i].salary);
    }
}

int main() 
{

    struct Employee e[100];

    int n = 0, choice;

    while(1) 
    {

        printf("\n1.Add Employee\n");
        printf("2.Display Employees\n");
        printf("3.Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                addEmployee(e, &n);
                break;

            case 2:
                displayEmployee(e, n);
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}
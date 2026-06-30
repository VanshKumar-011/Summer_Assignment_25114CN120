// Write a program to Develop complete mini project using arrays, strings and functions

#include <stdio.h>
#include <string.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

void addStudent(struct Student s[], int *n) 
{

    printf("Enter Roll Number: ");
    scanf("%d", &s[*n].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[*n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[*n].marks);

    (*n)++;

    printf("Student Added Successfully!\n");
}

void displayStudents(struct Student s[], int n) 
{

    int i;

    if(n == 0) 
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");

    for(i = 0; i < n; i++) 
    {

        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

void searchStudent(struct Student s[], int n) 
{

    int roll, i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) 
    {

        if(s[i].roll == roll) 
        {

            printf("\nStudent Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);

            return;
        }
    }

    printf("Student Not Found.\n");
}

int main() 
{

    struct Student s[100];

    int n = 0, choice;

    while(1) 
    {

        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) 
        {

            case 1:
                addStudent(s, &n);
                break;

            case 2:
                displayStudents(s, n);
                break;

            case 3:
                searchStudent(s, n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}
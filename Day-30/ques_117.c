// Write a program to Create student record system using arrays and strings

#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    struct Student s[100];
    int n, i, roll, found = 0;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n------ Student Records ------\n");
    printf("Roll\tName\t\tMarks\n");

    for(i = 0; i < n; i++) 
    {
        printf("%d\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) 
    {
        if(s[i].roll == roll) 
        {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", s[i].roll);
            printf("Name : %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Student Not Found.\n");
    }
    return 0;
}
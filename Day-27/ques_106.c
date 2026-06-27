// Write a program to create employee management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMP 100
#define STR_LEN 50

typedef struct {
    int emp_id;
    char name[STR_LEN];
    char dept[STR_LEN];
    char designation[STR_LEN];
} Employee;

Employee emp_db[MAX_EMP];
int emp_count = 0;

void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void add_employee() {
    if (emp_count >= MAX_EMP) {
        printf("❌ Database full!\n");
        return;
    }
    Employee e;
    printf("\nEnter Employee ID: ");
    scanf("%d", &e.emp_id);
    clear_buffer();

    // Check for duplicate ID
    for (int i = 0; i < emp_count; i++) {
        if (emp_db[i].emp_id == e.emp_id) {
            printf("❌ Error: Employee ID already exists!\n");
            return;
        }
    }

    printf("Enter Name: ");
    fgets(e.name, STR_LEN, stdin); e.name[strcspn(e.name, "\n")] = 0;
    
    printf("Enter Department: ");
    fgets(e.dept, STR_LEN, stdin); e.dept[strcspn(e.dept, "\n")] = 0;
    
    printf("Enter Designation: ");
    fgets(e.designation, STR_LEN, stdin); e.designation[strcspn(e.designation, "\n")] = 0;

    emp_db[emp_count++] = e;
    printf("✅ Employee added successfully!\n");
}

void display_employees() {
    if (emp_count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }
    printf("\n%-10s | %-20s | %-15s | %-15s\n", "Emp ID", "Name", "Department", "Designation");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < emp_count; i++) {
        printf("%-10d | %-20s | %-15s | %-15s\n", emp_db[i].emp_id, emp_db[i].name, emp_db[i].dept, emp_db[i].designation);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n=== EMPLOYEE MANAGEMENT SYSTEM ===\n1. Add Employee\n2. Display All Employees\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) { clear_buffer(); continue; }
        if (choice == 1) add_employee();
        else if (choice == 2) display_employees();
        else if (choice == 3) break;
        else printf("Invalid Choice!\n");
    }
    
    return 0;
}
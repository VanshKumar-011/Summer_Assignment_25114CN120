// Write a program to create student record management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50
#define COURSE_LEN 50

// Structure to define a student record
typedef struct {
    int id;
    char name[NAME_LEN];
    int age;
    char course[COURSE_LEN];
    float gpa;
} Student;

// Global array and counter
Student database[MAX_STUDENTS];
int student_count = 0;

// Function prototypes
void print_menu();
void add_student();
void view_all_students();
void search_student();
void update_student();
void delete_student();
int find_index_by_id(int id);
void clear_buffer();

int main() {
    int choice;

    while (1) {
        print_menu();
        printf("Enter your choice (1-6): ");
        if (scanf("%d", &choice) != 1) {
            printf("❌ Invalid input. Please enter a number.\n");
            clear_buffer();
            continue;
        }
        clear_buffer(); // Clear the newline character left in the buffer

        switch (choice) {
            case 1: add_student(); break;
            case 2: view_all_students(); break;
            case 3: search_student(); break;
            case 4: update_student(); break;
            case 5: delete_student(); break;
            case 6: 
                printf("\nExiting System. Goodbye!\n");
                exit(0);
            default: 
                printf("❌ Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
    return 0;
}

void print_menu() {
    printf("\n===================================\n");
    printf(" STUDENT RECORD MANAGEMENT SYSTEM  \n");
    printf("===================================\n");
    printf("1. Add New Student\n");
    printf("2. View All Students\n");
    printf("3. Search Student by ID\n");
    printf("4. Update Student Record\n");
    printf("5. Delete Student Record\n");
    printf("6. Exit\n");
    printf("===================================\n");
}

void add_student() {
    printf("\n--- Add New Student ---\n");
    if (student_count >= MAX_STUDENTS) {
        printf("❌ Database full! Cannot add more students.\n");
        return;
    }

    int id;
    printf("Enter Unique Student ID (Integer): ");
    scanf("%d", &id);
    clear_buffer();

    if (find_index_by_id(id) != -1) {
        printf("❌ Error: A student with ID %d already exists!\n", id);
        return;
    }

    Student s;
    s.id = id;

    printf("Enter Student Name: ");
    fgets(s.name, NAME_LEN, stdin);
    s.name[strcspn(s.name, "\n")] = 0; // Strip trailing newline

    printf("Enter Student Age: ");
    scanf("%d", &s.age);
    clear_buffer();

    printf("Enter Course/Major: ");
    fgets(s.course, COURSE_LEN, stdin);
    s.course[strcspn(s.course, "\n")] = 0;

    printf("Enter GPA: ");
    scanf("%f", &s.gpa);
    clear_buffer();

    database[student_count] = s;
    student_count++;
    printf("✅ Student '%s' added successfully!\n", s.name);
}

void view_all_students() {
    printf("\n--- All Student Records ---\n");
    if (student_count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("%-10s | %-20s | %-5s | %-15s | %-5s\n", "ID", "Name", "Age", "Course", "GPA");
    printf("-------------------------------------------------------------------\n");
    for (int i = 0; i < student_count; i++) {
        printf("%-10d | %-20s | %-5d | %-15s | %-5.2f\n", 
               database[i].id, database[i].name, database[i].age, database[i].course, database[i].gpa);
    }
}

void search_student() {
    printf("\n--- Search Student ---\n");
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    clear_buffer();

    int index = find_index_by_id(id);
    if (index != -1) {
        printf("\nRecord Found:\n");
        printf("• ID: %d\n", database[index].id);
        printf("• Name: %s\n", database[index].name);
        printf("• Age: %d\n", database[index].age);
        printf("• Course: %s\n", database[index].course);
        printf("• GPA: %.2f\n", database[index].gpa);
    } else {
        printf("❌ Student ID not found.\n");
    }
}

void update_student() {
    printf("\n--- Update Student Record ---\n");
    int id;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);
    clear_buffer();

    int index = find_index_by_id(id);
    if (index == -1) {
        printf("❌ Student ID not found.\n");
        return;
    }

    char temp[NAME_LEN];
    printf("Updating record for %s. (Press Enter to keep current value)\n", database[index].name);

    // Update Name
    printf("New Name [%s]: ", database[index].name);
    fgets(temp, NAME_LEN, stdin);
    if (temp[0] != '\n') {
        temp[strcspn(temp, "\n")] = 0;
        strcpy(database[index].name, temp);
    }

    // Update Age
    printf("New Age [%d]: ", database[index].age);
    fgets(temp, sizeof(temp), stdin);
    if (temp[0] != '\n') {
        database[index].age = atoi(temp);
    }

    // Update Course
    printf("New Course [%s]: ", database[index].course);
    fgets(temp, COURSE_LEN, stdin);
    if (temp[0] != '\n') {
        temp[strcspn(temp, "\n")] = 0;
        strcpy(database[index].course, temp);
    }

    // Update GPA
    printf("New GPA [%.2f]: ", database[index].gpa);
    fgets(temp, sizeof(temp), stdin);
    if (temp[0] != '\n') {
        database[index].gpa = atof(temp);
    }

    printf("✅ Student record updated successfully!\n");
}

void delete_student() {
    printf("\n--- Delete Student Record ---\n");
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    clear_buffer();

    int index = find_index_by_id(id);
    if (index == -1) {
        printf("❌ Student ID not found.\n");
        return;
    }

    char confirm;
    printf("Are you sure you want to delete %s? (y/n): ", database[index].name);
    scanf("%c", &confirm);
    clear_buffer();

    if (confirm == 'y' || confirm == 'Y') {
        // Shift remaining elements left to fill the gap
        for (int i = index; i < student_count - 1; i++) {
            database[i] = database[i + 1];
        }
        student_count--;
        printf("✅ Student record deleted successfully.\n");
    } else {
        printf("Deletion canceled.\n");
    }
}

// Helper function to find array index by student ID
int find_index_by_id(int id) {
    for (int i = 0; i < student_count; i++) {
        if (database[i].id == id) {
            return i; // Found
        }
    }
    return -1; // Not found
}

// Helper function to clear input buffer to avoid bugs with scanf/fgets mixes
void clear_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
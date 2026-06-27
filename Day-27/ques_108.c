// Write a program to create marksheet generation system

#include <stdio.h>
#include <string.h>

typedef struct {
    int roll_no;
    char name[50];
    float sub1, sub2, sub3;
    float total;
    float percentage;
    char grade[5];
} Marksheet;

void assign_grade(Marksheet *m) {
    if (m->sub1 < 40 || m->sub2 < 40 || m->sub3 < 40) {
        strcpy(m->grade, "FAIL");
    } else if (m->percentage >= 85) {
        strcpy(m->grade, "A+");
    } else if (m->percentage >= 70) {
        strcpy(m->grade, "A");
    } else if (m->percentage >= 55) {
        strcpy(m->grade, "B");
    } else {
        strcpy(m->grade, "C");
    }
}

void generate_marksheet() {
    Marksheet m;
    printf("\nEnter Roll Number: ");
    scanf("%d", &m.roll_no);
    getchar();

    printf("Enter Student Name: ");
    fgets(m.name, 50, stdin); m.name[strcspn(m.name, "\n")] = 0;

    printf("Enter marks for Subject 1, 2 & 3 (out of 100):\n");
    scanf("%f %f %f", &m.sub1, &m.sub2, &m.sub3);

    m.total = m.sub1 + m.sub2 + m.sub3;
    m.percentage = m.total / 3.0;
    assign_grade(&m);

    // Beautifully printed report layout
    printf("\n========================================\n");
    printf("         ACADEMIC TRANSCRIPT REPORT      \n");
    printf("========================================\n");
    printf("Roll No: %-10d Student Name: %s\n", m.roll_no, m.name);
    printf("----------------------------------------\n");
    printf("Subject 1 : %6.2f / 100\n", m.sub1);
    printf("Subject 2 : %6.2f / 100\n", m.sub2);
    printf("Subject 3 : %6.2f / 100\n", m.sub3);
    printf("----------------------------------------\n");
    printf("Total Marks: %6.2f/300  | Percentage: %.2f%%\n", m.total, m.percentage);
    printf("Final Status/Grade: %s\n", m.grade);
    printf("========================================\n");
}

int main() {
    int count;
    printf("How many marksheets do you want to generate? ");
    if(scanf("%d", &count) == 1) {
        for(int i = 0; i < count; i++) {
            generate_marksheet();
        }
    }
    
    return 0;
}
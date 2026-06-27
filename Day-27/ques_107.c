// Write a program to create salary management system

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SAL 100

typedef struct {
    int emp_id;
    char name[50];
    double basic_salary;
    double hra;      // House Rent Allowance
    double da;       // Dearness Allowance
    double pf;       // Provident Fund Deduction
    double net_pay;
} Payroll;

Payroll payroll_db[MAX_SAL];
int payroll_count = 0;

void calculate_salary(Payroll *p) {
    p->hra = p->basic_salary * 0.20; // 20% HRA
    p->da = p->basic_salary * 0.10;  // 10% DA
    p->pf = p->basic_salary * 0.12;  // 12% PF Deductions
    p->net_pay = (p->basic_salary + p->hra + p->da) - p->pf;
}

void process_payroll() {
    if (payroll_count >= MAX_SAL) return;
    Payroll p;
    printf("\nEnter Employee ID: ");
    scanf("%d", &p.emp_id);
    getchar(); // Clear trailing newline
    
    printf("Enter Employee Name: ");
    fgets(p.name, 50, stdin); p.name[strcspn(p.name, "\n")] = 0;
    
    printf("Enter Basic Salary: ");
    scanf("%lf", &p.basic_salary);

    calculate_salary(&p);
    payroll_db[payroll_count++] = p;
    printf("✅ Payroll compiled successfully!\n");
}

void generate_payroll_slip() {
    if (payroll_count == 0) {
        printf("\nNo structural payroll data compiled yet.\n");
        return;
    }
    printf("\n%-8s | %-15s | %-10s | %-8s | %-8s | %-8s | %-10s\n", "ID", "Name", "Basic", "HRA", "DA", "PF", "Net Pay");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < payroll_count; i++) {
        printf("%-8d | %-15s | %-10.2f | %-8.2f | %-8.2f | %-8.2f | %-10.2f\n",
               payroll_db[i].emp_id, payroll_db[i].name, payroll_db[i].basic_salary, 
               payroll_db[i].hra, payroll_db[i].da, payroll_db[i].pf, payroll_db[i].net_pay);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n=== SALARY PAYROLL SYSTEM ===\n1. Add & Process Salary\n2. Generate Payroll Sheet\n3. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) { getchar(); continue; }
        if (choice == 1) process_payroll();
        else if (choice == 2) generate_payroll_slip();
        else if (choice == 3) break;
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num_departments;
    double total_company_salary = 0;

    printf("Enter the number of departments in the company: ");
    scanf("%d", &num_departments);

    for(int d = 1; d <= num_departments; d++) {
        int num_employees;
        double total_dept_salary = 0;

        printf("\nEnter the number of employees in Department %d: ", d);
        scanf("%d", &num_employees);

        for(int e = 1; e <= num_employees; e++) {
            int days_worked;
            double salary;

            printf("Enter days worked for Department %d, Employee %d: ", d, e);
            scanf("%d", &days_worked);

            salary = days_worked * 500.0;
            if(days_worked > 25) {
                salary += 2000.0;
            }

            printf("Department %d, Employee %d: Days Worked = %d, Salary = Rs. %.0f\n", d, e, days_worked, salary);
            total_dept_salary += salary;
        }

        printf("\nTotal salary paid to Department %d: Rs. %.0f\n", d, total_dept_salary);
        total_company_salary += total_dept_salary;
    }

    printf("\n==================================================\n");
    printf("Total salary paid across all departments: Rs. %.0f\n", total_company_salary);
    printf("==================================================\n");

    return 0;
}
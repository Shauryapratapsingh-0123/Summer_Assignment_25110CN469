#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float basicSalary, bonus, totalSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    totalSalary = basicSalary + bonus;

    printf("\nSalary Details\n");
    printf("----------------------\n");
    printf("Employee ID : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary : %.2f\n", basicSalary);
    printf("Bonus : %.2f\n", bonus);
    printf("Total Salary : %.2f\n", totalSalary);

    return 0;
}
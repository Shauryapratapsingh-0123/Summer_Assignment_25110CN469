#include <stdio.h>

int main()
{
    int empId, age;
    char name[50], department[50];
    float salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Details\n");
    printf("---------------------------\n");
    printf("Employee ID : %d\n", empId);
    printf("Name        : %s\n", name);
    printf("Department  : %s\n", department);
    printf("Age         : %d\n", age);
    printf("Salary      : %.2f\n", salary);

    return 0;
}
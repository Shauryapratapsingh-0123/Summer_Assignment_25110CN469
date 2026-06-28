#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects:\n");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\nMarksheet\n");
    printf("--------------------------\n");
    printf("Name       : %s\n", name);
    printf("Roll No.   : %d\n", roll);
    printf("Subject 1  : %.2f\n", m1);
    printf("Subject 2  : %.2f\n", m2);
    printf("Subject 3  : %.2f\n", m3);
    printf("Total      : %.2f\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    return 0;
}
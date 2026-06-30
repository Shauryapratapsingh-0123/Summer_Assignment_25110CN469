#include <stdio.h>

int main()
{
    int roll[5];
    char name[5][50];
    float marks[5];
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\nStudent Records\n");
    printf("-----------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
        printf("\n");
    }

    return 0;
}
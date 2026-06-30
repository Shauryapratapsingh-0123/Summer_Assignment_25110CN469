#include <stdio.h>

void display(int roll[], char name[][50], float marks[], int n)
{
    int i;

    printf("\nStudent Records\n");
    printf("----------------------------\n");

    for(i = 0; i < n; i++)
    {
        printf("Roll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n\n", marks[i]);
    }
}

int main()
{
    int roll[10];
    char name[10][50];
    float marks[10];
    int n, i;

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

    display(roll, name, marks, n);

    return 0;
}
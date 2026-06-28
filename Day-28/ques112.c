#include <stdio.h>

int main()
{
    char name[50];
    char phone[20];
    char email[50];

    printf("Enter Contact Name: ");
    scanf("%s", name);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

    printf("\nContact Details\n");
    printf("------------------------\n");
    printf("Name         : %s\n", name);
    printf("Phone Number : %s\n", phone);
    printf("Email        : %s\n", email);

    return 0;
}
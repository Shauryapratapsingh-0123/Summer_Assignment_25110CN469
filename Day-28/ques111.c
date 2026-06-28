#include <stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price = 200, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\nTicket Details\n");
    printf("----------------------\n");
    printf("Customer Name   : %s\n", name);
    printf("Tickets Booked  : %d\n", tickets);
    printf("Price per Ticket: %.2f\n", price);
    printf("Total Amount    : %.2f\n", total);

    return 0;
}
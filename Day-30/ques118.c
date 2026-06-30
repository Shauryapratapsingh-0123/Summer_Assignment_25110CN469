#include <stdio.h>

int main()
{
    int bookId;
    char bookName[50];
    char authorName[50];
    int copies;

    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    printf("Enter Book Name: ");
    scanf("%s", bookName);

    printf("Enter Author Name: ");
    scanf("%s", authorName);

    printf("Enter Number of Copies: ");
    scanf("%d", &copies);

    printf("\nLibrary Details\n");
    printf("------------------------\n");
    printf("Book ID          : %d\n", bookId);
    printf("Book Name        : %s\n", bookName);
    printf("Author Name      : %s\n", authorName);
    printf("Available Copies : %d\n", copies);

    return 0;
}
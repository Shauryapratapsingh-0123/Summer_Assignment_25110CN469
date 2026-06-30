#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int sum = 0, largest;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nMenu\n");
    printf("1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Largest Element\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Array Elements:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if(choice == 2)
    {
        for(i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }

        printf("Sum = %d", sum);
    }
    else if(choice == 3)
    {
        largest = arr[0];

        for(i = 1; i < n; i++)
        {
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        printf("Largest Element = %d", largest);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
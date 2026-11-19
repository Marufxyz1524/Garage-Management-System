#include <stdio.h>

int main()
{
    int choice;

    printf("===== GARAGE MANAGEMENT SYSTEM =====\n\n");

    printf("Do you want to take Membership?\n");
    printf("1. Yes\n");
    printf("2. No (Temporary Parking)\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\nWelcome! You selected Membership.\n");
    }
    else if(choice == 2)
    {
        printf("\nWelcome! You selected Temporary Parking.\n");
    }
    else
    {
        printf("\nInvalid Choice!\n");
    }

    return 0;
}
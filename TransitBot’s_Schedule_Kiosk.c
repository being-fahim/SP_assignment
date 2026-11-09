#include <stdio.h>

int main(){

    int choice;

    printf("-----TransitBot's Schedule Kiosk-----\n\n");

    do
    {
            printf("1. View Dhanmondi Route Schedule.\n");
            printf("2. View Uttara Route Schedule.\n");
            printf("3. View Campus Shuttle Timings.\n");
            printf("4. Exit.\n\n");

        printf("Select an option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Displaying: Dhanmondi Route Schedule.\n\n");
                break;
            case 2:
                printf("Displaying: Uttara Route Schedule.\n\n");
                break;
            case 3:
                printf("Displaying: Campus Shuttle timing.\n\n");
                break;
            case 4:
                printf("Welcome! See you later.");
                break;
            default:
                printf("Type a valid option\n\n");

            }
    }while(choice != 4);
}



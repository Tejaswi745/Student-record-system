#include<stdio.h>
#include<stdlib.h>

int main() {
    int choice;

    while(1) {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Add Student option selected\n");
                break;
            case 2:
                printf("View Students option selected\n");
                break;
            case 3:
                printf("Exiting Program...\n");
                exit(0);
            default:
                printf("Invalid Choice! Try again.\n");
        }
    }

    return 0;
}

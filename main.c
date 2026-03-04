#include<stdio.h>
#include<stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student students[100];
int count = 0;

int main() {
    int choice;

    while(1) {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &students[count].roll);

                printf("Enter Name: ");
                scanf("%s", students[count].name);

                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);

                count++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                printf("\n--- Student List ---\n");
                for(int i = 0; i < count; i++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n",
                        students[i].roll,
                        students[i].name,
                        students[i].marks);
                }
                break;

            case 3: {
                int searchRoll;
                int found = 0;

                printf("Enter Roll Number to Search: ");
                scanf("%d", &searchRoll);

                for(int i = 0; i < count; i++) {
                    if(students[i].roll == searchRoll) {
                        printf("Student Found!\n");
                        printf("Roll: %d | Name: %s | Marks: %.2f\n",
                            students[i].roll,
                            students[i].name,
                            students[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    printf("Student Not Found!\n");
                }
                break;
            }

            case 4:
                printf("Exiting Program...\n");
                exit(0);

            default:
                printf("Invalid Choice! Try again.\n");
        }
    }

    return 0;
}

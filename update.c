#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "struct.h"
#include "uniqueID.h"
void update(struct student s[], int i)
{
    char firstname[50], lastname[50];
    int id, level;
    char gender;
    double gpa;
    int y;
    printf("Select a student ID to update:\n");
    for (int k = 0; k < 100; k++) {
        if (s[k].id != 0) {
            printf("%d) %d\n", k + 1, s[k].id);
        }
    }

    printf("Enter the student's ID: ");
    scanf("%d", &id);

    if (id < 1000000 || id >= 10000000) {
        printf("Error: ID must be a 7-digit number without leading zeros.\n");
    } else {
        int found = 0; // Flag to indicate if student was found

        for (int j = 0; j < 100; j++) {
            if (s[j].id == id) {
                found = 1; // Student found
                printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n");
                printf("First Name: %s\nLast Name: %s\nID: %d\nLevel: %d\nGender: %c\nGPA: %lf\n",
                       s[j].firstname, s[j].lastname, s[j].id, s[j].level, s[j].gender, s[j].gpa);
                sleep(6);
                
                printf("What field needs to be updated?\n");
                printf("1) Academic year\n");
                printf("2) GPA\n");
                fflush(stdout);
                scanf("%d", &y);
                
                switch (y) {
                    case 1:
                        printf("Please enter the new Academic Year: ");
                        fflush(stdout);
                        scanf("%d", &s[j].level);
                        break;
                    case 2:
                        printf("Please enter the new GPA: ");
                        fflush(stdout);
                        scanf("%lf", &s[j].gpa);
                        break;
                    default:
                        printf("Invalid choice.\n");
                        break;
                }
                
                break; // No need to continue searching
            }
        }

        if (!found) {
            printf("Error: Student with ID %d not found.\n", id);
        }
    }

    sleep(5);
}

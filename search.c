#include <stdio.h>
#include <string.h>
#include "struct.h"
#include <stdlib.h>
#include <unistd.h>
#include "uniqueID.h"
#include "search.h"

void search(struct student s[], int i)
{

    char firstname[50], lastname[50];
    int id, level;
    char gender;
    double gpa;
    int y;
    printf("1) Search by name\n");
    printf("2) Search by ID\n");
    scanf("%d", &y);
    switch (y)
    {
    case 1:
        system("cls");
        printf("please enter the name\n");
        fflush(stdout);
        int count = 0;
        scanf("%s", firstname);
        fflush(stdout);

        scanf("%s", lastname);
        for (int j = 0; j < 100; j++)
        {
            if (s[j].id != 0)
            {

                if (strcmp(s[j].firstname, firstname) == 0 || strcmp(s[j].lastname, lastname) == 0 || strcmp(s[j].firstname, lastname) == 0 || strcmp(s[j].lastname, firstname) == 0)
                {

                    printf("firstname : %s\n lastname: %s\n ID: %d \n level: %d\n gender: %c\n GPA: %lf\n", s[j].firstname, s[j].lastname, s[j].id, s[j].level, s[j].gender, s[j].gpa);
                    printf("-----------------------------------------------------------------------------------------------------------------------------------------------\n");
                    count++;
                }
            }

            continue;
        }
        if (!count)
        {
            printf("Error: Not found");
            sleep(3);
        }
        sleep(10);
        break;

    case 2:
        system("cls");
        printf("Please enter the ID: ");
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
            break; // No need to continue searching
        }
    }

    if (!found) {
        printf("Error: Student with ID %d not found.\n", id);
    }
}
sleep(3);

    default:
        break;
    }
}
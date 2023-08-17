#include "add.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "uniqueID.h"
#include <unistd.h> 
void add(struct student s[], int i)
{

    char firstname[50], lastname[50];
    int id, level;
    char gender;
    double gpa;

    for (int j = 0; j < 100; j++)
    {
        int isUniqueID;
        if (s[j].id == 0)
        {
            printf("enter firstname\n");
            fflush(stdout);
            scanf("%s", firstname);
            strcpy(s[j].firstname, firstname);
            printf("enter lastname\n");
            fflush(stdout);
            scanf("%s", lastname);

            strcpy(s[j].lastname, lastname);
            do
            {
                printf("Please enter a unique 7-digit student ID: ");
                scanf("%d", &id);

                if (id < 1000000 || id >= 10000000)
                {
                    printf("Error: ID must be a 7-digit number without leading zeros.\n");
                    
                }
                else if (!isUniqueId(s, id))
                {
                    printf("Error: ID already exists. Please enter a unique ID.\n");
                }
                // else
                // {
                //     printf("Error:  Please enter an integer ID.\n");
                //     break;
                // }
            
            } while (id < 1000000 || id >= 10000000 || !isUniqueId(s, id));

            s[j].id = id;
            do
            {
                printf("Enter gender (M/F): ");
                fflush(stdout);
                scanf(" %c", &gender);
                if (gender != 'M' && gender != 'F')
                {
                    printf("Invalid gender. Please enter 'M' for male or 'F' for female.\n");
                    continue;
                }
                break;
            } while (gender != 'M' && gender != 'F');
            s[j].gender = gender;
            printf("enter level\n");
            fflush(stdout);
            scanf("%d", &level);
            s[j].level = level;

            do
            {
                printf("enter gpa\n");
                fflush(stdout);
                scanf(" %lf", &gpa);
                if (gpa < 0 || gpa > 4.0)
                {
                    printf("GPA should be between 0 and 4.0");
                    continue;
                }
                break;

            } while (gpa < 0 || gpa > 4.0);

            s[j].gpa = gpa;
            printf("%s have been added successfully", s[j].firstname);
            sleep(3);
            break;
        }
    }
}
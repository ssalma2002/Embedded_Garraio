#include <stdio.h>
#include <string.h>
#include "uniqueID.h"
#include "struct.h"
#include <unistd.h> 
void RemoveStudent(struct student s[], int i)
{
    char firstname[50], lastname[50];
    int id, level;
    char gender;
    double gpa;
    int found =0;
    for (int j = 0; j < 100; j++)
    {
        printf("please enter the ID of the student you wish to remove from the system\n");
        fflush(stdout);
        scanf("%d", &id);
        if (!(isUniqueId(s, id)))
        {
            strcpy(firstname, s[j].firstname);
             strcpy(s[j].firstname, " ");
             strcpy(s[j].lastname, " ");
             s[j].gender = '\0';
            s[j].gpa = 0.0;
            s[j].id = 0;
            s[j].level = 0;
            printf("%s have been removed", firstname);
        }
        else if (isUniqueId(s, id))
        {
            do
            {
                printf("Error: There is no student which have this id");
                break;
            } while (isUniqueId(s, id));
        }
        else if (id < 1000000 || id >= 10000000)
        {
            do
            {
                printf("Please enter a unique 7-digit student ID: ");
                scanf("%d", &id);

                printf("Error: ID must be a 7-digit number without leading zeros.\n");

            } while (id < 1000000 || id >= 10000000);
        }
        sleep(3);
        break;
    }
}
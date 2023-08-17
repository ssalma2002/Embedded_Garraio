#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "search.h"
#include "uniqueID.h"
#include <stdlib.h>
#include "add.h"
#include "remove.h"
#include "update.h"
#include <unistd.h>
void welcome(struct student s[])
    {
        system("cls");
        int y;
        printf("/*******************************************************************************************************************************/\n");
        printf("                                Student Management System\n");
        printf("/*******************************************************************************************************************************/\n");
        printf("Choose the desired operation\n");
        printf(" \n");
        printf("         1- Add new Student\n ");
        printf("        2- Remove a student\n ");
        printf("        3- Retrieve student's data\n");
        printf("         4- Update student's data\n ");
        printf("        5- Exit\n ");
        fflush(stdout);
        scanf("%d", &y);
        system("cls"); // all the above output will be removed

        switch (y)
        {
        case 1:
            add(s, 100);
            break;
        case 2:
            RemoveStudent(s, 100);
            break;
        case 3:
            search(s, 100);
            break;
        case 4:
            update(s,100);
            break;
        case 5:
            system("cls");
            printf("\n\n\n\n\n\n\n\t\t\t\t\t\tPress any key to exit the program\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            exit(0);
            break;
        default:
            break;
        }
        welcome(s);
    }

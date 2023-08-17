#include "struct.h"
#include <stdio.h>

#include "add.h"
int isUniqueId(struct student s[], int id)
{

    for (int i = 0; i < 100; i++)
    {
        if (s[i].id == id)
        {
            return 0; // ID already exists, not unique
        }
    }
    return 1; // ID is unique
}
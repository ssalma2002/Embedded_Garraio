#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "search.h"
#include "uniqueID.h"
#include <stdlib.h>
#include "add.h"
#include "remove.h"
#include <unistd.h>
#include "welcome.h"
int main()
{
    struct student s[100] = {};
    strcpy(s[0].firstname, "Salma");
    strcpy(s[0].lastname, "Youssef");
    s[0].gender = 'F';
    s[0].gpa = 2.35;
    s[0].id = 1234567;
    s[0].level = 3;
    strcpy(s[1].firstname, "Nada");
    strcpy(s[1].lastname, "Ahmed");
    s[1].gender = 'F';
    s[1].gpa = 3.5;
    s[1].id = 7654321;
    s[1].level = 1;
    strcpy(s[2].firstname, "ss");
    strcpy(s[2].lastname, "Salma");
    s[2].gender = 'F';
    s[2].gpa = 2.35;
    s[2].id = 5647824;
    s[2].level = 3;
    
    welcome(s);

    printf("%d", s[0].id);
}
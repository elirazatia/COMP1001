/*
------------------DR VASILIOS KELEFOURAS-----------------------------------------------------
------------------COMP1001 ------------------------------------------------------------------
------------------COMPUTER SYSTEMS MODULE-------------------------------------------------
------------------UNIVERSITY OF PLYMOUTH, SCHOOL OF ENGINEERING, COMPUTING AND MATHEMATICS---
*/

#include <stdio.h>

int main()
{
    char name[20];

    printf("\nEnter your name: "); //get input from keyboard

    scanf_s("%20s", name, sizeof(name));

    printf("\nYour name is %s\n", name);

    return 0;

}

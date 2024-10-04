/*
 * Q5.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Catherine Nader
 */

#include <stdio.h>

struct employee {
    char *name;
    int id;
};
int main() {

    struct employee emp2 = {"Alex", 1002};

    struct employee *employees[] = {&emp2};

    struct employee **ptr = employees;

        printf("Employee %d: Name = %s \n", 1, (*ptr)->name);
        printf("ID = %d\n",(*ptr)->id);


    return 0;
}

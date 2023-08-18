/*
 * Q3.c
 *
 *  Created on: Aug 18, 2023
 *      Author: Catherine Nader
 */


#include "stdio.h"

void reverse()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
}
int main()
{

    printf("Please enter a sentence: ");
    fflush(stdin); fflush(stdout);
    reverse();

    return 0;

}




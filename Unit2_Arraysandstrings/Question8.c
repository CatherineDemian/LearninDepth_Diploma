/*
 * Question8.c
 *
 *  Created on: Jul 29, 2023
 *      Author: Catherine Nader
 */

#include"stdio.h"
#include"string.h"

int main()
{
	char sentence[70];
	char reverse[70];
	int j=0;
printf("Enter the string: ");
fflush(stdin); fflush(stdout);
scanf("%s",sentence);


for(int i=strlen(sentence)-1;i>=0;i--)
{
	reverse[j]=sentence[i];
j++;


}

printf("\nReverse string is: %s",reverse);
return 0;
}

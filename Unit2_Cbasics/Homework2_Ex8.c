/*
 * Homework2_Ex8.c
 *
 *  Created on: Jul 15, 2023
 *      Author: Catherine Nader
 */



#include "stdio.h"
void main()
{
	float a,b;
	char c;
	printf("Enter operator either + or - or * or divide:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	fflush(stdin); fflush(stdout);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a, &b);

	switch(c)
	{

	case'+':
	{
		printf("%f",a+b);

	}
	break;

	case'-':
		{
			printf("%f",a-b);

		}
		break;

	case'*':
		{
			printf("%f",a*b);

		}
		break;

	case'/':
		{
			printf("%f",a/b);

		}
		break;


	}




}

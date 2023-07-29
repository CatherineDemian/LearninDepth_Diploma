/*
 ============================================================================
 Name        : Arraysandstrings.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
#include"stdio.h"

int main()
{
	int r,c;
	int a[15][15];
	int b[15][15];
	printf("Enter rows and columns of matrix: \n");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);

	printf("Enter elements of matrix: \n");

	for(int i=0;i<r;i++)
	{

		for(int j=0;j<c;j++)
		{
			printf("Enter elements a%d%d:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&a[i][j]);
		}

	}

	printf("Entered matrix\n");

	for(int i=0;i<r;i++)
	{

		for(int j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

	for(int i=0;i<r;i++)
	{

		for(int j=0;j<c;j++)
		{
			b[j][i]=a[i][j];


		}

	}

	printf("Transpose of matrix\n");

	for(int i=0;i<c;i++)
	{

		for(int j=0;j<r;j++)
		{

			printf("%d \t",b[i][j]);

		}
		printf("\n");
	}

	return 0;
}
*/

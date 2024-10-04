/*
 * Q4.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Catherine Nader
 */
/*
#include "stdio.h"
int main()
{int x;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	int arr[x];
	int *ptr=arr;
	printf("Input %d number of elements in the array :",x);
	fflush(stdin); fflush(stdout);
	for(int i=0;i<x;i++)
	{
		scanf("%d",ptr);
		printf("element %d: %d",i+1,*ptr);
		ptr++;

		fflush(stdin); fflush(stdout);
	}
	printf("The elements of the array in reverse order are:\n");
	int y=1;
	ptr = arr + x - 1;
	    for (int i = x; i > 0; i--)
	    {
	        printf("element %d: %d\n", y, *ptr);
	        ptr--;
	        y++;  }
	return 0;
}
*/

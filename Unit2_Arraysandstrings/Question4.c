/*
 * Question4.c
 *
 *  Created on: Jul 28, 2023
 *      Author: Catherine Nader
 */
/*
#include"stdio.h"

int main()
{
	int n,loc,num;
	int elements[30];
	int newelements[30];
printf("Enter no of elements: ");
fflush(stdin); fflush(stdout);
scanf("%d\n",&n);

for(int i=0;i<n;i++)
{
scanf("%d",&elements[i]);

}

printf("\nEnter the element to be inserted: ");
fflush(stdin); fflush(stdout);
scanf("%d",&num);

printf("\nEnter the location: ");
fflush(stdin); fflush(stdout);
scanf("%d",&loc);

for(int j = 0; j < n+1; j++)
 {
     if(j == loc-1)
     {
         newelements[j] = num;
     }
     else if(j < loc-1)
     {
         newelements[j] = elements[j];
     }
     else
     {
         newelements[j] = elements[j-1];
     }

     printf("%d ", newelements[j]);
 }


return 0;
}
*/

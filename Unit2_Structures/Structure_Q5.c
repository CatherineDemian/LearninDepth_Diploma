/*
 * Structure_Q5.c
 *
 *  Created on: Oct 23, 2023
 *      Author: Catherine Nader
 */

#include "stdio.h"
#define Pi 3.1415
#define Areac(r) ((Pi)*(r)*(r))
int main()
{
	int radius;
	float area;
	printf("Enter the radius");
	fflush(stdin); fflush(stdout);
	scanf("%d",&radius);
	area=Areac(radius);
	printf("Area = %.2f",area);


return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double mile, km;

	printf("please enter kilometers: ");
	scanf("%lf", &km);
	mile = km / 1.609;

	printf("%.1lf km is equal to %.1lf miles \n", km, mile);
	return 0;
}
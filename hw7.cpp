#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int*ptr1 = arr1;
	int*ptr2 = arr2;
	int temp, i;

	printf("arr1: ");
	for(i=0; i<6; i++)
		printf(" %d", arr1[i]);

	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf(" %d", arr2[i]);

	printf("\n");

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr1;

	printf("after swap \n");

	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf(" %d", arr1[i]);

	printf("\n");

	printf("arr2: ");
	for (i = 0; i < 6; i++)
		printf(" %d", arr2[i]);

	return 0;
}
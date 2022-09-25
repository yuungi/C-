#define _CRT_SECURE_NO_WARRNINGS
#include <stdio.h>
int main(void)
{
	int space = 4;
	int star = 1;
	int i = 0;
	int k = 0;
	int j = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < space; j++) {
			printf(" ");
		}
		space--;
		printf("\n");
		for (k = 0; k < star; k++) {
			printf("*");
		}
		star = star + 2;
	}
	
	return 0;
}
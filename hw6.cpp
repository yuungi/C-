#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int odd(int a);
	int even(int a);

	int even(int a)
	{
		if (a % 2 == 0)
			printf("%3d", a);
		return 0;
	}
	
	int odd(int a)
	{
		if (a % 2 == 1)
			printf("%3d", a);
		return 0;
	}

	int main(void)
	{
		int a[5];
		int i;

		printf("Please input five integers: ");
		
		for (i = 0; i < 5; i++)
		{
			scanf("%d", &a[i]);
		}
		printf("Odd number: ");
		for (i = 0; i < 5; i++)
		{
			odd(a[i]);
		}
		printf("\n");
		printf("Even number: ");
		for (i = 0; i < 5; i++)
		{
			even(a[i]);
		}
		return 0;
}
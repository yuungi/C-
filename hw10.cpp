#include <stdio.h>
#include <math.h>
#include <string.h>
#define _CRT_SECURE_NO_WARRNINGS

typedef struct city
{
	char citiesname[30];
	char country[30];
	int population;
}City;

int main(void)
{
	struct city arr[3];

	printf("Input three cities: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("city> ");
		fgets(arr[i].citiesname, sizeof(arr[i].citiesname), stdin);
		printf("country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		printf("population> ");
		scanf_s("%d", &arr[i].population);
		getc(stdin);
	}

	printf("Printing the three cities: \n");
	printf("1. %s in %s with a population of %d people \n", arr[0].citiesname, arr[0].country, arr[0].population);
	printf("2. %s in %s with a population of %d people \n", arr[1].citiesname, arr[1].country, arr[1].population);
	printf("3. %s in %s with a population of %d people \n", arr[2].citiesname, arr[2].country, arr[2].population);

	return 0;
}
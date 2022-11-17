#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARRNINGS

int main(void)
{
	char str[100];

	printf("Input> ");
	gets_s(str);

	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	printf("Output> %s \n", str);
	return 0;
}
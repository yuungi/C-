#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (i = 2; num % i; i++);
	if (i == num) {
		printf("It is a prime number.");
	}
	else
		printf("It is not a prime number.");
	return 0;
}
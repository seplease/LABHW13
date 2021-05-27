#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, binary[8], i, size;

	printf("Enter ¾ç¼ö(<256):");
	scanf("%d", &num);

	for (i = 0; num != 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}

	size = i;

	for (i = 0; i < size; i++)
		printf("%d", binary[size - i - 1]);

	return 0;
}
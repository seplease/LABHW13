#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n);
int main(void)
{
	int num;

	printf("Enter a number:");
	scanf("%d", &num);

	printf("\n±æÀÌ´Â %d\n", get_cycle_number(num));
}
int get_cycle_number(int n)
{
	int count = 1;

	while (n != 1) {
		printf("%d ", n);
		if (n % 2 == 0)
			n = n / 2;
		else
			n = n * 3 + 1;
		count++;
	}

	if (n == 1)
		printf("%d", n);

	return count;
}
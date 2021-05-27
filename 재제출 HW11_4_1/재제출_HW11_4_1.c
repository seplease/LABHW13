#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num); // 함수의 원형
int main(void)
{
	int num;

	do
	{
		printf("Enter a number<-1 for exit>");
		scanf("%d", &num);

		if (num == -1)
			break;
		if (isPrime(num))
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");
	} while (num != -1);

	return 0;
}
int isPrime(int num) // 함수의 정의
{
	int i = 2;
	while (1) {
		if (num % i != 0)
			return 1;
		else
			return 0;
		i++;
	}
}
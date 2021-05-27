#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;
/*
oddIndex = 0;
evenIndex = 0;
10번 반복하다
수를 읽는다.
그 수가 홀수이면,
odd[oddIndex] = 그 수
oddIndex++;
그렇지 않으면(짝수이면)
even[evenIndex] = 그 수
*/
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		// num이 짝수이면 even에 홀수이면 odd에 넣는다.각각 인덱스를 사용한다.
		if (num % 2 != 0)
		{
			odd[oddIndex] = num;
			oddIndex++;
		}
		else
		{
			even[evenIndex] = num;
			evenIndex++;
		}
	}
	//A)
	printf("\n 홀수 출력:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	//B)
	printf("\n 짝수 출력:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}
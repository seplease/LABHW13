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
10�� �ݺ��ϴ�
���� �д´�.
�� ���� Ȧ���̸�,
odd[oddIndex] = �� ��
oddIndex++;
�׷��� ������(¦���̸�)
even[evenIndex] = �� ��
*/
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf("%d", &num);
		// num�� ¦���̸� even�� Ȧ���̸� odd�� �ִ´�.���� �ε����� ����Ѵ�.
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
	printf("\n Ȧ�� ���:");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	//B)
	printf("\n ¦�� ���:");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");

	return 0;
}
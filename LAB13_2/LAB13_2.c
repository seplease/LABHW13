#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int month[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 }, i, searchKey, exist;

	searchKey = -1;
	exist = 0;

	printf("Ž���� ������? ");
	scanf("%d", &searchKey);

	for (i = 0; i < 12; i++)
	{
		if (month[i] == searchKey)
		{
			exist = 1;
			break;
		}
	}

	if (exist == 1)
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�", searchKey, i + 1);
	else
		printf("���� %d�� ���� ���� �����ϴ�", searchKey);

	return 0;
}
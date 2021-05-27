#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int month[12] = { 11, 22, 33, 44, 55, 66, 11, 22, 33, 44, 55, 66 }, i, searchKey, exist;

	searchKey = -1;
	exist = 0;

	printf("탐색할 수입은? ");
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
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다", searchKey, i + 1);
	else
		printf("수입 %d를 갖는 달은 없습니다", searchKey);

	return 0;
}
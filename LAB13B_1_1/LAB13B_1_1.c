#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//필요한 변수
	// 문자열 변수 입력
	// 문자열 변수의 길이를 센다(for문 사용)
	// 길이를 출력한다.

	char s[6];
	int i, len;

	printf("Enter a string:");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i - 1;
	}
	printf("길이는 %d", i);
	for (len = 0; len)
}
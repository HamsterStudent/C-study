#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {
	char* str = "Monster";
	char str2[] = { 'M', 'O', 'N','S','T','E','R', 0 };
	char str3[20] = " is World!";
	char buff[30];

	printf("문자열의 문자갯수를 세는 함수: strlen");
	int length = strlen(str);

	printf("str의 문자갯수는 %d\n", length);

	printf("\n");
	printf("문자열 카피: strcpy\n");
	strcpy(buff, str2);
	printf("buff: %s\n", buff);

	printf("\n");
	printf("문자열 비교: strcmp\n");
	int comparevalue = strcmp(str, str2);

	if (comparevalue == 0) {
		printf("str:%s 와 str3: %s 의 두 문자열이 같습니다.\n", str, str2);
	}
	else {
		printf("str:%s 와 str3: %s 의 두 문자열이 다릅니다..\n", str, str2);
	}

	printf("\n");
	// 문자열 병합함수
	printf("문자열 병합: strcat\n");
	printf("buff: %s \n", buff);
	printf("str3: %s \n", buff);

	strcat(buff, str3);

	printf("buff: %s \n", buff);

	return 0;


	return 0;
}
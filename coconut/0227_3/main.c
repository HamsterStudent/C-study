#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main() {
	char* str = "Monster";
	char str2[] = { 'M', 'O', 'N','S','T','E','R', 0 };
	char str3[20] = " is World!";
	char buff[30];

	printf("���ڿ��� ���ڰ����� ���� �Լ�: strlen");
	int length = strlen(str);

	printf("str�� ���ڰ����� %d\n", length);

	printf("\n");
	printf("���ڿ� ī��: strcpy\n");
	strcpy(buff, str2);
	printf("buff: %s\n", buff);

	printf("\n");
	printf("���ڿ� ��: strcmp\n");
	int comparevalue = strcmp(str, str2);

	if (comparevalue == 0) {
		printf("str:%s �� str3: %s �� �� ���ڿ��� �����ϴ�.\n", str, str2);
	}
	else {
		printf("str:%s �� str3: %s �� �� ���ڿ��� �ٸ��ϴ�..\n", str, str2);
	}

	printf("\n");
	// ���ڿ� �����Լ�
	printf("���ڿ� ����: strcat\n");
	printf("buff: %s \n", buff);
	printf("str3: %s \n", buff);

	strcat(buff, str3);

	printf("buff: %s \n", buff);

	return 0;


	return 0;
}
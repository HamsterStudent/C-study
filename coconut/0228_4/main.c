#include <stdio.h>
#include "string2.h"



int main() {
	char str[] = "Monster";
	char str2[] = "Hamster";
	char str3[] = "Real";
	char str4[] = "Mango";
	// ���ڿ��� ���� ������ ī�����Ѵ�.
	int length = stringLength(str);
	printf("str�� ���ڰ�����: %d\n", length);
	char buff[50];
	// ���ڿ� ī��
	stringCopy(buff, str);
	printf("buff: %s\n", buff);

	// ���ڿ� ����
	stringConcat(buff, str4);
	printf("������ ���� : %s\n", buff);

	//// ���ڿ� ��
	//stringCompare(str3, str4);
	
	int ret = stringCompare(str, str3);

	if (ret == 0) {
		printf("str:%s == str3: %s\n", str, str3);
	}
	else {
		printf("str:%s != str3: %s\n", str, str3);
	}

	ret = stringCompare(str4, str3);

	if (ret == 0) {
		printf("str3:%s == str4: %s\n", str3, str4);
	}
	else {
		printf("str3:%s != str4: %s\n", str3, str4);
	}



	return 0;

}
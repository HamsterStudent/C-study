#include <stdio.h>
#include "string2.h"



int main() {
	char str[] = "Monster";
	char str2[] = "Hamster";
	char str3[] = "Real";
	char str4[] = "Mango";
	// 문자열의 문자 갯수를 카운팅한다.
	int length = stringLength(str);
	printf("str의 문자개수는: %d\n", length);
	char buff[50];
	// 문자열 카피
	stringCopy(buff, str);
	printf("buff: %s\n", buff);

	// 문자열 병합
	stringConcat(buff, str4);
	printf("병합한 문장 : %s\n", buff);

	//// 문자열 비교
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
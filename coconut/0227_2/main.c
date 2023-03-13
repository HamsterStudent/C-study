#include <stdio.h>

// 길이를 아는 상태에서 수행
void PrintCharArr(char* pstr, int size) {
	for (int i = 0; i < size; i++) {
		putchar(pstr[i]);
	}
	putchar('\n');
}

// 길이를 모르는 상태에서 수행(문자열의 0을 찾을때까지 수행)
void PrintString(char* pstr) {
	// *pstr의 값이 0이 아니면. c언어는 0을 거짓으로 받아들임! 0 말고는 전부 참
	while (*pstr) { 
		putchar(*pstr);
		pstr++;
	}
}

// 문자 배열 뒤에 문자열의 끝임을 알려주는 구분자인 0 넣고
// 이것을 문자열이라고 약속.
// 그래서 문자열 관련 함수는 인자로 들어온 문자열의 
// 선두번지 주소 뒤 어딘가에 0이 있을 거라 믿고 작동하는 함수

//문자열
int main() {
	// 초기값을 넣으면 알아서 컴파일러가 갯수를 세서 첨자를 자동으로 넣어줌

	// \0 이라는 구분자가 들어가면 문자열
	// 쌍따옴표로 감싸면 문자열이라고 함
	char str[] = "Hamster";
	// 문자 배열.
	char str2[] = { 'M', 'o', 'n', 's', 't', 'e', 'r' };

	//임의로 \0을 넣으면 문자열이 됨
	char str3[10] = { 'M', 'o', 'n', 's', 't', 'e', 'r', '\0' };


	printf("size  = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));
	printf("str3 size = %d\n", sizeof(str3));


	PrintCharArr(str, sizeof(str));
	PrintCharArr(str2, sizeof(str2));
	PrintCharArr(str3, sizeof(str3));

	PrintString(str);
	// 문자 배열의 주소값을 넣어서 똥같이 됨
	PrintString(str2);
	PrintString(str3);

	return 0;
}
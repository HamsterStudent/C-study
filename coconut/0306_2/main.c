#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	// 파일을 쓰기 모드로 오픈
	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("파일 열기에 실패했습니다");
		return;
	}

	// 파일 스트림에 한문자를 출력
	fputc('a', fp);
	fputc('b', fp);
	fputc('\n', fp);

	for (int i = 65; i < 65 + ('Z' - 'A' + 1); i++) {
		fputc(i, fp);
	}

	// 파일을 열었다면 파일을 닫아야 함
	fclose(fp);

	// 파일을 읽기모드로 오픈
	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return;
	}

	char c = 0;
	// 파일 스트림에서 한문자씩 파일의 끝이 아닐때까지 읽는다
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);

	return 0;
}
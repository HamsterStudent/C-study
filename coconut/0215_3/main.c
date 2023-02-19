#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int jumpValue = 0;

// 무조건 분기문
// goto문

// 레이블 : 명령어 위치값
Start:
	printf("정수값을 입력하세요 : ");
	scanf("%d", &jumpValue);

	if (jumpValue < -1) {
		// goto Exit => Exit 레이블이 있는 위치로 분기해라
		goto Exit;
	}
	printf("jumpValue = %d\n", jumpValue);

	// goto Start => start 레이블이 있는 위치로 분기해라
	goto Start;

	// 이 부분은 절대 실행되지 않음
	printf("출력이 안됨 \n");

Exit:
	printf("jumpValue = %d\n", jumpValue);
	printf("프로그램 끝\n");

	return 0;
}
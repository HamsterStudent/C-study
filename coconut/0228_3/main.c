#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Print.h"


int main() {
	int left = 0;
	int right = 0;

	void(*pfuncArray[4])(int, int);

	// 함수포인터 배열에 함수를 저장
	pfuncArray[0] = AddPrint;
	pfuncArray[1] = SubPrint;
	pfuncArray[2] = MulPrint;
	pfuncArray[3] = DivPrint;


	// 함수 포인터 배열에 함수의 주소값을 저장하고
	// 배열에 저장된 함수를 일괄적으로 호출
	printf("두 값을 입력하세요 : ");
	scanf("%d %d", &left, &right);

	for (int i = 0; i < 4; i++) {
		pfuncArray[i](left, right);
	}

	return 0;
}


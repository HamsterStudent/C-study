#include <stdio.h>
#include <stdlib.h>

int main() {
	int inputcount = 0;
	printf("입력하실 정수의 갯수를 입력하세요: ");
	scanf("%d", &inputcount);

	// os에 요청 . 동적 메모리 공간 할당 요청. 실행중에 메모리 공간을 할당
	int* parray = malloc(sizeof(int) * inputcount);

	// 동적 메모리 공간 반납
	free(parray);

	int a = 20;

	return 0;
}
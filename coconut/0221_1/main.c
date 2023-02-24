#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// 배열의 선언
	int array[10];

	// 배열의 초기값을 부여하는 경우 배열첨자를 쓰지 않아도 된다
	int arr[] = { 12,15,100, 60, 80, 210,12, 8, 2, 1 };

	int arrValue[5];
	printf("값을 5개 입력하세요 : \n");
	scanf("%d", &arrValue[0]);
	printf("두번째 값을 입력하세요 : \n");
	scanf("%d", &arrValue[1]);
	printf("세번째 값을 입력하세요 : \n");
	scanf("%d", &arrValue[2]);
	printf("네번째 값을 입력하세요 : \n");
	scanf("%d", &arrValue[3]);
	printf("다섯번째 값을 입력하세요 : \n");
	scanf("%d", &arrValue[4]);

	int sum = 0;

	int x = 0;

	// sizeof(arr) : 배열의 전체 바이트 수(전체용량)
	// sizeof(int) : 배열 요소의 바이트 수
	// 요소의 갯수 = 배열 전체 바이트수 / 각 요소의 바이트 수
	int length = sizeof(arrValue) / sizeof(int);

	for (int i = 0; i < length; i++) {
		sum += arrValue[i];
	}

	printf("arr배열에 저장된 값의 합계는 %d\n", sum);

	x = sum / length;

	printf("arr배열에 저장된 값의 평균은 %d\n", sum / x);


	return 0;
}
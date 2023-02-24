#include <stdio.h>

void ThirdFunc(int value) {
	int temp = 1000;
}
void SeconeFunc(int value) {
	int temp = 10;
	ThirdFunc(200);
	int temp2 = 2000;
}
void FirstFunc(int value) {
	int temp = 0;
	SeconeFunc(100);
}

int* pSetScore(int value) {
	// 로컬변수, 자동변수
	// static을 넣지 않으면 값이 유지되지 않음
	int score = 0;

	score += value;

	// score 변수(자동변수)의 주소값을 함수의 외부로 전달
	return &score;
}


int main() {
	int a = 1000;

	FirstFunc(50);

	int b = 2000;

	// 함수 안에 있는 자동 변수의 주소값을 함수의 외부로 전달해서 사용하면 안됨
	// 자동변수는 자신이 선언된 {} 블럭 안에서만 메모리공간이 유지됨
	// {} 블럭이 종료되면 해당 공간이 재사용되어서 값이 유지되지 않음
	int* pa = pSetScore(100);

	printf("pa(pSetScore함수안의 score변수의 주소값) = %d, *pa = %d\n", pa, *pa);
	printf("pa(pSetScore함수안의 score변수의 주소값) = %d, *pa = %d\n", pa, *pa);
	printf("pa(pSetScore함수안의 score변수의 주소값) = %d, *pa = %d\n", pa, *pa);



	return 0;
}
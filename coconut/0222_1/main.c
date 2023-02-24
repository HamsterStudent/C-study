#include <stdio.h>
// 변수를 만들 수 있는 위치
// 변수를 만들 때 접근 범위, 존속 기간에 따라 만든다

// 외부변수(함수의 블럭 밖에 위치), 전역변수(어디서나 접근 가능한 함수)
int global = 0;

// 매개변수 : 지역변수, 자동변수
int add(int a, int b) {
	// 지역변수(로컬변수)
	int temp = 0;
	temp = a + b;

	return temp;
}

int setScore(int value) {
	// 정적변수 : 프로그램이 살아있는 동안 계속 공간이 유지됨
	// 지역변수(위치), 정적변수(존속기간)
	static int score = 0;

	score += value;
	printf("score = %d\n", score);
	return value;
}

int main() {
	// 지역변수(접근 범위), 자동변수(존속기간)
	int a = 0;

	{
		int a = 10;
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	int b = 2000;
	setScore(10);
	setScore(12);
	setScore(3);

	printf("global = %d\n", global);

	return 0;
}

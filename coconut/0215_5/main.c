#include <stdio.h>

int main() {
	printf("짝수 출력 : \n");
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			printf("짝수 : %d\n", i);
		}
	};

	printf("\n\n");
	printf("홀수 출력 : \n");
	// 변수 i의 값이 0부터 100보다 작을때 까지 i의 값이 증가하는 동안 홀수만 출력해라
	for (int i = 0; i < 100; i += 3) {
		if (i & 1 == 1) {
			printf("홀수: %d\n", i);
		}
	}
	// 마지막 비트가 1이면 홀수, 0이면 짝수

	printf("\n\n");
	// 변수 i는 0부터 변수 j는 10부터 i변수는 1증가하면서 10보다 작을때까지
	// j 변수는 1씩 감소하면서 0보다 클때까지 i의 값과 j의 값을 출력해라.
	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
		printf("i = %d, j= %d\n", i, j);
	}

	int value = 0;

	// 초기식, 조건식, 증감식은 생략이 가능
	// 초기식 생략. 별로바람직하지않음!!
	for (; value < 10; value += 2) {
		printf("value = %d\n", value);
	}

	printf("\n\n");
	value = 0;

	// 초기식, 조건식 생략
	for (;; value += 2) {
		printf("value = %d\n", value);
		if (value > 10) {
			break;  //작업을 멈추고 탈출
		}
	}

	printf("\n\n");
	value = 0;
	// 초기식, 증감식 생략
	for (; value < 10;) {
		value += 3;

		printf("value = %d\n", value);
	}
}


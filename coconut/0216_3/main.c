#include <stdio.h>

// while문은 반복 횟수를 모르는 경우에 주로 사용

int main() {
	// 현재시간으로 난수 씨드값 생성
	srand(time(NULL));

	// 나머지 연산자를 사용하여
	// 난수의 값을 0 ~ 199의 범위의 값으로 변경
	int loopvalue = rand() % 200;

	int count = 0;
	while (loopvalue > 5 && loopvalue < 195) {
		printf("count : %d, loopvalue : %d, Monster\n", count, loopvalue);
	
		loopvalue = rand() % 200;
		count++;
	}

	return 0;

}
#include <stdio.h>

int main() {
	// 반복문안에서 continue 문으로 명령어 건너뛰기
	for (int i = 0; i < 100; i++) {
		// 100까지의 출력 중에서 짝수를 판별
		if (i % 2 == 1) {
			continue;
		}
		// continue때문에 해당 명령어는 건너뛰게 됨
		printf("i = %d\n", i);
	}
}
#include <stdio.h>

int main() {
	// 반복문은 중첩이 가능

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j= %d\n", i, j);
		}
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%3d ", i * 10 + j);
		}
		printf("\n");
	}


	// 삼중 for문 : 입체적인 데이터를 다룰 때 많이 사용
	/*for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}*/
}
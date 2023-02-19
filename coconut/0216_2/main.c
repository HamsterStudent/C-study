#include <stdio.h>

int main() {
	int value = 100;
	// while(조건식) : 조건식이 참이면 실행
	// while문은 조건을 앞에서 따지기 때문에 명령어가 한번도 실행 안될수도
	while (value > 0) {
		value--;

		printf("value = %d\n", value);
	}

	printf("\n");
	value = 100;

	// do while문은 조건을 뒤에서 따짐. 무조건 한번은 실행
	// 잘 쓰진 않는다는
	do {
		value--;
		printf("value = %d\n", value);
	} while (value < 0);

	return 0;
}
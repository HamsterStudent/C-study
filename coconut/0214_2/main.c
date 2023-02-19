#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("용돈 금액을 입력하세요 : ");
	scanf("%d", &money);

	if (money > 100000) {
		printf("오마카세 먹기\n");
	}
	else if (money > 80000) {
		printf("술마시기\n");
	}
	else if (money > 60000) {
		printf("맛집\n");
	}
	else if (money > 40000) {
		printf("PC방\n");
	}
	else if (money > 20000) {
		printf("중국집\n");
	}
	else {
		printf("낮잠\n");
	}

	return 0;
}
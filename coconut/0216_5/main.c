#include <stdio.h>

int main() {
	// 중첩된 반복문 탈출하기
	int flag = 0;
	int count = 100;
	int count2 = 20;

	while (1) {
		count = 100;
		while (count > 0) {
			count--;
			count2 = 20;
			while (count2 > 0) {
				count2--;
				printf("count = %d, count2 = %d\n", count, count2);
				if (count == 10 && count2 % 2 == 1) {
					printf("중첩된 while문을 탈출\n");
					flag = 1;
					// break문은 선언된 위치에 가장 가까운 반복문을 탈출
					// 중첩되어있는 반복문을 나가기 힘듬
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

	while (1){
		count = 100;
		while (count > 0) {
			count--;
			count2 = 20;
			while (count2 > 0) {
				count2--;

				printf("count = %d, count2 = %d\n", count, count2);

				if (count == 10 && count2 % 2 == 1) {
					printf("중첩된 while문을 탈출\n");
					goto LoopExit;
				}
			}
		}
	}

LoopExit: printf("프로그램 끝");

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// returntype 함수명(매개변수){ 명령어; }
void PrintMonster(int x) {
	for (int i = 0; i < x; i++) {
		printf("Monster\n");
	}
}

int main() {

	int num = 0;
	printf("소환하고 싶은 몬스터의 수를 입력하세요 :");
	scanf("%d", &num);

	PrintMonster(num);

	return 0;
}


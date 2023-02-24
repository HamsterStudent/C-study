#include <stdio.h>

// 함수는 명령어를 하나로 묶어서 하나의 단위로 만들 때 사용
// 재사용성 : 명령어를 묶어 하나의 단위로 만들어 놓고 호출
// 모듈성 : 코드를 사이사이에 넣기 편해짐
// 가독성 : 코드를 분석할 때 읽기 편해짐

void PrintString(char* str) {
	for (int i = 0; i < 20; i++) {
		printf("%s\n", str);
	}
}

int main() {

	PrintString("Monster");
	PrintString("Hamster");

	return 0;
}
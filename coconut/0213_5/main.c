#include <stdio.h>

// 함수 : 명령어 하나로 묶어서 하나의 단위를 만들 때 사용
// 순차적으로 실행하는 흐름을 가지고 있다(강제적 실행 흐름 처리)
// 강제적인 실행 흐름을 제어해야할 때가 있음
// 실핼 흐름을 제어할 때 사용하는 것을 제어문

// 제어문
// 조건문 : 조건에 따라서 실행의 흐름을 제어할 때 사용 
// 분기문 : 조건 분기 - if, if-else, if else-if switch-case 무조건 분기 - goto
// 반복문 : for, while, do-while

int main() {
	int a = 20;
	int b = 30;

	// if(조건식) {
	//	조건식 : 식의 결과값이 true / false
	//	실행할 명령어를 나열
	// }

	// 만약 a가 b보다 작다면
	if (a < b) {
		printf("a : %d가 b : %d보다 작습니다.", a, b);
	}
	else {
		printf("a : %d가 b : %d보다 큽니다.", a, b);
	};

	return 0;
}
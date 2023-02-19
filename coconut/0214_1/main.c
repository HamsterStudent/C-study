#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	// 제어문 (Control Statement)
	// 조건문 (Conditional statement) : 조건에 따라서 명령어 처리하거나 처리하지 않은
	//	-- 분기문 분기 : 프로그램의 실행흐름을 다른쪽으로 보내는 것
	//  -- 조건분기 : 조건에 따라서 실행 흐름을 다른 쪽으로 보내는 것
	//		if, if-else, if-else-if
	//		switch-case (선택문)
	//	-- 무조건분기 : 실행 흐름을 그냥 다른 쪽으로 보내는 것
	//		goto
	// 반복문 (Iterate Statement) : 반복적으로 명령어를 실행할때
	//		for, while, do-while

	int age = 0;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	if (age < 19) {
		printf("당신은 미성년자입니다. 입장하실 수 없습니다.\n");
	}

	int money = 0;
	int goodmoney = 3200;

	printf("지불금을 입력하세요 : ");
	scanf("%d\n", &money);

	// 이중조건문 : 참인 경우와 거짓인 경우 둘 다 처리함
	if (money >= goodmoney) {
		printf("물건을 구매하실 수 있습니다.");
	}
	else {
		printf("지불금이 물건값보다 작아서 물건을 구매하실 수 없습니다.");
	}

	return 0;
}
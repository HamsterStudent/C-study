#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;
	printf("정수값을 입력하세요");
	scanf("%d", &inputValue);

	switch (inputValue) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("입력 받은 값이 0~9사이의 값입니다.\n");
		break;
	case 10:
	case 11:
	case 12:
		printf("입력 받은 값이 10~12 사이의 값입니다.\n");
		break;
	default:
			printf("입력 받은 값이 0 ~ 12 사이의 값입니다.\n");
			break;
	}
	// switch - case 문을 if-else-if문으로 만들 수 있습니다.
	// 정수값에 따라 분기 처리를 할때는 switch - case문을 사용하는 것이 유리합니다.
	// switch-case 문은 if-else-if 문보다 가독성이 뛰어납니다.

	if (inputValue >= 0 && inputValue <= 9) {
		printf("입력 받은 값이 0~9사이의 값입니다.\n");
	}
	else if (inputValue >= 10 && inputValue <= 12) {
		printf("입력 받은 값이 10~12 사이의 값입니다.\n");
	}
	else {
		printf("입력 받은 값이 0 ~ 12 사이의 값입니다.\n");
	}

	return 0;
}
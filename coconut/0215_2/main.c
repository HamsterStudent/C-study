#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int leftValue = 0;
	int rightValue = 0;
	char oper = 0;

	printf("계산하실 값을 두개 입력하세요(예 : 10 10) : \n");
	scanf("%d %d", &leftValue, &rightValue);

	printf("계산하실 연산자를 입력하세요(덧셈: + 뺄셈 - 곱셈 * 나눗셈 /) : \n");
	scanf("%*c%c", &oper);
	// %*c : 첫 글자를 무시하라는 명령?

	switch (oper) {
	case '+':
	{
		float ret = 0.0f;

		ret = leftValue + rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);
	}
	break;

	case '-':
	{
		float ret = 0.0f;
		ret = leftValue - rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);

	}

	case '*':
	{
		float ret = 0.0f;
		ret = leftValue * rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);

	}

	case '/':
	{
		float ret = 0.0f;
		ret = leftValue / rightValue;
		printf("%d %c %d = %f\n\n", leftValue, oper, rightValue, ret);

	}
	}

	// if-else-if

	if (oper == '+') {
		float ret = 0.0f;
		ret = leftValue + rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);
	}
	else if (oper == '-') {
		float ret = 0.0f;
		ret = leftValue - rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);
	}
	else if (oper == '*') {
		float ret = 0.0f;
		ret = leftValue * rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);
	}
	else if (oper == '/') {
		float ret = 0.0f;
		ret = leftValue / rightValue;
		printf("%d %c %d = %f\n", leftValue, oper, rightValue, ret);
	}
	else {
		printf("잘못된 입력값입니다.");
	}

	return 0;
}
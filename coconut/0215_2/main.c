#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int leftValue = 0;
	int rightValue = 0;
	char oper = 0;

	printf("����Ͻ� ���� �ΰ� �Է��ϼ���(�� : 10 10) : \n");
	scanf("%d %d", &leftValue, &rightValue);

	printf("����Ͻ� �����ڸ� �Է��ϼ���(����: + ���� - ���� * ������ /) : \n");
	scanf("%*c%c", &oper);
	// %*c : ù ���ڸ� �����϶�� ���?

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
		printf("�߸��� �Է°��Դϴ�.");
	}

	return 0;
}
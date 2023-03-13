#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


float add(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a - b;
}

float mul(float a, float b) {
	return a * b;
}

float div(float a, float b) {
	return a / b;
}

float calculator(float(*pfunc)(float, float), int a, int b) {


	return pfunc(a, b);
}

int main() {
	float left = 0.0f;
	float right = 0.0f;
	char oper = 0;
	float calValue = 0.0f;

	printf("계산하려는 값을 두개 입력하세요 : ");

	scanf("%f %c %f", &left, &oper, &right);

	switch (oper) {
	case '+':
		calValue = calculator(add, left, right);
		printf("%.2f + %.2f = %.2f\n", left, right, calValue);
		break;
	case '-':
		calValue = calculator(sub, left, right);
		printf("%f - %f = %f\n", left, right, calValue);
		break;
	case '*':
		calValue = calculator(mul, left, right);
		printf("%f x %f = %f\n", left, right, calValue);
		break;
	case '/':
		calValue = calculator(div, left, right);
		printf("%f / %f = %f\n", left, right, calValue);
		break;
	}
	

	return 0;
}
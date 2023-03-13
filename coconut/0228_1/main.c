#include <stdio.h>

int add(int a, int b) {
	return a | b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}

int main() {
	int a = 20;
	int b = 30;

	// ���ϰ��� int���̰� �Ű������� int�� �ΰ��� �޴� �Լ��� �ּҰ��� �����ϴ� ����
	int(*pfunc)(int, int);

	// pfunc = &add �� ����
	pfunc = add;

	// pfunc�� add�Լ��� �ּҰ��� �����ϰ�
	// pfunc������ add�Լ��� ȣ��
	int ret = pfunc(a, b);

	printf("%d + %d = %d\n", a, b, ret);

	pfunc = &sub;

	ret = pfunc(a, b);
	printf("%d - %d = %d\n", a, b, ret);

	pfunc = &mul;

	ret = pfunc(a, b);
	printf("%d x %d = %d\n", a, b, ret);

	float(*pfloatfunc)(int, int);
	pfloatfunc = &div;

	float fret = pfloatfunc(a, b);
	printf("%d / %d = %f\n", a, b, fret);


	add(a, b);
}
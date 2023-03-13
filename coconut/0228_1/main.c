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

	// 리턴값은 int형이고 매개변수는 int값 두개를 받는 함수의 주소값을 저장하는 변수
	int(*pfunc)(int, int);

	// pfunc = &add 와 같음
	pfunc = add;

	// pfunc에 add함수의 주소값을 저장하고
	// pfunc변수로 add함수를 호출
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
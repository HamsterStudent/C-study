#include <stdio.h>


// 리턴타입 : 함수에 묶여있는 명령어를 처리한 결과값을 어떤타입으로 돌려줄지
// 함수명 : 함수를 호출할 때 사용할 이름
// 매개변수 : 함수에게 전달된 값을 받는 변수

int add(int a, int b) {
	int result = 0;

	result = a + b;

	// return은 함수 외부로 결과값을 전달할 때 사용
	return result;
}

int sub(int a, int b) {
	int result = 0;

	result = a - b;

	return result;
}

int mul(int a, int b) {
	int result = 0;

	result = a * b;

	return result;
}

int div(int a, int b) {
	int result = 0;

	result = a / b;

	return result;
}

int main() {
	int a = 20;
	int b = 30;

	// 함수를 호출할 때 전달된 값
	int result = add(a, b);
	printf("%d + %d = %d\n", a, b, result);
	result = sub(a, b);
	printf("%d - %d = %d\n", a, b, result);
	result = mul(a, b);
	printf("%d * %d = %d\n", a, b, result);
	result = div(a, b);
	printf("%d / %d = %d\n", a, b, result);


	return 0;
}
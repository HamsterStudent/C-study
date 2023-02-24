#include <stdio.h>
// 함수를 어떨때 사용?
// 유용한 코드를 하나로 묶을때
// 반복적 코드를 하나로 묶을때
// 가독성을 높이기 위해서 각각의 기능부분을 묶을 때도 사용합니다.

// 사칙연산함수

// 리턴타입: 함수에 묶어있는 명령어를 처리한 결과값을 어떤타입으로 돌려줄꺼냐?
// 함수명: 함수를 호출할때 사용할 이름
// 매개변수(Parameter): 함수에게 전달된 값을 받는 변수
int add(int a, int b) {
	int result = 0;

	result = a + b;

	return result; // return문은 함수외부로 결과값을 전달할때 사용합니다.   
}


float addf(float a, float b) {
	return a + b;
}

// 뺄셈(sub tract), 곱셈(mul tiply), 나눗셈(div ide) 함수를 
// 만드시고 함수를 호출하여 결과값을 받고 출력해보세요..
int sub(int a, int b) {
	return a - b;
}

float subf(float a, float b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float mulf(float a, float b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}

float divf(float a, float b) {
	return a / b;
}


int main() {
	int a = 20;
	int b = 30;

	// 정수 사칙연산
	int result = add(a, b); // 함수를 호출할때 전달된 값을 인자(argument)

	printf("%d + %d = %d\n", a, b, result);


	result = sub(a, b);
	printf("%d - %d = %d\n", a, b, result);

	result = mul(a, b);
	printf("%d x %d = %d\n", a, b, result);

	float resultf = 0.0f;
	resultf = div(a, b);
	printf("%d / %d = %f\n", a, b, resultf);

	// 실수 사칙연산
	float c = 30.4f;
	float d = 4.5f;

	resultf = addf(c, d);
	printf("%f + %f = %f\n", c, d, resultf);

	resultf = subf(c, d);
	printf("%f - %f = %f\n", c, d, resultf);

	resultf = mulf(c, d);
	printf("%f x %f = %f\n", c, d, resultf);

	resultf = divf(c, d);
	printf("%f / %f = %f\n", c, d, resultf);



	return 0;
}
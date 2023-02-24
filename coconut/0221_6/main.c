#include <stdio.h>

void SwapValue(int a, int b) {
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

void PSwapValue(int* pa, int* pb) {
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	printf("SwapValue 함수 호출 전\n");
	printf("a = %d, b = %d\n", a, b);

	SwapValue(a, b);
	printf("SwapValue 함수 호출 후\n");
	printf("a = %d, b = %d\n", a, b);

	printf("PSwapValue 함수 호출 전(call by address)\n");
	printf("a = %d, b = %d\n", a, b);

	PSwapValue(&a, &b);   // 인자값으로 a변수의 주소값, b변수이 주소값을 전달
	// call by address (주소값에 의한 호출)
	printf("PSwapValue 함수 호출 후\n");
	printf("a = %d, b = %d\n", a, b);




	return 0;
}
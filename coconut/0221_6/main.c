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

	printf("SwapValue �Լ� ȣ�� ��\n");
	printf("a = %d, b = %d\n", a, b);

	SwapValue(a, b);
	printf("SwapValue �Լ� ȣ�� ��\n");
	printf("a = %d, b = %d\n", a, b);

	printf("PSwapValue �Լ� ȣ�� ��(call by address)\n");
	printf("a = %d, b = %d\n", a, b);

	PSwapValue(&a, &b);   // ���ڰ����� a������ �ּҰ�, b������ �ּҰ��� ����
	// call by address (�ּҰ��� ���� ȣ��)
	printf("PSwapValue �Լ� ȣ�� ��\n");
	printf("a = %d, b = %d\n", a, b);




	return 0;
}
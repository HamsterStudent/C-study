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

void PPSwapValue(int** ppa, int** ppb) {
	int temp = 0;
	temp = **ppa;
	**ppa = **ppb;
	**ppb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;

	SwapValue(a, b);

	printf("a = %d\nb = %d\n", a, b);

	PSwapValue(&a, &b);

	printf("a = %d\nb = %d\n", a, b);

	PPSwapValue(&pa, &pb);

	printf("a = %d\nb = %d", a, b);


	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int Hamster(void) {

	double num = 30.01;

	int* arr;
	arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		arr[i] = i + 1;
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}

int main() {
	// 메모리를 4바이트 할당해주세요
	int* pa = (int*)malloc(4);
	// malloc(sizeof(4))

	*pa = 1000;

	printf("pa = %d\n", *pa);

	float* pfa = (float*)pa;

	*pfa = 1.2f;

	printf("*pfa = %d", *pfa);

	free(pfa);

	double* pda = (double*)malloc(8);

	*pda = 123123.12;
	printf("*pda = %lf\n", *pda);

	int* parr = (int*)pda;

	parr[0] = 100;
	parr[1] = 300;

	printf("parr[0] = %d, parr[1] = %d\n", parr[0], parr[1]);


	int num = 30.12;

	int* arr = (int*)malloc(sizeof(int) * num);


	arr[29] = 11.23;

	int x = sizeof(arr);

	printf("arr : %d, arr[29] : %d, x: %d\n", arr, arr[29], x);

	Hamster();

	return 0;
}

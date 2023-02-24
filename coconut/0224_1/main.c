#include <stdio.h>
#include <stdlib.h>

int main() {
	// malloc, calloc, realoc(동적메모리 할당함수) / new(객체지향)
	// free (동적메모리 반납함수)

	int* pa = (int*)malloc(4);
	// malloc(sizeof(4))

	*pa = 1000;

	printf("pa = %d\n", *pa);

	float* pfa = (float*)pa;

	*pfa = 1.2f;

	printf("*pfa = %f\n", *pfa);

	free(pfa);

	// 할당받은 공간을 의미
	double* pda = (double*)malloc(8); // 메모리 사냥해옴
	//float* pfarray = (float*)(pda + 1);
	// malloc(sizeof(double))

	*pda = 12312.123; // 사냥한거 그냥 구움
	printf("*pda = %lf\n", *pda);

	int* parray = (int*)pda; // 사냥한거 반 자름

	parray[0] = 100; // 하나에는 소금치기
	parray[1] = 200; // 하나에는 후추치기

	printf("parray[0] = %d, parray[1] = %d\n", parray[0], parray[1]);

	free(parray);


	return 0;
}
#include <stdio.h>

int main() {
	int a;
	a = 20;

	printf("&a = %d, &a = %p\n\n", &a, &a);

	int* pa;

	pa = &a;

	int** ppa;

	ppa = &pa;

	int*** pppa;

	pppa = &ppa;

	// 주소값에 사용한 *(asterisk)는 포인터 연산자
	// 주소값에 할당 받은 메모리 공간을 의미
	***&pppa;
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	printf("&***pppa = %p,\n &***&ppa = %p, \n&**ppa = %p, \n&**pa = %p, \n&*pa = %p, \n&*&a = %p, \n&a = %p\n", 
		&***pppa, &***&ppa, &**&ppa, &**&pa, &*pa, &*&a, &a);

	printf("***pppa = %d, ***&ppa = %d, **ppa = %d, **&pa = %d, *pa = %d, *&a = %d, a = %d\n",
		***pppa, ***&ppa, **ppa, **&pa, *pa, *&a, a);

	return 0;
}
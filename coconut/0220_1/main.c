#include <stdio.h>

int main() {
	int a;
	a = 70;

	int b;
	b = 50;

	int* pa;

	pa = &a;

	int** ppa;

	ppa = &pa;

	// 전부 한 공간을 가리킴
	**ppa;
	**&pa;
	*pa;
	*&a;
	a;

	printf("%d %d %d %d \n\n", **ppa, **&pa, *pa, *&a);


	int x;
	int y;

	x = 77;
	y = 88;

	int* px = &x;
	int* py = &y;

	int** ppx = &px;
	int** ppy = &py;


	printf("**ppx = %d **ppy = %d\n\n", **ppx, **ppy);

	// ppx변수와 ppy의 변수의 값을 수정해
	// **ppx가 y의값을 **ppy가 x의 값을 출력
	ppx = &py;
	ppy = &px;

	printf("**ppx = %d **ppy = %d\n\n", **ppx, **ppy);

	// ppx, ppy, temp 사용하여
	// **ppx가 y의 값을, **ppy가 x의 값 출력

	int** temp = ppx;
	ppx = ppy;
	ppy = temp;
	

	printf("**ppx = %d **ppy = %d\n", **ppx, **ppy);

	return 0;
}
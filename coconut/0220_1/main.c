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

	// ���� �� ������ ����Ŵ
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

	// ppx������ ppy�� ������ ���� ������
	// **ppx�� y�ǰ��� **ppy�� x�� ���� ���
	ppx = &py;
	ppy = &px;

	printf("**ppx = %d **ppy = %d\n\n", **ppx, **ppy);

	// ppx, ppy, temp ����Ͽ�
	// **ppx�� y�� ����, **ppy�� x�� �� ���

	int** temp = ppx;
	ppx = ppy;
	ppy = temp;
	

	printf("**ppx = %d **ppy = %d\n", **ppx, **ppy);

	return 0;
}
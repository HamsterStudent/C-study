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

	// �ּҰ��� ����� *(asterisk)�� ������ ������
	// �ּҰ��� �Ҵ� ���� �޸� ������ �ǹ�
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
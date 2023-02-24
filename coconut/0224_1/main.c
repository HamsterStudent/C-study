#include <stdio.h>
#include <stdlib.h>

int main() {
	// malloc, calloc, realoc(�����޸� �Ҵ��Լ�) / new(��ü����)
	// free (�����޸� �ݳ��Լ�)

	int* pa = (int*)malloc(4);
	// malloc(sizeof(4))

	*pa = 1000;

	printf("pa = %d\n", *pa);

	float* pfa = (float*)pa;

	*pfa = 1.2f;

	printf("*pfa = %f\n", *pfa);

	free(pfa);

	// �Ҵ���� ������ �ǹ�
	double* pda = (double*)malloc(8); // �޸� ����ؿ�
	//float* pfarray = (float*)(pda + 1);
	// malloc(sizeof(double))

	*pda = 12312.123; // ����Ѱ� �׳� ����
	printf("*pda = %lf\n", *pda);

	int* parray = (int*)pda; // ����Ѱ� �� �ڸ�

	parray[0] = 100; // �ϳ����� �ұ�ġ��
	parray[1] = 200; // �ϳ����� ����ġ��

	printf("parray[0] = %d, parray[1] = %d\n", parray[0], parray[1]);

	free(parray);


	return 0;
}
#include <stdio.h>

int main() {
	// �迭�� ������ ������ Ÿ���� ���������� ������ �� ���
	int array[5];

	int* parray = array;

	int array2[3][3];

	// int [3]¥�� ����� ���� �ּҰ��� �����ϴ� �����ͺ���
	// �迭��
	int(*pparray)[3];
	// �����ͽ�
	*(*(array2 + 1) + 1) = 100;


	return 0;
}
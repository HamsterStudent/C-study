#include <stdio.h>

int main() {
	int array1[3];
	int array2[3][3];

	// int 3��¥�� �迭�� �ּҰ��� ����
	int(*parray2)[3] = array2;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			array2[i][j] = i * 3 + j;
		}
	}
	/*for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("parray2[%d][%d] = %d\n", i, j, parray2[i][j]);
		}
	}*/

	//�迭��
	array2[1][2] = 100;

	//�����ͽ�
	*(*(array2 + 2) + 1) = 100;

	array2[1][2] = 200;
	*(*(array2 + 1) + 2) = 400;

	
	// 2�����迭�� ��������(2�� - 9��) ������� �����غ�����
	int arr[8][9];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j+1);
		}
	 }
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++) {
			printf("������[%d][%d] = %d\n", i+2, j+1, arr[i][j]);
		}
	}


	return 0;
}
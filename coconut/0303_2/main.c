#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


// ���� 2���� �迭
int main() {
	int column = 0;
	int row = 0;
	int** pparray = NULL;

	printf("2���� �迭�� ���ο��� ���ο��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &column, &row);

	// �����޸� �Ҵ�
	pparray = (int**)malloc(sizeof(int*) * column);

	// �����޸� �Ҵ�
	for (int i = 0; i < column; i++) {
		pparray[i] = (int*)malloc(sizeof(int) * row);
	}

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			pparray[i][j] = i * row + j;
		}
	}

	for (int i = 0; i < column; i++) {
		for (int j = 0; j < row; j++) {
			printf("pparray[%d][%d] = %d\n", i, j, pparray[i][j]);
		}
	}

	// �����޸� �ݳ�ó��
	for (int i = 0; i < column; i++) {
		free(pparray[i]);
	}

	// �����޸� �ݳ�ó��
	free(pparray);

}
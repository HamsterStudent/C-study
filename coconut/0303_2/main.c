#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


// 동적 2차원 배열
int main() {
	int column = 0;
	int row = 0;
	int** pparray = NULL;

	printf("2차원 배열의 가로열과 세로열의 갯수를 입력하세요 : ");
	scanf("%d %d", &column, &row);

	// 동적메모리 할당
	pparray = (int**)malloc(sizeof(int*) * column);

	// 동적메모리 할당
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

	// 동적메모리 반납처리
	for (int i = 0; i < column; i++) {
		free(pparray[i]);
	}

	// 동적메모리 반납처리
	free(pparray);

}
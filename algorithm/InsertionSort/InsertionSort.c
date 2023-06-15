#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Score.h"

void InsertionSort(Score DataSet[], int Length) {
	int i = 0;
	int j = 0;
	Score value = { 0, 0.0 };
	int Complete = 0;


	for (i = 1; i < Length; i++) {
		Complete = 0;
		if (DataSet[i - 1].score <= DataSet[i].score) {
			continue;
		}
		value = DataSet[i];
		for (j = 0; j < i; j++) {
			if (DataSet[j].score > value.score) {
				memmove(&DataSet[j + 1], &DataSet[j], sizeof(DataSet[0]) * (i - j));
				DataSet[j] = value;
				Complete = 1;
				break;
			}
		}
		if (Complete == 0) {
			break;
		}
	}
}

int main(void) {
	//int DataSet[] = { 6, 4, 2, 3, 1, 5 };
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;
	double starttime, endtime;   // 시작시간, 끝나는시간

	starttime = (double)clock() / CLOCKS_PER_SEC;   // 시작시간 기록
	InsertionSort(DataSet, Length);
	endtime = (double)clock() / CLOCKS_PER_SEC;      // 끝나는 시간 기록
	
	for (int i = 0; i < 10; i++) {
		printf("array[%d].number = %d, array[%d].score = %lf\n", i, DataSet[i].number, i, DataSet[i].score);
	}
	for (int i = 29990; i < 30000; i++)
	{
		printf("DataSet[%d].number = %d, DataSet[%d].score = %lf\n", i, DataSet[i].number, i, DataSet[i].score);
	}

	printf("정렬시간: %lf\n", (endtime - starttime));
	printf("\n");

	return 0;
}
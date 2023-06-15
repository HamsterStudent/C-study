#include <stdio.h>
#include "Score.h"
#include <time.h>

void BubbleSort(int DataSet[], int Length) {
	int i = 0;
	int j = 0;
	int temp = 0;
	int Complete = 0;

	for (i = 0; i < Length - 1; i++) {
		Complete = 0;
		for (j = 0; j < Length - (i + 1); j++) {
			if (DataSet[j] > DataSet[j + 1]) {
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
				Complete = 1;
			}
		}

		if (Complete != 1) {
			break;
		}

	}
}

void DoubleSort(Score DataSet[], int Length) {
	int i = 0;
	int j = 0;
	Score temp = { 0, 0.0 };
	int Complete = 0;

	for (i = 0; i < Length - 1; i++) {
		Complete = 0;
		for (j = 0; j < Length - (i + 1); j++) {
			if (DataSet[j].score > DataSet[j + 1].score) {
				temp = DataSet[j + 1];
				DataSet[j + 1] = DataSet[j];
				DataSet[j] = temp;
				Complete = 1;
			}
		}

		if (Complete != 1) {
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
	DoubleSort(DataSet, Length);
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
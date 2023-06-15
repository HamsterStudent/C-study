#include <stdio.h>
#include <time.h>
#include "Score.h"

void Swap(Score* A, Score* B) {
	Score Temp = *A;
	*A = *B;
	*B = Temp;
}

int Partition(Score DataSet[], int Left, int Right) {
	int First = Left;
	double Pivot = DataSet[First].score;

	++Left;

	while (Left < Right) {
		while (DataSet[Left].score <= Pivot)
			++Left;
		while (DataSet[Right].score > Pivot)
			--Right;

		if (Left >= Right)
			break;

		Swap(&DataSet[Left], &DataSet[Right]);
	}
	Swap(&DataSet[First], &DataSet[Right]);

	return Right;
}

void QuickSort(Score DataSet[], int Left, int Right) {
	if (Left < Right) {
		int Index = Partition(DataSet, Left, Right);

		QuickSort(DataSet, Left, Index - 1);
		QuickSort(DataSet, Index + 1, Right);
	}
}

int main(void) {
	//int DataSet[] = { 6, 4, 2, 3, 1, 5 };
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;
	double starttime, endtime;   // 시작시간, 끝나는시간

	starttime = (double)clock() / CLOCKS_PER_SEC;   // 시작시간 기록
	QuickSort(DataSet, 0, Length - 1);
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
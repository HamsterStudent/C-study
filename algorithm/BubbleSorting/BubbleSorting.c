#include <stdio.h>
#include "Score.h"

void BubbleSorting(int* array, int length) {

	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}



}

int main() {
	//int array[] = { 32, 9, 85 , 7, 8, 12, 3, 15, 4, 2, 6, 1  };

	// 위의 array 배열을 버블 정렬로 sorting해서 출력해보세요.
	int length = sizeof(DataSet) / sizeof(DataSet[0]);

	BubbleSorting(&DataSet, 10);
	//BubbleSorting(&DataSet->score, length);



	for (int i = 0; i < 10; i++) {
		printf("array[%d].number = %d, array[%d].score = %lf\n", i, DataSet[i].number, i, DataSet[i].score);
	}
	for (int i = 29990; i < 30000; i++)
	{
		printf("DataSet[%d].number = %d, DataSet[%d].score = %lf\n", i, DataSet[i].number, i, DataSet[i].score);
	}


	return 0;
}
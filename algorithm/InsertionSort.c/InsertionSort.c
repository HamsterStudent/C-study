#include <stdio.h>
#include <string.h>

int main(void) {
	int DataSet[] = { 5,6,8,4,3,5,74,2,1 };
	int Length = sizeof(DataSet) / sizeof(DataSet[0]);
	int i = 0;
	int j = 0;
	int value = 0;

	for (i = 1; i < Length; i++) {
		value = DataSet[i];
		if (DataSet[i - 1] <= DataSet[i]) {
			continue;
		}
		for (j = 0; j < i; j++) {
			if (DataSet[j] > value) {
				memmove(&DataSet[j + 1], &DataSet[j], sizeof(DataSet[0]) * (i - j));
				
				DataSet[j] = value;
				break;
			}
			
		}
	}

	for (i = 0; i < Length; i++) {
		printf("%d ", DataSet[i]);
	}


	return 0;
}
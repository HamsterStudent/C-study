#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;
	// malloc은 저장공간을 초기화시켜주지 않음
	int* pa = (int*)malloc(sizeof(int) *count);

	printf("malloc 할당후\n");
	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}
	free(pa);

	// calloc은 동적메모리를 할당하고 0으로 초기화
	pa = (int*)calloc(count, sizeof(int));

	printf("\n\ncalloc 할당 후\n");
	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	count *= 2;

	// realloc은 기존 할당된 공간 재할당 할 때 사용
	// 기존에 가지고 있던 값을 복사해 새로운 메모리에 할당. 이전 메모리 제거
	printf("\n\n realloc으로 재할당 후\n");
	pa = realloc(pa, sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa);

	return 0;

}
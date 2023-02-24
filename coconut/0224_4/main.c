#include <stdio.h>
#include <stdlib.h>

int main() {
	int count = 10;
	// malloc�� ��������� �ʱ�ȭ�������� ����
	int* pa = (int*)malloc(sizeof(int) *count);

	printf("malloc �Ҵ���\n");
	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}
	free(pa);

	// calloc�� �����޸𸮸� �Ҵ��ϰ� 0���� �ʱ�ȭ
	pa = (int*)calloc(count, sizeof(int));

	printf("\n\ncalloc �Ҵ� ��\n");
	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	count *= 2;

	// realloc�� ���� �Ҵ�� ���� ���Ҵ� �� �� ���
	// ������ ������ �ִ� ���� ������ ���ο� �޸𸮿� �Ҵ�. ���� �޸� ����
	printf("\n\n realloc���� ���Ҵ� ��\n");
	pa = realloc(pa, sizeof(int) * count);

	for (int i = 0; i < count; i++) {
		printf("pa[%d] = %d\n", i, pa[i]);
	}

	free(pa);

	return 0;

}
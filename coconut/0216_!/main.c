#include <stdio.h>

int main() {
	// �ݺ����� ��ø�� ����

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j= %d\n", i, j);
		}
	}
	printf("\n");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%3d ", i * 10 + j);
		}
		printf("\n");
	}


	// ���� for�� : ��ü���� �����͸� �ٷ� �� ���� ���
	/*for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}*/
}
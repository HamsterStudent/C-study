#include <stdio.h>

int main() {
	printf("¦�� ��� : \n");
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			printf("¦�� : %d\n", i);
		}
	};

	printf("\n\n");
	printf("Ȧ�� ��� : \n");
	// ���� i�� ���� 0���� 100���� ������ ���� i�� ���� �����ϴ� ���� Ȧ���� ����ض�
	for (int i = 0; i < 100; i += 3) {
		if (i & 1 == 1) {
			printf("Ȧ��: %d\n", i);
		}
	}
	// ������ ��Ʈ�� 1�̸� Ȧ��, 0�̸� ¦��

	printf("\n\n");
	// ���� i�� 0���� ���� j�� 10���� i������ 1�����ϸ鼭 10���� ����������
	// j ������ 1�� �����ϸ鼭 0���� Ŭ������ i�� ���� j�� ���� ����ض�.
	for (int i = 0, j = 10; i < 10 && j > 0; i++, j--) {
		printf("i = %d, j= %d\n", i, j);
	}

	int value = 0;

	// �ʱ��, ���ǽ�, �������� ������ ����
	// �ʱ�� ����. ���ιٶ�����������!!
	for (; value < 10; value += 2) {
		printf("value = %d\n", value);
	}

	printf("\n\n");
	value = 0;

	// �ʱ��, ���ǽ� ����
	for (;; value += 2) {
		printf("value = %d\n", value);
		if (value > 10) {
			break;  //�۾��� ���߰� Ż��
		}
	}

	printf("\n\n");
	value = 0;
	// �ʱ��, ������ ����
	for (; value < 10;) {
		value += 3;

		printf("value = %d\n", value);
	}
}


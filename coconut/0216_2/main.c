#include <stdio.h>

int main() {
	int value = 100;
	// while(���ǽ�) : ���ǽ��� ���̸� ����
	// while���� ������ �տ��� ������ ������ ��ɾ �ѹ��� ���� �ȵɼ���
	while (value > 0) {
		value--;

		printf("value = %d\n", value);
	}

	printf("\n");
	value = 100;

	// do while���� ������ �ڿ��� ����. ������ �ѹ��� ����
	// �� ���� �ʴ´ٴ�
	do {
		value--;
		printf("value = %d\n", value);
	} while (value < 0);

	return 0;
}
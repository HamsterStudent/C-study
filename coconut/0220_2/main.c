#include <stdio.h>

int main() {
	// 0 ~ 100���� �����ϼ���
	// ������ ������ Ÿ���� ������ ������ �ʿ��� �� �迭 ���

	// 404����Ʈ �ѹ��� �Ҵ����ְ� 4����Ʈ�� �ɰ�����
	// �迭���� �迭�� ���ι��� �ּҰ�(ù��° ����� �ּҰ�)
	int intArray[101];

	for (int i = 0; i < 101; i++) {
		intArray[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		printf("intArray[%d] = %d\n", i, intArray[i]);
	}

	return 0;
}
#include <stdio.h>

int main() {
	// �ݺ����ȿ��� continue ������ ��ɾ� �ǳʶٱ�
	for (int i = 0; i < 100; i++) {
		// 100������ ��� �߿��� ¦���� �Ǻ�
		if (i % 2 == 1) {
			continue;
		}
		// continue������ �ش� ��ɾ�� �ǳʶٰ� ��
		printf("i = %d\n", i);
	}
}
#include <stdio.h>

int main() {
	// ��ø�� �ݺ��� Ż���ϱ�
	int flag = 0;
	int count = 100;
	int count2 = 20;

	while (1) {
		count = 100;
		while (count > 0) {
			count--;
			count2 = 20;
			while (count2 > 0) {
				count2--;
				printf("count = %d, count2 = %d\n", count, count2);
				if (count == 10 && count2 % 2 == 1) {
					printf("��ø�� while���� Ż��\n");
					flag = 1;
					// break���� ����� ��ġ�� ���� ����� �ݺ����� Ż��
					// ��ø�Ǿ��ִ� �ݺ����� ������ ����
					break;
				}
			}
			if (flag == 1) {
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}

	while (1){
		count = 100;
		while (count > 0) {
			count--;
			count2 = 20;
			while (count2 > 0) {
				count2--;

				printf("count = %d, count2 = %d\n", count, count2);

				if (count == 10 && count2 % 2 == 1) {
					printf("��ø�� while���� Ż��\n");
					goto LoopExit;
				}
			}
		}
	}

LoopExit: printf("���α׷� ��");

	return 0;
}

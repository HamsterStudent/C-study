#include <stdio.h>

// while���� �ݺ� Ƚ���� �𸣴� ��쿡 �ַ� ���

int main() {
	// ����ð����� ���� ���尪 ����
	srand(time(NULL));

	// ������ �����ڸ� ����Ͽ�
	// ������ ���� 0 ~ 199�� ������ ������ ����
	int loopvalue = rand() % 200;

	int count = 0;
	while (loopvalue > 5 && loopvalue < 195) {
		printf("count : %d, loopvalue : %d, Monster\n", count, loopvalue);
	
		loopvalue = rand() % 200;
		count++;
	}

	return 0;

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// returntype �Լ���(�Ű�����){ ��ɾ�; }
void PrintMonster(int x) {
	for (int i = 0; i < x; i++) {
		printf("Monster\n");
	}
}

int main() {

	int num = 0;
	printf("��ȯ�ϰ� ���� ������ ���� �Է��ϼ��� :");
	scanf("%d", &num);

	PrintMonster(num);

	return 0;
}


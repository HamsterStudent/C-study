#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int money = 0;

	printf("�뵷 �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &money);

	if (money > 100000) {
		printf("����ī�� �Ա�\n");
	}
	else if (money > 80000) {
		printf("�����ñ�\n");
	}
	else if (money > 60000) {
		printf("����\n");
	}
	else if (money > 40000) {
		printf("PC��\n");
	}
	else if (money > 20000) {
		printf("�߱���\n");
	}
	else {
		printf("����\n");
	}

	return 0;
}
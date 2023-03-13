#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Print.h"


int main() {
	int left = 0;
	int right = 0;

	void(*pfuncArray[4])(int, int);

	// �Լ������� �迭�� �Լ��� ����
	pfuncArray[0] = AddPrint;
	pfuncArray[1] = SubPrint;
	pfuncArray[2] = MulPrint;
	pfuncArray[3] = DivPrint;


	// �Լ� ������ �迭�� �Լ��� �ּҰ��� �����ϰ�
	// �迭�� ����� �Լ��� �ϰ������� ȣ��
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &left, &right);

	for (int i = 0; i < 4; i++) {
		pfuncArray[i](left, right);
	}

	return 0;
}


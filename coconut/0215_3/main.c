#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int jumpValue = 0;

// ������ �б⹮
// goto��

// ���̺� : ��ɾ� ��ġ��
Start:
	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &jumpValue);

	if (jumpValue < -1) {
		// goto Exit => Exit ���̺��� �ִ� ��ġ�� �б��ض�
		goto Exit;
	}
	printf("jumpValue = %d\n", jumpValue);

	// goto Start => start ���̺��� �ִ� ��ġ�� �б��ض�
	goto Start;

	// �� �κ��� ���� ������� ����
	printf("����� �ȵ� \n");

Exit:
	printf("jumpValue = %d\n", jumpValue);
	printf("���α׷� ��\n");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int inputValue = 0;
	printf("�������� �Է��ϼ���");
	scanf("%d", &inputValue);

	switch (inputValue) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("�Է� ���� ���� 0~9������ ���Դϴ�.\n");
		break;
	case 10:
	case 11:
	case 12:
		printf("�Է� ���� ���� 10~12 ������ ���Դϴ�.\n");
		break;
	default:
			printf("�Է� ���� ���� 0 ~ 12 ������ ���Դϴ�.\n");
			break;
	}
	// switch - case ���� if-else-if������ ���� �� �ֽ��ϴ�.
	// �������� ���� �б� ó���� �Ҷ��� switch - case���� ����ϴ� ���� �����մϴ�.
	// switch-case ���� if-else-if ������ �������� �پ�ϴ�.

	if (inputValue >= 0 && inputValue <= 9) {
		printf("�Է� ���� ���� 0~9������ ���Դϴ�.\n");
	}
	else if (inputValue >= 10 && inputValue <= 12) {
		printf("�Է� ���� ���� 10~12 ������ ���Դϴ�.\n");
	}
	else {
		printf("�Է� ���� ���� 0 ~ 12 ������ ���Դϴ�.\n");
	}

	return 0;
}
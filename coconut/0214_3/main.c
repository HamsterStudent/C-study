#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// ���ù�
	// switch - case

	// ��ư ��ȣ �Է¿�
	int buttonNum = 0;
	printf("�������� ��ȣ�� �Է��ϼ���.(0�� power on/off, 1�� ������ , 2�� �����ٿ�, 3�� ä�ξ�, 4�� ä�δٿ�) : ");
	scanf("%d, &buttinNum");

	// �������� ���� �б��
	switch (buttonNum){
	case 0:
		printf("TV ��\n");
		break;

	case 1:
		printf("Volum up\n");
		break;
	case 2:
		printf("Volum douwn\n");
		break;

	case 3:
		printf("Channel up\n");
		break;

	case 4:
		printf("Channel down\n");
		break;
	}
}
#include <stdio.h>

// �Լ��� ��ɾ �ϳ��� ��� �ϳ��� ������ ���� �� ���
// ���뼺 : ��ɾ ���� �ϳ��� ������ ����� ���� ȣ��
// ��⼺ : �ڵ带 ���̻��̿� �ֱ� ������
// ������ : �ڵ带 �м��� �� �б� ������

void PrintString(char* str) {
	for (int i = 0; i < 20; i++) {
		printf("%s\n", str);
	}
}

int main() {

	PrintString("Monster");
	PrintString("Hamster");

	return 0;
}
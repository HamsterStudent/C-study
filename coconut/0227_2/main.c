#include <stdio.h>

// ���̸� �ƴ� ���¿��� ����
void PrintCharArr(char* pstr, int size) {
	for (int i = 0; i < size; i++) {
		putchar(pstr[i]);
	}
	putchar('\n');
}

// ���̸� �𸣴� ���¿��� ����(���ڿ��� 0�� ã�������� ����)
void PrintString(char* pstr) {
	// *pstr�� ���� 0�� �ƴϸ�. c���� 0�� �������� �޾Ƶ���! 0 ����� ���� ��
	while (*pstr) { 
		putchar(*pstr);
		pstr++;
	}
}

// ���� �迭 �ڿ� ���ڿ��� ������ �˷��ִ� �������� 0 �ְ�
// �̰��� ���ڿ��̶�� ���.
// �׷��� ���ڿ� ���� �Լ��� ���ڷ� ���� ���ڿ��� 
// ���ι��� �ּ� �� ��򰡿� 0�� ���� �Ŷ� �ϰ� �۵��ϴ� �Լ�

//���ڿ�
int main() {
	// �ʱⰪ�� ������ �˾Ƽ� �����Ϸ��� ������ ���� ÷�ڸ� �ڵ����� �־���

	// \0 �̶�� �����ڰ� ���� ���ڿ�
	// �ֵ���ǥ�� ���θ� ���ڿ��̶�� ��
	char str[] = "Hamster";
	// ���� �迭.
	char str2[] = { 'M', 'o', 'n', 's', 't', 'e', 'r' };

	//���Ƿ� \0�� ������ ���ڿ��� ��
	char str3[10] = { 'M', 'o', 'n', 's', 't', 'e', 'r', '\0' };


	printf("size  = %d\n", sizeof(str));
	printf("str2 size = %d\n", sizeof(str2));
	printf("str3 size = %d\n", sizeof(str3));


	PrintCharArr(str, sizeof(str));
	PrintCharArr(str2, sizeof(str2));
	PrintCharArr(str3, sizeof(str3));

	PrintString(str);
	// ���� �迭�� �ּҰ��� �־ �˰��� ��
	PrintString(str2);
	PrintString(str3);

	return 0;
}
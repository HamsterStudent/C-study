#include <stdio.h>


// ����Ÿ�� : �Լ��� �����ִ� ��ɾ ó���� ������� �Ÿ������ ��������
// �Լ��� : �Լ��� ȣ���� �� ����� �̸�
// �Ű����� : �Լ����� ���޵� ���� �޴� ����

int add(int a, int b) {
	int result = 0;

	result = a + b;

	// return�� �Լ� �ܺη� ������� ������ �� ���
	return result;
}

int sub(int a, int b) {
	int result = 0;

	result = a - b;

	return result;
}

int mul(int a, int b) {
	int result = 0;

	result = a * b;

	return result;
}

int div(int a, int b) {
	int result = 0;

	result = a / b;

	return result;
}

int main() {
	int a = 20;
	int b = 30;

	// �Լ��� ȣ���� �� ���޵� ��
	int result = add(a, b);
	printf("%d + %d = %d\n", a, b, result);
	result = sub(a, b);
	printf("%d - %d = %d\n", a, b, result);
	result = mul(a, b);
	printf("%d * %d = %d\n", a, b, result);
	result = div(a, b);
	printf("%d / %d = %d\n", a, b, result);


	return 0;
}
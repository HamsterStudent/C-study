#include <stdio.h> // �ؿ� printf��� �Լ��� ����ϱ� ���ؼ� stdio.h ��� ������ �����ش޶�� ��û��.

int main() {
	short plusA;   // short�� plusA ������ ����
	short minusA;   // short�� minusA ������ ����

	plusA = 32767;   // plusA������ 32767�� ���� ������.
	minusA = -32768; // minusA ������ -32768�� ���� ������.

	// plusA�� minusA��� �������� ���߿� �����Ҷ� ������� �޸� ������ ���
	// �ϰ� �ֽ��ϴ�.

	// ���� ����Ҷ� printf��� �Լ��� ����մϴ�.
	// printf�Լ� �ܼ�â�� ���ڿ��� ����Ҷ� ����մϴ�.
	// printf�Լ��� �����������ڿ��� �����մϴ�.
	printf("plusA = %d, minusA = %d\n", plusA, minusA);


	return 0;
}
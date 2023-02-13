#include <stdio.h>

int main() {
	unsigned char value = 10;
	// 00001010 

	unsigned char mask = 1;
	// 00000001


	printf("value = %d\n", value);

	// value�� 3��° ��Ʈ���� 0���� �����
	mask = mask << 3;
	// 00001000
	// << : ���� shift ������

	mask = ~mask;
	// 11110111
	// ~ : ��Ʈ Not ������

	value = value & mask;
	// 00001010 (value)
	// 11110111 (mask)
	// 00000010 (value & mask) (bit And)
	printf("mask off value = %d\n", value);

	

	// ��Ʈ | (��Ʈ OR) ������ Mask on
	// Mask On : Ư�� �ڸ��� ��Ʈ ���� 1�� ����� ��
	mask = 1;
	// 00000001

	mask <<= 3;
	// 00001000
	// mask������ ��Ʈ ���� �������� 3��Ʈ �̵�(�����)

	value |= mask;
	// 00000010
	// 00001000
	// 00001010
	// value = value | mask
	printf("mask on value = %d\n", value);


	

	// ��Ʈ & �����ڴ� Mask off
	// mask off : Ư�� �ڸ��� ��Ʈ ���� 0���� ���鶧 ���
	return 0;
}
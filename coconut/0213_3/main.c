#include <stdio.h>

int main() {
	// ^ : xor������ (��Ÿ�� or)
	// ��Ÿ�� or�����ڴ�
	// �� ��Ʈ�� ���� �ٸ� ��쿡 1, ������ 0
	// 0 ^ 0 = 0;
	// 0 ^ 1 = 1;
	// 1 ^ 1 = 0;
	// ��Ÿ�� or�������� ������ �� ���� ��Ÿ����or �� �������
	// �� ���� �� ���� �ٽ� xor������ �ϸ� ��������� �� ���� �ٸ� ���� ���ɴϴ�.

	unsigned char a = 1;
	// 00000001
	unsigned char b = 2;
	// 00000010
	unsigned char c = 0;
	unsigned char d = 0;


	c = a ^ b;
	// 00000011 (a ^ b)(c)
	printf("c = %d\n", c);

	d = c ^ a;
	// 00000011 (c)
	// 00000001 (a)
	// 00000010 (c ^ a) 
	printf("c = %d\n", d);

	c = c ^ b;
	// 00000011 (c)
	// 00000010 (b)
	// 00000001 (c ^ b)
	printf("c = %d\n\n", c);

	// ����
   // xor�����ڸ� ����ؼ� a������ ���� b������ ���� �ٲټ���.
   // �ٸ� ������ ����Ͻø� �ȵ˴ϴ�.
   // a������ b���� xor�����ڸ� ����ϼž��մϴ�.
	unsigned char x = 2;
	unsigned char y = 3;
	unsigned char z = 0;
	printf("�ٲٱ� �� x = %d, y = %d\n", x, y);
	z = x ^ y;
	x = z ^ x;
	printf("�ٲ� �� x = %d\n", x);
	y = z ^ y;
	printf("�ٲ� �� y = %d\n", y);


}
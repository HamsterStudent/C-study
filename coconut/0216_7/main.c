#include <stdio.h>

int main() {
	//������
	
	// int���� 4byte�������� ������ �����ϴ� ������ Ÿ��
	// �޸� ������ 4byte �������� ���� �����ϴ� ������ �Ҵ�����
	int a;

	// double 8byte �������� �Ǽ��� �����ϴ� ����Ÿ Ÿ��
	// �޸𸮰����� 8byte�������� �Ǽ� �����ϴ� ������ �Ҵ�����
	double b;

	// ������ ������ ���߿� �Ҵ� ���� �޸� ������ ����ϰ� �ִ�.
	// �� �տ� �ִ� �ּҰ� : ���ι����ּҰ�
	// ���ι��� �ּҰ��� ������ �Ҵ��� ����

	// ������ �տ� �ּҿ����ڸ� ����ϸ� ������ ����� �Ҵ� ���� �޸𸮰�����
	// ���ι��� �ּҰ��� �����ݴϴ�.
	printf("&a = %d\n", &a);
	printf("&b = %d", &b);

	getch();

	return 0;
}
#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	// sizeof(���� / ������ Ÿ��)
	// ������ byte����� ������Ÿ���� byte ����� �����ݴϴ�.
	// sizeof �����ڴ� �����߿� �۵��ϴ� �����ڰ� �ƴ�

	int size = sizeof(int);
	printf("int���� byte������� %d byte\n", size);
	
	size = sizeof(float);
	printf("float���� byte������� %d byte\n", size);

	size = sizeof(double);
	printf("double���� byte������� %d byte\n", size);

	float d;


	// printf("%d", sizeof(a));
	// �����

	size = sizeof d;
	// ������ ũ�⸦ ����
	printf("d ������ byte������� %d byte\n", size);

	// ��ǥ�����ڴ� ��ɾ ������ �� ����մϴ�.
	printf("a\n"), printf("b\n");



	return 0;
}
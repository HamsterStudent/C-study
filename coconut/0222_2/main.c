#include <stdio.h>

void ThirdFunc(int value) {
	int temp = 1000;
}
void SeconeFunc(int value) {
	int temp = 10;
	ThirdFunc(200);
	int temp2 = 2000;
}
void FirstFunc(int value) {
	int temp = 0;
	SeconeFunc(100);
}

int* pSetScore(int value) {
	// ���ú���, �ڵ�����
	// static�� ���� ������ ���� �������� ����
	int score = 0;

	score += value;

	// score ����(�ڵ�����)�� �ּҰ��� �Լ��� �ܺη� ����
	return &score;
}


int main() {
	int a = 1000;

	FirstFunc(50);

	int b = 2000;

	// �Լ� �ȿ� �ִ� �ڵ� ������ �ּҰ��� �Լ��� �ܺη� �����ؼ� ����ϸ� �ȵ�
	// �ڵ������� �ڽ��� ����� {} �� �ȿ����� �޸𸮰����� ������
	// {} ���� ����Ǹ� �ش� ������ ����Ǿ ���� �������� ����
	int* pa = pSetScore(100);

	printf("pa(pSetScore�Լ����� score������ �ּҰ�) = %d, *pa = %d\n", pa, *pa);
	printf("pa(pSetScore�Լ����� score������ �ּҰ�) = %d, *pa = %d\n", pa, *pa);
	printf("pa(pSetScore�Լ����� score������ �ּҰ�) = %d, *pa = %d\n", pa, *pa);



	return 0;
}
#include <stdio.h>
// ������ ���� �� �ִ� ��ġ
// ������ ���� �� ���� ����, ���� �Ⱓ�� ���� �����

// �ܺκ���(�Լ��� �� �ۿ� ��ġ), ��������(��𼭳� ���� ������ �Լ�)
int global = 0;

// �Ű����� : ��������, �ڵ�����
int add(int a, int b) {
	// ��������(���ú���)
	int temp = 0;
	temp = a + b;

	return temp;
}

int setScore(int value) {
	// �������� : ���α׷��� ����ִ� ���� ��� ������ ������
	// ��������(��ġ), ��������(���ӱⰣ)
	static int score = 0;

	score += value;
	printf("score = %d\n", score);
	return value;
}

int main() {
	// ��������(���� ����), �ڵ�����(���ӱⰣ)
	int a = 0;

	{
		int a = 10;
		printf("a = %d\n", a);
	}
	printf("a = %d\n", a);
	int b = 2000;
	setScore(10);
	setScore(12);
	setScore(3);

	printf("global = %d\n", global);

	return 0;
}

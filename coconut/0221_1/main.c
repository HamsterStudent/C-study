#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// �迭�� ����
	int array[10];

	// �迭�� �ʱⰪ�� �ο��ϴ� ��� �迭÷�ڸ� ���� �ʾƵ� �ȴ�
	int arr[] = { 12,15,100, 60, 80, 210,12, 8, 2, 1 };

	int arrValue[5];
	printf("���� 5�� �Է��ϼ��� : \n");
	scanf("%d", &arrValue[0]);
	printf("�ι�° ���� �Է��ϼ��� : \n");
	scanf("%d", &arrValue[1]);
	printf("����° ���� �Է��ϼ��� : \n");
	scanf("%d", &arrValue[2]);
	printf("�׹�° ���� �Է��ϼ��� : \n");
	scanf("%d", &arrValue[3]);
	printf("�ټ���° ���� �Է��ϼ��� : \n");
	scanf("%d", &arrValue[4]);

	int sum = 0;

	int x = 0;

	// sizeof(arr) : �迭�� ��ü ����Ʈ ��(��ü�뷮)
	// sizeof(int) : �迭 ����� ����Ʈ ��
	// ����� ���� = �迭 ��ü ����Ʈ�� / �� ����� ����Ʈ ��
	int length = sizeof(arrValue) / sizeof(int);

	for (int i = 0; i < length; i++) {
		sum += arrValue[i];
	}

	printf("arr�迭�� ����� ���� �հ�� %d\n", sum);

	x = sum / length;

	printf("arr�迭�� ����� ���� ����� %d\n", sum / x);


	return 0;
}
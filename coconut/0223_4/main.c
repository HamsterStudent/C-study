#include <stdio.h>
#include <stdlib.h>

int main() {
	int inputcount = 0;
	printf("�Է��Ͻ� ������ ������ �Է��ϼ���: ");
	scanf("%d", &inputcount);

	// os�� ��û . ���� �޸� ���� �Ҵ� ��û. �����߿� �޸� ������ �Ҵ�
	int* parray = malloc(sizeof(int) * inputcount);

	// ���� �޸� ���� �ݳ�
	free(parray);

	int a = 20;

	return 0;
}
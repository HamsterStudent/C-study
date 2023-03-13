#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE* fp;

	// ������ ���� ���� ����
	fp = fopen("test.txt", "w");

	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�");
		return;
	}

	// ���� ��Ʈ���� �ѹ��ڸ� ���
	fputc('a', fp);
	fputc('b', fp);
	fputc('\n', fp);

	for (int i = 65; i < 65 + ('Z' - 'A' + 1); i++) {
		fputc(i, fp);
	}

	// ������ �����ٸ� ������ �ݾƾ� ��
	fclose(fp);

	// ������ �б���� ����
	fp = fopen("test.txt", "r");

	if (fp == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	char c = 0;
	// ���� ��Ʈ������ �ѹ��ھ� ������ ���� �ƴҶ����� �д´�
	while ((c = fgetc(fp)) != EOF) {
		putchar(c);
	}

	fclose(fp);

	return 0;
}
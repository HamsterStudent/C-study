#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int buff[] = { 10, 20, 30, 40, 50 };

	FILE* fp;
	int size, count;

	fp = fopen("binary.bin", "wb");
	size = sizeof(int);
	count = sizeof(buff) / sizeof(int);

	fwrite(buff, size, count, fp);

	fclose(fp);

	int outputArray[5];
	fp = fopen("binary.bin", "rb");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return;
	}

	for (int i = 0; i < count; i++) {
		fread(&outputArray[i], size, 1, fp);
	}

	for (int i = 0; i < count; i++) {
		printf("outputArray[%d] = %d\n", i, outputArray[i]);
	}

	fclose(fp);

	return 0;
}
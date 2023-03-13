#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체 입출력

struct Student {
	int no;
	int age;
	char name[20];
};

int main() {
	FILE* fp;

	fp = fopen("test.bin", "wb");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	struct Student array[5];

	// 구조체 배열에 값 저장
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		array[i].no = i * 1234;
		array[i].age = i;
		sprintf(array[i].name, "monster_%d", i);
	}

	fwrite(array, sizeof(struct Student), 10, fp);

	fclose(fp);

	fp = fopen("test.bin", "rb");

	struct Student readarray[5];

	fread(readarray, sizeof(struct Student), 5, fp);

	for (int i = 0; i < 5; i++) {
		printf("read no: %d, age: %d, name: %s\n",
			readarray[i].no, readarray[i].age, readarray[i].name);
	}
	fclose(fp);

	return 0;
}
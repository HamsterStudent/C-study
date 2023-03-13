#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

typedef struct tagStudent {
	int age;
	int grade;
	char name[20];
} Student;

int main() {
	FILE* fp;
	int length = 3;
	int size = 0;

	Student inputValue;

	fp = fopen("student.bin", "wb");

	if (fp == NULL) {
		printf("file open error");
		return;
	}

	for (int i = 0; i < length; i++) {
		printf("�л������� �Է��ϼ���(���� �г� �̸�) : ");
		scanf("%d %d %s", &inputValue.age, &inputValue.grade, inputValue.name);
		fwrite(&inputValue, sizeof(Student), 1, fp);
	}
	fclose(fp);

	fp = fopen("Student.bin", "rb");

	if (fp == NULL) {
		printf("File Open Error");
		return;
	}

	// �д� ������ ����� ����
	fseek(fp, 0, SEEK_END); // ���� �����͸� ������ ������ �̵�
	// ������ ���� �������� ��ġ�� ����(���� ������)
	size = ftell(fp);

	fseek(fp, 0, SEEK_SET);

	int count = size / sizeof(Student);

	// ���Ͽ��� ���� ������ ����� ���� �޸� ����
	Student* stdata = (Student*)malloc(size);  

	fread(stdata, sizeof(Student), count, fp);

	for (int i = 0; i < count; i++) {
		printf("stdata: ����: %d, �г�: %d, �̸�: %s\n", 
			stdata[i].age, stdata[i].grade, stdata[i].name);
	}

	free(stdata);

	fclose(fp);

	return 0;
}
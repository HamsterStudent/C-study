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
		printf("학생정보를 입력하세요(나이 학년 이름) : ");
		scanf("%d %d %s", &inputValue.age, &inputValue.grade, inputValue.name);
		fwrite(&inputValue, sizeof(Student), 1, fp);
	}
	fclose(fp);

	fp = fopen("Student.bin", "rb");

	if (fp == NULL) {
		printf("File Open Error");
		return;
	}

	// 읽는 파일의 사이즈를 구함
	fseek(fp, 0, SEEK_END); // 파일 포인터를 파일의 끝으로 이동
	// 현재의 파일 포인터의 위치를 구함(파일 사이즈)
	size = ftell(fp);

	fseek(fp, 0, SEEK_SET);

	int count = size / sizeof(Student);

	// 파일에서 읽은 데이터 저장용 동적 메모리 생성
	Student* stdata = (Student*)malloc(size);  

	fread(stdata, sizeof(Student), count, fp);

	for (int i = 0; i < count; i++) {
		printf("stdata: 나이: %d, 학년: %d, 이름: %s\n", 
			stdata[i].age, stdata[i].grade, stdata[i].name);
	}

	free(stdata);

	fclose(fp);

	return 0;
}
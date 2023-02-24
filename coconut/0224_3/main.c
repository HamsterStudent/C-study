#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct tagStudent {
	char name[30];
	int grade;
	int classNum;
} Student;

int main() {
	int studentCount = 0;
	printf("학생의 수를 입력하세요 : ");
	scanf("%d", &studentCount);

	// 카운트에 동적으로 할당해라 - 주소값을 parry에 저장
	Student* parray = (Student*)calloc(studentCount, sizeof(Student));

	for (int i = 0; i < studentCount; i++) {
		printf("%d 번째 학생의 정보를 입력하세요 : ", i + 1);
		printf("이름을 입력하세요: ");
		// 주소가 아니고 할당받은 메모리 공간이기 때문에 ->를 쓰지 않음
		scanf("%s", parray[i].name);
		printf("학년을 입력하세요: ");
		scanf("%d", &parray[i].grade);
		printf("반을 입력하세요: ");
		scanf("%d", &parray[i].classNum);

		printf("\n\n");
	}

	for (int i = 0; i < studentCount; i++) {
		printf("%d번째 학생의 정보는 : \n", i + 1);
		printf("이름 : %s, 학년 : %d, 반 : %d\n", parray[i].name, parray[i].grade, parray[i].classNum);
		printf("\n");
	}

	free(parray);
}
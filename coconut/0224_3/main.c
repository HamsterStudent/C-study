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
	printf("�л��� ���� �Է��ϼ��� : ");
	scanf("%d", &studentCount);

	// ī��Ʈ�� �������� �Ҵ��ض� - �ּҰ��� parry�� ����
	Student* parray = (Student*)calloc(studentCount, sizeof(Student));

	for (int i = 0; i < studentCount; i++) {
		printf("%d ��° �л��� ������ �Է��ϼ��� : ", i + 1);
		printf("�̸��� �Է��ϼ���: ");
		// �ּҰ� �ƴϰ� �Ҵ���� �޸� �����̱� ������ ->�� ���� ����
		scanf("%s", parray[i].name);
		printf("�г��� �Է��ϼ���: ");
		scanf("%d", &parray[i].grade);
		printf("���� �Է��ϼ���: ");
		scanf("%d", &parray[i].classNum);

		printf("\n\n");
	}

	for (int i = 0; i < studentCount; i++) {
		printf("%d��° �л��� ������ : \n", i + 1);
		printf("�̸� : %s, �г� : %d, �� : %d\n", parray[i].name, parray[i].grade, parray[i].classNum);
		printf("\n");
	}

	free(parray);
}
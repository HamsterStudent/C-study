#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct tagStudent {
	char name[20];
	int age;
	int grade;
	struct tagStudent* Next;
} Student;

int main() {
	Student a = { "Mons1", 17,3 };
	Student b = { "Mons2", 17, 2 };
	Student c = { "Mons3", 16,1 };
	Student d = { "Mons4", 18, 3 };

	a.Next = &b;
	b.Next = &c;
	c.Next = &d;

	printf("a������ d������ ������ ���: \n");

	printf("d���� �̸�: %s\n", a.Next->Next->Next->name);
	printf("d���� ����: %d\n", a.Next->Next->Next->age);
	printf("d���� �г�: %d\n", a.Next->Next->Next->grade);

	return 0;
}
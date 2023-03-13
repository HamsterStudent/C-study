#include <stdio.h>

char name1[20];
int age1;
int grade1;

char name2[20];
int age2;
int grade2;

char nameArray[10][20];
int ageArray[10];
int gradeArray[10];

// 사용자 정의 데이터 타입
struct Student {
	char name[20];
	int age;
	int grade;
};

int main() {
	struct Student a;

	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	a.age = 19;
	a.grade = 2;

	printf("이름 : %s\n나이 : %d\n 학년 : %d\n", a.name, a.age, a.grade);

	// 구조체의 주소를 저장
	struct Student* pa;

	pa = &a;

	// 구조체 맴버에 구조체 변수의 주소값을 접근할때는 -> 연산자 사용
	pa->name[0] = 'H';
	pa->name[1] = 'A';
	pa->name[2] = 'M';
	pa->name[3] = '\0';

	pa->age = 30;
	pa->grade = 6;

	printf("이름 : %s\n나이 : %d\n 학년 : %d\n", pa->name, pa->age, pa->grade);



	return 0;
}




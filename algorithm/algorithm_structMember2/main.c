#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct tagStudent {
    char name[20];   // 구조체 멤버
    int age;
    int grade;
    //struct tagStudent *Next;
} Student;

int main() {


    int a;

    float b;

    Student c;

    int* pa = (int*)malloc(sizeof(int));   // 동적 공간 할당
    //int* pa = (int*)calloc(1, sizeof(int));

    *pa = 10000;

    printf("*pa = %d\n", *pa);

    float* pf = (float*)pa;

    *pf = 3.4f;

    printf("*pf = %d\n", *pf);

    free(pf); // 동적공간 반납


    int* parray = (int*)malloc(sizeof(int) * 10);
    //int* parray = (int*)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {
        parray[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    free(parray);

    int inputValue = 0;

    printf("처리하실 학생수 입력하세요: ");
    scanf("%d", &inputValue);
    Student* pst = (Student*)calloc(inputValue, sizeof(Student));

    for (int i = 0; i < inputValue; i++) {
        printf("%d번째 학생 정보를 입력하세요: (이름 나이 학년) ", i + 1);
        scanf("%s %d %d", pst[i].name, &pst[i].age, &pst[i].grade);
    }

    for (int i = 0; i < inputValue; i++) {
        printf("이름: %s\n", pst[i].name);
        printf("나이: %d\n", pst[i].age);
        printf("학년: %d\n\n", pst[i].grade);
    }

    free(pst);

    return 0;
}
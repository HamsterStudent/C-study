#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct tagStudent {
    char name[20];   // ����ü ���
    int age;
    int grade;
    //struct tagStudent *Next;
} Student;

int main() {


    int a;

    float b;

    Student c;

    int* pa = (int*)malloc(sizeof(int));   // ���� ���� �Ҵ�
    //int* pa = (int*)calloc(1, sizeof(int));

    *pa = 10000;

    printf("*pa = %d\n", *pa);

    float* pf = (float*)pa;

    *pf = 3.4f;

    printf("*pf = %d\n", *pf);

    free(pf); // �������� �ݳ�


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

    printf("ó���Ͻ� �л��� �Է��ϼ���: ");
    scanf("%d", &inputValue);
    Student* pst = (Student*)calloc(inputValue, sizeof(Student));

    for (int i = 0; i < inputValue; i++) {
        printf("%d��° �л� ������ �Է��ϼ���: (�̸� ���� �г�) ", i + 1);
        scanf("%s %d %d", pst[i].name, &pst[i].age, &pst[i].grade);
    }

    for (int i = 0; i < inputValue; i++) {
        printf("�̸�: %s\n", pst[i].name);
        printf("����: %d\n", pst[i].age);
        printf("�г�: %d\n\n", pst[i].grade);
    }

    free(pst);

    return 0;
}
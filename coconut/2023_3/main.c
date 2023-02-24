#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����ü
struct tagStudent {
    char name[20];   // �̸� ���� ���ڹ迭
    int age;      // ����
    int birthday;   // �������
};

struct Monster {
    int health;
    int attack;
    int defense;
};

// typedef : tagStudent�� �׳� Student��� �̸����� ���� ���ּ���
typedef struct tagStudent Student;

int main() {
    char buff[20];

    Student stArray[5];   // ����ü �迭

    // �迭�� ����� ���� = �迭 ��ü����Ʈ�� / ����� ����Ʈ��
    int length = sizeof(stArray) / sizeof(Student);

    
    for (int i = 0; i < length; i++) {
       sprintf(buff, "monster_%d", i);   // �����������ڿ��� ���ڿ��� �����ؼ� buff ���ڹ迭�� ����

       strcpy(stArray[i].name, buff);

       stArray[i].age = 10 + (i % 4);
       stArray[i].birthday = 20230101;
    }
    

    for (int i = 0; i < length; i++) {
        printf("%d / %d ��° �л��� �̸��� �Է��ϼ���: ", i + 1, length);
        scanf("%s", stArray[i].name);
        printf("%d / %d ��° �л��� ���̸� �Է��ϼ���: ", i + 1, length);
        scanf("%d", &stArray[i].age);
        printf("%d / %d��° �л��� ��������� �Է��ϼ���: ", i + 1, length);
        scanf("%d", &stArray[i].birthday);

        printf("\n");
    }

    for (int i = 0; i < length; i++) {
        printf("�̸�: %s, ����: %d, �������: %d\n"
            , stArray[i].name, stArray[i].age, stArray[i].birthday);
    }


    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 구조체
struct tagStudent {
    char name[20];   // 이름 저장 문자배열
    int age;      // 나이
    int birthday;   // 생년월일
};

struct Monster {
    int health;
    int attack;
    int defense;
};

// typedef : tagStudent를 그냥 Student라는 이름으로 쓰게 해주세요
typedef struct tagStudent Student;

int main() {
    char buff[20];

    Student stArray[5];   // 구조체 배열

    // 배열의 요소의 갯수 = 배열 전체바이트수 / 요소의 바이트수
    int length = sizeof(stArray) / sizeof(Student);

    
    for (int i = 0; i < length; i++) {
       sprintf(buff, "monster_%d", i);   // 형식지정문자열로 문자열을 생성해서 buff 문자배열에 저장

       strcpy(stArray[i].name, buff);

       stArray[i].age = 10 + (i % 4);
       stArray[i].birthday = 20230101;
    }
    

    for (int i = 0; i < length; i++) {
        printf("%d / %d 번째 학생의 이름을 입력하세요: ", i + 1, length);
        scanf("%s", stArray[i].name);
        printf("%d / %d 번째 학생의 나이를 입력하세요: ", i + 1, length);
        scanf("%d", &stArray[i].age);
        printf("%d / %d번째 학생의 생년월일을 입력하세요: ", i + 1, length);
        scanf("%d", &stArray[i].birthday);

        printf("\n");
    }

    for (int i = 0; i < length; i++) {
        printf("이름: %s, 나이: %d, 생년월일: %d\n"
            , stArray[i].name, stArray[i].age, stArray[i].birthday);
    }


    return 0;
}
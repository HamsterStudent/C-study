#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Student{
    char name[20];
    int age;
    int birthday;
};


// 구조체
struct Monster
{
    int health;
    int attack;
    int defense;
};


int main() {
    char buff[20];

    // 구조체 배열
    struct Student stArray[10];

    // 배열 요소의 갯수 = 배열의 전체 바이트 수 / 요소의 바이트수
    int length = sizeof(stArray) / sizeof(struct Student);
    // for(int i = 0; i < length; i++){
    //     // 형식지정문자열로 문자열을 생성해서 buff에 저장
    //     sprintf(buff, "monster_%d", i);
    //     strcpy(stArray[i].name, buff);
    //     stArray[i].age = 10 + (i % 4);
    //     stArray[i].birthday = 20230101;
    // }

    for(int i = 0; i < length; i++){
        printf("이름 : %s, 나이 : %d, 생년월일 : %d\n", stArray[i].name, stArray[i].age, stArray[i].birthday);
        printf("%d / %d 번째 학생의 이름을 입력하세요");
        scanf("%s", stArray[i].name);
        printf("%d / %d 번째 학생의 나이를 입력하세요");
        scanf("%s", stArray[i].age);
        printf("%d / %d 번째 학생의 생일을 입력하세요");
        scanf("%s", stArray[i].birthday);

    }
    
    return 0;
}
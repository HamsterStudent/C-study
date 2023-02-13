#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned char light = 0;
    // 전등 on off 데이타 저장용 변수

    int roomNum = 0;
    // 방번호 저장용

    unsigned char lightMask = 1;

    // --------------------------------------------------------

    printf("켜고 싶은 전등 방번호를 입력하세요 (1 ~ 8사이의 정수값) : ");
    scanf("%d", &roomNum);
    roomNum--;
    // 비트 컨트롤은 0부터해야함. 입력받은 roomNum 값을 1줄인다.

    lightMask = lightMask << roomNum;
    // 입력받은 방번호값으로 방의 전등을 켜기 위해서
    // mask 비트값을 왼쪽으로 이동시킨다.

    //  00000000
    //  00001000
    //  00001000

    light = light | lightMask;

    printf("light = %d\n", light);

    // --------------------------------------------------------

    printf("끄고 싶은 전등 방번호를 입력하세요 (1 ~ 8 사이의 정수값) : ");
    scanf("%d", &roomNum);

    lightMask = 1;
    // mask값을 초기화

    roomNum--;

    lightMask = lightMask << roomNum;
    lightMask = ~lightMask;
    light = light & lightMask;

    printf("light = %d\n", light);


    return 0;
}
#include <stdio.h>

// 비트연산자는 변수의 비트단위로 연산을 논리연산하는 연산자

int main() {
    unsigned char a = 3;
    unsigned char b = 2;

    unsigned char ret = a & b;

    // 둘 다 만족할때 true 배출
    printf("a & b = %d\n", ret);

    // 
    ret = a | b;
    printf("a | b = %d\n", ret);

    ret = ~a;
    printf("~a %d\n", ret);

    ret = a ^ b;
    printf("a ^ b = %d\n", ret);



    return 0;
}
#include <stdio.h>

int main() {
    unsigned char a = 1;

    a = a << 1;

    a = a << 1;

    printf("a = %d\n", a);

    // 비트를 1비트 왼쪽으로 민다는 의미는 *2와 같다.

    a = a << 2;

    printf("a = %d\n", a);

    a = a >> 1; // a 변수의 비트값을 오른쪽으로 1비트 민다.
    // 비트를 1비트 오른쪽으로 민다는 의미는 /2와 같다
    printf("a = %d\n", a);


    return 0;
}
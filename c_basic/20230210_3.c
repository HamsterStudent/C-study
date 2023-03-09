#include <stdio.h>

int main() {
    // 대입연산자의 축약형

    int a = 20;
    
    a += 1;
    // a = a + 1

    a -= 2; 
    // a = a - 1

    a /= 2;
    // a = a / 2;
    printf("a = %d\n", a);

    a *= 2;
    // a = a * 2;
    printf("a = %d\n", a);

    return 0;
}
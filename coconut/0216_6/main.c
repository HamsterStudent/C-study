#include <stdio.h>

int main() {
    // 이중 for문을 사용해서 구구단을 2단~ 9단까지 출력해보세요.

    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %d\n", i, j, i*j );
        }
    }

    printf("\n");

    // 0 ~ 200
    // 3의 배수면서 7의 배수인 숫자
    for (int x = 21; x < 1000; x++) {
        if(x % 3 ==  0 && x % 7 == 0) {
            printf("%d\n", x); 
        }
    }




    return 0;
}
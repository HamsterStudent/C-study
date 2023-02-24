#include <stdio.h>

// 함수: 명령어 묶어서 하나의 단위로 만들어주는 기능

int add(int a, int b) {
    int temp = 0;
    temp = a + b;

    return temp;
}

void pAdd(int a, int b, int* pret) {
    *pret = a + b;
}


int main() {
    int a = 20;
    int b = 30;
    int ret = 0;

    printf("monster");

    ret = add(10, 20);
    printf("10 + 20 = %d\n", ret);

    ret = add(a, b);
    printf("%d + %d = %d\n", a, b, ret);
    
    a = 100;
    b = 200;

    pAdd(a, b, &ret); 
    // 인자값으로 주소값을 전달한다는 의미는 
    // 호출된 함수에서 전달받은 주소값의 메모리공간에 접근하겠다는
    // 의미입니다.

    printf("%d + %d = %d\n", a, b, ret);




    return 0;
}
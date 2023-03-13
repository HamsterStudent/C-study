#include <stdio.h>
#include <stdlib.h>


void test2(int* parray, int count) {

    for (int i = 0; i < count; i++) {
        parray[i] = i;
    }

    for (int i = 0; i < count; i++) {
        printf("parray[%d] = %d\n", i, parray[i]);
    }

    //free(parray);
}

void testarray(int count) {
    int* pa = malloc(sizeof(int) * count);   // 동적메모리 할당

    test2(pa, count);

    free(pa);
    // 동적메모리를 획득한 곳에서 반환처리를 하는 것이 
    // 좀 더 안전한 코드 를 만들수 있다.
}


int main() {
    testarray(10);

    return 0;
}
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
    int* pa = malloc(sizeof(int) * count);   // �����޸� �Ҵ�

    test2(pa, count);

    free(pa);
    // �����޸𸮸� ȹ���� ������ ��ȯó���� �ϴ� ���� 
    // �� �� ������ �ڵ� �� ����� �ִ�.
}


int main() {
    testarray(10);

    return 0;
}
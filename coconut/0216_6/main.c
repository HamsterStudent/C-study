#include <stdio.h>

int main() {
    // ���� for���� ����ؼ� �������� 2��~ 9�ܱ��� ����غ�����.

    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            printf("%d * %d = %d\n", i, j, i*j );
        }
    }

    printf("\n");

    // 0 ~ 200
    // 3�� ����鼭 7�� ����� ����
    for (int x = 21; x < 1000; x++) {
        if(x % 3 ==  0 && x % 7 == 0) {
            printf("%d\n", x); 
        }
    }




    return 0;
}
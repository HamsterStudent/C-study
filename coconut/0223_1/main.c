#include <stdio.h>

// �Լ�: ��ɾ� ��� �ϳ��� ������ ������ִ� ���

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
    // ���ڰ����� �ּҰ��� �����Ѵٴ� �ǹ̴� 
    // ȣ��� �Լ����� ���޹��� �ּҰ��� �޸𸮰����� �����ϰڴٴ�
    // �ǹ��Դϴ�.

    printf("%d + %d = %d\n", a, b, ret);




    return 0;
}
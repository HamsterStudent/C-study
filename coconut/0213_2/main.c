#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    unsigned char light = 0;
    // ���� on off ����Ÿ ����� ����

    int roomNum = 0;
    // ���ȣ �����

    unsigned char lightMask = 1;

    // --------------------------------------------------------

    printf("�Ѱ� ���� ���� ���ȣ�� �Է��ϼ��� (1 ~ 8������ ������) : ");
    scanf("%d", &roomNum);
    roomNum--;
    // ��Ʈ ��Ʈ���� 0�����ؾ���. �Է¹��� roomNum ���� 1���δ�.

    lightMask = lightMask << roomNum;
    // �Է¹��� ���ȣ������ ���� ������ �ѱ� ���ؼ�
    // mask ��Ʈ���� �������� �̵���Ų��.

    //  00000000
    //  00001000
    //  00001000

    light = light | lightMask;

    printf("light = %d\n", light);

    // --------------------------------------------------------

    printf("���� ���� ���� ���ȣ�� �Է��ϼ��� (1 ~ 8 ������ ������) : ");
    scanf("%d", &roomNum);

    lightMask = 1;
    // mask���� �ʱ�ȭ

    roomNum--;

    lightMask = lightMask << roomNum;
    lightMask = ~lightMask;
    light = light & lightMask;

    printf("light = %d\n", light);


    return 0;
}
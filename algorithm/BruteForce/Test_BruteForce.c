#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ����� ����
// ������ ��ϵǾ��ִ� ���ϸ�, ���Ϲ��ڿ�
int main(int argc, char** argv) {
    char* fileName = argv[1];   // ������ ����ִ� ���ϸ�
    char* pattern = argv[2];   // ���� ���ڿ� ����
    FILE* fp;
    char Text[256];
    fp = fopen(fileName, "r");

    printf("%s ", Text[1]);

    // search string.txt  1234
    if (argc < 3) {
        printf("Usage: �������ϸ� ���ϸ� ���Ϲ��ڿ�:");
        return 0;
    }
    if (fp == NULL) {
        printf("���� ���⿡ �����߽��ϴ�.");

        return -1;
    }


    fclose(fp);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 명령행 인자
// 문장이 기록되어있는 파일명, 패턴문자열
int main(int argc, char** argv) {
    char* fileName = argv[1];   // 문장이 들어있는 파일명
    char* pattern = argv[2];   // 비교할 문자열 패턴
    FILE* fp;
    char Text[256];
    fp = fopen(fileName, "r");

    printf("%s ", Text[1]);

    // search string.txt  1234
    if (argc < 3) {
        printf("Usage: 실행파일명 파일명 패턴문자열:");
        return 0;
    }
    if (fp == NULL) {
        printf("파일 열기에 실패했습니다.");

        return -1;
    }


    fclose(fp);

    return 0;
}
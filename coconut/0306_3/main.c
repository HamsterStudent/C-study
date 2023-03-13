#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <string.h>

int main() {
    FILE* fp;
    char file_buff[100];

    fp = fopen("test_line.txt", "w");

    if (fp == NULL) {
        printf("파일 열기에 실패\n");

        return;
    }

    for (int i = 0; i < 5; i++) {
        printf("파일에 입력할 내용을 기재하세요(%d번째라인):", i + 1);
        memset(file_buff, 0, sizeof(file_buff));
        scanf("%s", file_buff);
        file_buff[strlen(file_buff)] = '\n'; // 널종료문자를 줄바꿈 문자로 바꿈
        fputs(file_buff, fp);   // 문자열을 파일에 출력한다.
    }

    fclose(fp);

    fp = fopen("test_line.txt", "r");
    if (fp == NULL) {
        printf("파일열기 실패\n");
        return;
    }

    // fgets함수는 파일에서 한line의 문자열을 읽는다.
    // 읽은 것이 없으면 NULL을 리턴한다.
    while (fgets(file_buff, sizeof(file_buff), fp) != NULL) {
        printf("%s", file_buff);
        memset(file_buff, 0, sizeof(file_buff));
    }

    fclose(fp);

    return 0;
}
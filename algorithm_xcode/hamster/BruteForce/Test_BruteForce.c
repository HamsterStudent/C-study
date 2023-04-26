#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int BruteForce(char* Text, char* pattern){
    int patternLength = strlen(pattern);
    int textLength = strlen(Text);
    int j = 0;
    for(int i = 0; i < textLength - patternLength; i++){
        
        for(j = 0; j < patternLength; j++){
            if(Text[i+j] != pattern[j]){
                break;
            }
        }
        
        if(j >= patternLength) {
            //printf("line: %d, column: %d\n", line, i );
            return i;
        }
    }
    return -1;
}


// 명령행 인자
// 문장이 기록되어있는 파일명, 패턴문자열
int main(int argc, char** argv) {
   char* fileName;   // 문장이 기록되어있는 파일명(path포함)
   fileName = argv[1];   // 문장이 들어있는 파일명
   char* pattern = argv[2];   // 비교할 문자열 패턴
   FILE * fp;
   char Text[256];

   fp = fopen(fileName, "r");

   // search string.txt  1234
   if (argc < 3) {
      printf("Usage: 실행파일명 파일명 패턴문자열:");
      return 0;
   }

   if (fp == NULL) {
      printf("파일 열기에 실패했습니다.");

      return -1;
   }
    
    int patternLength = strlen(pattern);
    int line = 1;
    
    while(fgets(Text, 256, fp) != NULL){
        //printf("%s\n ", Text);
        
        int column = BruteForce(Text, pattern);
        
        if(column != -1){
            printf("line: %d, column: %d\n", line, column);
        }
        line++;
    }

   fclose(fp);

   return 0;
}

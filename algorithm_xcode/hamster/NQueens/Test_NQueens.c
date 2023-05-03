#include <stdio.h>
#include <stdlib.h>
#include "NQueens.h"

int main(int argc, char* argv[]){
    int i = 0;
    // 퀸의 갯수
    int NumberOfQueens = 0;
    // 해의 갯수
    int SolutionCount = 0;
    int* Columns;
    
    if(argc < 2){
        printf("Usage : %s <Number Of Queens>", argv[0]);
        return 1;
    }
    // 퀸의 갯수 입력
    NumberOfQueens = atoi(argv[1]);
    // 퀸의 갯수를 저장하는 값
    Columns = (int*)calloc(NumberOfQueens, sizeof(int));
    
    for(i = 0; i < NumberOfQueens; i++){
        Columns[0] = i;
        // 배열의 주소, 열의 갯수, 퀸의 갯수, 해의 값
        // 놓을수 있는 위치를 찾음
        FindSolutionForQueen(Columns, 0, NumberOfQueens, &SolutionCount);
    }
    free(Columns);
    
    return 0;
}

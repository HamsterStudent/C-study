#include "NQueens.h"

#include <stdio.h>
#include <stdlib.h>

void FindSolutionForQueen(int Columns[], int Row, int NumberOfQueens, int* SolutionCount){
    // 컬럼와 로우 갯수. 1을 리턴하면 그 위치에는 놓을 수 없다는 것이 됨
    if(IsThreatened(Columns, Row))
        return;
    if(Row == NumberOfQueens - 1){
        printf("Solution #%d : \n", ++(SolutionCount));
        PrintSolution(Columns, NumberOfQueens);
    }
    else{
        int i;
        for(i = 0; i < NumberOfQueens; i++){
            Columns[Row + 1] = i;
            FindSolutionForQueen(Columns, Row+1, NumberOfQueens, SolutionCount);
        }
    }
}

int IsThreatened(int Columns[], int NewRow){
    int CurrentRow = 0;
    int Treatened = 0;
    
    while(CurrentRow < NewRow){
        // 같은 라인, 대각선 방향에 놓여있는 것을 거름
        if(Columns[NewRow] == Columns[CurrentRow]
           || abs(Columns[NewRow] - Columns[CurrentRow])
           == abs(NewRow - CurrentRow)){
            Treatened = 1;
            break;
        }
        CurrentRow++;
    }
    return Treatened;
}

void PrintSolution(int Columns[], int NumberOfQueens){
    int i = 0;
    int j = 0;
    for(i = 0; i < NumberOfQueens; i++){
        for(j = 0; j < NumberOfQueens; j++){
            if(Columns[i] == j)
                printf("Q");
            else
                printf(".");
        }
        printf("\n");
    }
    printf("\n");
}

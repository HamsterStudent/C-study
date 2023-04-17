#include <stdio.h>
#include <stdlib.h>

// 동적으로 2차원배열을 만듬
int** CreateMatrix(int column, int row){
    int** ppmatrix = (int**)malloc(sizeof(int*) * column);
    
    for(int i = 0; i < column; i++){
        ppmatrix[i] = (int*)malloc(sizeof(int) * row);
    }
    
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            ppmatrix[i][j] = 0;
        }
    }
    return ppmatrix;
}


// 동적 이차원 배열 초기화
void DeleteMatrix(int** ppmatrix, int column){
    for(int i = 0; i < column; i++){
        free(ppmatrix[i]);
    }
    free(ppmatrix);
}

// 간선 추가
void AddEdge(int** ppmatrix, int vertex1, int vertex2){
    ppmatrix[vertex1 - 1][vertex2 - 1] = 1;
    ppmatrix[vertex2 - 1][vertex1 - 1] = 1;
}

// 간선을 출력
void printMatrix(int** ppmatrix, int column, int row){
    for(int i = 0; i < column; i++){
        printf("%d : ", i + 1);
        
        for(int j = 0; j < row; j++){
            if(ppmatrix[i][j] == 1){
                printf("%d[0], ", j + 1);
            }
        }
        printf("\n");
    }
}


int main(void){
    int column = 5;
    int row = 5;
    
    int** ppMatrix = CreateMatrix(column, row);
    
    // 간선 정보를 기록
    AddEdge(ppMatrix, 1, 2);
    AddEdge(ppMatrix, 1, 3);
    AddEdge(ppMatrix, 1, 4);
    AddEdge(ppMatrix, 1, 5);

    AddEdge(ppMatrix, 2, 1);
    AddEdge(ppMatrix, 2, 3);
    AddEdge(ppMatrix, 2, 5);

    AddEdge(ppMatrix, 3, 1);
    AddEdge(ppMatrix, 3, 2);

    AddEdge(ppMatrix, 4, 1);
    AddEdge(ppMatrix, 4, 5);

    AddEdge(ppMatrix, 5, 1);
    AddEdge(ppMatrix, 5, 2);
    AddEdge(ppMatrix, 5, 4);
    
    // 저장된 간선 정보를 출력
    printMatrix(ppMatrix, column, row);
    
    // 저장에 사용된 2차원 동적배열을 제거
    DeleteMatrix(ppMatrix, column);
    
    
    return 0;
}


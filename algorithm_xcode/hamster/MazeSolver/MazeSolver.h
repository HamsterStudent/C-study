#ifndef MazeSolver_h
#define MazeSolver_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 1024
#define INIT_VALUE -1

// 아스키코드값으로 저장되어있음
#define START 'S' // 83
#define GOAL 'G' // 71
#define WAY ' ' // 32
#define WALL '#' // 35
#define MARKED '+'

enum DIRECTION {NORTH, SOUTH, EAST, WEST};
enum RESULT {FAIL, SUCCEED};

typedef struct tagPosition{
    int X;
    int Y;
}Position;

typedef struct tagMazeInfo{
    int ColumnSize;
    int RowSize;
    // 동적 이차원배열 만듬
    // 동적 이차원배열의 주소값
    char** Data;
}MazeInfo;

int Solve(MazeInfo* Maze);
int MoveTo(MazeInfo* Maze, Position* Current, int Diretion);
int GetNextStep(MazeInfo* Maze, Position* Current, int Diretion, Position* Next);
int GetMaze(char* FilePath, MazeInfo* Maze);


#endif /* MazeSolver_h */

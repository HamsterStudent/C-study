#include "MazeSolver.h"

int Solve(MazeInfo* Maze){
    int i = 0;
    int j = 0;
    // 시작점. (실패로 초기화)
    int StartFound = FAIL;
    // 골인점 (실패로 초기화)
    int Result = FAIL;
    
    // 출발 위치
    Position Start;
    
    // 출발점 위치를 찾음
    for(i = 0; i < Maze->RowSize; i++){
        for(j = 0; j < Maze->ColumnSize; j++){
            // 스타트 위치값을 찾음
            if(Maze->Data[i][j] == START){
                Start.X = j;
                Start.Y = i;
                StartFound = SUCCEED;
                break;
            }
        }
    }
    
    // 스타트 위치 못찾으면 망
    if(StartFound == FAIL)
        return FAIL;
    // 메이즈 정보, 출발점 위치, 북쪽
    if(MoveTo(Maze, &Start, NORTH))
        Result = SUCCEED;
    else if (MoveTo(Maze, &Start, SOUTH))
        Result = SUCCEED;
    else if (MoveTo(Maze, &Start, EAST))
        Result = SUCCEED;
    else if(MoveTo(Maze, &Start, WEST))
        Result = SUCCEED;
    
    Maze->Data[Start.Y][Start.X] = START;
    
    return Result;
}

int MoveTo(MazeInfo* Maze, Position* Current, int Direction){
    int i = 0;
    
    // 방향배열 초기화
    int Dirs[] = {NORTH, SOUTH, WEST, EAST};
    // 다음 위치 저장공간
    Position Next;
    
    // 탈출구를 찾으면 성공 리턴
    if(Maze->Data[Current->Y][Current->X] == GOAL)
        return SUCCEED;
    
    // 골이 아니면 마킹표시로 만듬
    Maze->Data[Current->Y][Current->X] = MARKED;
    
    // 다음에 갈 위치를 찾음.
    for(i = 0; i < 4; i++){
        // 메이즈, 현재 위치, 방향, 다음 위치
        if(GetNextStep(Maze, Current, Dirs[i], &Next) == FAIL)
            continue;
        // 성공이 호출되면 재귀로 함수 다시 호출
        if(MoveTo(Maze, &Next, NORTH) == SUCCEED)
            // 계속해서 SUCCED를 리턴
            return SUCCEED;
    }
    // 길로 바꿈
    Maze->Data[Current->Y][Current->X] = WAY;
    
    return FAIL;
}

int GetNextStep(MazeInfo* Maze, Position* Current, int Direction, Position* Next){
    switch(Direction){
        case NORTH:
            Next->X = Current->X;
            Next->Y = Current->Y - 1;
            // 메이즈 범위를 벗어나면 실패처리
            if(Next->Y == -1) return FAIL;
            break;
        case SOUTH:
            Next->X = Current->X;
            Next->Y = Current->Y + 1;
            // 메이즈 범위를 벗어나면 실패처리
            if(Next->Y == Maze->RowSize) return FAIL;
            break;
        case WEST:
            Next->X = Current->X - 1;
            Next->Y = Current->Y;
            // 메이즈 범위를 벗어나면 실패처리
            if(Next->X == -1) return FAIL;
            break;
        case EAST:
            Next->X = Current->X + 1;
            Next->Y = Current->Y;
            // 메이즈 범위를 벗어나면 실패처리
            if(Next->X == Maze->ColumnSize) return FAIL;
            break;
    }
    // 벽인지 판별
    if(Maze->Data[Next->Y][Next->X] == WALL)
        return FAIL;
    if(Maze->Data[Next->Y][Next->X] == MARKED)
        return FAIL;
    
    return SUCCEED;
}

int GetMaze(char* FilePath, MazeInfo* Maze){
    int i = 0;
    int j = 0;
    int RowSize = 0;
    int ColumnSize = INIT_VALUE; // -1로 초기화
    
    // 읽은 파일의 정보를 저장한 주소값
    FILE* fp;
    char buffer[MAX_BUFFER];
    
    if((fp = fopen(FilePath, "r")) == NULL){
        printf("Cannot open file : %s\n",FilePath);
        return FAIL;
    }
    
    // 라인 하나씩 읽어서 버퍼에 저장
    while(fgets(buffer, MAX_BUFFER, fp) != NULL){
        // 로우사이즈 플러스
        RowSize++;
        // -1이냐? = 컬럼 사이즈가 없음
        if(ColumnSize == INIT_VALUE){
            // 라인의 길이를 저장
            ColumnSize == strlen(buffer) - 1;
        }
        // 사이즈 비교
        else if (ColumnSize != strlen(buffer) - 1){
            // 잘못만들면 나감
            printf("Maze data in file : %s is not vaild. %d\n",
                   FilePath, strlen(buffer));
            fclose(fp);
            return FAIL;
        }
    }
    // 로우 갯수
    Maze->RowSize = RowSize;
    // 컬럼 갯수
    Maze->ColumnSize = ColumnSize;
    // 로 동적 이차원배열 만듬
    Maze->Data = (char**)malloc(sizeof(char*) * RowSize);
    
    for(i = 0; i < RowSize; i++)
        Maze->Data[i] = (char*)malloc(sizeof(char) * ColumnSize);
    // 끝으로 간걸 앞으로
    rewind(fp);
    
    // 파일에서 읽은 데이터를 집어넣음
    for(i = 0; i < RowSize; i++){
        fgets(buffer, MAX_BUFFER, fp);
        for(j = 0; j < ColumnSize; j++){
            Maze->Data[i][j] = buffer[j];
        }
    }
    fclose(fp);
    // 다 읽었다고 리턴
    return SUCCEED;
}

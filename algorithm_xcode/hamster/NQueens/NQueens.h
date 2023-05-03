#ifndef NQueens_h
#define NQueens_h

#include <stdio.h>

void PrintSolution(int Columns[], int NumberOfQueens);
int IsThreatened(int Columns[], int NewRow);
void FindSolutionForQueen(int Columns[], int Row, int NumberOfQueens, int* SolutionCount);

#endif /* NQueens_h */

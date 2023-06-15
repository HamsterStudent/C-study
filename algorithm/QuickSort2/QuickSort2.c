#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
#include "Score.h"
#include <time.h>

/*  리턴값이
   < 0 이면, _elem1이 _elem2보다 작다.
   0   이면, _elem1이 _elem2와 같다.
   > 0 이면, _elem1이 _elem2보다 크다.  */
int CompareScore(const void* _elem1, const void* _elem2)
{
    Score* elem1 = (Score*)_elem1;
    Score* elem2 = (Score*)_elem2;

    if (elem1->score > elem2->score)
        return 1;
    else if (elem1->score < elem2->score)
        return -1;
    else
        return 0;
}

int main(void)
{
    //int DataSet[] = { 6, 4, 2, 3, 1, 5 };
    int Length = sizeof DataSet / sizeof DataSet[0];
    int i = 0;
    double startTime, endTime;

    startTime = (double)clock() / CLOCKS_PER_SEC;
    qsort((void*)DataSet, Length, sizeof(int), CompareScore);
    endTime = (double)clock() / CLOCKS_PER_SEC;

    for (i = 0; i < 10; i++)
    {
        printf("DataSet[%d].number = %d, score = %lf\n ", i, DataSet[i].number, DataSet[i].score);
    }

    for (i = 29990; i < Length; i++)
    {
        printf("DataSet[%d].number = %d, score = %lf\n ", i, DataSet[i].number, DataSet[i].score);
    }


    printf("정렬시간: %lf\n", endTime - startTime);

    return 0;
}
#include <stdio.h>

int main() {
    int array0[4] = { 0, 1, 2, 3 };
    int array1[4] = { 4, 5, 6, 7 };
    int array2[4] = { 8, 9, 10, 11 };
    int array3[4] = { 12, 13, 14, 15 };

    //int* parray[4] = { array0, array1, array2, array3 };
    int* parray[4];   // 포인터배열

    parray[0] = array0;
    parray[1] = array1;
    parray[2] = array2;
    parray[3] = array3;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("parray[%d][%d] = %d\n", i, j, parray[i][j]);
        }
    }

    char arr1[7] = { 'h', 'a', 'm', 's', 't', 'e', 'r' };
    char arr2[4] = { 'c','u','t','e' };
    int arr3[4] = { 3,1,5,6 };

    char* parr[3];

    parr[0] = arr1;
    parr[1] = arr2;
    parr[2] = arr3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < sizeof(arr1); j++) {
            printf("parr[%d][%d] = %c\n", i, j, parr[i][j]);
        }
    }



    return 0;
}
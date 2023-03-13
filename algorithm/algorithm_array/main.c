#include <stdio.h>

int main() {
	// 배열은 동일한 데이터 타입을 순차적으로 저장할 때 사용
	int array[5];

	int* parray = array;

	int array2[3][3];

	// int [3]짜리 사이즈에 대한 주소값을 저장하는 포인터변수
	// 배열식
	int(*pparray)[3];
	// 포인터식
	*(*(array2 + 1) + 1) = 100;


	return 0;
}
#include <stdio.h>

int main() {
	unsigned char value = 10;
	// 00001010 

	unsigned char mask = 1;
	// 00000001


	printf("value = %d\n", value);

	// value의 3번째 비트값을 0으로 만들기
	mask = mask << 3;
	// 00001000
	// << : 왼쪽 shift 연산자

	mask = ~mask;
	// 11110111
	// ~ : 비트 Not 연산자

	value = value & mask;
	// 00001010 (value)
	// 11110111 (mask)
	// 00000010 (value & mask) (bit And)
	printf("mask off value = %d\n", value);

	

	// 비트 | (비트 OR) 연산자 Mask on
	// Mask On : 특정 자리의 비트 값을 1로 만드는 것
	mask = 1;
	// 00000001

	mask <<= 3;
	// 00001000
	// mask변수의 비트 값을 왼쪽으로 3비트 이동(축약형)

	value |= mask;
	// 00000010
	// 00001000
	// 00001010
	// value = value | mask
	printf("mask on value = %d\n", value);


	

	// 비트 & 연산자는 Mask off
	// mask off : 특정 자리의 비트 값을 0으로 만들때 사용
	return 0;
}
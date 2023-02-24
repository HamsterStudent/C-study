#include <stdio.h>

int global = 100;

// 함수 선언 컴파일러에게 void PrintGlobal이 있다고 알려줌
void PrintGlobal();

int main() {

	PrintGlobal();

	return 0;
}
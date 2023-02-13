#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	// sizeof(변수 / 데이터 타입)
	// 변수의 byte사이즈나 데이터타입의 byte 사이즈를 돌려줍니다.
	// sizeof 연산자는 실행중에 작동하는 연산자가 아님

	int size = sizeof(int);
	printf("int형의 byte사이즈는 %d byte\n", size);
	
	size = sizeof(float);
	printf("float형의 byte사이즈는 %d byte\n", size);

	size = sizeof(double);
	printf("double형의 byte사이즈는 %d byte\n", size);

	float d;


	// printf("%d", sizeof(a));
	// 축약형

	size = sizeof d;
	// 변수의 크기를 구함
	printf("d 변수의 byte사이즈는 %d byte\n", size);

	// 쉼표연산자는 명령어를 구분할 때 사용합니다.
	printf("a\n"), printf("b\n");



	return 0;
}
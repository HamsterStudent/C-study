#include <stdio.h> // 밑에 printf라는 함수를 사용하기 위해서 stdio.h 라는 문서를 포함해달라고 요청함.

int main() {
	short plusA;   // short형 plusA 변수를 만듦
	short minusA;   // short형 minusA 변수를 만듦

	plusA = 32767;   // plusA변수에 32767의 값을 저장함.
	minusA = -32768; // minusA 변수에 -32768의 값을 저장함.

	// plusA와 minusA라는 변수명은 나중에 실행할때 만들어질 메모리 공간을 대신
	// 하고 있습니다.

	// 값을 출력할때 printf라는 함수를 사용합니다.
	// printf함수 콘솔창에 문자열을 출력할때 사용합니다.
	// printf함수는 형식지정문자열을 지원합니다.
	printf("plusA = %d, minusA = %d\n", plusA, minusA);


	return 0;
}
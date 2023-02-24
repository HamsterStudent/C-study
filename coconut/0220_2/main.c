#include <stdio.h>

int main() {
	// 0 ~ 100까지 저장하세요
	// 동일한 데이터 타입의 공간이 여러개 필요할 때 배열 사용

	// 404바이트 한번에 할당해주고 4바이트씩 쪼개쓴다
	// 배열명은 배열의 선두번지 주소값(첫번째 요소의 주소값)
	int intArray[101];

	for (int i = 0; i < 101; i++) {
		intArray[i] = i;
	}

	for (int i = 0; i < 101; i++) {
		printf("intArray[%d] = %d\n", i, intArray[i]);
	}

	return 0;
}
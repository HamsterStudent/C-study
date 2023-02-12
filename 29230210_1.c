#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 숙제
// 점(x, y)가 박스 좌상단점(0,0), 우하단점(10, 10) 사이에 있는 지 확인하는 
// 로직을 만드세요.


int main() {
	int x = 0;
	int y = 0;

	int leftTopX = 0;
	int leftTopY = 0;
	int rightBottomX = 10;
	int rightBottomY = 10;

	printf("점의 x값을 입력하세요 : ");
	scanf("%d", &x);

	printf("점의 y값을 입력하세요 : ");
	scanf("%d", &y);

    int xValue = 0 < x && x < 10;
    int yValue = 0 < y && y < 10;
    int isInBox = xValue && yValue;

	if (isInBox) {
		printf("상자 안에 있습니다.");
	}
	else {
		printf("벗어났습니다.");
	}

	return 0;

}

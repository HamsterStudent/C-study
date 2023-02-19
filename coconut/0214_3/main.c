#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 선택문
	// switch - case

	// 버튼 번호 입력용
	int buttonNum = 0;
	printf("리모컨의 번호을 입력하세요.(0번 power on/off, 1번 볼륨업 , 2번 볼륨다운, 3번 채널업, 4번 채널다운) : ");
	scanf("%d, &buttinNum");

	// 정수값에 따라서 분기됨
	switch (buttonNum){
	case 0:
		printf("TV 켜\n");
		break;

	case 1:
		printf("Volum up\n");
		break;
	case 2:
		printf("Volum douwn\n");
		break;

	case 3:
		printf("Channel up\n");
		break;

	case 4:
		printf("Channel down\n");
		break;
	}
}
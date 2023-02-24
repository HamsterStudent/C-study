#include <stdio.h>
#include <stdlib.h>

// 구조체는 사용자 정의 데이터 타입
// int형이나 float형 쓰듯 써도 됨
typedef struct tagMonster {
	int health;
	int attack;
	int defense;
} Monster;

int main() {

	printf("sizeof(Monster) = %d\n", sizeof(Monster));

	Monster* pm = (Monster*)malloc(sizeof(Monster));

	// 주소값을 가지고 구조체 맴버에 접근하려면 화살표연산자 사용
	pm->health = 100;
	pm->defense = 30;
	pm->attack = 40;
	// (*pm).attack = 40 과 같음

	printf("생명력 : %d\n", pm->health);
	printf("방어력 : %d\n", pm->defense);
	printf("공격력 : %d\n", pm->attack);
	
	free(pm);

	return 0;
}
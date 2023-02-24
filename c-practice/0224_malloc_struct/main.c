#include <stdio.h>
#include <stdlib.h>

typedef struct tagMonster {
	int health;
	int attack;
	int defense;
} Monster;

int main() {
	printf("sizeof(Monster) = %d\n", sizeof(Monster));

	Monster* pm = (Monster*)malloc(sizeof(Monster));

	pm->health = 100;
	pm->defense = 30;
	pm->attack = 40;

	printf("생명력 : %d\n", pm->health);
	printf("방어력 : %d\n", pm->defense);
	printf("공격력 : %d\n", pm->attack);

	free(pm);
}
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

	printf("����� : %d\n", pm->health);
	printf("���� : %d\n", pm->defense);
	printf("���ݷ� : %d\n", pm->attack);

	free(pm);
}
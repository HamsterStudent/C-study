#include <stdio.h>
// extern : 외부에 있다는 선언
extern int global;

void PrintGlobal() {
	printf("global = %d", global);
}
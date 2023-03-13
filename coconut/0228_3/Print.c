#include "Print.h"

void AddPrint(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void SubPrint(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
}

void MulPrint(int a, int b) {
	printf("%d x %d = %d\n", a, b, a * b);
}

void DivPrint(int a, int b) {
	printf("%d / %d = %f\n", a, b, a / (float)b);
}

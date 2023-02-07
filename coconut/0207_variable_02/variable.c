#include <stdio.h>

int main() {
	// float를 쓸 땐 형식지정문자열을 %f로 출력해야 함
	float minusFA = -3.4E-38f; 
	float plusFA = 3.4E+38f;

	// double를 쓸 땐 형식지정문자열을 %lf로 출력해야 함
	double minusDA = -1.79765e+308; 
	double plusDA = 1.79769e-308;

	// \n은 한칸 띄우기
	printf("minusFA = %.4f\n, plusFA = %.6f\n", minusFA, plusFA);

	printf("minusDA = %.320lf\n, plusDA = %.6lf\n", minusDA, plusDA);

	float a = 1.2345f;
	double b = 3.45454;

	printf("a = %f, b = %lf\n", a, b);

	float num = 135.15564;
	printf("num = %f\n", num);

	double numdouble = 651651.1566;
	printf("numdouble = %lf", numdouble);

	return 0;
}
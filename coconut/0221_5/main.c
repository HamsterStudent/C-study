#include <stdio.h>
// �Լ��� ��� ���?
// ������ �ڵ带 �ϳ��� ������
// �ݺ��� �ڵ带 �ϳ��� ������
// �������� ���̱� ���ؼ� ������ ��ɺκ��� ���� ���� ����մϴ�.

// ��Ģ�����Լ�

// ����Ÿ��: �Լ��� �����ִ� ��ɾ ó���� ������� �Ÿ������ �����ٲ���?
// �Լ���: �Լ��� ȣ���Ҷ� ����� �̸�
// �Ű�����(Parameter): �Լ����� ���޵� ���� �޴� ����
int add(int a, int b) {
	int result = 0;

	result = a + b;

	return result; // return���� �Լ��ܺη� ������� �����Ҷ� ����մϴ�.   
}


float addf(float a, float b) {
	return a + b;
}

// ����(sub tract), ����(mul tiply), ������(div ide) �Լ��� 
// ����ð� �Լ��� ȣ���Ͽ� ������� �ް� ����غ�����..
int sub(int a, int b) {
	return a - b;
}

float subf(float a, float b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

float mulf(float a, float b) {
	return a * b;
}

float div(int a, int b) {
	return a / (float)b;
}

float divf(float a, float b) {
	return a / b;
}


int main() {
	int a = 20;
	int b = 30;

	// ���� ��Ģ����
	int result = add(a, b); // �Լ��� ȣ���Ҷ� ���޵� ���� ����(argument)

	printf("%d + %d = %d\n", a, b, result);


	result = sub(a, b);
	printf("%d - %d = %d\n", a, b, result);

	result = mul(a, b);
	printf("%d x %d = %d\n", a, b, result);

	float resultf = 0.0f;
	resultf = div(a, b);
	printf("%d / %d = %f\n", a, b, resultf);

	// �Ǽ� ��Ģ����
	float c = 30.4f;
	float d = 4.5f;

	resultf = addf(c, d);
	printf("%f + %f = %f\n", c, d, resultf);

	resultf = subf(c, d);
	printf("%f - %f = %f\n", c, d, resultf);

	resultf = mulf(c, d);
	printf("%f x %f = %f\n", c, d, resultf);

	resultf = divf(c, d);
	printf("%f / %f = %f\n", c, d, resultf);



	return 0;
}
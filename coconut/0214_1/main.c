#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	// ��� (Control Statement)
	// ���ǹ� (Conditional statement) : ���ǿ� ���� ��ɾ� ó���ϰų� ó������ ����
	//	-- �б⹮ �б� : ���α׷��� �����帧�� �ٸ������� ������ ��
	//  -- ���Ǻб� : ���ǿ� ���� ���� �帧�� �ٸ� ������ ������ ��
	//		if, if-else, if-else-if
	//		switch-case (���ù�)
	//	-- �����Ǻб� : ���� �帧�� �׳� �ٸ� ������ ������ ��
	//		goto
	// �ݺ��� (Iterate Statement) : �ݺ������� ��ɾ �����Ҷ�
	//		for, while, do-while

	int age = 0;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	if (age < 19) {
		printf("����� �̼������Դϴ�. �����Ͻ� �� �����ϴ�.\n");
	}

	int money = 0;
	int goodmoney = 3200;

	printf("���ұ��� �Է��ϼ��� : ");
	scanf("%d\n", &money);

	// �������ǹ� : ���� ���� ������ ��� �� �� ó����
	if (money >= goodmoney) {
		printf("������ �����Ͻ� �� �ֽ��ϴ�.");
	}
	else {
		printf("���ұ��� ���ǰ����� �۾Ƽ� ������ �����Ͻ� �� �����ϴ�.");
	}

	return 0;
}
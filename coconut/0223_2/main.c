#include <stdio.h>

int main() {
	// �л������� ���α׷�
	// �̸��� ������ ����
	// �̸� ���� �������
	struct Student {
		char name[20];
		int age;
		int birthday;
	};
	

	// struct Student ������ Ÿ���� ������ٴ� �ǹ�?
	// ������ Ÿ���� �ִٴ� �ǹ̴� �ش� ������ Ÿ���� ������ ���� �� �ִٴ� �ǹ�

	// struct Student
	struct Student st;

	st.name[0] = 'M';
	st.name[1] = 'O';
	st.name[2] = 'N';
	st.name[3] = '/0'; // �����Ṯ�� : ���ڿ��� ���� ǥ���ϴ� ����

	st.age = 13;
	st.birthday = 20100101;


	return 0;
}
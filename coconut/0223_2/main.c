#include <stdio.h>

int main() {
	// 학생관리용 프로그램
	// 이름에 데이터 관리
	// 이름 나이 생년월일
	struct Student {
		char name[20];
		int age;
		int birthday;
	};
	

	// struct Student 데이터 타입을 만들었다는 의미?
	// 데이터 타입이 있다는 의미는 해당 데이터 타입의 변수를 만들 수 있다는 의미

	// struct Student
	struct Student st;

	st.name[0] = 'M';
	st.name[1] = 'O';
	st.name[2] = 'N';
	st.name[3] = '/0'; // 널종료문자 : 문자열의 끝을 표시하는 문자

	st.age = 13;
	st.birthday = 20100101;


	return 0;
}
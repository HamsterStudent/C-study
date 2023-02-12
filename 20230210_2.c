#include <stdio.h>

int main(){
    int a;
    int b;

    float c = 2.4f;
    
    a = 20;
    b = 30;

    a = b;

    // left value = right value
    // 왼쪽값은 변수만 올 수 있다.
    // 오른쪽값은 변수나 값이 올 수 있다.

    // 왼쪽과 오른쪽 값의 테이터 타입이 일치해야 한다
    // 메모리 공간의 사이즈도 일치(int short double
    // 정수향, 실수형, 문자형

    // 기본 데이터 타입간에는 컴파일러가 자동으로 형변환 시켜줌
    // 정수 = 실수 일 경우 실수의 정수부분만 떼서 사용
    // 묵시적 형변환 쓰면 안됨... 명시적으로 해야 함

    a = (int)c; // 명시적 형변환

    a = c;


    return 0;
}
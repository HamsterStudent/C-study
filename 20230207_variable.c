// #include <stdio.h>
// // printf라는 함수를 사용하기 위해서 stdio.h라는 문서를 요청
// // 헐 인클루드구나 허걱이

// int main() {
//     // short형 변수 만듦
//     short plusA;
//     short minusA;

//     // 변수에 각각 값을 저장함
//     plusA = 32767;
//     minusA = -32768;

//     // plus와 minus 변수명은 나중에 실행할 때 만들어질 메모리 공간을 대신하는중
//     // 위 두 변수명은 코딩작업을 할 때에만 의미가 있습니다.

//     // 값을 출력할 때 printf라는 함수 사용
//     // printf는 형식 지정 문자열을 지원 %d 는 정수값이 들어갈거라고 예고
//     // 변수를 순서대로 입력해 주어야 순서대로 들어가게 된다
//     printf("plusA = %d, minusA = %d\n", plusA, minusA);

//     return 0;
// }

#include <stdio.h>

int main() {
    float minusFA = -3.4E-38f; // %f 부동소수점수 방식으로 값 입력
    float pluFA = 3.4E38f;

    // 308승이라는 뜻
    double minusDA = -1.79769e-308; // %lf
    double plusDA = 1.79769e308;

    // .출력하고 싶은 소숫점자리수f 하면 출력이 된다
    printf("minusFA = %f\n, plusFA = %f\n", minusFA, pluFA);
    printf("minusDA = %.320lf\n, plusDA = %.6lf\n", minusDA, plusDA);

    float a = 1.2345f; // 고정소수점수방식
    double b = 3.45434;

    printf("a = %f, b = %lf\n", a, b);

    return 0;
}
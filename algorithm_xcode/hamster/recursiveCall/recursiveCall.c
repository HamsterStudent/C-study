#include <stdio.h>

// 재귀호출(recursive call)
// 어떤함수가 자기자신을 자신의 내부에 다시 호출하는 것
// 재귀호출은 탈출조건이 명확해야 합니다.

int factorial(int n) {
   if (n == 1) return n;    // 탈출 조건

   return n * factorial(n - 1);
}

int main() {

   int ret = factorial(10);

   printf("ret = %d\n", ret);



   return 0;
}

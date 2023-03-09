#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct tagStudent {
   char name[20];   // 구조체 멤버
   int age;
   int grade;
   struct tagStudent *Next;
} Student;

int main() {
   Student a = { "Mons1", 17, 3 };
   Student b = { "Mons2", 21, 2 };
   Student c = { "Mons3", 16, 1 };
   Student d = { "Mons4", 18, 3 };


   a.Next = &b;
   b.Next = &c;
   c.Next = &d;


   printf("a변수로 d변수의 내용을 출력: \n");

    // 주소값을 이용해서 접근
   printf("d변수 이름: %s\n", a.Next->Next->Next->name);
   printf("d변수 나이: %d\n", a.Next->Next->Next->age);
   printf("d변수 학년: %d\n\n", a.Next->Next->Next->grade);

    // a변수에 화살표 연산자를 사용해서
   // b변수의 age
   // c변수의 grade
   // d변수의 name을 출력해보세요...

   printf("b age : %d\n", a.Next->age );
   printf("c grade : %d\n", a.Next->Next->grade );
   printf("d name : %s",a.Next->Next->Next->name );

   return 0;
}
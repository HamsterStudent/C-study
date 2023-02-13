#include <stdio.h>

int main() {
	// ^ : xor연산자 (배타적 or)
	// 배타적 or연산자는
	// 두 비트의 값이 다른 경우에 1, 같으면 0
	// 0 ^ 0 = 0;
	// 0 ^ 1 = 1;
	// 1 ^ 1 = 0;
	// 배타적 or연산자의 성질은 두 값을 배타연산or 한 결과값에
	// 두 값중 한 값을 다시 xor연산을 하면 결과값으로 두 값중 다른 값이 나옵니다.

	unsigned char a = 1;
	// 00000001
	unsigned char b = 2;
	// 00000010
	unsigned char c = 0;
	unsigned char d = 0;


	c = a ^ b;
	// 00000011 (a ^ b)(c)
	printf("c = %d\n", c);

	d = c ^ a;
	// 00000011 (c)
	// 00000001 (a)
	// 00000010 (c ^ a) 
	printf("c = %d\n", d);

	c = c ^ b;
	// 00000011 (c)
	// 00000010 (b)
	// 00000001 (c ^ b)
	printf("c = %d\n\n", c);

	// 숙제
   // xor연산자만 사용해서 a변수의 값과 b변수의 값을 바꾸세요.
   // 다른 변수를 사용하시면 안됩니다.
   // a변수와 b변수 xor연산자만 사용하셔야합니다.
	unsigned char x = 2;
	unsigned char y = 3;
	unsigned char z = 0;
	printf("바꾸기 전 x = %d, y = %d\n", x, y);
	z = x ^ y;
	x = z ^ x;
	printf("바꾼 후 x = %d\n", x);
	y = z ^ y;
	printf("바꾼 후 y = %d\n", y);


}
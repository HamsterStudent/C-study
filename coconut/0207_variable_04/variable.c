#include <stdio.h>

int main() {
	// short, long, int, long long int, unsigned short, unsigned long, unsigned int, unsigned long long int
	// float, double
	// char, unsigned char


	short minShort = -32768;
	short maxShort = 32767;
	long minLong = -2147483647 - 1;
	long maxLong = 2147483647;
	int minInt = -2147483647 - 1;
	int maxInt = 2147483647;
	long long minLongLong = -9223372036854775807 - 1;
	long long maxLongLong = 9223372036854775807;


	unsigned short minUShort = 0;
	unsigned short maxUShort = 65535;
	unsigned long minULong = 0;
	unsigned long maxULong = 4294967295;
	unsigned int minUInt = 0;
	unsigned int maxUInt = 4294967295;
	unsigned long long minULongLong = 0;
	unsigned long long maxULongLong = 18446744073709551615;

	float minFloat = -3.4E-38f;
	float maxFloat = 3.4E38f;

	double minDouble = -1.79769e-308;
	double maxDouble = 1.79769e308;

	char minChar = -128;
	char maxChar = 126;

	unsigned char minUChar = 0;
	unsigned char maxUChar = 255;

	printf("short range %d ~ %d\n", minShort, maxShort);
	printf("long range %d ~ %d\n", minLong, maxLong);
	printf("int range %d ~ %d\n", minInt, maxInt);
	printf("long long range %lld ~ %lld\n", minLongLong, maxLongLong);

	printf("unsigned short range %u ~ %u\n", minUShort, maxUShort);
	printf("unsigned long range %u ~ %u\n", minULong, maxULong);
	printf("unsigned int range %u ~ %u\n", minUInt, maxUInt);
	printf("unsigned long long range %llu ~ %llu\n", minULongLong, maxULongLong);

	printf("float range %f ~ %f\n", minFloat, maxFloat);
	printf("double range %lf ~ %lf\n", minDouble, maxDouble);

	printf("char range %d ~ %d\n", minChar, maxChar);
	printf("unsigned char %d ~ %d\n", minUChar, maxUChar);



	return 0;
}
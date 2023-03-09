#include <stdio.h>

int main() {
    // short, long, int, long long int, unsigned short, unsigned long, unsigned int, unsigned long long int
    // float, double
    // char, unsigned char
    // 각 변수에 해당 데이터 타입의 한계값을 저장 후 출력
    
    short minShort = -32768;
    short maxShort = 32767;

    int minInt = -32768;
    int maxInt = 32767;

    long minLong = -2147483648;
    long maxLong = 2147483647;
    
    long long minLongLong = -9223372036854775808;
    long long maxLongLong = 9223372036854775807;

    unsigned short minUShort = 0;
    unsigned short maxUShort = 65535;
    unsigned int minUInt = 0;
    unsigned int maxUInt = 65535;
    unsigned long minULong = 0;
    unsigned long maxULong = 4294967295;

    unsigned long long minULongLong = 0;
    unsigned long long maxULongLong = 18446744073709551615;

    float minFloat = -3.4E-38f;
    float maxFloat = 3.4E38f;

    double minDouble = -1.79769e+308;
    double maxDouble = 1.79769e-308;

    char minChar = -128;
    char maxChar = 127;

    unsigned char minChar = 0;
    unsigned char maxChar = 255;

    return 0;

}
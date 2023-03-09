#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int calculator(int(*pfunc)(int,int), int a, int b){
    return pfunc(a, b);
}

int main(){

    int(*pfunc)(int, int);

    pfunc = add;

    int a = 20;
    int b = 20;

    int ret = pfunc(a,b);

    printf("%d + %d = %d\n", a, b, ret);

    pfunc = sub;

    ret = pfunc(a, b);

    printf("%d + %d = %d\n", a, b, ret);

    ret = calculator(mul, a, b);

    printf("%d x %d = %d", a, b, ret);

    return 0;
}
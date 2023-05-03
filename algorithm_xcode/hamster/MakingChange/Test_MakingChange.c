#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Compare(const void* a, const void* b){
    int _a = *(int*)a;
    int _b = *(int*)b;
    
    if(_a < _b)
        return 1;
    else
        return -1;
}


int main(void){
    int i = 0;
    int Pay = 0;
    int Price = 0;
    int UnitCount = 4;
    int CoinUnits[4] = {500, 100, 50, 10};
    int* Change = NULL;
    
    printf("물건의 가격을 입력하세요 : ");
    scanf("%d", &Price);
    printf("지불값을 입력하세요 : ");
    scanf("%d", &Pay);
//    printf("동전의 가짓수를 입력하세요 : ");
//    scanf("%d", &UnitCount);
    
    Change = Pay - Price;
    
    UnitCount = (int*)malloc(sizeof(int) * (UnitCount));
    
    printf("거스름돈 : %d\n", Change);
    
    for(i = 0; i < sizeof(CoinUnits); i++){
        while((Change / (CoinUnits[i])) == 0){
            Change = Change - CoinUnits[i];
        }
    }
    
    return 0;
}

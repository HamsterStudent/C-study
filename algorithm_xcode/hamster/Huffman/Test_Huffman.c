#include "Huffman.h"
#include <string.h>

int main(void){
//    char* Source = "http:// www.seanlab.net";
    char* Source = "AABBAABCC";
    char* Decoded = "";
    
    // 루트노드의 값
    HuffmanNode* Tree = NULL;
    // 동적으로 공간 부여받음
    BitBuffer Encoded = {NULL, 0};
    // 코드테이블 만듬[256]만큼(아스키값)
    HuffmanCode CodeTable[MAX_CHAR];
    
    // 배열을 0으로 초기화
    memset(&CodeTable, 0, sizeof(HuffmanCode) * MAX_CHAR);
    
    // 루트, 문자열, 비트버퍼의 주소값, 문자열 저장 위한 코드테이블 전달
    Huffman_Encode(&Tree, Source, &Encoded, CodeTable);
    
    printf("Original Size: %d Encoded Size: %d\n",
           (strlen(Source) + 1) * sizeof(char) * 8, Encoded.Size);
    
    Decoded = (char*)malloc(sizeof(char) * (strlen(Source) + 1));
    Huffman_Decode(Tree, &Encoded, Decoded);
    
    printf("Original : %s\n", Source);
    printf("Encoded : ");
    
    Huffman_PrintBinary(&Encoded);
    
    printf("Decoded : %s\n", Decoded);
    
    Huffman_DestroyTree(Tree);
    free(Decoded);
    
    return 0;
}

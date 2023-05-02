#ifndef Huffman_h
#define Huffman_h

#include <stdio.h>
#include <stdlib.h>
#include "PriorityQueue.h"

#define MAX_CHAR 256
#define MAX_BIT 8

typedef unsigned int UINT;
typedef unsigned char UCHAR;

// 빈도수 기록
typedef struct TagSymbolInfo{
    UCHAR Symbol;
    // 빈도수 저장
    int Frequency;
}SymbolInfo;


typedef struct TagHuffmanNode{
    //심볼(문자모양에 대한 빈도수)
    SymbolInfo Data;
    // 왼쪽자식
    struct TagHuffmanNode* Left;
    // 오른쪽자식
    struct TagHuffmanNode* Right;
}HuffmanNode;

// 인코딩할때 비트값 저장
typedef struct TagBitBuffer{
    UCHAR* Buffer;
    UINT Size;
}BitBuffer;

// 문자 모양에 대한 비트값 저장
typedef struct TagHuffmanCode{
    // 문자형태로 저장됨
    UCHAR Code[MAX_BIT];
    int Size;
}HuffmanCode;

HuffmanNode* Huffman_CreateNode(SymbolInfo NewData);
void Huffman_DestroyNode(HuffmanNode* Node);
void Huffman_DestroyTree(HuffmanNode* Node);
void Huffman_AddBit(BitBuffer* Buffer, char value);

void Huffman_Encode(HuffmanNode** Tree, UCHAR* Source, BitBuffer* Encoded, HuffmanCode CodeTable[MAX_CHAR]);
void Huffman_Decode(HuffmanNode* Tree, BitBuffer* Encoded, UCHAR* Decoded);
void Huffman_BuildPrefixTree(HuffmanNode** Tree, SymbolInfo SymbolInfoTable[MAX_CHAR]);
void Huffman_BuildCodeTable(HuffmanNode* Tree, HuffmanCode CodeTable[MAX_CHAR], UCHAR Code[MAX_BIT], int Size);
void Huffman_PrintBinary(BitBuffer* Buffer);


#endif /* Huffman_h */

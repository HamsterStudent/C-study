#include "Huffman.h"

HuffmanNode* Huffman_CreateNode(SymbolInfo NewData){
    HuffmanNode* NewNode = (HuffmanNode*)malloc(sizeof(HuffmanNode));
    NewNode->Left = NULL;
    NewNode->Right = NULL;
    NewNode->Data = NewData;
    
    return NewNode;
}

void Huffman_DestroyNode(HuffmanNode* Node){
    free(Node);
}

void Huffman_DestroyTree(HuffmanNode* Node){
    if(Node == NULL)
        return;
    
    Huffman_DestroyTree(Node->Left);
    Huffman_DestroyTree(Node->Right);
    Huffman_DestroyNode(Node);
}

// 저장할 공간을 동적으로 만들어서 넣어줌
void Huffman_Huffman_AddBit(BitBuffer* Buffer, char Bit){
    UCHAR Mask = 0x80; // 1000 0000
    
    if(Buffer->Size % 8 == 0){
        Buffer->Buffer =
        realloc(Buffer->Buffer, sizeof(UCHAR) * ((Buffer->Size / 8) + 1) );
        // 공간의 값 0으로 초기화
        Buffer->Buffer[Buffer->Size / 8] = 0x00;
    }
    Mask >>= Buffer->Size % 8;
    
    if(Bit == 1)
        Buffer->Buffer[Buffer->Size / 8] |= Mask;
    else
        // mask값을 부정
        Buffer->Buffer[Buffer->Size / 8] &= ~Mask;
    // 1000 0000를 0111 1111로
    Buffer->Size++;
}

void Hufffman_BuildCodeTable(HuffmanNode* Tree, HuffmanCode CodeTable[MAX_CHAR], UCHAR Code[MAX_BIT], int Size){
    
    if(Tree == NULL)
        return;
    // 왼쪽으로 가기
    if(Tree->Left != NULL){
        Code[Size] = 0;
        // 다시 코드테이블 호출(재귀)
        Huffman_BuildCodeTable(Tree->Left, CodeTable, Code, Size + 1 );
    }
    if(Tree->Right != NULL){
        Code[Size] = 0;
        // 다시 코드테이블 호출(재귀)
        Huffman_BuildCodeTable(Tree->Right, CodeTable, Code, Size + 1 );
    }
    // 둘다 NULL이라면(문자가 있는 노드임을 알림?)
    if(Tree->Left == NULL && Tree->Right == NULL){
        int i;
        // 사이즈만큼 코드값을 부여
        for(i = 0; i < Size; i++)
            CodeTable[Tree->Data.Symbol].Code[i] = Code[i];
        // 사이즈값 입력
        CodeTable[Tree->Data.Symbol].Size = Size;
    }
}

void Huffman_BuildPrefixTree(HuffmanNode** Tree, SymbolInfo SymbolInfoTable[MAX_CHAR]){
    int i = 0;
    PQNode Result;
    // 큐 만들기
    PriorityQueue* PQ = PQ_Create(0);
    
    // 문자 갯수만큼 돌림
    for(i = 0; i < MAX_CHAR; i++){
        // 빈도수가 0이 아니라는 것 = 사용한 문자.
        if(SymbolInfoTable[i].Frequency > 0){
            // 사용한 문자로 노드를 만들어서 주소값을 받음
            HuffmanNode* BitNode = Huffman_CreateNode(SymbolInfoTable[i]);
            // 큐 노드를 만듬.
            PQNode NewNode;
            // 노드의 빈도수에 우선순위 삽입
            NewNode.Priority = SymbolInfoTable[i].Frequency;
            // 노드의 주소값 넣음
            NewNode.Data = BitNode;
            // 큐에 집어넣음
            PQ_Enqueue(PQ, NewNode);
        }
    }
    // 우선순위큐에 노드가 하나 이상 있으면
    while(PQ->UsedSize > 1){
        // 심볼도 0이고 빈도수도 0인 데이터 하나 만듬
        SymbolInfo NewData = {0, 0};
        // 뉴데이터로 허프만 노드 하나 만듬
        HuffmanNode* BitNode = Huffman_CreateNode(NewData);
        // 노드 저장하는 공간 만듬
        HuffmanNode* Left;
        HuffmanNode* Right;
        
        // 왼쪽오른쪽을 가지고 뉴노드를 만들어야하니가 공간 만듬
        PQNode QLeft;
        PQNode QRight;
        PQNode NewNode;
        
        // 뽑음
        PQ_Dequeue(PQ, &QLeft);
        PQ_Dequeue(PQ, &QRight);
        
        // 집어넣음
        Left = (HuffmanNode*)QLeft.Data;
        Right = (HuffmanNode*)QRight.Data;
        
        // 심볼 0으로 만듬
        BitNode->Data.Symbol = 0;
        // 빈도수를 합쳐서 새로운 허프만노드에 넣음
        BitNode->Data.Frequency = Left->Data.Frequency + Right->Data.Frequency;
        // 허프만노드의 왼쪽오른쪽에 뽑았던 노드들을 집어넣음
        BitNode->Left = Left;
        BitNode->Right = Right;
        
        // 다시 집어넣음
        NewNode.Priority = BitNode->Data.Frequency;
        NewNode.Data = BitNode;
        PQ_Enqueue(PQ, NewNode);
        
    }
    // 큐에서 끄집어내서
    PQ_Dequeue(PQ, &Result);
    // 트리에 집어넣음
    *Tree = (HuffmanNode*)Result.Data;
}

void Huffman_Encode(HuffmanNode** Tree, UCHAR* Source, BitBuffer* Encoded, HuffmanCode CodeTable[MAX_CHAR]){
    int i = 0, j = 0;
    // 빈도수를 저장하기 위해 만들어짐. 빈도수 초기화
    
    SymbolInfo SymbolInfoTable[MAX_CHAR];
    // 비트값. 문자에 부여되어있는 임시 버퍼
    UCHAR Temporary[MAX_BIT];
    
    // 빈도수테이블을 돌며 빈도수 초기화
    for(i = 0; i < MAX_CHAR; i++){
        SymbolInfoTable[i].Symbol = i;
        SymbolInfoTable[i].Frequency = 0;
    }
    // 빈도수 계산. 문자를 돌며 반복
    i = 0;
    while(Source[i] != '\0'){
        // 문자의 아스키코드값을 넣어줌.
        // ex) A : 65로 가서 프리퀀시를 증가시켜라.
        // 배열에 저장된 값은 결국 아스키코드값이 저장되어있으므로 ... 아스키의 인덱스값과 같음
        SymbolInfoTable[Source[i++]].Frequency++;
    }
    // 트리만들기. 루트트리, 만들어진 빈도수 테이블
    Huffman_BuildPrefixTree(Tree, SymbolInfoTable);
    // 문자 모양에 대한 누적도 코드 만들기.
    // 루트노드 주소값, 코드테이블, 임시저장할 배열(재귀예정), 비트사이즈
    Huffman_BuildCodeTable(*Tree, CodeTable, Temporary, 0);
    
    i = 0;
    while(Source[i] != '\0'){
        // 할당된 비트 갯수를 가져옴(size)
        int BitCount = CodeTable[Source[i]].Size;
        for(j = 0; j < BitCount; j++)
            Huffman_Huffman_AddBit(Encoded, CodeTable[Source[i]].Code[j]);
        i++;
    }
}

void Huffman_Decode(HuffmanNode* Tree, BitBuffer* Encoded, UCHAR* Decoded){
    int i;
    int Index = 0;
    HuffmanNode* Current = Tree;
    
    for(i = 0; i <= Encoded->Size; i++){
        UCHAR Mask = 0x80;
        if(Current->Left == NULL && Current->Right == NULL){
            Decoded[Index++] = Current->Data.Symbol;
            Current = Tree;
        }
        Mask >>= i % 8;
        
        if((Encoded->Buffer[i/8] & Mask) != Mask)
            Current = Current->Left;
        else
            Current = Current->Right;
    }
    Decoded[Index] = '\0';
}

void Huffman_PrintBinary(BitBuffer* Buffer){
    int i;
    for(i = 0; i < Buffer->Size; i++){
        UCHAR Mask = 0x80;
        Mask >>= i % 8;
        
        printf("%d", (Buffer->Buffer[i/8] & Mask) == Mask);
    }
}

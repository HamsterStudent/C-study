#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Score.h"

typedef Score ElementType;
typedef struct tagNode {
    ElementType Data;
    struct tagNode* NextNode;
    int Count;
} Node;

//«‘ºˆ ø¯«¸ º±æ
Node* SLL_CreateNode(ElementType NewData);

void SLL_DestoryNode(Node* Node);
void SLL_AppendNode(Node** Head, Node* NewNode);
void SLL_InsertAfter(Node* Current, Node* NewNode);
void SLL_InsertNewHead(Node** Head, Node* NewHead);
void SLL_RemoveNode(Node** Head, Node* Remove);
Node* SLL_GetNodeAt(Node* Head, int Location);
int SLL_GetNodeCount(Node* Head);

#endif

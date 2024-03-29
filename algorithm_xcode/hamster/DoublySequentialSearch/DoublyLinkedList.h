#ifndef DOUBLY_LINKEDLIST_H
#define DOUBLY_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include "Score.h"

typedef Score ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode* PrevNode;
    struct tagNode* NextNode;
    int Count;
} Node;

/* «‘ºˆ ø¯«¸ º±æ */
Node* DLL_CreateNode(ElementType NewData);
void  DLL_DestroyNode(Node* Node);
void  DLL_AppendNode(Node** Head, Node* NewNode);
void  DLL_InsertAfter(Node* Current, Node* NewNode);
void  DLL_RemoveNode(Node** Head, Node* Remove);
Node* DLL_GetNodeAt(Node* Head, int Location);
int   DLL_GetNodeCount(Node* Head);

#endif

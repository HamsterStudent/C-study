#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode {
	ElementType Data;
	struct tagNode* NextNode;
	struct tagNode* PrevNode;
}Node;

Node* CreateNode(ElementType NewData);
void DestroyNode(Node* Node);
void AppendNode(Node** Head, Node* NewNode);
void InsertAfter(Node** Current, Node* NewNode);
void RemoveNode(Node** Head, Node* Remove);
void GetNodeAt(Node* Head, int Location);
int GetNodeCount(Node* Head);


#endif // !LINKEDLIST_H

#include <stdio.h>
#include "LinkedList.h"

Node* CreateNode(ElementType NewData) {
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = NewData;
	NewNode->NextNode = NULL;
	NewNode->PrevNode = NULL;
}

void DestroyNode(Node* Node) {
	free(Node);
}

void AppendNode(Node** Head, Node* NewNode) {
	if ((*Head) = NULL) {
		*Head = NewNode;
	}
	else {
		Node* Tail = (*Head);
		while(Tail->NextNode != NULL) {
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
		NewNode->PrevNode = Tail;
	}
}

void InsertAfter(Node* Currnet, Node* NewNode) {
	Currnet->NextNode = NewNode;
	NewNode->PrevNode = Currnet;

	if (Currnet->NextNode != NULL) {
		Currnet->NextNode->PrevNode = NewNode;
		Currnet->NextNode = NewNode;
	}
	
}

void RemoveNode(Node** Head, Node* Remove) {
	if ((*Head) == Remove) {
		*Head = Remove->NextNode;
		if ((*Head) != NULL) {
			(*Head)->PrevNode = NULL;
		}
		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
	else {
		Node* Temp = Remove;

		if (Remove->PrevNode != NULL) {
			Remove->PrevNode->NextNode = Temp->NextNode;
		}
		if (Remove->NextNode != NULL) {
			Remove->NextNode->PrevNode = Temp->PrevNode;
		}

		Remove->PrevNode = NULL;
		Remove->NextNode = NULL;
	}
}

Node* GetNodeAt(Node* Head, int Location) {
	Node* Current = Head;
	while (Current != NULL && (--Location)) {
		Current = Current->NextNode;
	}
	return Current;
}

int GetNodeCount(Node* Head) {
	int count = 0;
	Node* Current = Head;
	while (Current != NULL) {
		Current = Current->NextNode;
		count++;
	}
	return count;
}

#include "LinkedList.h"

//≥ÎµÂ ª˝º∫
Node* SLL_CreateNode(ElementType NewData) {
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->Data = NewData; // µ•¿Ã≈Õ∏¶ ¿˙¿Â«—¥Ÿ
    NewNode->NextNode = NULL; // ¥Ÿ¿Ω ≥ÎµÂø° ¥Î«— ∆˜¿Œ≈Õ¥¬ NULL∑Œ √ ±‚»≠«—¥Ÿ
    NewNode->Count = 0;

    return NewNode;
}

// ≥ÎµÂ º“∏Í
void SLL_DestoryNode(Node* Node) {
    free(Node);
}

//≥ÎµÂ √ﬂ∞°
void SLL_AppendNode(Node** Head, Node* NewNode) {
    // «ÏµÂ ≥ÎµÂ∞° NULL¿Ã∂Û∏È ªı∑ŒøÓ ≥ÎµÂ∞° Head
    if ((*Head) == NULL) {
        *Head = NewNode;
    }
    else {
        //≤ø∏Æ∏¶ √£æ∆ NewNode∏¶ ø¨∞·«—¥Ÿ
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}

// ≥ÎµÂ ª¿‘
void SLL_InsertAfter(Node* Current, Node* NewNode) {
    NewNode->NextNode = Current->NextNode;
    Current->NextNode = NewNode;
}

void SLL_InsertNewHead(Node** Head, Node* NewHead) {
    if (*Head == NULL) {
        (*Head) = NewHead;
    }
    else {
        NewHead->NextNode = (*Head);
        (*Head) = NewHead;
    }
}

// ≥ÎµÂ ¡¶∞≈
void SLL_RemoveNode(Node** Head, Node* Remove) {
    if (*Head == Remove) {
        *Head = Remove->NextNode;
    }
    else {
        Node* Current = *Head;
        while (Current != NULL && Current->NextNode != Remove) {
            Current = Current->NextNode;
        }

        if (Current != NULL) {
            Current->NextNode = Remove->NextNode;
        }
    }
}

// ≥ÎµÂ ≈Ωªˆ
Node* SLL_GetNodeAt(Node* Head, int Location) {
    Node* Current = Head;
    while (Current != NULL && (--Location) >= 0) {
        Current = Current->NextNode;
    }
    return Current;
}

// ≥ÎµÂ ºˆ ºº±‚
int SLL_GetNodeCount(Node* Head) {
    int Count = 0;
    Node* Current = Head;
    while (Current != NULL) {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}

#include "DoublyLinkedList.h"

/*  ≥ÎµÂ ª˝º∫ */
Node* DLL_CreateNode(ElementType NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));

    NewNode->Data = NewData;
    NewNode->PrevNode = NULL;
    NewNode->NextNode = NULL;
    NewNode->Count = 0;

    return NewNode;
}

/*  ≥ÎµÂ º“∏Í */
void DLL_DestroyNode(Node* Node)
{
    free(Node);
}

/*  ≥ÎµÂ √ﬂ∞° */
void DLL_AppendNode(Node** Head, Node* NewNode)
{
    /*  «ÏµÂ ≥ÎµÂ∞° NULL¿Ã∂Û∏È ªı∑ŒøÓ ≥ÎµÂ∞° Head */
    if ((*Head) == NULL)
    {
        *Head = NewNode;
    }
    else
    {
        /*  ≈◊¿œ¿ª √£æ∆ NewNode∏¶ ø¨∞·«—¥Ÿ. */
        Node* Tail = (*Head);
        while (Tail->NextNode != NULL)
        {
            Tail = Tail->NextNode;
        }

        Tail->NextNode = NewNode;
        NewNode->PrevNode = Tail; /*  ±‚¡∏¿« ≈◊¿œ¿ª ªı∑ŒøÓ ≈◊¿œ¿« PrevNode∞° ∞°∏Æ≈≤¥Ÿ. */
    }
}

/*  ≥ÎµÂ ª¿‘ */
void DLL_InsertAfter(Node* Current, Node* NewNode)
{
    NewNode->NextNode = Current->NextNode;
    NewNode->PrevNode = Current;


    if (Current->NextNode != NULL)
    {
        Current->NextNode->PrevNode = NewNode;
    }

    Current->NextNode = NewNode;

}

/*  ≥ÎµÂ ¡¶∞≈ */
void DLL_RemoveNode(Node** Head, Node* Remove)
{
    if (*Head == Remove)
    {
        *Head = Remove->NextNode;
        if ((*Head) != NULL)
            (*Head)->PrevNode = NULL;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;

    }
    else
    {
        Node* Temp = Remove;

        if (Remove->PrevNode != NULL)    // «ÏµÂ≥ÎµÂ∞° æ∆¥œ∏È
            Remove->PrevNode->NextNode = Temp->NextNode;

        if (Remove->NextNode != NULL)    // ≤ø∏Æ≥ÎµÂ∞° æ∆¥œ∏È
            Remove->NextNode->PrevNode = Temp->PrevNode;

        Remove->PrevNode = NULL;
        Remove->NextNode = NULL;
    }
}

/*  ≥ÎµÂ ≈Ωªˆ */
Node* DLL_GetNodeAt(Node* Head, int Location)
{
    Node* Current = Head;

    while (Current != NULL && (--Location) >= 0)
    {
        Current = Current->NextNode;
    }

    return Current;
}

/*  ≥ÎµÂ ºˆ ºº±‚ */
int DLL_GetNodeCount(Node* Head)
{
    unsigned int  Count = 0;
    Node* Current = Head;

    while (Current != NULL)
    {
        Current = Current->NextNode;
        Count++;
    }

    return Count;
}

void PrintNode(Node* _Node)
{
    if (_Node->PrevNode == NULL)
        printf("Prev: NULL");
    else
        printf("Prev: %d", _Node->PrevNode->Data);

    printf(" Current: %d ", _Node->Data);

    if (_Node->NextNode == NULL)
        printf("Next: NULL\n");
    else
        printf("Next: %d\n", _Node->NextNode->Data);
}

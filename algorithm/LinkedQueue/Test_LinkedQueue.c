#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

int main(void) {
	Node* Popped;
	LinkedQueue* Queue;

	int i;

	LQ_CreateQueue(&Queue);

	for (i = 0; i < 5; i++) {
		int num = 0;
		printf("[%d��] �Է��ϼ��� : ", i + 1);
		scanf("%d", &num);

		LQ_Enqueue(Queue, LQ_CreateNode(num));
	}

	printf("\n�ܾ ���纸����\n\n");

	//while (LQ_IsEmpty (Queue) == 0) {
	//	scanf("%d", IsWord);

	//	Popped = LQ_Dequeue(Queue);
	//	printf("Dequeue: %s \n", Popped->Data);
	//	LQ_DestroyNode(Popped);
	//}
	//LQ_DestroyQueue(Queue);

	return 0;
}